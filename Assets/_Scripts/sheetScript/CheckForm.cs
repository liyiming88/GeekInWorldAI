using Inworld.Model;
using Inworld.Packets;
using Inworld.Util;
using System.Collections;
using UnityEngine;
using UnityEngine.UI;
namespace Inworld.Sample
{
    public class CheckForm : MonoBehaviour
    {

        [SerializeField] InworldCharacterData m_CharData;
        public InworldCharacter m_CurrentCharacter;
        private Toggle toggle;
        private Animator animator;
        // Start is called before the first frame update
        void Start()
        {
            toggle = gameObject.GetComponent<Toggle>();
        }

        // Update is called once per frame
        void Update()
        {

        }

        public void Check() {
            if (toggle.isOn)
            {
                m_CurrentCharacter.SendTrigger(m_CurrentCharacter.Data.triggers[1]);
                gameObject.transform.root.gameObject.SetActive(false);
            }
            else {
                m_CurrentCharacter.SendTrigger(m_CurrentCharacter.Data.triggers[0]);
                gameObject.transform.root.gameObject.GetComponent<Animator>().SetTrigger("shake");
            }
        }
        public void HoverForm() {
            m_CurrentCharacter.SendTrigger(m_CurrentCharacter.Data.triggers[2]);
        }
    }
}


