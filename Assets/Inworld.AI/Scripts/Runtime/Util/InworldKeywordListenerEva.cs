/*************************************************************************************************
* Copyright 2022 Theai, Inc. (DBA Inworld)
*
* Use of this source code is governed by the Inworld.ai Software Development Kit License Agreement
* that can be found in the LICENSE.md file or at https://www.inworld.ai/sdk-license
*************************************************************************************************/

using System.Collections.Generic;
using System.Linq.Expressions;
using Inworld;
using Inworld.Packets;
using UnityEngine;
using UnityEngine.Events;

public class InworldKeywordListenerEva : SingletonBehavior<InworldKeywordListenerEva>
{
    [SerializeField] private InworldCharacter Character;
    public List<string> keywords_weather;
    public List<string> keywords_map;
    public List<string> keywords_coffee;
    public List<string> keywords_coffee_map;
    public List<string> keywords_place;
    public List<string> keywords_restaurant;
    public GameObject obj_weather;
    public GameObject obj_map;
    public GameObject obj_coffee;
    public GameObject obj_coffee_map;
    public GameObject obj_place;
    public GameObject obj_restaurant;
    public string trigger;
    public string triggerResponse;
    public UnityEvent OnTriggerSent;
    public UnityEvent OnTriggerReceived;
    bool hit_weather = false;
    bool hit_map = false;
    bool hit_coffee = false;
    bool hit_coffee_map = false;
    bool hit_place = false;
    bool hit_restaurant = false;

    // Start is called before the first frame update
    private void Start()
    {
        InworldController.Instance.OnPacketReceived += OnPacketEvents;
    }

    private void OnPacketEvents(InworldPacket packet)
    {
        if (!InworldController.Instance.CurrentCharacter)
            return;
        var charID = InworldController.Instance.CurrentCharacter.ID;
        if (packet.Routing.Target.Id != charID && packet.Routing.Source.Id != charID)
            return;
        switch (packet)
        {
            case CustomEvent customEvent:
                _HandleCustomEvent(customEvent);
                break;
            case TextEvent textEvent:
                if (textEvent.SourceType == Inworld.Grpc.TextEvent.Types.SourceType.SpeechToText)
                    _HandleTextEvent(textEvent);
                break;
        }
    }

    private void _HandleTextEvent(TextEvent textEvent)
    {
        if (string.IsNullOrEmpty(textEvent.Text))
            return;

        /*foreach (var keyword in keywords)
            if (textEvent.Text.ToLower().Contains(keyword.ToLower()))
            {
                Debug.Log("Sending trigger for keyword " + textEvent.Text);
                SendTrigger(trigger);
                OnTriggerSent.Invoke();
                break;
            }*/

        //weather
        foreach (var keyword in keywords_weather)
            if (textEvent.Text.ToLower().Contains(keyword.ToLower()))
            {
                Debug.Log("Sending trigger for keyword " + textEvent.Text);
                hit_weather = true;
                break;
            }
        //coffee
        foreach (var keyword in keywords_coffee)
            if (textEvent.Text.ToLower().Contains(keyword.ToLower()))
            {
                Debug.Log("Sending trigger for keyword " + textEvent.Text);
                hit_coffee = true;
                break;
            }
        //coffee map
        foreach (var keyword in keywords_coffee_map)
            if (textEvent.Text.ToLower().Contains(keyword.ToLower()))
            {
                Debug.Log("Sending trigger for keyword " + textEvent.Text);
                hit_coffee_map = true;
                break;
            }
        /*//map
        foreach (var keyword in keywords_map)
            if (textEvent.Text.ToLower().Contains(keyword.ToLower()))
            {
                Debug.Log("Sending trigger for keyword " + textEvent.Text);
                hit_map = true;
                break;
            }
        //place
        foreach (var keyword in keywords_place)
            if (textEvent.Text.ToLower().Contains(keyword.ToLower()))
            {
                Debug.Log("Sending trigger for keyword " + textEvent.Text);
                hit_place = true;
                break;
            }
        //restaurant
        foreach (var keyword in keywords_restaurant)
            if (textEvent.Text.ToLower().Contains(keyword.ToLower()))
            {
                Debug.Log("Sending trigger for keyword " + textEvent.Text);
                hit_restaurant = true;
                break;
            }*/

    }

    private void _HandleCustomEvent(CustomEvent customEvent)
    {
        if (customEvent.Name == triggerResponse)
            OnTriggerReceived.Invoke();
    }

    /// <summary>
    ///     Send target character's trigger via InworldPacket.
    /// </summary>
    /// <param name="triggerName">
    ///     The trigger to send. Both formats are acceptable.
    ///     You could send either whole string from CharacterData.trigger, or the trigger's shortName.
    /// </param>
    public void SendTrigger(string triggerName)
    {
        var triggerArray = triggerName.Split("triggers/");
        SendEventToAgent(triggerArray.Length == 2 ? new CustomEvent(triggerArray[1]) : new CustomEvent(triggerName));
    }

    /// <summary>
    ///     Set general events to this Character.
    /// </summary>
    /// <param name="packet">The InworldPacket to send.</param>
    public void SendEventToAgent(InworldPacket packet)
    {
        //need to confirm what id to use for scene triggers
        var ID = Character != null ? Character.ID : InworldController.CurrentScene.name;
        packet.Routing = Routing.FromPlayerToAgent(ID);
        InworldController.Instance.SendEvent(packet);
    }

    void OnEnable()
    {
        if (!Character)
            return;
        Character.OnBeginSpeaking.AddListener(InfoShow);
    }

    public void InfoShow(PacketId ID)
    {
        if (hit_weather) {
            obj_weather.SetActive(true);
            hit_weather = false;
        }

        if (hit_coffee)
        {
            obj_coffee.SetActive(true);
            hit_coffee = false;
        }

        if (hit_coffee_map && obj_coffee.activeSelf)
        {
            obj_coffee_map.SetActive(true);
            obj_coffee.SetActive(false);
            hit_weather = false;
            hit_coffee_map = false;
        }
    }

    public void InfoHide()
    {
            obj_weather.SetActive(false);
            obj_coffee_map.SetActive(false);
    }
}