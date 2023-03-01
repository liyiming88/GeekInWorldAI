#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"


extern const RuntimeMethod* NativeCallbackDispatcher_HandleDispatcherCallback_mF4899474F5F4DB052FE06AF3F349726F6C08102E_RuntimeMethod_var;
extern const RuntimeMethod* NativeLogRedirector_HandleWrite_m95766B386578549BD1126A99659E02C302D40267_RuntimeMethod_var;



// 0x00000001 System.Void Grpc.Core.CallInvocationDetails`2::.ctor(Grpc.Core.Channel,Grpc.Core.Method`2<TRequest,TResponse>,Grpc.Core.CallOptions)
// 0x00000002 System.Void Grpc.Core.CallInvocationDetails`2::.ctor(Grpc.Core.Channel,Grpc.Core.Method`2<TRequest,TResponse>,System.String,Grpc.Core.CallOptions)
// 0x00000003 System.Void Grpc.Core.CallInvocationDetails`2::.ctor(Grpc.Core.Channel,System.String,System.String,Grpc.Core.Marshaller`1<TRequest>,Grpc.Core.Marshaller`1<TResponse>,Grpc.Core.CallOptions)
// 0x00000004 Grpc.Core.Channel Grpc.Core.CallInvocationDetails`2::get_Channel()
// 0x00000005 System.String Grpc.Core.CallInvocationDetails`2::get_Method()
// 0x00000006 System.String Grpc.Core.CallInvocationDetails`2::get_Host()
// 0x00000007 Grpc.Core.Marshaller`1<TRequest> Grpc.Core.CallInvocationDetails`2::get_RequestMarshaller()
// 0x00000008 Grpc.Core.Marshaller`1<TResponse> Grpc.Core.CallInvocationDetails`2::get_ResponseMarshaller()
// 0x00000009 Grpc.Core.CallOptions Grpc.Core.CallInvocationDetails`2::get_Options()
// 0x0000000A Grpc.Core.CallInvocationDetails`2<TRequest,TResponse> Grpc.Core.CallInvocationDetails`2::WithOptions(Grpc.Core.CallOptions)
// 0x0000000B TResponse Grpc.Core.Calls::BlockingUnaryCall(Grpc.Core.CallInvocationDetails`2<TRequest,TResponse>,TRequest)
// 0x0000000C Grpc.Core.AsyncUnaryCall`1<TResponse> Grpc.Core.Calls::AsyncUnaryCall(Grpc.Core.CallInvocationDetails`2<TRequest,TResponse>,TRequest)
// 0x0000000D Grpc.Core.AsyncServerStreamingCall`1<TResponse> Grpc.Core.Calls::AsyncServerStreamingCall(Grpc.Core.CallInvocationDetails`2<TRequest,TResponse>,TRequest)
// 0x0000000E Grpc.Core.AsyncClientStreamingCall`2<TRequest,TResponse> Grpc.Core.Calls::AsyncClientStreamingCall(Grpc.Core.CallInvocationDetails`2<TRequest,TResponse>)
// 0x0000000F Grpc.Core.AsyncDuplexStreamingCall`2<TRequest,TResponse> Grpc.Core.Calls::AsyncDuplexStreamingCall(Grpc.Core.CallInvocationDetails`2<TRequest,TResponse>)
// 0x00000010 System.Void Grpc.Core.Calls/Callbacks`2::.cctor()
// 0x00000011 System.Void Grpc.Core.Calls/Callbacks`2/<>c::.cctor()
// 0x00000012 System.Void Grpc.Core.Calls/Callbacks`2/<>c::.ctor()
// 0x00000013 System.Threading.Tasks.Task`1<Grpc.Core.Metadata> Grpc.Core.Calls/Callbacks`2/<>c::<.cctor>b__4_0(System.Object)
// 0x00000014 Grpc.Core.Status Grpc.Core.Calls/Callbacks`2/<>c::<.cctor>b__4_1(System.Object)
// 0x00000015 Grpc.Core.Metadata Grpc.Core.Calls/Callbacks`2/<>c::<.cctor>b__4_2(System.Object)
// 0x00000016 System.Void Grpc.Core.Calls/Callbacks`2/<>c::<.cctor>b__4_3(System.Object)
// 0x00000017 System.Void Grpc.Core.Channel::.ctor(System.String,Grpc.Core.ChannelCredentials)
extern void Channel__ctor_m1BF943A726A2FEDA5BF5CF95B7D166C28094B788 (void);
// 0x00000018 System.Void Grpc.Core.Channel::.ctor(System.String,Grpc.Core.ChannelCredentials,System.Collections.Generic.IEnumerable`1<Grpc.Core.ChannelOption>)
extern void Channel__ctor_mA4DF9EA81F32B85C971F3164C4102482CBD8CE5C (void);
// 0x00000019 System.Void Grpc.Core.Channel::.ctor(System.String,System.Int32,Grpc.Core.ChannelCredentials)
extern void Channel__ctor_m7547604CB8D4E65801229B9674ADE2DFCAD5D3E3 (void);
// 0x0000001A System.Void Grpc.Core.Channel::.ctor(System.String,System.Int32,Grpc.Core.ChannelCredentials,System.Collections.Generic.IEnumerable`1<Grpc.Core.ChannelOption>)
extern void Channel__ctor_mA01397368CA65EDEF058E5EB55FA1B0889672DD4 (void);
// 0x0000001B Grpc.Core.ChannelState Grpc.Core.Channel::get_State()
extern void Channel_get_State_m21E0624BAD35A3B4DF6328995FD3A78338841CC8 (void);
// 0x0000001C System.Threading.Tasks.Task Grpc.Core.Channel::WaitForStateChangedAsync(Grpc.Core.ChannelState,System.Nullable`1<System.DateTime>)
extern void Channel_WaitForStateChangedAsync_m9533042914CA1D2F9D1559ED50A01153CD638E80 (void);
// 0x0000001D System.Threading.Tasks.Task`1<System.Boolean> Grpc.Core.Channel::TryWaitForStateChangedAsync(Grpc.Core.ChannelState,System.Nullable`1<System.DateTime>)
extern void Channel_TryWaitForStateChangedAsync_m29143A862075991F10CA8BA1D7070B063FE17048 (void);
// 0x0000001E System.String Grpc.Core.Channel::get_ResolvedTarget()
extern void Channel_get_ResolvedTarget_m9C9751E424BA210776A43B93E69EC30A46DF2B7E (void);
// 0x0000001F System.Threading.CancellationToken Grpc.Core.Channel::get_ShutdownToken()
extern void Channel_get_ShutdownToken_mB7ED5461D55A6D4F2119D3C8B67A0A1C562D5B39 (void);
// 0x00000020 System.Threading.Tasks.Task Grpc.Core.Channel::ConnectAsync(System.Nullable`1<System.DateTime>)
extern void Channel_ConnectAsync_m4704D969A28D132C9A3001F10FA785C6715EA455 (void);
// 0x00000021 System.Threading.Tasks.Task Grpc.Core.Channel::ShutdownAsyncCore()
extern void Channel_ShutdownAsyncCore_m525B25D4218BF51D232C678F1E5CCE3D58514760 (void);
// 0x00000022 Grpc.Core.CallInvoker Grpc.Core.Channel::CreateCallInvoker()
extern void Channel_CreateCallInvoker_mB181911AD8D24169C544083305D6B0BE6DAC58E4 (void);
// 0x00000023 Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Channel::get_Handle()
extern void Channel_get_Handle_m8A470610FDFE233900ED09BB438B5F60812DFB07 (void);
// 0x00000024 Grpc.Core.GrpcEnvironment Grpc.Core.Channel::get_Environment()
extern void Channel_get_Environment_m2F2E9B7A9D2B7016A4F56E75AE09CBB5D3282C32 (void);
// 0x00000025 Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.Channel::get_CompletionQueue()
extern void Channel_get_CompletionQueue_m58F58ABF7C70800E7F8CB60AC1CB7B190F8FD4E7 (void);
// 0x00000026 System.Void Grpc.Core.Channel::AddCallReference(System.Object)
extern void Channel_AddCallReference_mFB37914E2D8494F879D44A08E45EE5821C865439 (void);
// 0x00000027 System.Void Grpc.Core.Channel::RemoveCallReference(System.Object)
extern void Channel_RemoveCallReference_m63EC58A55BECE9ECE04D955D7961F12254EE5C9F (void);
// 0x00000028 System.Int64 Grpc.Core.Channel::GetCallReferenceCount()
extern void Channel_GetCallReferenceCount_m15FAEF446604C008B7156DDE1F54ADD6CC60D863 (void);
// 0x00000029 Grpc.Core.ChannelState Grpc.Core.Channel::GetConnectivityState(System.Boolean)
extern void Channel_GetConnectivityState_m7F42539D7FF1173E11C4F30E0BAE1857080A6FEA (void);
// 0x0000002A System.Void Grpc.Core.Channel::EnsureUserAgentChannelOption(System.Collections.Generic.Dictionary`2<System.String,Grpc.Core.ChannelOption>)
extern void Channel_EnsureUserAgentChannelOption_m0D4577746E6AF0D9A8C8FAC3488396B75DC42847 (void);
// 0x0000002B System.Collections.Generic.Dictionary`2<System.String,Grpc.Core.ChannelOption> Grpc.Core.Channel::CreateOptionsDictionary(System.Collections.Generic.IEnumerable`1<Grpc.Core.ChannelOption>)
extern void Channel_CreateOptionsDictionary_mF47C9C7115CE06D827AA02F43A1EEE36464C351E (void);
// 0x0000002C System.Void Grpc.Core.Channel::.cctor()
extern void Channel__cctor_m7D8427A51A60B7B3DA02CBAE148C36C8FECF7BF3 (void);
// 0x0000002D System.Void Grpc.Core.Channel/<WaitForStateChangedAsync>d__16::MoveNext()
extern void U3CWaitForStateChangedAsyncU3Ed__16_MoveNext_mF00F397FFA104DB181B755041BC37DAFA2358330 (void);
// 0x0000002E System.Void Grpc.Core.Channel/<WaitForStateChangedAsync>d__16::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CWaitForStateChangedAsyncU3Ed__16_SetStateMachine_m9110AFDE96D1F0DCF0E6ADDB0005969C223B38D0 (void);
// 0x0000002F System.Void Grpc.Core.Channel/<ConnectAsync>d__22::MoveNext()
extern void U3CConnectAsyncU3Ed__22_MoveNext_mDD715A24E28F3AA27AECA6D91B2B0F86AB0DD138 (void);
// 0x00000030 System.Void Grpc.Core.Channel/<ConnectAsync>d__22::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CConnectAsyncU3Ed__22_SetStateMachine_mC4BF8110336827B874EFF405D4017E981B1106A0 (void);
// 0x00000031 System.Void Grpc.Core.Channel/<ShutdownAsyncCore>d__23::MoveNext()
extern void U3CShutdownAsyncCoreU3Ed__23_MoveNext_m25FA2E734465BCB440892B6D4B04F84D44CDE339 (void);
// 0x00000032 System.Void Grpc.Core.Channel/<ShutdownAsyncCore>d__23::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CShutdownAsyncCoreU3Ed__23_SetStateMachine_m1F163AFDFA378EB1AF311DC50F723CF3A84C47DD (void);
// 0x00000033 System.Void Grpc.Core.Channel/<>c::.cctor()
extern void U3CU3Ec__cctor_mA541D53BC256A5AC65A5020735FDAED72ACD65CC (void);
// 0x00000034 System.Void Grpc.Core.Channel/<>c::.ctor()
extern void U3CU3Ec__ctor_m1BC4C37328C0B16260D30AB54A6005E40205D105 (void);
// 0x00000035 System.Void Grpc.Core.Channel/<>c::<.cctor>b__37_0(System.Boolean,Grpc.Core.Internal.BatchContextSafeHandle,System.Object)
extern void U3CU3Ec_U3C_cctorU3Eb__37_0_m3ED468CAE5C8A75D1433FC755EE0B9E7E6E9D202 (void);
// 0x00000036 System.Void Grpc.Core.ChannelOption::.ctor(System.String,System.String)
extern void ChannelOption__ctor_mA713E63D84FAE6BA39472FF2920F1647BF1552A5 (void);
// 0x00000037 System.Void Grpc.Core.ChannelOption::.ctor(System.String,System.Int32)
extern void ChannelOption__ctor_m2D7D0AB168E32C292E490DB34DB9E9297DA3179C (void);
// 0x00000038 Grpc.Core.ChannelOption/OptionType Grpc.Core.ChannelOption::get_Type()
extern void ChannelOption_get_Type_m5C74BBF10741B4CF4D341FEA0651D4F4B9E18E53 (void);
// 0x00000039 System.String Grpc.Core.ChannelOption::get_Name()
extern void ChannelOption_get_Name_m80C124A673FE0E1B34EA3EB594EAE51908EA0AA4 (void);
// 0x0000003A System.Int32 Grpc.Core.ChannelOption::get_IntValue()
extern void ChannelOption_get_IntValue_m8FBCD03D0163CB3031DF4C87806067EB2B86EE2F (void);
// 0x0000003B System.String Grpc.Core.ChannelOption::get_StringValue()
extern void ChannelOption_get_StringValue_mCD57957A9C4DB03A4088FFD5787EBF8096E556E7 (void);
// 0x0000003C System.Boolean Grpc.Core.ChannelOption::Equals(System.Object)
extern void ChannelOption_Equals_m0F87F953555AD8CCF7A1DBD3D0A0BA8470EF0529 (void);
// 0x0000003D System.Boolean Grpc.Core.ChannelOption::Equals(Grpc.Core.ChannelOption)
extern void ChannelOption_Equals_mA7F9424B40DBB8AB5C69856CD7AF40A280B522A3 (void);
// 0x0000003E System.Int32 Grpc.Core.ChannelOption::GetHashCode()
extern void ChannelOption_GetHashCode_m200A7604CB94460E4F16C36265B1FCA73334B7C8 (void);
// 0x0000003F System.Boolean Grpc.Core.ChannelOption::op_Equality(Grpc.Core.ChannelOption,Grpc.Core.ChannelOption)
extern void ChannelOption_op_Equality_m47568726F68D535B9313A0D31C3169FB391C7F2E (void);
// 0x00000040 System.Boolean Grpc.Core.ChannelOption::op_Inequality(Grpc.Core.ChannelOption,Grpc.Core.ChannelOption)
extern void ChannelOption_op_Inequality_m80061062875E86DE0A0252DB1C5A214E77AA4810 (void);
// 0x00000041 Grpc.Core.Internal.ChannelArgsSafeHandle Grpc.Core.ChannelOptions::CreateChannelArgs(System.Collections.Generic.ICollection`1<Grpc.Core.ChannelOption>)
extern void ChannelOptions_CreateChannelArgs_mC40C6C2EA591E8E67671BD28F12ADE1330614BEF (void);
// 0x00000042 System.Void Grpc.Core.DefaultCallInvoker::.ctor(Grpc.Core.Channel)
extern void DefaultCallInvoker__ctor_mDA34DAEBC400CBA5C3B2ED5C6D7F56AA0611ED5D (void);
// 0x00000043 TResponse Grpc.Core.DefaultCallInvoker::BlockingUnaryCall(Grpc.Core.Method`2<TRequest,TResponse>,System.String,Grpc.Core.CallOptions,TRequest)
// 0x00000044 Grpc.Core.AsyncUnaryCall`1<TResponse> Grpc.Core.DefaultCallInvoker::AsyncUnaryCall(Grpc.Core.Method`2<TRequest,TResponse>,System.String,Grpc.Core.CallOptions,TRequest)
// 0x00000045 Grpc.Core.AsyncServerStreamingCall`1<TResponse> Grpc.Core.DefaultCallInvoker::AsyncServerStreamingCall(Grpc.Core.Method`2<TRequest,TResponse>,System.String,Grpc.Core.CallOptions,TRequest)
// 0x00000046 Grpc.Core.AsyncClientStreamingCall`2<TRequest,TResponse> Grpc.Core.DefaultCallInvoker::AsyncClientStreamingCall(Grpc.Core.Method`2<TRequest,TResponse>,System.String,Grpc.Core.CallOptions)
// 0x00000047 Grpc.Core.AsyncDuplexStreamingCall`2<TRequest,TResponse> Grpc.Core.DefaultCallInvoker::AsyncDuplexStreamingCall(Grpc.Core.Method`2<TRequest,TResponse>,System.String,Grpc.Core.CallOptions)
// 0x00000048 Grpc.Core.CallInvocationDetails`2<TRequest,TResponse> Grpc.Core.DefaultCallInvoker::CreateCall(Grpc.Core.Method`2<TRequest,TResponse>,System.String,Grpc.Core.CallOptions)
// 0x00000049 Grpc.Core.GrpcEnvironment Grpc.Core.GrpcEnvironment::AddRef()
extern void GrpcEnvironment_AddRef_m920F342D11E85BDE500FC180F1719BD61306D4B5 (void);
// 0x0000004A System.Threading.Tasks.Task Grpc.Core.GrpcEnvironment::ReleaseAsync()
extern void GrpcEnvironment_ReleaseAsync_m49A20DDA25E2DD19BBF0BA25D05BE7975B46F69E (void);
// 0x0000004B System.Int32 Grpc.Core.GrpcEnvironment::GetRefCount()
extern void GrpcEnvironment_GetRefCount_m4C6C4C4407177F9C75DFE55C6A5D2553E72A4E4F (void);
// 0x0000004C System.Void Grpc.Core.GrpcEnvironment::RegisterChannel(Grpc.Core.Channel)
extern void GrpcEnvironment_RegisterChannel_mA9C064F4A8F12C731377BD4A962BFCDEC1FE7FF3 (void);
// 0x0000004D System.Void Grpc.Core.GrpcEnvironment::UnregisterChannel(Grpc.Core.Channel)
extern void GrpcEnvironment_UnregisterChannel_m9BF5FBCAF1AFDE96C7A7BF22063ADB0298494DD7 (void);
// 0x0000004E System.Void Grpc.Core.GrpcEnvironment::RegisterServer(Grpc.Core.Server)
extern void GrpcEnvironment_RegisterServer_m69E100DF5B937C493B68CDF5172156DAAC6567D6 (void);
// 0x0000004F System.Void Grpc.Core.GrpcEnvironment::UnregisterServer(Grpc.Core.Server)
extern void GrpcEnvironment_UnregisterServer_mAB58E1AB2C45F6A1CA1D2C006832F7951B0E9A7F (void);
// 0x00000050 System.Threading.Tasks.Task Grpc.Core.GrpcEnvironment::ShutdownChannelsAsync()
extern void GrpcEnvironment_ShutdownChannelsAsync_mF4980CBF34B8546E4D1AC49374096AA2DAA92017 (void);
// 0x00000051 System.Threading.Tasks.Task Grpc.Core.GrpcEnvironment::KillServersAsync()
extern void GrpcEnvironment_KillServersAsync_m34A091E727C308EFA5CB339EB076D0EAE7226091 (void);
// 0x00000052 Grpc.Core.Logging.ILogger Grpc.Core.GrpcEnvironment::get_Logger()
extern void GrpcEnvironment_get_Logger_m96D525AB9214000FFC1EB8FE1356F781DFC07C30 (void);
// 0x00000053 System.Void Grpc.Core.GrpcEnvironment::SetLogger(Grpc.Core.Logging.ILogger)
extern void GrpcEnvironment_SetLogger_m40DA13C8DF1A3B836C5296164E931DFD43627EB3 (void);
// 0x00000054 System.Void Grpc.Core.GrpcEnvironment::SetThreadPoolSize(System.Int32)
extern void GrpcEnvironment_SetThreadPoolSize_m243DF6365E57B0244D359688773C04B42B6532D3 (void);
// 0x00000055 System.Void Grpc.Core.GrpcEnvironment::SetCompletionQueueCount(System.Int32)
extern void GrpcEnvironment_SetCompletionQueueCount_mB247400BC2977867E31DC4E445631E6E035CB1BB (void);
// 0x00000056 System.Void Grpc.Core.GrpcEnvironment::SetHandlerInlining(System.Boolean)
extern void GrpcEnvironment_SetHandlerInlining_m232906D9F2FC637045354F8BE3B8DB7183690A19 (void);
// 0x00000057 System.Void Grpc.Core.GrpcEnvironment::SetBatchContextPoolParams(System.Int32,System.Int32)
extern void GrpcEnvironment_SetBatchContextPoolParams_m43CE67C87287ECFA7054C6E5F317F919B3287734 (void);
// 0x00000058 System.Void Grpc.Core.GrpcEnvironment::SetRequestCallContextPoolParams(System.Int32,System.Int32)
extern void GrpcEnvironment_SetRequestCallContextPoolParams_m950CEE462C947C10F04457F31792C7DEF820804B (void);
// 0x00000059 System.Void Grpc.Core.GrpcEnvironment::add_ShuttingDown(System.EventHandler)
extern void GrpcEnvironment_add_ShuttingDown_m9F4B4153FC3B5AC4343737ED14233EF446A06247 (void);
// 0x0000005A System.Void Grpc.Core.GrpcEnvironment::remove_ShuttingDown(System.EventHandler)
extern void GrpcEnvironment_remove_ShuttingDown_mC1A6D7AAC89DC92580D17C2707BC5CF7CDD067BD (void);
// 0x0000005B System.Void Grpc.Core.GrpcEnvironment::.ctor()
extern void GrpcEnvironment__ctor_m432165B0717F325BFAEE15EEF9924B0A5FF555BE (void);
// 0x0000005C System.Collections.Generic.IReadOnlyCollection`1<Grpc.Core.Internal.CompletionQueueSafeHandle> Grpc.Core.GrpcEnvironment::get_CompletionQueues()
extern void GrpcEnvironment_get_CompletionQueues_m838FA34856A62EEF37279028CB71DB5D262506BB (void);
// 0x0000005D Grpc.Core.Internal.IObjectPool`1<Grpc.Core.Internal.BatchContextSafeHandle> Grpc.Core.GrpcEnvironment::get_BatchContextPool()
extern void GrpcEnvironment_get_BatchContextPool_m4CF5F355402222CA2F97D82B42B0BF7EAC793330 (void);
// 0x0000005E Grpc.Core.Internal.IObjectPool`1<Grpc.Core.Internal.RequestCallContextSafeHandle> Grpc.Core.GrpcEnvironment::get_RequestCallContextPool()
extern void GrpcEnvironment_get_RequestCallContextPool_m751D9F65446EC11801E4A4C202A061059F3417BB (void);
// 0x0000005F System.Boolean Grpc.Core.GrpcEnvironment::get_IsAlive()
extern void GrpcEnvironment_get_IsAlive_m7EE8365CFC2356F9908443A2FA3E3243D08C460E (void);
// 0x00000060 Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.GrpcEnvironment::PickCompletionQueue()
extern void GrpcEnvironment_PickCompletionQueue_m37FDF90FEFF4AFF87C668C94142CB733945947D2 (void);
// 0x00000061 Grpc.Core.Internal.DebugStats Grpc.Core.GrpcEnvironment::get_DebugStats()
extern void GrpcEnvironment_get_DebugStats_m412C3FC775F5D5FC10EDF8326794FFF011FEA6ED (void);
// 0x00000062 System.String Grpc.Core.GrpcEnvironment::GetCoreVersionString()
extern void GrpcEnvironment_GetCoreVersionString_mFAA398C9D899010F6C40495FED8D1E834CD81A91 (void);
// 0x00000063 System.Void Grpc.Core.GrpcEnvironment::GrpcNativeInit()
extern void GrpcEnvironment_GrpcNativeInit_m504C7D11D450437CF12C1F78C8066EAE663812EB (void);
// 0x00000064 System.Void Grpc.Core.GrpcEnvironment::GrpcNativeShutdown()
extern void GrpcEnvironment_GrpcNativeShutdown_m0E5881A5D9CC4891CF9BE4E3B519FFE4C3C54D29 (void);
// 0x00000065 System.Threading.Tasks.Task Grpc.Core.GrpcEnvironment::ShutdownAsync()
extern void GrpcEnvironment_ShutdownAsync_m0C88E503590D0572F48E8D07FC7D98E7C2A9BFAF (void);
// 0x00000066 System.Int32 Grpc.Core.GrpcEnvironment::GetThreadPoolSizeOrDefault()
extern void GrpcEnvironment_GetThreadPoolSizeOrDefault_m2025B75AC6EF6E06094825F2AF05249F0F65DE62 (void);
// 0x00000067 System.Int32 Grpc.Core.GrpcEnvironment::GetCompletionQueueCountOrDefault()
extern void GrpcEnvironment_GetCompletionQueueCountOrDefault_mE17E23011F6767136888385B59C410C14C57E238 (void);
// 0x00000068 System.Boolean Grpc.Core.GrpcEnvironment::get_IsNativeShutdownAllowed()
extern void GrpcEnvironment_get_IsNativeShutdownAllowed_m5331A7902F9708F574D9BB59BF3E224BAE5D328A (void);
// 0x00000069 System.Void Grpc.Core.GrpcEnvironment::.cctor()
extern void GrpcEnvironment__cctor_m60BFAF917745F70BE9A592A96D502B233BB71486 (void);
// 0x0000006A System.Void Grpc.Core.GrpcEnvironment::<ShutdownAsync>b__60_0()
extern void GrpcEnvironment_U3CShutdownAsyncU3Eb__60_0_m8E0C6D01D7C8A8F89247E8A3CDBF42E1151D4B5F (void);
// 0x0000006B System.Void Grpc.Core.GrpcEnvironment/ShutdownHooks::Register()
extern void ShutdownHooks_Register_m127B4B760FA27DA6FE0C282B64F784F412B7E8B7 (void);
// 0x0000006C System.Void Grpc.Core.GrpcEnvironment/ShutdownHooks::HandleShutdown()
extern void ShutdownHooks_HandleShutdown_m7DF0DE7B887A89BDF9CCED5193F9FCC741F8B2F4 (void);
// 0x0000006D System.Void Grpc.Core.GrpcEnvironment/ShutdownHooks::.cctor()
extern void ShutdownHooks__cctor_m4D17B62389A8705D7DAEC4BE05CA7B5C4B30B9C5 (void);
// 0x0000006E System.Void Grpc.Core.GrpcEnvironment/ShutdownHooks/<>c::.cctor()
extern void U3CU3Ec__cctor_mE7072C515A6F2D6C39D00657FBE75B993D40D710 (void);
// 0x0000006F System.Void Grpc.Core.GrpcEnvironment/ShutdownHooks/<>c::.ctor()
extern void U3CU3Ec__ctor_m6BDE1A7B20C80DF8485CA3A42326628502AD0522 (void);
// 0x00000070 System.Void Grpc.Core.GrpcEnvironment/ShutdownHooks/<>c::<Register>b__2_0(System.Object,System.EventArgs)
extern void U3CU3Ec_U3CRegisterU3Eb__2_0_mEADEB2004360CE9467C488222AC859A58CCE5279 (void);
// 0x00000071 System.Void Grpc.Core.GrpcEnvironment/ShutdownHooks/<>c::<Register>b__2_1(System.Object,System.EventArgs)
extern void U3CU3Ec_U3CRegisterU3Eb__2_1_mF4048A5350B216D63941C730DED26F267D414945 (void);
// 0x00000072 System.Void Grpc.Core.GrpcEnvironment/<ReleaseAsync>d__26::MoveNext()
extern void U3CReleaseAsyncU3Ed__26_MoveNext_mB114E8F17DC7C8F74FFE4D55BA40C92DBFB2559E (void);
// 0x00000073 System.Void Grpc.Core.GrpcEnvironment/<ReleaseAsync>d__26::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CReleaseAsyncU3Ed__26_SetStateMachine_mB59786286F81367206DEE3E3C06E63C4F3A282D1 (void);
// 0x00000074 System.Void Grpc.Core.GrpcEnvironment/<>c::.cctor()
extern void U3CU3Ec__cctor_mC22F0445B0DEF4D4C0BDE1094507E63844551EDC (void);
// 0x00000075 System.Void Grpc.Core.GrpcEnvironment/<>c::.ctor()
extern void U3CU3Ec__ctor_mDAB14D206B29C49BEA3438FB8C807D1C7BEB87AA (void);
// 0x00000076 System.Threading.Tasks.Task Grpc.Core.GrpcEnvironment/<>c::<ShutdownChannelsAsync>b__32_0(Grpc.Core.Channel)
extern void U3CU3Ec_U3CShutdownChannelsAsyncU3Eb__32_0_m58B3C1E5679F238C61D8B01FD8B47EF4863CD725 (void);
// 0x00000077 System.Threading.Tasks.Task Grpc.Core.GrpcEnvironment/<>c::<KillServersAsync>b__33_0(Grpc.Core.Server)
extern void U3CU3Ec_U3CKillServersAsyncU3Eb__33_0_mF318A03620F48CD41CD65D3C3FF3CDC3523E0EA0 (void);
// 0x00000078 Grpc.Core.Internal.BatchContextSafeHandle Grpc.Core.GrpcEnvironment/<>c::<.ctor>b__45_0()
extern void U3CU3Ec_U3C_ctorU3Eb__45_0_m98D082DA038328E73DD3FF6D44085C867E11CC68 (void);
// 0x00000079 Grpc.Core.Internal.RequestCallContextSafeHandle Grpc.Core.GrpcEnvironment/<>c::<.ctor>b__45_1()
extern void U3CU3Ec_U3C_ctorU3Eb__45_1_mF6C49D4641A636D0B2F24A2F3FA718404BCD5433 (void);
// 0x0000007A System.Void Grpc.Core.GrpcEnvironment/<ShutdownAsync>d__60::MoveNext()
extern void U3CShutdownAsyncU3Ed__60_MoveNext_m102E73DF46E0FDF83282D29CBEC96AC3586C4273 (void);
// 0x0000007B System.Void Grpc.Core.GrpcEnvironment/<ShutdownAsync>d__60::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CShutdownAsyncU3Ed__60_SetStateMachine_m23B96629FBAA36989334E7997B14C41B175386F5 (void);
// 0x0000007C System.Void Grpc.Core.DefaultServerCallContext::.ctor(Grpc.Core.Internal.CallSafeHandle,System.String,System.String,System.DateTime,Grpc.Core.Metadata,System.Threading.CancellationToken,Grpc.Core.Internal.IServerResponseStream)
extern void DefaultServerCallContext__ctor_m76F33C5DB85C1BA65B1F7BCC0D4D699E0CF5715F (void);
// 0x0000007D Grpc.Core.ContextPropagationToken Grpc.Core.DefaultServerCallContext::CreatePropagationTokenCore(Grpc.Core.ContextPropagationOptions)
extern void DefaultServerCallContext_CreatePropagationTokenCore_m91FEFF3045CF1F7D67EB0E8760C58A84A3B7617B (void);
// 0x0000007E System.Threading.Tasks.Task Grpc.Core.DefaultServerCallContext::WriteResponseHeadersAsyncCore(Grpc.Core.Metadata)
extern void DefaultServerCallContext_WriteResponseHeadersAsyncCore_mCD670525252CA811DDA62A616D3FBDFB1691811C (void);
// 0x0000007F System.String Grpc.Core.DefaultServerCallContext::get_MethodCore()
extern void DefaultServerCallContext_get_MethodCore_mC48711586A4AB1643879505325857D13A8F73FAA (void);
// 0x00000080 System.String Grpc.Core.DefaultServerCallContext::get_HostCore()
extern void DefaultServerCallContext_get_HostCore_m80AEBB274A2A2B2805AF341D9634B6A0D4A54B13 (void);
// 0x00000081 System.String Grpc.Core.DefaultServerCallContext::get_PeerCore()
extern void DefaultServerCallContext_get_PeerCore_m32AE699C2C7356261E5777A8CD4156EFDBE2DE8B (void);
// 0x00000082 System.DateTime Grpc.Core.DefaultServerCallContext::get_DeadlineCore()
extern void DefaultServerCallContext_get_DeadlineCore_m8DB4B278E83E92F169189566782F736BAAE93805 (void);
// 0x00000083 Grpc.Core.Metadata Grpc.Core.DefaultServerCallContext::get_RequestHeadersCore()
extern void DefaultServerCallContext_get_RequestHeadersCore_m9C6B07C4D910D0F9B7E89992A16F5D64635C7CB5 (void);
// 0x00000084 System.Threading.CancellationToken Grpc.Core.DefaultServerCallContext::get_CancellationTokenCore()
extern void DefaultServerCallContext_get_CancellationTokenCore_mB6EE225A026B79BC86C041C0AB9AEA9AD919D29B (void);
// 0x00000085 Grpc.Core.Metadata Grpc.Core.DefaultServerCallContext::get_ResponseTrailersCore()
extern void DefaultServerCallContext_get_ResponseTrailersCore_m62E6B3DAD474112C68B41E31F50931662BDD3338 (void);
// 0x00000086 Grpc.Core.Status Grpc.Core.DefaultServerCallContext::get_StatusCore()
extern void DefaultServerCallContext_get_StatusCore_m1D8C24BFE5124EFC2961505A0124AF9A22ABD2C3 (void);
// 0x00000087 System.Void Grpc.Core.DefaultServerCallContext::set_StatusCore(Grpc.Core.Status)
extern void DefaultServerCallContext_set_StatusCore_mF5885382576D9883E5A5EB6377E405468EF32CFF (void);
// 0x00000088 Grpc.Core.WriteOptions Grpc.Core.DefaultServerCallContext::get_WriteOptionsCore()
extern void DefaultServerCallContext_get_WriteOptionsCore_m278875317B7FA81243C420B7304E16109A88F080 (void);
// 0x00000089 System.Void Grpc.Core.DefaultServerCallContext::set_WriteOptionsCore(Grpc.Core.WriteOptions)
extern void DefaultServerCallContext_set_WriteOptionsCore_m7862B2B777A4948BA4EE5B9F53BB2804B1E31387 (void);
// 0x0000008A Grpc.Core.AuthContext Grpc.Core.DefaultServerCallContext::get_AuthContextCore()
extern void DefaultServerCallContext_get_AuthContextCore_m3A446B542E54BF188A82EA16BB7E872638B292FA (void);
// 0x0000008B Grpc.Core.AuthContext Grpc.Core.DefaultServerCallContext::GetAuthContextEager()
extern void DefaultServerCallContext_GetAuthContextEager_m208480DFAF87B476ED6C53B46D0EE24BB8BF5EF6 (void);
// 0x0000008C System.Void Grpc.Core.Server::.ctor()
extern void Server__ctor_mDB49A98ABA31292EFA47DB5A3CDA8629D4DECA15 (void);
// 0x0000008D System.Void Grpc.Core.Server::.ctor(System.Collections.Generic.IEnumerable`1<Grpc.Core.ChannelOption>)
extern void Server__ctor_m41578E50BD81BA1167A961B0C0258FF5DBE5E69E (void);
// 0x0000008E Grpc.Core.Server/ServiceDefinitionCollection Grpc.Core.Server::get_Services()
extern void Server_get_Services_m7DB1D018189B952CA08C74503BBE89FFAA9B6499 (void);
// 0x0000008F Grpc.Core.Server/ServerPortCollection Grpc.Core.Server::get_Ports()
extern void Server_get_Ports_mA6126451CA0DD27C7452529A3623A58FB35F33A9 (void);
// 0x00000090 System.Threading.Tasks.Task Grpc.Core.Server::get_ShutdownTask()
extern void Server_get_ShutdownTask_m1E3744600E3A54D45F0BB10E032E7C33F4381B9F (void);
// 0x00000091 System.Int32 Grpc.Core.Server::get_RequestCallTokensPerCompletionQueue()
extern void Server_get_RequestCallTokensPerCompletionQueue_mF962A0D1E2B77BCDA8DE3083823F31754CBFAAF6 (void);
// 0x00000092 System.Void Grpc.Core.Server::set_RequestCallTokensPerCompletionQueue(System.Int32)
extern void Server_set_RequestCallTokensPerCompletionQueue_m00711931122DB87CFEB0A3BBFE6812ECF4555C99 (void);
// 0x00000093 System.Void Grpc.Core.Server::Start()
extern void Server_Start_mAC92BF8457B0EE4BCE2A965DC5EFD4044AAE67A4 (void);
// 0x00000094 System.Threading.Tasks.Task Grpc.Core.Server::ShutdownAsync()
extern void Server_ShutdownAsync_m1295E477325A53B52E721E69E4E9B66C406CCD71 (void);
// 0x00000095 System.Threading.Tasks.Task Grpc.Core.Server::KillAsync()
extern void Server_KillAsync_m51F978863C30C4BF4579A0429377F6BAD41212BD (void);
// 0x00000096 System.Void Grpc.Core.Server::AddCallReference(System.Object)
extern void Server_AddCallReference_m6012516727C5E40D23F3B959A75E0A3DB81FB8F9 (void);
// 0x00000097 System.Void Grpc.Core.Server::RemoveCallReference(System.Object)
extern void Server_RemoveCallReference_m9A4E2CE4C5AC5DBDFE67C10769DD43F781B32A54 (void);
// 0x00000098 System.Threading.Tasks.Task Grpc.Core.Server::ShutdownInternalAsync(System.Boolean)
extern void Server_ShutdownInternalAsync_m70A4D47FAE2D08FA17FAD40C53EDEA77A3A0E74B (void);
// 0x00000099 System.Threading.Tasks.Task Grpc.Core.Server::ShutdownCompleteOrEnvironmentDeadAsync()
extern void Server_ShutdownCompleteOrEnvironmentDeadAsync_mA7DBA35AA462DE7513AB43311FE27B5F70A6A861 (void);
// 0x0000009A System.Void Grpc.Core.Server::AddServiceDefinitionInternal(Grpc.Core.ServerServiceDefinition)
extern void Server_AddServiceDefinitionInternal_m1DB7BE3130FF6A04455EBC45413E31CDB6E37876 (void);
// 0x0000009B System.Int32 Grpc.Core.Server::AddPortInternal(Grpc.Core.ServerPort)
extern void Server_AddPortInternal_m0B3169861C41B54214811C0604B71F0992E7BF7B (void);
// 0x0000009C System.Void Grpc.Core.Server::AllowOneRpc(Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void Server_AllowOneRpc_m8DA827E5D5FB6A96AF79C6AB0F203B52AC11CF54 (void);
// 0x0000009D System.Void Grpc.Core.Server::CheckPortsBoundSuccessfully()
extern void Server_CheckPortsBoundSuccessfully_mDCDCF1FD1D839B7BE128EC40B859524563D522B5 (void);
// 0x0000009E System.Void Grpc.Core.Server::DisposeHandle()
extern void Server_DisposeHandle_m5427883F8BC0D113B225F5976BAB9D6674F62D68 (void);
// 0x0000009F System.Threading.Tasks.Task Grpc.Core.Server::HandleCallAsync(Grpc.Core.Internal.ServerRpcNew,Grpc.Core.Internal.CompletionQueueSafeHandle,System.Action`2<Grpc.Core.Server,Grpc.Core.Internal.CompletionQueueSafeHandle>)
extern void Server_HandleCallAsync_m41F4B281197941A9B85BBE9D939EC2D1CAF4E8F0 (void);
// 0x000000A0 System.Void Grpc.Core.Server::HandleNewServerRpc(System.Boolean,Grpc.Core.Internal.RequestCallContextSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void Server_HandleNewServerRpc_mB2795B5B05624C4609D764477E41A9FE119994ED (void);
// 0x000000A1 System.Void Grpc.Core.Server::HandleServerShutdown(System.Boolean,Grpc.Core.Internal.BatchContextSafeHandle,System.Object)
extern void Server_HandleServerShutdown_m2E311744591FA94B866F358381D1A9B544C6C1C5 (void);
// 0x000000A2 System.Void Grpc.Core.Server::.cctor()
extern void Server__cctor_m4F08D4AD3A47D6344820E260A8CF3FF665AE63B9 (void);
// 0x000000A3 System.Void Grpc.Core.Server/ServiceDefinitionCollection::.ctor(Grpc.Core.Server)
extern void ServiceDefinitionCollection__ctor_m684A5CF4E8ECEEC5706BF3EC09F81B5D46CC4266 (void);
// 0x000000A4 System.Void Grpc.Core.Server/ServiceDefinitionCollection::Add(Grpc.Core.ServerServiceDefinition)
extern void ServiceDefinitionCollection_Add_m2047836B6BF41B143D5019FE865D96F8F0D5F5EF (void);
// 0x000000A5 System.Collections.Generic.IEnumerator`1<Grpc.Core.ServerServiceDefinition> Grpc.Core.Server/ServiceDefinitionCollection::GetEnumerator()
extern void ServiceDefinitionCollection_GetEnumerator_mB67F4BF59FF770665D0D34C9F13D76FE52826580 (void);
// 0x000000A6 System.Collections.IEnumerator Grpc.Core.Server/ServiceDefinitionCollection::System.Collections.IEnumerable.GetEnumerator()
extern void ServiceDefinitionCollection_System_Collections_IEnumerable_GetEnumerator_m62B4B595D2294FA045D1106F1B417DF288A7AD99 (void);
// 0x000000A7 System.Void Grpc.Core.Server/ServerPortCollection::.ctor(Grpc.Core.Server)
extern void ServerPortCollection__ctor_m2A40F3BBBAF4B00460D67ABF1C75986869BDA06D (void);
// 0x000000A8 System.Int32 Grpc.Core.Server/ServerPortCollection::Add(Grpc.Core.ServerPort)
extern void ServerPortCollection_Add_m935B1A2A9ADA4B6550CC6F54ED6656E2978F4722 (void);
// 0x000000A9 System.Int32 Grpc.Core.Server/ServerPortCollection::Add(System.String,System.Int32,Grpc.Core.ServerCredentials)
extern void ServerPortCollection_Add_m9E293F55169D0196BF9F8205B15AB93A0D7F8657 (void);
// 0x000000AA System.Collections.Generic.IEnumerator`1<Grpc.Core.ServerPort> Grpc.Core.Server/ServerPortCollection::GetEnumerator()
extern void ServerPortCollection_GetEnumerator_mB8C7CFE4B41C78BB28E3F580FE8AB121D3C16273 (void);
// 0x000000AB System.Collections.IEnumerator Grpc.Core.Server/ServerPortCollection::System.Collections.IEnumerable.GetEnumerator()
extern void ServerPortCollection_System_Collections_IEnumerable_GetEnumerator_mC30C951240D8B9D05856A1003F77B5BE47268F04 (void);
// 0x000000AC System.Void Grpc.Core.Server/<ShutdownInternalAsync>d__32::MoveNext()
extern void U3CShutdownInternalAsyncU3Ed__32_MoveNext_m6BA0A69B255BF9F5090F8BED5D48B578BFA4B179 (void);
// 0x000000AD System.Void Grpc.Core.Server/<ShutdownInternalAsync>d__32::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CShutdownInternalAsyncU3Ed__32_SetStateMachine_mB9A057AF8A48659278D0AD3C71F3503993F41B4C (void);
// 0x000000AE System.Void Grpc.Core.Server/<ShutdownCompleteOrEnvironmentDeadAsync>d__33::MoveNext()
extern void U3CShutdownCompleteOrEnvironmentDeadAsyncU3Ed__33_MoveNext_m805F395E5A0D26981215B281646B7C10014AB6FF (void);
// 0x000000AF System.Void Grpc.Core.Server/<ShutdownCompleteOrEnvironmentDeadAsync>d__33::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CShutdownCompleteOrEnvironmentDeadAsyncU3Ed__33_SetStateMachine_mF93B0F6537FE52E673DA4B46487A3CC5A7231CF6 (void);
// 0x000000B0 System.Void Grpc.Core.Server/<>c__DisplayClass36_0::.ctor()
extern void U3CU3Ec__DisplayClass36_0__ctor_mD7D259CF4D729FFA09A59443950965214459391C (void);
// 0x000000B1 System.Void Grpc.Core.Server/<>c__DisplayClass36_0::<AllowOneRpc>b__0(System.Boolean,Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void U3CU3Ec__DisplayClass36_0_U3CAllowOneRpcU3Eb__0_mF69C552DF18457A1491F6F3EEAD91C088AA16308 (void);
// 0x000000B2 System.Void Grpc.Core.Server/<>c::.cctor()
extern void U3CU3Ec__cctor_mA7024F18D646B2466AFE48A718F83950D140A406 (void);
// 0x000000B3 System.Void Grpc.Core.Server/<>c::.ctor()
extern void U3CU3Ec__ctor_mECA910A4C70E860510D6F22190946F5A3EB1C4F8 (void);
// 0x000000B4 System.Boolean Grpc.Core.Server/<>c::<CheckPortsBoundSuccessfully>b__37_0(Grpc.Core.ServerPort)
extern void U3CU3Ec_U3CCheckPortsBoundSuccessfullyU3Eb__37_0_m58B50F159A90786D30028BEAEB91375943C196B1 (void);
// 0x000000B5 System.Void Grpc.Core.Server/<>c::<HandleNewServerRpc>b__40_0(Grpc.Core.Server,Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void U3CU3Ec_U3CHandleNewServerRpcU3Eb__40_0_m15DB6F2CF26333DD2853FF0091FB73C21BA104A0 (void);
// 0x000000B6 System.Void Grpc.Core.Server/<HandleCallAsync>d__39::MoveNext()
extern void U3CHandleCallAsyncU3Ed__39_MoveNext_m12FE72CB0D5A2ED66D995B5BD840E7111EA97C69 (void);
// 0x000000B7 System.Void Grpc.Core.Server/<HandleCallAsync>d__39::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CHandleCallAsyncU3Ed__39_SetStateMachine_m86E7C92172C88BEB0C2F393560F9B9033CD9AE68 (void);
// 0x000000B8 Grpc.Core.ServerCredentials Grpc.Core.ServerCredentials::get_Insecure()
extern void ServerCredentials_get_Insecure_mC7168C61277BB2A9490786BC9F2CBE909C3422CD (void);
// 0x000000B9 Grpc.Core.Internal.ServerCredentialsSafeHandle Grpc.Core.ServerCredentials::ToNativeCredentials()
// 0x000000BA System.Void Grpc.Core.ServerCredentials::.ctor()
extern void ServerCredentials__ctor_m7D139F5BA29507AB01F2A0DDB0232E4D594BA186 (void);
// 0x000000BB System.Void Grpc.Core.ServerCredentials::.cctor()
extern void ServerCredentials__cctor_mF632DB15203AF79301022A9CA7BAC62DA10D53E3 (void);
// 0x000000BC Grpc.Core.Internal.ServerCredentialsSafeHandle Grpc.Core.ServerCredentials/InsecureServerCredentialsImpl::ToNativeCredentials()
extern void InsecureServerCredentialsImpl_ToNativeCredentials_m35F0A178F02B68297D25869EBDFB9BBAFEA4C549 (void);
// 0x000000BD System.Void Grpc.Core.ServerCredentials/InsecureServerCredentialsImpl::.ctor()
extern void InsecureServerCredentialsImpl__ctor_mE69BF31601443E5FA7BC7B749D2BBC38EE7D2516 (void);
// 0x000000BE System.Void Grpc.Core.SslServerCredentials::.ctor(System.Collections.Generic.IEnumerable`1<Grpc.Core.KeyCertificatePair>,System.String,System.Boolean)
extern void SslServerCredentials__ctor_m0C5CEEE8AF03C99AF5B327F259CC0957701EC52A (void);
// 0x000000BF System.Void Grpc.Core.SslServerCredentials::.ctor(System.Collections.Generic.IEnumerable`1<Grpc.Core.KeyCertificatePair>,System.String,Grpc.Core.SslClientCertificateRequestType)
extern void SslServerCredentials__ctor_mFDF9896C920CBDF4BF07A2A401EDC1268CBD67A6 (void);
// 0x000000C0 System.Void Grpc.Core.SslServerCredentials::.ctor(System.Collections.Generic.IEnumerable`1<Grpc.Core.KeyCertificatePair>)
extern void SslServerCredentials__ctor_mCCA0DA94C2F99D8841E192E6F81DD2CDDA372923 (void);
// 0x000000C1 System.Collections.Generic.IList`1<Grpc.Core.KeyCertificatePair> Grpc.Core.SslServerCredentials::get_KeyCertificatePairs()
extern void SslServerCredentials_get_KeyCertificatePairs_mAF96E04EF89CEB00CA7BB24916FF5CFD9293C487 (void);
// 0x000000C2 System.String Grpc.Core.SslServerCredentials::get_RootCertificates()
extern void SslServerCredentials_get_RootCertificates_mB9A5479FC4D6DFF9684FBECE0F27E9C54A355887 (void);
// 0x000000C3 System.Boolean Grpc.Core.SslServerCredentials::get_ForceClientAuthentication()
extern void SslServerCredentials_get_ForceClientAuthentication_m865DB418AA5741D5EBFD47F391982E29BB73801F (void);
// 0x000000C4 Grpc.Core.SslClientCertificateRequestType Grpc.Core.SslServerCredentials::get_ClientCertificateRequest()
extern void SslServerCredentials_get_ClientCertificateRequest_m546D0F006FD606089CB012F7E77B233127187333 (void);
// 0x000000C5 Grpc.Core.Internal.ServerCredentialsSafeHandle Grpc.Core.SslServerCredentials::ToNativeCredentials()
extern void SslServerCredentials_ToNativeCredentials_mF5ECAA74B56191D8D9EDFD8CBC24D2C135A37293 (void);
// 0x000000C6 System.Void Grpc.Core.ServerPort::.ctor(System.String,System.Int32,Grpc.Core.ServerCredentials)
extern void ServerPort__ctor_mF10AF887316A152E07D144A8F0B2E09A953D59EC (void);
// 0x000000C7 System.Void Grpc.Core.ServerPort::.ctor(Grpc.Core.ServerPort,System.Int32)
extern void ServerPort__ctor_mB0DBD939EC701FCED05A6AB59203510320690044 (void);
// 0x000000C8 System.String Grpc.Core.ServerPort::get_Host()
extern void ServerPort_get_Host_m5E18E55063855160AC85B79D4BCC1A6BE45B1C2E (void);
// 0x000000C9 System.Int32 Grpc.Core.ServerPort::get_Port()
extern void ServerPort_get_Port_m636F1710F9EF9CAEDF239B12C342C05FA54EEC93 (void);
// 0x000000CA Grpc.Core.ServerCredentials Grpc.Core.ServerPort::get_Credentials()
extern void ServerPort_get_Credentials_m4606FE38B9B1BD44CFD66BE141817ACF92E91F80 (void);
// 0x000000CB System.Int32 Grpc.Core.ServerPort::get_BoundPort()
extern void ServerPort_get_BoundPort_m053CE459EA69DA7BD7E63B063EEEC0F23D46CA9C (void);
// 0x000000CC System.Threading.Tasks.Task Grpc.Core.Utils.AsyncStreamExtensions::ForEachAsync(Grpc.Core.IAsyncStreamReader`1<T>,System.Func`2<T,System.Threading.Tasks.Task>)
// 0x000000CD System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<T>> Grpc.Core.Utils.AsyncStreamExtensions::ToListAsync(Grpc.Core.IAsyncStreamReader`1<T>)
// 0x000000CE System.Threading.Tasks.Task Grpc.Core.Utils.AsyncStreamExtensions::WriteAllAsync(Grpc.Core.IClientStreamWriter`1<T>,System.Collections.Generic.IEnumerable`1<T>,System.Boolean)
// 0x000000CF System.Threading.Tasks.Task Grpc.Core.Utils.AsyncStreamExtensions::WriteAllAsync(Grpc.Core.IServerStreamWriter`1<T>,System.Collections.Generic.IEnumerable`1<T>)
// 0x000000D0 System.Void Grpc.Core.Utils.AsyncStreamExtensions/<ForEachAsync>d__0`1::MoveNext()
// 0x000000D1 System.Void Grpc.Core.Utils.AsyncStreamExtensions/<ForEachAsync>d__0`1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
// 0x000000D2 System.Void Grpc.Core.Utils.AsyncStreamExtensions/<ToListAsync>d__1`1::MoveNext()
// 0x000000D3 System.Void Grpc.Core.Utils.AsyncStreamExtensions/<ToListAsync>d__1`1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
// 0x000000D4 System.Void Grpc.Core.Utils.AsyncStreamExtensions/<WriteAllAsync>d__2`1::MoveNext()
// 0x000000D5 System.Void Grpc.Core.Utils.AsyncStreamExtensions/<WriteAllAsync>d__2`1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
// 0x000000D6 System.Void Grpc.Core.Utils.AsyncStreamExtensions/<WriteAllAsync>d__3`1::MoveNext()
// 0x000000D7 System.Void Grpc.Core.Utils.AsyncStreamExtensions/<WriteAllAsync>d__3`1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
// 0x000000D8 System.Void Grpc.Core.Utils.BenchmarkUtil::RunBenchmark(System.Int32,System.Int32,System.Action)
extern void BenchmarkUtil_RunBenchmark_m9E568706B4D657BA145745271D0808D01D35A035 (void);
// 0x000000D9 System.Threading.Tasks.Task Grpc.Core.Utils.TaskUtils::get_CompletedTask()
extern void TaskUtils_get_CompletedTask_m933C7974B69A94BC72205BF035CD8D394E8BA677 (void);
// 0x000000DA System.Void Grpc.Core.Profiling.IProfiler::Begin(System.String)
// 0x000000DB System.Void Grpc.Core.Profiling.IProfiler::End(System.String)
// 0x000000DC System.Void Grpc.Core.Profiling.IProfiler::Mark(System.String)
// 0x000000DD System.Void Grpc.Core.Profiling.ProfilerEntry::.ctor(Grpc.Core.Internal.Timespec,Grpc.Core.Profiling.ProfilerEntry/Type,System.String)
extern void ProfilerEntry__ctor_mAEC39D440D3500DC3180118C7FF2AE81733864BD (void);
// 0x000000DE System.String Grpc.Core.Profiling.ProfilerEntry::ToString()
extern void ProfilerEntry_ToString_m25BB14397EF63D941AD2FB315D89691D3E43556F (void);
// 0x000000DF System.String Grpc.Core.Profiling.ProfilerEntry::GetTypeAbbreviation(Grpc.Core.Profiling.ProfilerEntry/Type)
extern void ProfilerEntry_GetTypeAbbreviation_m14BF79AF1CE4EDF2D046EE9330F3F718DC5596A2 (void);
// 0x000000E0 Grpc.Core.Profiling.IProfiler Grpc.Core.Profiling.Profilers::ForCurrentThread()
extern void Profilers_ForCurrentThread_mDDD043F7BF1A4473AD7231BCC310AE8067237B34 (void);
// 0x000000E1 System.Void Grpc.Core.Profiling.Profilers::SetForCurrentThread(Grpc.Core.Profiling.IProfiler)
extern void Profilers_SetForCurrentThread_m2B302C7052E0078DFDE5F2B2A91CED358660B0AE (void);
// 0x000000E2 Grpc.Core.Profiling.ProfilerScope Grpc.Core.Profiling.Profilers::NewScope(Grpc.Core.Profiling.IProfiler,System.String)
extern void Profilers_NewScope_mA0A05B79272B0034E556D4613865DD1FFBFB5341 (void);
// 0x000000E3 System.Void Grpc.Core.Profiling.Profilers::.cctor()
extern void Profilers__cctor_mA95595211EA92C33F92E82414139E365C8D68D75 (void);
// 0x000000E4 System.Void Grpc.Core.Profiling.NopProfiler::Begin(System.String)
extern void NopProfiler_Begin_mF9FDCD379BEEE757BF7F610FA2789C4550E46DA3 (void);
// 0x000000E5 System.Void Grpc.Core.Profiling.NopProfiler::End(System.String)
extern void NopProfiler_End_mFF86BD8E003A3F5B93E4B7ED75C3D908A0653958 (void);
// 0x000000E6 System.Void Grpc.Core.Profiling.NopProfiler::Mark(System.String)
extern void NopProfiler_Mark_m8C1C9290810158639CCD44E1969A217FA911F48F (void);
// 0x000000E7 System.Void Grpc.Core.Profiling.NopProfiler::.ctor()
extern void NopProfiler__ctor_m5A2D1D51E7AFA13B5639F6599F3345CF8F50305F (void);
// 0x000000E8 System.Void Grpc.Core.Profiling.BasicProfiler::.ctor()
extern void BasicProfiler__ctor_m1A8F6C1CF38D6C2838B5F059B996CB1FA8EC351A (void);
// 0x000000E9 System.Void Grpc.Core.Profiling.BasicProfiler::.ctor(System.Int32)
extern void BasicProfiler__ctor_mF5D9860CA24C82B4CF6307F21E4FD999A6D87A3C (void);
// 0x000000EA System.Void Grpc.Core.Profiling.BasicProfiler::Begin(System.String)
extern void BasicProfiler_Begin_m471368A5BD49A67DC40E8F0B78AA03F8C539D3CC (void);
// 0x000000EB System.Void Grpc.Core.Profiling.BasicProfiler::End(System.String)
extern void BasicProfiler_End_mFEF08E57A10C91A153B35A0E0D0B7A98AF3547E7 (void);
// 0x000000EC System.Void Grpc.Core.Profiling.BasicProfiler::Mark(System.String)
extern void BasicProfiler_Mark_mCD50CEEF840FC9A5E3BE9667741FF4E4CD641D20 (void);
// 0x000000ED System.Void Grpc.Core.Profiling.BasicProfiler::Reset()
extern void BasicProfiler_Reset_m24C96D37CEC51132EE21B814A475F995F1841AF0 (void);
// 0x000000EE System.Void Grpc.Core.Profiling.BasicProfiler::Dump(System.String)
extern void BasicProfiler_Dump_mD5533A16A48C776EB702A5EAEAD8BAE2647FC077 (void);
// 0x000000EF System.Void Grpc.Core.Profiling.BasicProfiler::Dump(System.IO.TextWriter)
extern void BasicProfiler_Dump_mB7DA260F78690D2D92988E5EB8C7DC7E096980D4 (void);
// 0x000000F0 System.Void Grpc.Core.Profiling.BasicProfiler::AddEntry(Grpc.Core.Profiling.ProfilerEntry)
extern void BasicProfiler_AddEntry_mFB7CB7BD663A24F2F1DA97BDD4453C9C1AB40AF0 (void);
// 0x000000F1 System.Void Grpc.Core.Profiling.ProfilerScope::.ctor(Grpc.Core.Profiling.IProfiler,System.String)
extern void ProfilerScope__ctor_m9A49CE3EE8C0BCFE524FF47A70EE79FFAE407E2D (void);
// 0x000000F2 System.Void Grpc.Core.Profiling.ProfilerScope::Dispose()
extern void ProfilerScope_Dispose_m37368A8F282FD7454A5DBB661ADD901D5BFB9475 (void);
// 0x000000F3 System.Void Grpc.Core.Logging.ConsoleLogger::.ctor()
extern void ConsoleLogger__ctor_m5A13EAB3DD40CC0B209AA6786AD77A497F353A2A (void);
// 0x000000F4 System.Void Grpc.Core.Logging.ConsoleLogger::.ctor(System.Type)
extern void ConsoleLogger__ctor_m1405B312A377CAD84262B9EA198B8CD178571CC0 (void);
// 0x000000F5 Grpc.Core.Logging.ILogger Grpc.Core.Logging.ConsoleLogger::ForType()
// 0x000000F6 System.Void Grpc.Core.Logging.ConsoleLogger/<>c::.cctor()
extern void U3CU3Ec__cctor_m4A5A83AAE210B29D40C80AA6E333403E39BF365B (void);
// 0x000000F7 System.Void Grpc.Core.Logging.ConsoleLogger/<>c::.ctor()
extern void U3CU3Ec__ctor_mEF4EE7AE52592866D50E4E5458FEE0656BD46612 (void);
// 0x000000F8 System.IO.TextWriter Grpc.Core.Logging.ConsoleLogger/<>c::<.ctor>b__1_0()
extern void U3CU3Ec_U3C_ctorU3Eb__1_0_m6D1A7AEB16DC1FFF08CAE774F272B036753B1E60 (void);
// 0x000000F9 Grpc.Core.Logging.ILogger Grpc.Core.Logging.ILogger::ForType()
// 0x000000FA System.Void Grpc.Core.Logging.ILogger::Debug(System.String)
// 0x000000FB System.Void Grpc.Core.Logging.ILogger::Debug(System.String,System.Object[])
// 0x000000FC System.Void Grpc.Core.Logging.ILogger::Info(System.String)
// 0x000000FD System.Void Grpc.Core.Logging.ILogger::Info(System.String,System.Object[])
// 0x000000FE System.Void Grpc.Core.Logging.ILogger::Warning(System.String)
// 0x000000FF System.Void Grpc.Core.Logging.ILogger::Warning(System.String,System.Object[])
// 0x00000100 System.Void Grpc.Core.Logging.ILogger::Warning(System.Exception,System.String)
// 0x00000101 System.Void Grpc.Core.Logging.ILogger::Error(System.String)
// 0x00000102 System.Void Grpc.Core.Logging.ILogger::Error(System.String,System.Object[])
// 0x00000103 System.Void Grpc.Core.Logging.ILogger::Error(System.Exception,System.String)
// 0x00000104 System.Void Grpc.Core.Logging.LogLevelFilterLogger::.ctor(Grpc.Core.Logging.ILogger,Grpc.Core.Logging.LogLevel)
extern void LogLevelFilterLogger__ctor_m34206D7FC0DBD317673202733C704C972F4DF56B (void);
// 0x00000105 System.Void Grpc.Core.Logging.LogLevelFilterLogger::.ctor(Grpc.Core.Logging.ILogger,Grpc.Core.Logging.LogLevel,System.Boolean)
extern void LogLevelFilterLogger__ctor_m1202657810BCB3229CC409923DF6FE51D4916E91 (void);
// 0x00000106 Grpc.Core.Logging.ILogger Grpc.Core.Logging.LogLevelFilterLogger::ForType()
// 0x00000107 System.Void Grpc.Core.Logging.LogLevelFilterLogger::Debug(System.String)
extern void LogLevelFilterLogger_Debug_m79AC20421CE075C6B0ABD38DFD4647B6516C0C24 (void);
// 0x00000108 System.Void Grpc.Core.Logging.LogLevelFilterLogger::Debug(System.String,System.Object[])
extern void LogLevelFilterLogger_Debug_m70F842CFF00F6C4DF90A1E2300E5FBC50D96FC3C (void);
// 0x00000109 System.Void Grpc.Core.Logging.LogLevelFilterLogger::Info(System.String)
extern void LogLevelFilterLogger_Info_m58918E47B93B39C460BEB0A76505686619A2E5A6 (void);
// 0x0000010A System.Void Grpc.Core.Logging.LogLevelFilterLogger::Info(System.String,System.Object[])
extern void LogLevelFilterLogger_Info_m80F10423FF929A53325447F681E89C2DAD47BE2D (void);
// 0x0000010B System.Void Grpc.Core.Logging.LogLevelFilterLogger::Warning(System.String)
extern void LogLevelFilterLogger_Warning_m50EA4EE41EEE5FDE0124AEC578A8733A30C6D8BB (void);
// 0x0000010C System.Void Grpc.Core.Logging.LogLevelFilterLogger::Warning(System.String,System.Object[])
extern void LogLevelFilterLogger_Warning_m295A576DA1A3339A42EA4A0BE4A6A295BC6532D9 (void);
// 0x0000010D System.Void Grpc.Core.Logging.LogLevelFilterLogger::Warning(System.Exception,System.String)
extern void LogLevelFilterLogger_Warning_mCAA98DE40311019D0DCD27AD8DDC180398DD306F (void);
// 0x0000010E System.Void Grpc.Core.Logging.LogLevelFilterLogger::Error(System.String)
extern void LogLevelFilterLogger_Error_m7593C755DCCA701BC8CEB0F9396950B3333C58FE (void);
// 0x0000010F System.Void Grpc.Core.Logging.LogLevelFilterLogger::Error(System.String,System.Object[])
extern void LogLevelFilterLogger_Error_mCA57DFC10C08763C9AE96E4E76CED5A58788040E (void);
// 0x00000110 System.Void Grpc.Core.Logging.LogLevelFilterLogger::Error(System.Exception,System.String)
extern void LogLevelFilterLogger_Error_mE5EF0DE5643350603E355CD2A0EABD469317927C (void);
// 0x00000111 Grpc.Core.Logging.LogLevel Grpc.Core.Logging.LogLevelFilterLogger::GetLogLevelFromEnvironment(Grpc.Core.Logging.LogLevel,System.Boolean)
extern void LogLevelFilterLogger_GetLogLevelFromEnvironment_m1146CFBA8E870A2B76433777331E80C9EA6A6DBD (void);
// 0x00000112 System.Void Grpc.Core.Logging.NullLogger::Debug(System.String)
extern void NullLogger_Debug_mCD3B3D75A2F34B08AD42582DB2AC393C19254088 (void);
// 0x00000113 System.Void Grpc.Core.Logging.NullLogger::Debug(System.String,System.Object[])
extern void NullLogger_Debug_m1B98748B56113173643385DA396993D57CCF6E6C (void);
// 0x00000114 System.Void Grpc.Core.Logging.NullLogger::Error(System.String)
extern void NullLogger_Error_mD8471C7001C4D009C02738542C8B4D31999C64B2 (void);
// 0x00000115 System.Void Grpc.Core.Logging.NullLogger::Error(System.Exception,System.String)
extern void NullLogger_Error_m6B11A975CECA5641B289AE3C880A920AEF8988DA (void);
// 0x00000116 System.Void Grpc.Core.Logging.NullLogger::Error(System.String,System.Object[])
extern void NullLogger_Error_m10C39A49420A10DF681EDEEAF0EC80F2402D83AD (void);
// 0x00000117 Grpc.Core.Logging.ILogger Grpc.Core.Logging.NullLogger::ForType()
// 0x00000118 System.Void Grpc.Core.Logging.NullLogger::Info(System.String)
extern void NullLogger_Info_m86FBBF849E6144015C78E6C4BDE5205479FD0B2F (void);
// 0x00000119 System.Void Grpc.Core.Logging.NullLogger::Info(System.String,System.Object[])
extern void NullLogger_Info_m3C43D442F07825FEE29C048442C692569126F811 (void);
// 0x0000011A System.Void Grpc.Core.Logging.NullLogger::Warning(System.String)
extern void NullLogger_Warning_mFF6E06708B4240857A7A721B88A132913947A9DF (void);
// 0x0000011B System.Void Grpc.Core.Logging.NullLogger::Warning(System.Exception,System.String)
extern void NullLogger_Warning_mD32616CF25F09AF25A847D401984E39D2D38E5C1 (void);
// 0x0000011C System.Void Grpc.Core.Logging.NullLogger::Warning(System.String,System.Object[])
extern void NullLogger_Warning_m090CAE29DB42CE7839F56F5C71178F97655C112D (void);
// 0x0000011D System.Void Grpc.Core.Logging.NullLogger::.ctor()
extern void NullLogger__ctor_m8AB15CDB291E5F61619BC21EAA72A4B37BAB9073 (void);
// 0x0000011E System.Void Grpc.Core.Logging.TextWriterLogger::.ctor(System.IO.TextWriter)
extern void TextWriterLogger__ctor_m7EA198996BE78067F65218DE0ABA83BD4C1620BB (void);
// 0x0000011F System.Void Grpc.Core.Logging.TextWriterLogger::.ctor(System.Func`1<System.IO.TextWriter>)
extern void TextWriterLogger__ctor_m9A2A54D801340CA7C9A51B6D52441774EDDC1787 (void);
// 0x00000120 System.Void Grpc.Core.Logging.TextWriterLogger::.ctor(System.Func`1<System.IO.TextWriter>,System.Type)
extern void TextWriterLogger__ctor_m0BC50D1F37CA184D0FA71B81DB31D6F038087F2E (void);
// 0x00000121 Grpc.Core.Logging.ILogger Grpc.Core.Logging.TextWriterLogger::ForType()
// 0x00000122 System.Void Grpc.Core.Logging.TextWriterLogger::Debug(System.String)
extern void TextWriterLogger_Debug_mA1FCDBCA6463524F58FA777E3685EF171E11F575 (void);
// 0x00000123 System.Void Grpc.Core.Logging.TextWriterLogger::Debug(System.String,System.Object[])
extern void TextWriterLogger_Debug_mAEC7F89332A58408BBA7BCC7524395743377C735 (void);
// 0x00000124 System.Void Grpc.Core.Logging.TextWriterLogger::Info(System.String)
extern void TextWriterLogger_Info_m11088A44F3459091E66BAC211F54D7F268357A2F (void);
// 0x00000125 System.Void Grpc.Core.Logging.TextWriterLogger::Info(System.String,System.Object[])
extern void TextWriterLogger_Info_m82A7FEDFB0DC50FE188D734DB6791803E42512DA (void);
// 0x00000126 System.Void Grpc.Core.Logging.TextWriterLogger::Warning(System.String)
extern void TextWriterLogger_Warning_mD576AF52951D9BC7DE2C4A61C8B9320F4C825422 (void);
// 0x00000127 System.Void Grpc.Core.Logging.TextWriterLogger::Warning(System.String,System.Object[])
extern void TextWriterLogger_Warning_m2ED34FDD0F348FAE60CC878DF72CA5FFA700A37B (void);
// 0x00000128 System.Void Grpc.Core.Logging.TextWriterLogger::Warning(System.Exception,System.String)
extern void TextWriterLogger_Warning_m590140F1C449148BE5B235B06ED7FDA9ECBDE0DC (void);
// 0x00000129 System.Void Grpc.Core.Logging.TextWriterLogger::Error(System.String)
extern void TextWriterLogger_Error_m8170291B7CCF9C27EBF2B5CD36C4A025FB0577FB (void);
// 0x0000012A System.Void Grpc.Core.Logging.TextWriterLogger::Error(System.String,System.Object[])
extern void TextWriterLogger_Error_m88ED096D2133CDEBB255F397204978C0BCF116FD (void);
// 0x0000012B System.Void Grpc.Core.Logging.TextWriterLogger::Error(System.Exception,System.String)
extern void TextWriterLogger_Error_m79A2D1069E2344BE0D741467D154C141B807E388 (void);
// 0x0000012C System.Type Grpc.Core.Logging.TextWriterLogger::get_AssociatedType()
extern void TextWriterLogger_get_AssociatedType_m954FB7EAB37F4995315ED59ED962D7D18ACD4181 (void);
// 0x0000012D System.Void Grpc.Core.Logging.TextWriterLogger::Log(System.String,System.String)
extern void TextWriterLogger_Log_m9D03D16A552E118EA66F98E7277580404AA0C1B5 (void);
// 0x0000012E System.Void Grpc.Core.Logging.TextWriterLogger/<>c__DisplayClass4_0::.ctor()
extern void U3CU3Ec__DisplayClass4_0__ctor_m1008C3312C8F853B3347034A07B30C15BA87A009 (void);
// 0x0000012F System.IO.TextWriter Grpc.Core.Logging.TextWriterLogger/<>c__DisplayClass4_0::<.ctor>b__0()
extern void U3CU3Ec__DisplayClass4_0_U3C_ctorU3Eb__0_m0E5546E985D86E452BED026AB95A357B676C72C2 (void);
// 0x00000130 System.Void Grpc.Core.Internal.AsyncCall`2::.ctor(Grpc.Core.CallInvocationDetails`2<TRequest,TResponse>)
// 0x00000131 System.Void Grpc.Core.Internal.AsyncCall`2::.ctor(Grpc.Core.CallInvocationDetails`2<TRequest,TResponse>,Grpc.Core.Internal.INativeCall)
// 0x00000132 TResponse Grpc.Core.Internal.AsyncCall`2::UnaryCall(TRequest)
// 0x00000133 System.Threading.Tasks.Task`1<TResponse> Grpc.Core.Internal.AsyncCall`2::UnaryCallAsync(TRequest)
// 0x00000134 System.Threading.Tasks.Task`1<TResponse> Grpc.Core.Internal.AsyncCall`2::ClientStreamingCallAsync()
// 0x00000135 System.Void Grpc.Core.Internal.AsyncCall`2::StartServerStreamingCall(TRequest)
// 0x00000136 System.Void Grpc.Core.Internal.AsyncCall`2::StartDuplexStreamingCall()
// 0x00000137 System.Threading.Tasks.Task Grpc.Core.Internal.AsyncCall`2::SendMessageAsync(TRequest,Grpc.Core.WriteFlags)
// 0x00000138 System.Threading.Tasks.Task`1<TResponse> Grpc.Core.Internal.AsyncCall`2::ReadMessageAsync()
// 0x00000139 System.Threading.Tasks.Task Grpc.Core.Internal.AsyncCall`2::SendCloseFromClientAsync()
// 0x0000013A System.Threading.Tasks.Task Grpc.Core.Internal.AsyncCall`2::get_StreamingResponseCallFinishedTask()
// 0x0000013B System.Threading.Tasks.Task`1<Grpc.Core.Metadata> Grpc.Core.Internal.AsyncCall`2::get_ResponseHeadersAsync()
// 0x0000013C Grpc.Core.Status Grpc.Core.Internal.AsyncCall`2::GetStatus()
// 0x0000013D Grpc.Core.Metadata Grpc.Core.Internal.AsyncCall`2::GetTrailers()
// 0x0000013E Grpc.Core.CallInvocationDetails`2<TRequest,TResponse> Grpc.Core.Internal.AsyncCall`2::get_Details()
// 0x0000013F System.Void Grpc.Core.Internal.AsyncCall`2::OnAfterReleaseResourcesLocked()
// 0x00000140 System.Void Grpc.Core.Internal.AsyncCall`2::OnAfterReleaseResourcesUnlocked()
// 0x00000141 System.Boolean Grpc.Core.Internal.AsyncCall`2::get_IsClient()
// 0x00000142 System.Exception Grpc.Core.Internal.AsyncCall`2::GetRpcExceptionClientOnly()
// 0x00000143 System.Threading.Tasks.Task Grpc.Core.Internal.AsyncCall`2::CheckSendAllowedOrEarlyResult()
// 0x00000144 System.Threading.Tasks.Task Grpc.Core.Internal.AsyncCall`2::CheckSendPreconditionsClientSide()
// 0x00000145 System.Void Grpc.Core.Internal.AsyncCall`2::Initialize(Grpc.Core.Internal.CompletionQueueSafeHandle)
// 0x00000146 System.Void Grpc.Core.Internal.AsyncCall`2::OnFailedToStartCallLocked()
// 0x00000147 Grpc.Core.Internal.INativeCall Grpc.Core.Internal.AsyncCall`2::CreateNativeCall(Grpc.Core.Internal.CompletionQueueSafeHandle)
// 0x00000148 System.Void Grpc.Core.Internal.AsyncCall`2::RegisterCancellationCallback()
// 0x00000149 Grpc.Core.WriteFlags Grpc.Core.Internal.AsyncCall`2::GetWriteFlagsForCall()
// 0x0000014A System.Void Grpc.Core.Internal.AsyncCall`2::HandleReceivedResponseHeaders(System.Boolean,Grpc.Core.Metadata)
// 0x0000014B System.Void Grpc.Core.Internal.AsyncCall`2::HandleUnaryResponse(System.Boolean,Grpc.Core.Internal.ClientSideStatus,Grpc.Core.Internal.IBufferReader,Grpc.Core.Metadata)
// 0x0000014C System.Void Grpc.Core.Internal.AsyncCall`2::HandleFinished(System.Boolean,Grpc.Core.Internal.ClientSideStatus)
// 0x0000014D Grpc.Core.Internal.IUnaryResponseClientCallback Grpc.Core.Internal.AsyncCall`2::get_UnaryResponseClientCallback()
// 0x0000014E System.Void Grpc.Core.Internal.AsyncCall`2::Grpc.Core.Internal.IUnaryResponseClientCallback.OnUnaryResponseClient(System.Boolean,Grpc.Core.Internal.ClientSideStatus,Grpc.Core.Internal.IBufferReader,Grpc.Core.Metadata)
// 0x0000014F Grpc.Core.Internal.IReceivedStatusOnClientCallback Grpc.Core.Internal.AsyncCall`2::get_ReceivedStatusOnClientCallback()
// 0x00000150 System.Void Grpc.Core.Internal.AsyncCall`2::Grpc.Core.Internal.IReceivedStatusOnClientCallback.OnReceivedStatusOnClient(System.Boolean,Grpc.Core.Internal.ClientSideStatus)
// 0x00000151 Grpc.Core.Internal.IReceivedResponseHeadersCallback Grpc.Core.Internal.AsyncCall`2::get_ReceivedResponseHeadersCallback()
// 0x00000152 System.Void Grpc.Core.Internal.AsyncCall`2::Grpc.Core.Internal.IReceivedResponseHeadersCallback.OnReceivedResponseHeaders(System.Boolean,Grpc.Core.Metadata)
// 0x00000153 System.Void Grpc.Core.Internal.AsyncCall`2::.cctor()
// 0x00000154 System.Void Grpc.Core.Internal.AsyncCall`2::<OnFailedToStartCallLocked>b__35_0(System.Object)
// 0x00000155 System.Void Grpc.Core.Internal.AsyncCallBase`2::.ctor(System.Action`2<TWrite,Grpc.Core.SerializationContext>,System.Func`2<Grpc.Core.DeserializationContext,TRead>)
// 0x00000156 System.Void Grpc.Core.Internal.AsyncCallBase`2::Cancel()
// 0x00000157 System.Void Grpc.Core.Internal.AsyncCallBase`2::CancelWithStatus(Grpc.Core.Status)
// 0x00000158 System.Void Grpc.Core.Internal.AsyncCallBase`2::InitializeInternal(Grpc.Core.Internal.INativeCall)
// 0x00000159 System.Threading.Tasks.Task Grpc.Core.Internal.AsyncCallBase`2::SendMessageInternalAsync(TWrite,Grpc.Core.WriteFlags)
// 0x0000015A System.Threading.Tasks.Task`1<TRead> Grpc.Core.Internal.AsyncCallBase`2::ReadMessageInternalAsync()
// 0x0000015B System.Boolean Grpc.Core.Internal.AsyncCallBase`2::ReleaseResourcesIfPossible()
// 0x0000015C System.Boolean Grpc.Core.Internal.AsyncCallBase`2::get_IsClient()
// 0x0000015D System.Exception Grpc.Core.Internal.AsyncCallBase`2::GetRpcExceptionClientOnly()
// 0x0000015E System.Void Grpc.Core.Internal.AsyncCallBase`2::ReleaseResources()
// 0x0000015F System.Void Grpc.Core.Internal.AsyncCallBase`2::OnAfterReleaseResourcesLocked()
// 0x00000160 System.Void Grpc.Core.Internal.AsyncCallBase`2::OnAfterReleaseResourcesUnlocked()
// 0x00000161 System.Threading.Tasks.Task Grpc.Core.Internal.AsyncCallBase`2::CheckSendAllowedOrEarlyResult()
// 0x00000162 Grpc.Core.Internal.SliceBufferSafeHandle Grpc.Core.Internal.AsyncCallBase`2::UnsafeSerialize(TWrite,Grpc.Core.Internal.DefaultSerializationContext)
// 0x00000163 System.Exception Grpc.Core.Internal.AsyncCallBase`2::TryDeserialize(Grpc.Core.Internal.IBufferReader,TRead&)
// 0x00000164 System.Void Grpc.Core.Internal.AsyncCallBase`2::HandleSendFinished(System.Boolean)
// 0x00000165 System.Void Grpc.Core.Internal.AsyncCallBase`2::HandleSendStatusFromServerFinished(System.Boolean)
// 0x00000166 System.Void Grpc.Core.Internal.AsyncCallBase`2::HandleReadFinished(System.Boolean,Grpc.Core.Internal.IBufferReader)
// 0x00000167 Grpc.Core.Internal.ISendCompletionCallback Grpc.Core.Internal.AsyncCallBase`2::get_SendCompletionCallback()
// 0x00000168 System.Void Grpc.Core.Internal.AsyncCallBase`2::Grpc.Core.Internal.ISendCompletionCallback.OnSendCompletion(System.Boolean)
// 0x00000169 Grpc.Core.Internal.IReceivedMessageCallback Grpc.Core.Internal.AsyncCallBase`2::get_ReceivedMessageCallback()
// 0x0000016A System.Void Grpc.Core.Internal.AsyncCallBase`2::Grpc.Core.Internal.IReceivedMessageCallback.OnReceivedMessage(System.Boolean,Grpc.Core.Internal.IBufferReader)
// 0x0000016B System.Threading.CancellationTokenRegistration Grpc.Core.Internal.AsyncCallBase`2::RegisterCancellationCallbackForToken(System.Threading.CancellationToken)
// 0x0000016C System.Void Grpc.Core.Internal.AsyncCallBase`2::.cctor()
// 0x0000016D System.Void Grpc.Core.Internal.AsyncCallBase`2/<>c::.cctor()
// 0x0000016E System.Void Grpc.Core.Internal.AsyncCallBase`2/<>c::.ctor()
// 0x0000016F System.Void Grpc.Core.Internal.AsyncCallBase`2/<>c::<.cctor>b__46_0(System.Object)
// 0x00000170 System.Void Grpc.Core.Internal.AsyncCallServer`2::.ctor(System.Action`2<TResponse,Grpc.Core.SerializationContext>,System.Func`2<Grpc.Core.DeserializationContext,TRequest>,Grpc.Core.Server)
// 0x00000171 System.Void Grpc.Core.Internal.AsyncCallServer`2::Initialize(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle)
// 0x00000172 System.Void Grpc.Core.Internal.AsyncCallServer`2::InitializeForTesting(Grpc.Core.Internal.INativeCall)
// 0x00000173 System.Threading.Tasks.Task Grpc.Core.Internal.AsyncCallServer`2::ServerSideCallAsync()
// 0x00000174 System.Threading.Tasks.Task Grpc.Core.Internal.AsyncCallServer`2::SendMessageAsync(TResponse,Grpc.Core.WriteFlags)
// 0x00000175 System.Threading.Tasks.Task`1<TRequest> Grpc.Core.Internal.AsyncCallServer`2::ReadMessageAsync()
// 0x00000176 System.Threading.Tasks.Task Grpc.Core.Internal.AsyncCallServer`2::SendInitialMetadataAsync(Grpc.Core.Metadata)
// 0x00000177 System.Threading.Tasks.Task Grpc.Core.Internal.AsyncCallServer`2::SendStatusFromServerAsync(Grpc.Core.Status,Grpc.Core.Metadata,System.Nullable`1<Grpc.Core.Internal.AsyncCallServer`2/ResponseWithFlags<TRequest,TResponse>>)
// 0x00000178 System.Threading.CancellationToken Grpc.Core.Internal.AsyncCallServer`2::get_CancellationToken()
// 0x00000179 System.String Grpc.Core.Internal.AsyncCallServer`2::get_Peer()
// 0x0000017A System.Boolean Grpc.Core.Internal.AsyncCallServer`2::get_IsClient()
// 0x0000017B System.Exception Grpc.Core.Internal.AsyncCallServer`2::GetRpcExceptionClientOnly()
// 0x0000017C System.Void Grpc.Core.Internal.AsyncCallServer`2::OnAfterReleaseResourcesLocked()
// 0x0000017D System.Threading.Tasks.Task Grpc.Core.Internal.AsyncCallServer`2::CheckSendAllowedOrEarlyResult()
// 0x0000017E System.Void Grpc.Core.Internal.AsyncCallServer`2::HandleFinishedServerside(System.Boolean,System.Boolean)
// 0x0000017F Grpc.Core.Internal.IReceivedCloseOnServerCallback Grpc.Core.Internal.AsyncCallServer`2::get_ReceiveCloseOnServerCallback()
// 0x00000180 System.Void Grpc.Core.Internal.AsyncCallServer`2::Grpc.Core.Internal.IReceivedCloseOnServerCallback.OnReceivedCloseOnServer(System.Boolean,System.Boolean)
// 0x00000181 Grpc.Core.Internal.ISendStatusFromServerCompletionCallback Grpc.Core.Internal.AsyncCallServer`2::get_SendStatusFromServerCompletionCallback()
// 0x00000182 System.Void Grpc.Core.Internal.AsyncCallServer`2::Grpc.Core.Internal.ISendStatusFromServerCompletionCallback.OnSendStatusFromServerCompletion(System.Boolean)
// 0x00000183 System.Void Grpc.Core.Internal.AsyncCallServer`2/ResponseWithFlags::.ctor(TResponse,Grpc.Core.WriteFlags)
// 0x00000184 TResponse Grpc.Core.Internal.AsyncCallServer`2/ResponseWithFlags::get_Response()
// 0x00000185 Grpc.Core.WriteFlags Grpc.Core.Internal.AsyncCallServer`2/ResponseWithFlags::get_WriteFlags()
// 0x00000186 System.Void Grpc.Core.Internal.AtomicCounter::.ctor(System.Int64)
extern void AtomicCounter__ctor_mB59F75A9995C6EB1C8068DD1A172F435CEC78574 (void);
// 0x00000187 System.Int64 Grpc.Core.Internal.AtomicCounter::Increment()
extern void AtomicCounter_Increment_mC1DBB724EE3AE4D15AB04F7CFD7E34A37A5CEB42 (void);
// 0x00000188 System.Void Grpc.Core.Internal.AtomicCounter::IncrementIfNonzero(System.Boolean&)
extern void AtomicCounter_IncrementIfNonzero_mC27377499F1CDA8430157125F25DD82EF60D8FA1 (void);
// 0x00000189 System.Int64 Grpc.Core.Internal.AtomicCounter::Decrement()
extern void AtomicCounter_Decrement_m26FC7B346A10B0D42D377D1F9434FE46F857CEA0 (void);
// 0x0000018A System.Int64 Grpc.Core.Internal.AtomicCounter::get_Count()
extern void AtomicCounter_get_Count_mC4B0E644F4B54880740CED38E34D3C592302424C (void);
// 0x0000018B System.Void Grpc.Core.Internal.AuthContextSafeHandle::.ctor()
extern void AuthContextSafeHandle__ctor_mDDF8431E0BED0F3C712C41770754A2F41B9EADB2 (void);
// 0x0000018C Grpc.Core.AuthContext Grpc.Core.Internal.AuthContextSafeHandle::ToAuthContext()
extern void AuthContextSafeHandle_ToAuthContext_mCB95EB32475304E362AF12553D2DABF2DFF1E5F9 (void);
// 0x0000018D System.Boolean Grpc.Core.Internal.AuthContextSafeHandle::ReleaseHandle()
extern void AuthContextSafeHandle_ReleaseHandle_m5E8B2996440F08E713B8C6F4B3008B2B3BDF46E2 (void);
// 0x0000018E Grpc.Core.AuthProperty Grpc.Core.Internal.AuthContextSafeHandle::PtrToAuthProperty(System.IntPtr)
extern void AuthContextSafeHandle_PtrToAuthProperty_mC8E21D7FCDB50760BB8EF77A833CA1751C098980 (void);
// 0x0000018F System.Void Grpc.Core.Internal.AuthContextSafeHandle::.cctor()
extern void AuthContextSafeHandle__cctor_m34DC11A6B337A7066B94B792767A9E3545F47E01 (void);
// 0x00000190 System.Void Grpc.Core.Internal.IOpCompletionCallback::OnComplete(System.Boolean)
// 0x00000191 System.Nullable`1<System.Int32> Grpc.Core.Internal.IBufferReader::get_TotalLength()
// 0x00000192 System.Boolean Grpc.Core.Internal.IBufferReader::TryGetNextSlice(Grpc.Core.Internal.Slice&)
// 0x00000193 System.Void Grpc.Core.Internal.BatchContextSafeHandle::.ctor()
extern void BatchContextSafeHandle__ctor_mB5E0087B0EF6A7DC12ADF0755012D9A90E7D12B7 (void);
// 0x00000194 Grpc.Core.Internal.BatchContextSafeHandle Grpc.Core.Internal.BatchContextSafeHandle::Create()
extern void BatchContextSafeHandle_Create_mCDF2F77A423DD402CE399695E50A77D5FF57EBC3 (void);
// 0x00000195 System.IntPtr Grpc.Core.Internal.BatchContextSafeHandle::get_Handle()
extern void BatchContextSafeHandle_get_Handle_mE5B63ADA0D12DC32B16746D774A2DC9C747BEB72 (void);
// 0x00000196 System.Void Grpc.Core.Internal.BatchContextSafeHandle::SetReturnToPoolAction(System.Action`1<Grpc.Core.Internal.BatchContextSafeHandle>)
extern void BatchContextSafeHandle_SetReturnToPoolAction_mC7BB2DECFEF3EF1357F7CBBFF5C4C0DB1754A01E (void);
// 0x00000197 System.Void Grpc.Core.Internal.BatchContextSafeHandle::SetCompletionCallback(Grpc.Core.Internal.BatchCompletionDelegate,System.Object)
extern void BatchContextSafeHandle_SetCompletionCallback_m13DB8778447C7A51CADD82D29249CD65E6E012F4 (void);
// 0x00000198 Grpc.Core.Metadata Grpc.Core.Internal.BatchContextSafeHandle::GetReceivedInitialMetadata()
extern void BatchContextSafeHandle_GetReceivedInitialMetadata_mC181A87AF1FFDDA2D0D7D460DE9766C902A692C8 (void);
// 0x00000199 Grpc.Core.Internal.ClientSideStatus Grpc.Core.Internal.BatchContextSafeHandle::GetReceivedStatusOnClient()
extern void BatchContextSafeHandle_GetReceivedStatusOnClient_m9768E1E0872422E79981F32F836886C88D80223D (void);
// 0x0000019A Grpc.Core.Internal.IBufferReader Grpc.Core.Internal.BatchContextSafeHandle::GetReceivedMessageReader()
extern void BatchContextSafeHandle_GetReceivedMessageReader_mD79B4750085987E40B482D4590335C529325A2F4 (void);
// 0x0000019B System.Boolean Grpc.Core.Internal.BatchContextSafeHandle::GetReceivedCloseOnServerCancelled()
extern void BatchContextSafeHandle_GetReceivedCloseOnServerCancelled_m77730231600F9E41CEBD47F308904BE77881FEC1 (void);
// 0x0000019C System.Void Grpc.Core.Internal.BatchContextSafeHandle::Recycle()
extern void BatchContextSafeHandle_Recycle_m407B161B879ED079A121ECF17304808124572A7A (void);
// 0x0000019D System.Boolean Grpc.Core.Internal.BatchContextSafeHandle::ReleaseHandle()
extern void BatchContextSafeHandle_ReleaseHandle_m1A4247B5809EE4178EDEEC28C73F97D282D548BB (void);
// 0x0000019E System.Void Grpc.Core.Internal.BatchContextSafeHandle::Grpc.Core.Internal.IOpCompletionCallback.OnComplete(System.Boolean)
extern void BatchContextSafeHandle_Grpc_Core_Internal_IOpCompletionCallback_OnComplete_m7081550B6BDCC7CD063C0951473FBA54E5C059C7 (void);
// 0x0000019F System.Nullable`1<System.Int32> Grpc.Core.Internal.BatchContextSafeHandle::Grpc.Core.Internal.IBufferReader.get_TotalLength()
extern void BatchContextSafeHandle_Grpc_Core_Internal_IBufferReader_get_TotalLength_m452CC816725318FACFA2575FF913B07BA5C018D5 (void);
// 0x000001A0 System.Boolean Grpc.Core.Internal.BatchContextSafeHandle::Grpc.Core.Internal.IBufferReader.TryGetNextSlice(Grpc.Core.Internal.Slice&)
extern void BatchContextSafeHandle_Grpc_Core_Internal_IBufferReader_TryGetNextSlice_m3E1182C5A5DAD42FD10B6692147D645D7CAEDC74 (void);
// 0x000001A1 System.Void Grpc.Core.Internal.BatchContextSafeHandle::.cctor()
extern void BatchContextSafeHandle__cctor_mFA5A872511C2B726FE055882437DA34FBD451A36 (void);
// 0x000001A2 System.Void Grpc.Core.Internal.BatchContextSafeHandle/CompletionCallbackData::.ctor(Grpc.Core.Internal.BatchCompletionDelegate,System.Object)
extern void CompletionCallbackData__ctor_mF1FBC5A0FB0D1375997220DA2577D1685997ED10 (void);
// 0x000001A3 Grpc.Core.Internal.BatchCompletionDelegate Grpc.Core.Internal.BatchContextSafeHandle/CompletionCallbackData::get_Callback()
extern void CompletionCallbackData_get_Callback_mE9D1D850F417C74757E750ABE4397CF353457368 (void);
// 0x000001A4 System.Object Grpc.Core.Internal.BatchContextSafeHandle/CompletionCallbackData::get_State()
extern void CompletionCallbackData_get_State_m7847C8FEC9A38CB7D0D84F79770A94840EAB2C63 (void);
// 0x000001A5 System.Void Grpc.Core.Internal.CallCredentialsSafeHandle::.ctor()
extern void CallCredentialsSafeHandle__ctor_mCA696BC953128D083E65396234A6E1988436849B (void);
// 0x000001A6 Grpc.Core.Internal.CallCredentialsSafeHandle Grpc.Core.Internal.CallCredentialsSafeHandle::CreateComposite(Grpc.Core.Internal.CallCredentialsSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void CallCredentialsSafeHandle_CreateComposite_m0B4399022829DE19B52B4E5DA022700B85A1F4DE (void);
// 0x000001A7 System.Boolean Grpc.Core.Internal.CallCredentialsSafeHandle::ReleaseHandle()
extern void CallCredentialsSafeHandle_ReleaseHandle_m5C0D393FDDC0A5EDE08B8448C89D0459D483B525 (void);
// 0x000001A8 System.Void Grpc.Core.Internal.CallCredentialsSafeHandle::.cctor()
extern void CallCredentialsSafeHandle__cctor_m6E380FB7CC692814B73E3F7F9EA15021536A21F8 (void);
// 0x000001A9 System.Void Grpc.Core.Internal.CallErrorExtensions::CheckOk(Grpc.Core.Internal.CallError)
extern void CallErrorExtensions_CheckOk_m00F1A988C38E5EB9E04B1B3E0716E57B0819CE6D (void);
// 0x000001AA Grpc.Core.CallOptions Grpc.Core.Internal.CallOptionsExtensions::Normalize(Grpc.Core.CallOptions)
extern void CallOptionsExtensions_Normalize_mE16E0CA71F8144041FCA5E300F28BDF53E1FFFF7 (void);
// 0x000001AB System.Void Grpc.Core.Internal.CallSafeHandle::.ctor()
extern void CallSafeHandle__ctor_m83D2C4FA14E39AD36BC195F8CD2E0BA2E168D35D (void);
// 0x000001AC System.Void Grpc.Core.Internal.CallSafeHandle::Initialize(Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void CallSafeHandle_Initialize_m0105254DA6C1013D1DA94137DAAD23A6F3D4EE3F (void);
// 0x000001AD System.Void Grpc.Core.Internal.CallSafeHandle::SetCredentials(Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void CallSafeHandle_SetCredentials_m5EE6C59934F58CEBEA6CDE5B0C5A8EA43472964B (void);
// 0x000001AE System.Void Grpc.Core.Internal.CallSafeHandle::StartUnary(Grpc.Core.Internal.IUnaryResponseClientCallback,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void CallSafeHandle_StartUnary_m04674D06B2F52EA0F1B6847B9A44AF93EB1DF4D7 (void);
// 0x000001AF System.Void Grpc.Core.Internal.CallSafeHandle::StartUnary(Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void CallSafeHandle_StartUnary_mC4545A913C20892B09A23514116A0AE2EB4C5ED9 (void);
// 0x000001B0 System.Void Grpc.Core.Internal.CallSafeHandle::StartClientStreaming(Grpc.Core.Internal.IUnaryResponseClientCallback,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void CallSafeHandle_StartClientStreaming_m7168144E4D007F33C6DEA6C5FC2E1169B641BA34 (void);
// 0x000001B1 System.Void Grpc.Core.Internal.CallSafeHandle::StartServerStreaming(Grpc.Core.Internal.IReceivedStatusOnClientCallback,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void CallSafeHandle_StartServerStreaming_mCAE02EBDF004B7640FE0FE1495770F43DE25496B (void);
// 0x000001B2 System.Void Grpc.Core.Internal.CallSafeHandle::StartDuplexStreaming(Grpc.Core.Internal.IReceivedStatusOnClientCallback,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void CallSafeHandle_StartDuplexStreaming_mD53F8C29D51FC676AF8E5C74A1D0EFCA7ABB0356 (void);
// 0x000001B3 System.Void Grpc.Core.Internal.CallSafeHandle::StartSendMessage(Grpc.Core.Internal.ISendCompletionCallback,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,System.Boolean)
extern void CallSafeHandle_StartSendMessage_mD6FA93EA52A153B4CE940D0D8FD70F5C5B732F0F (void);
// 0x000001B4 System.Void Grpc.Core.Internal.CallSafeHandle::StartSendCloseFromClient(Grpc.Core.Internal.ISendCompletionCallback)
extern void CallSafeHandle_StartSendCloseFromClient_m47635CA7473866233CFD003C4229FFD43515A1AA (void);
// 0x000001B5 System.Void Grpc.Core.Internal.CallSafeHandle::StartSendStatusFromServer(Grpc.Core.Internal.ISendStatusFromServerCompletionCallback,Grpc.Core.Status,Grpc.Core.Internal.MetadataArraySafeHandle,System.Boolean,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags)
extern void CallSafeHandle_StartSendStatusFromServer_m67D25DFA48F92A25D80D63EC42686127CAF87CE2 (void);
// 0x000001B6 System.Void Grpc.Core.Internal.CallSafeHandle::StartReceiveMessage(Grpc.Core.Internal.IReceivedMessageCallback)
extern void CallSafeHandle_StartReceiveMessage_m0FCC7AB4FA366615BF90FD6FD914345DCCECF40E (void);
// 0x000001B7 System.Void Grpc.Core.Internal.CallSafeHandle::StartReceiveInitialMetadata(Grpc.Core.Internal.IReceivedResponseHeadersCallback)
extern void CallSafeHandle_StartReceiveInitialMetadata_m8A30FCCA22B48B7691633C41A07D07F4384D890B (void);
// 0x000001B8 System.Void Grpc.Core.Internal.CallSafeHandle::StartServerSide(Grpc.Core.Internal.IReceivedCloseOnServerCallback)
extern void CallSafeHandle_StartServerSide_m62FF925317EC84878E8E77405256EB6A7A26E686 (void);
// 0x000001B9 System.Void Grpc.Core.Internal.CallSafeHandle::StartSendInitialMetadata(Grpc.Core.Internal.ISendCompletionCallback,Grpc.Core.Internal.MetadataArraySafeHandle)
extern void CallSafeHandle_StartSendInitialMetadata_mB35B31CBB5C0D14B564B13F1ED18C515B499989E (void);
// 0x000001BA System.Void Grpc.Core.Internal.CallSafeHandle::Cancel()
extern void CallSafeHandle_Cancel_mF822010E915DABD813739ECEA3C012B1CD558885 (void);
// 0x000001BB System.Void Grpc.Core.Internal.CallSafeHandle::CancelWithStatus(Grpc.Core.Status)
extern void CallSafeHandle_CancelWithStatus_mE2E27B5C2AB9E96EB47DA6F72DB5CDA11D9A96ED (void);
// 0x000001BC System.String Grpc.Core.Internal.CallSafeHandle::GetPeer()
extern void CallSafeHandle_GetPeer_m8CCADA17C3C121BDDE42827FCC10D9A6BD1996D4 (void);
// 0x000001BD Grpc.Core.Internal.AuthContextSafeHandle Grpc.Core.Internal.CallSafeHandle::GetAuthContext()
extern void CallSafeHandle_GetAuthContext_mC740570C41EACFB417AF96F8957814D4491115E8 (void);
// 0x000001BE System.Boolean Grpc.Core.Internal.CallSafeHandle::ReleaseHandle()
extern void CallSafeHandle_ReleaseHandle_mD7C2629249C9D7E8D79724ED0BEF9D0631034D8C (void);
// 0x000001BF System.UInt32 Grpc.Core.Internal.CallSafeHandle::GetFlags(System.Boolean)
extern void CallSafeHandle_GetFlags_m7040C283B6EF761A7B7BD340FABDDAA8B7917419 (void);
// 0x000001C0 Grpc.Core.Internal.CallSafeHandle Grpc.Core.Internal.CallSafeHandle::CreateFake(System.IntPtr,Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void CallSafeHandle_CreateFake_mB368265AB4A8F4A4EDFCC35D548843E6F506F01D (void);
// 0x000001C1 System.Void Grpc.Core.Internal.CallSafeHandle::.cctor()
extern void CallSafeHandle__cctor_m09085D6862B20CAE070A86EBD6608FCF3E242856 (void);
// 0x000001C2 System.Void Grpc.Core.Internal.CallSafeHandle/<>c::.cctor()
extern void U3CU3Ec__cctor_m81DD55164ABE8A4C2C746AEC56E277F40827A13A (void);
// 0x000001C3 System.Void Grpc.Core.Internal.CallSafeHandle/<>c::.ctor()
extern void U3CU3Ec__ctor_m1637E7EA025B77D71D1CFA4E00F48294932FB1B1 (void);
// 0x000001C4 System.Void Grpc.Core.Internal.CallSafeHandle/<>c::<.cctor>b__33_0(System.Boolean,Grpc.Core.Internal.BatchContextSafeHandle,System.Object)
extern void U3CU3Ec_U3C_cctorU3Eb__33_0_mEFAA50D897EC15A7D5EE7D615C007CE257928936 (void);
// 0x000001C5 System.Void Grpc.Core.Internal.CallSafeHandle/<>c::<.cctor>b__33_1(System.Boolean,Grpc.Core.Internal.BatchContextSafeHandle,System.Object)
extern void U3CU3Ec_U3C_cctorU3Eb__33_1_m3956F8ABBAB06A9B17FCF7B2D059E213FDEFDC58 (void);
// 0x000001C6 System.Void Grpc.Core.Internal.CallSafeHandle/<>c::<.cctor>b__33_2(System.Boolean,Grpc.Core.Internal.BatchContextSafeHandle,System.Object)
extern void U3CU3Ec_U3C_cctorU3Eb__33_2_mB8229BF5267DC630813231311D55C20BE28D4746 (void);
// 0x000001C7 System.Void Grpc.Core.Internal.CallSafeHandle/<>c::<.cctor>b__33_3(System.Boolean,Grpc.Core.Internal.BatchContextSafeHandle,System.Object)
extern void U3CU3Ec_U3C_cctorU3Eb__33_3_m7E96EDF697352F179E630B22980B99282A8D638A (void);
// 0x000001C8 System.Void Grpc.Core.Internal.CallSafeHandle/<>c::<.cctor>b__33_4(System.Boolean,Grpc.Core.Internal.BatchContextSafeHandle,System.Object)
extern void U3CU3Ec_U3C_cctorU3Eb__33_4_mCA33FD3348E15701E0EEA0AE8DB24E02CDAE5ADE (void);
// 0x000001C9 System.Void Grpc.Core.Internal.CallSafeHandle/<>c::<.cctor>b__33_5(System.Boolean,Grpc.Core.Internal.BatchContextSafeHandle,System.Object)
extern void U3CU3Ec_U3C_cctorU3Eb__33_5_m7D8C87DC00E5EBD26ABDA8F2E895779C0B5CE460 (void);
// 0x000001CA System.Void Grpc.Core.Internal.CallSafeHandle/<>c::<.cctor>b__33_6(System.Boolean,Grpc.Core.Internal.BatchContextSafeHandle,System.Object)
extern void U3CU3Ec_U3C_cctorU3Eb__33_6_m44C9643FD41B4472E249FD48C3AF28AB850C5E7C (void);
// 0x000001CB System.Void Grpc.Core.Internal.ChannelArgsSafeHandle::.ctor()
extern void ChannelArgsSafeHandle__ctor_m806E42DBD18FE5DFC73026CDD9D2365B75B7982E (void);
// 0x000001CC Grpc.Core.Internal.ChannelArgsSafeHandle Grpc.Core.Internal.ChannelArgsSafeHandle::CreateNull()
extern void ChannelArgsSafeHandle_CreateNull_m78EEFE08AEE7C9FAC6EA3BD69E2F6D53ACFECDB6 (void);
// 0x000001CD Grpc.Core.Internal.ChannelArgsSafeHandle Grpc.Core.Internal.ChannelArgsSafeHandle::Create(System.Int32)
extern void ChannelArgsSafeHandle_Create_m6FDDD46A22E96B12C1CB186490E7CADE0F34D6A1 (void);
// 0x000001CE System.Void Grpc.Core.Internal.ChannelArgsSafeHandle::SetString(System.Int32,System.String,System.String)
extern void ChannelArgsSafeHandle_SetString_m31ADFB94DAEB47F7298C50A4BC3F7F2CC0BCA830 (void);
// 0x000001CF System.Void Grpc.Core.Internal.ChannelArgsSafeHandle::SetInteger(System.Int32,System.String,System.Int32)
extern void ChannelArgsSafeHandle_SetInteger_m787375F98E55184740121C54054569F0C59BE0DB (void);
// 0x000001D0 System.Boolean Grpc.Core.Internal.ChannelArgsSafeHandle::ReleaseHandle()
extern void ChannelArgsSafeHandle_ReleaseHandle_mC80132780D829401A0B1141A0C51A52D5A23DF9C (void);
// 0x000001D1 System.Void Grpc.Core.Internal.ChannelArgsSafeHandle::.cctor()
extern void ChannelArgsSafeHandle__cctor_m1902AB84A11BFD1309A7B74AE97567440AD65C05 (void);
// 0x000001D2 System.Void Grpc.Core.Internal.ChannelCredentialsSafeHandle::.ctor()
extern void ChannelCredentialsSafeHandle__ctor_m22B1465BA0CFC1CF609743D3E9DF4217155740D2 (void);
// 0x000001D3 Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.ChannelCredentialsSafeHandle::CreateNullCredentials()
extern void ChannelCredentialsSafeHandle_CreateNullCredentials_mFEFBCCEB6BF2F9980C9EE70AD7C4F92B3DCD3A38 (void);
// 0x000001D4 Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.ChannelCredentialsSafeHandle::CreateSslCredentials(System.String,Grpc.Core.KeyCertificatePair,System.IntPtr)
extern void ChannelCredentialsSafeHandle_CreateSslCredentials_m3019FB8C77A6B3FBE50F17DF692A58EF655078D7 (void);
// 0x000001D5 Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.ChannelCredentialsSafeHandle::CreateComposite(Grpc.Core.Internal.ChannelCredentialsSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void ChannelCredentialsSafeHandle_CreateComposite_m50D7D4BC6CCC31F6ACAD572D27684829FA38C5E3 (void);
// 0x000001D6 System.Boolean Grpc.Core.Internal.ChannelCredentialsSafeHandle::ReleaseHandle()
extern void ChannelCredentialsSafeHandle_ReleaseHandle_m52C2D91FB6B873D7B07590AB5E391BBC32648208 (void);
// 0x000001D7 System.Void Grpc.Core.Internal.ChannelCredentialsSafeHandle::.cctor()
extern void ChannelCredentialsSafeHandle__cctor_m59BCC38EE6ED5AD9329B4A989E2FF05B24799EE6 (void);
// 0x000001D8 System.Void Grpc.Core.Internal.ChannelSafeHandle::.ctor()
extern void ChannelSafeHandle__ctor_m748FDCF1956BFED97C7486C022917BD140C19457 (void);
// 0x000001D9 Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Internal.ChannelSafeHandle::CreateInsecure(System.String,Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void ChannelSafeHandle_CreateInsecure_m75BEB17C81A131118320FD8F966A736C0F19004C (void);
// 0x000001DA Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Internal.ChannelSafeHandle::CreateSecure(Grpc.Core.Internal.ChannelCredentialsSafeHandle,System.String,Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void ChannelSafeHandle_CreateSecure_mD16F4CE2A193A8D5D4127C8941B935501DDE4F43 (void);
// 0x000001DB Grpc.Core.Internal.CallSafeHandle Grpc.Core.Internal.ChannelSafeHandle::CreateCall(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.ContextPropagationFlags,Grpc.Core.Internal.CompletionQueueSafeHandle,System.String,System.String,Grpc.Core.Internal.Timespec,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void ChannelSafeHandle_CreateCall_m6CBF53F853E4D0C63997E3D11EFCAB20053EB51A (void);
// 0x000001DC Grpc.Core.ChannelState Grpc.Core.Internal.ChannelSafeHandle::CheckConnectivityState(System.Boolean)
extern void ChannelSafeHandle_CheckConnectivityState_mD50E178FE2BB354B474DA139B8FCD467A9B867F6 (void);
// 0x000001DD System.Void Grpc.Core.Internal.ChannelSafeHandle::WatchConnectivityState(Grpc.Core.ChannelState,Grpc.Core.Internal.Timespec,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.BatchCompletionDelegate,System.Object)
extern void ChannelSafeHandle_WatchConnectivityState_m0E344BD19C03047F93B6720E711593443C5427E8 (void);
// 0x000001DE System.String Grpc.Core.Internal.ChannelSafeHandle::GetTarget()
extern void ChannelSafeHandle_GetTarget_m5E3546F8AE58E38DBAE2EB6C1E004584E09609FF (void);
// 0x000001DF System.Boolean Grpc.Core.Internal.ChannelSafeHandle::ReleaseHandle()
extern void ChannelSafeHandle_ReleaseHandle_m6310FED59896D88CBCAB902618923C414CD48044 (void);
// 0x000001E0 System.Void Grpc.Core.Internal.ChannelSafeHandle::.cctor()
extern void ChannelSafeHandle__cctor_mC1FA857C3F6904AE9F3A5806A162F78FE2E8BFE6 (void);
// 0x000001E1 System.Void Grpc.Core.Internal.ClientRequestStream`2::.ctor(Grpc.Core.Internal.AsyncCall`2<TRequest,TResponse>)
// 0x000001E2 System.Threading.Tasks.Task Grpc.Core.Internal.ClientRequestStream`2::WriteAsync(TRequest)
// 0x000001E3 System.Threading.Tasks.Task Grpc.Core.Internal.ClientRequestStream`2::CompleteAsync()
// 0x000001E4 Grpc.Core.WriteOptions Grpc.Core.Internal.ClientRequestStream`2::get_WriteOptions()
// 0x000001E5 System.Void Grpc.Core.Internal.ClientRequestStream`2::set_WriteOptions(Grpc.Core.WriteOptions)
// 0x000001E6 Grpc.Core.WriteFlags Grpc.Core.Internal.ClientRequestStream`2::GetWriteFlags()
// 0x000001E7 System.Void Grpc.Core.Internal.ClientResponseStream`2::.ctor(Grpc.Core.Internal.AsyncCall`2<TRequest,TResponse>)
// 0x000001E8 TResponse Grpc.Core.Internal.ClientResponseStream`2::get_Current()
// 0x000001E9 System.Threading.Tasks.Task`1<System.Boolean> Grpc.Core.Internal.ClientResponseStream`2::MoveNext(System.Threading.CancellationToken)
// 0x000001EA System.Void Grpc.Core.Internal.ClientResponseStream`2::Dispose()
// 0x000001EB System.Void Grpc.Core.Internal.ClientResponseStream`2/<MoveNext>d__5::MoveNext()
// 0x000001EC System.Void Grpc.Core.Internal.ClientResponseStream`2/<MoveNext>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
// 0x000001ED System.Void Grpc.Core.Internal.ClientSideStatus::.ctor(Grpc.Core.Status,Grpc.Core.Metadata)
extern void ClientSideStatus__ctor_mD3D8F5CD8EEBC7778D9296EA098F9055799B7277 (void);
// 0x000001EE Grpc.Core.Status Grpc.Core.Internal.ClientSideStatus::get_Status()
extern void ClientSideStatus_get_Status_m3B8B7A5695BEC97FFE287DE9ECA81DB6FD198D05 (void);
// 0x000001EF Grpc.Core.Metadata Grpc.Core.Internal.ClientSideStatus::get_Trailers()
extern void ClientSideStatus_get_Trailers_m6F448A155F2D82A4F35E4DBF65DE0164A597EDA6 (void);
// 0x000001F0 Grpc.Core.Internal.CommonPlatformDetection/OSKind Grpc.Core.Internal.CommonPlatformDetection::GetOSKind()
extern void CommonPlatformDetection_GetOSKind_mEBA2C90300F862A2ADBAD1629742E2CDA262AD36 (void);
// 0x000001F1 Grpc.Core.Internal.CommonPlatformDetection/CpuArchitecture Grpc.Core.Internal.CommonPlatformDetection::GetProcessArchitecture()
extern void CommonPlatformDetection_GetProcessArchitecture_m7390A161AFC6853439A93825A1EFB01B183712CB (void);
// 0x000001F2 System.Int32 Grpc.Core.Internal.CommonPlatformDetection::uname(System.IntPtr)
extern void CommonPlatformDetection_uname_m9FAB53F17753100615DD71E302C1F07A1A79D273 (void);
// 0x000001F3 System.String Grpc.Core.Internal.CommonPlatformDetection::GetUname()
extern void CommonPlatformDetection_GetUname_mED2C10036F585AFFCB55709DF7033F6895907B59 (void);
// 0x000001F4 System.Int32 Grpc.Core.Internal.CompletionQueueEvent::get_NativeSize()
extern void CompletionQueueEvent_get_NativeSize_m592EA13B36F8D6FC594B2E7F1C3709F618803DDA (void);
// 0x000001F5 System.Void Grpc.Core.Internal.CompletionQueueEvent::.cctor()
extern void CompletionQueueEvent__cctor_m4DC4FFBAE370E0DB294F4CDB2F491C8E19D08DA7 (void);
// 0x000001F6 System.Void Grpc.Core.Internal.CompletionQueueSafeHandle::.ctor()
extern void CompletionQueueSafeHandle__ctor_m5A84C1876FEB10756EF06A4E958B208DDCE23D48 (void);
// 0x000001F7 Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.Internal.CompletionQueueSafeHandle::CreateSync()
extern void CompletionQueueSafeHandle_CreateSync_m59FB6D4252D7C4365EEE136B49EF22EE8E0226E7 (void);
// 0x000001F8 Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.Internal.CompletionQueueSafeHandle::CreateAsync(Grpc.Core.Internal.CompletionRegistry)
extern void CompletionQueueSafeHandle_CreateAsync_mC304C63112972875A58AE69D63758D1446EEA5C1 (void);
// 0x000001F9 Grpc.Core.Internal.CompletionQueueEvent Grpc.Core.Internal.CompletionQueueSafeHandle::Next()
extern void CompletionQueueSafeHandle_Next_mA6DF243A9FB872EEBB006066DC6778DCC78587A3 (void);
// 0x000001FA Grpc.Core.Internal.CompletionQueueEvent Grpc.Core.Internal.CompletionQueueSafeHandle::Pluck(System.IntPtr)
extern void CompletionQueueSafeHandle_Pluck_m7B71A4F5EE3578EC3FA1557A6C3BD954752BAD6D (void);
// 0x000001FB Grpc.Core.Internal.CompletionQueueSafeHandle/UsageScope Grpc.Core.Internal.CompletionQueueSafeHandle::NewScope()
extern void CompletionQueueSafeHandle_NewScope_m443A008B5B4320332C147651952FB8BE7FA6A17E (void);
// 0x000001FC System.Void Grpc.Core.Internal.CompletionQueueSafeHandle::Shutdown()
extern void CompletionQueueSafeHandle_Shutdown_mEDFD3D47778F1C2E2BA049BFC7CD166112C3548E (void);
// 0x000001FD Grpc.Core.Internal.CompletionRegistry Grpc.Core.Internal.CompletionQueueSafeHandle::get_CompletionRegistry()
extern void CompletionQueueSafeHandle_get_CompletionRegistry_m4FA73CF5AF68A4C1ED914E1134AD75E852F4FD9F (void);
// 0x000001FE System.Boolean Grpc.Core.Internal.CompletionQueueSafeHandle::ReleaseHandle()
extern void CompletionQueueSafeHandle_ReleaseHandle_mBD95586583385517D9A30ECE2BA61076CD34B2D0 (void);
// 0x000001FF System.Void Grpc.Core.Internal.CompletionQueueSafeHandle::DecrementShutdownRefcount()
extern void CompletionQueueSafeHandle_DecrementShutdownRefcount_m21553711004C8839EECDB22D08074170E9A00953 (void);
// 0x00000200 System.Void Grpc.Core.Internal.CompletionQueueSafeHandle::BeginOp()
extern void CompletionQueueSafeHandle_BeginOp_m770FC4AA4A51EA6D3A68330AE9520B738F709882 (void);
// 0x00000201 System.Void Grpc.Core.Internal.CompletionQueueSafeHandle::EndOp()
extern void CompletionQueueSafeHandle_EndOp_mAF947F537CF33A453B6E53A79CAB6918D2A29419 (void);
// 0x00000202 System.Void Grpc.Core.Internal.CompletionQueueSafeHandle::.cctor()
extern void CompletionQueueSafeHandle__cctor_m93580560C8A2A7A8FC43CCD4C30FA66DFC4B5064 (void);
// 0x00000203 System.Void Grpc.Core.Internal.CompletionQueueSafeHandle/UsageScope::.ctor(Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void UsageScope__ctor_m3CFA62BE60021B45B003A1E1CA8A678DF55E06F3 (void);
// 0x00000204 System.Void Grpc.Core.Internal.CompletionQueueSafeHandle/UsageScope::Dispose()
extern void UsageScope_Dispose_m349ED08E2339F12E8C2B5003E08F5F0BE2E9BE0D (void);
// 0x00000205 System.Void Grpc.Core.Internal.BatchCompletionDelegate::.ctor(System.Object,System.IntPtr)
extern void BatchCompletionDelegate__ctor_mF106772F2B64FD18D751215C19FAC048613BCD05 (void);
// 0x00000206 System.Void Grpc.Core.Internal.BatchCompletionDelegate::Invoke(System.Boolean,Grpc.Core.Internal.BatchContextSafeHandle,System.Object)
extern void BatchCompletionDelegate_Invoke_m7DF7FD8D4B5C9F673D1779C4CBCE791C6DF254FB (void);
// 0x00000207 System.IAsyncResult Grpc.Core.Internal.BatchCompletionDelegate::BeginInvoke(System.Boolean,Grpc.Core.Internal.BatchContextSafeHandle,System.Object,System.AsyncCallback,System.Object)
extern void BatchCompletionDelegate_BeginInvoke_m722036A1C26550E88FFC129A91575D62A7B93AF5 (void);
// 0x00000208 System.Void Grpc.Core.Internal.BatchCompletionDelegate::EndInvoke(System.IAsyncResult)
extern void BatchCompletionDelegate_EndInvoke_m93CA220DFE777E33923E0B8D78B42C468C1C54FE (void);
// 0x00000209 System.Void Grpc.Core.Internal.RequestCallCompletionDelegate::.ctor(System.Object,System.IntPtr)
extern void RequestCallCompletionDelegate__ctor_m0E64B907556745BC31FDF18B8C682E9836B84C07 (void);
// 0x0000020A System.Void Grpc.Core.Internal.RequestCallCompletionDelegate::Invoke(System.Boolean,Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void RequestCallCompletionDelegate_Invoke_m90B2C1EA10F56D52729641928A625091E759876A (void);
// 0x0000020B System.IAsyncResult Grpc.Core.Internal.RequestCallCompletionDelegate::BeginInvoke(System.Boolean,Grpc.Core.Internal.RequestCallContextSafeHandle,System.AsyncCallback,System.Object)
extern void RequestCallCompletionDelegate_BeginInvoke_m4207654B7F23AC89EFACD0C9D5328FF6F2284721 (void);
// 0x0000020C System.Void Grpc.Core.Internal.RequestCallCompletionDelegate::EndInvoke(System.IAsyncResult)
extern void RequestCallCompletionDelegate_EndInvoke_m2893B001FEB50B6BBDFFBCFE8DA844F4813FD03C (void);
// 0x0000020D System.Void Grpc.Core.Internal.CompletionRegistry::.ctor(Grpc.Core.GrpcEnvironment,System.Func`1<Grpc.Core.Internal.BatchContextSafeHandle>,System.Func`1<Grpc.Core.Internal.RequestCallContextSafeHandle>)
extern void CompletionRegistry__ctor_mC01788D6EDF5733C1F35CD3CCFBAA171466BEC1B (void);
// 0x0000020E System.Void Grpc.Core.Internal.CompletionRegistry::Register(System.IntPtr,Grpc.Core.Internal.IOpCompletionCallback)
extern void CompletionRegistry_Register_m9A1F42BEF9AD4D4B54D046DD72E7F5D57B186162 (void);
// 0x0000020F Grpc.Core.Internal.BatchContextSafeHandle Grpc.Core.Internal.CompletionRegistry::RegisterBatchCompletion(Grpc.Core.Internal.BatchCompletionDelegate,System.Object)
extern void CompletionRegistry_RegisterBatchCompletion_mD747C56FEE7DDF057AB4F13832E2BE8B268C9B86 (void);
// 0x00000210 Grpc.Core.Internal.RequestCallContextSafeHandle Grpc.Core.Internal.CompletionRegistry::RegisterRequestCallCompletion(Grpc.Core.Internal.RequestCallCompletionDelegate)
extern void CompletionRegistry_RegisterRequestCallCompletion_mAEDA7BFE4107841032C6E319BDCAB42BA9AE0520 (void);
// 0x00000211 Grpc.Core.Internal.IOpCompletionCallback Grpc.Core.Internal.CompletionRegistry::Extract(System.IntPtr)
extern void CompletionRegistry_Extract_m4438695DE2FF3994FB5D15726A2636F115B8FE3B (void);
// 0x00000212 System.IntPtr Grpc.Core.Internal.CompletionRegistry::get_LastRegisteredKey()
extern void CompletionRegistry_get_LastRegisteredKey_mE0EB75DBF9C72E3030E98B0351BF6BE787967C70 (void);
// 0x00000213 System.Void Grpc.Core.Internal.CompletionRegistry::.cctor()
extern void CompletionRegistry__cctor_m58CFFB3D37F16D415695937D578149CC1F627D7E (void);
// 0x00000214 System.Boolean Grpc.Core.Internal.CompletionRegistry/IntPtrComparer::Equals(System.IntPtr,System.IntPtr)
extern void IntPtrComparer_Equals_mBF72A9EE62B5544A1180E3ADCA440E3F0765B304 (void);
// 0x00000215 System.Int32 Grpc.Core.Internal.CompletionRegistry/IntPtrComparer::GetHashCode(System.IntPtr)
extern void IntPtrComparer_GetHashCode_mCB4E6163F8EA2402E6431D7A27CC9EAD15E56003 (void);
// 0x00000216 System.Void Grpc.Core.Internal.CompletionRegistry/IntPtrComparer::.ctor()
extern void IntPtrComparer__ctor_m5048C4CF16C30054C9C796767BF1F01FEBED4B9B (void);
// 0x00000217 System.Void Grpc.Core.Internal.ContextPropagationTokenImpl::.ctor(Grpc.Core.Internal.CallSafeHandle,System.DateTime,System.Threading.CancellationToken,Grpc.Core.ContextPropagationOptions)
extern void ContextPropagationTokenImpl__ctor_m4965C6EAAAA0172B797CDED33C5738C47CB0EBEB (void);
// 0x00000218 Grpc.Core.Internal.CallSafeHandle Grpc.Core.Internal.ContextPropagationTokenImpl::get_ParentCall()
extern void ContextPropagationTokenImpl_get_ParentCall_mF9B40A7192C3A23E0E4DAC14C0E8B06C501FAC0C (void);
// 0x00000219 System.DateTime Grpc.Core.Internal.ContextPropagationTokenImpl::get_ParentDeadline()
extern void ContextPropagationTokenImpl_get_ParentDeadline_m4D8FE7C1720A92717E65C91EB9AF57C0F02C677B (void);
// 0x0000021A System.Threading.CancellationToken Grpc.Core.Internal.ContextPropagationTokenImpl::get_ParentCancellationToken()
extern void ContextPropagationTokenImpl_get_ParentCancellationToken_m5F316530DF49F7C9EB7F62D632C5F26F3FCBFF1C (void);
// 0x0000021B Grpc.Core.ContextPropagationOptions Grpc.Core.Internal.ContextPropagationTokenImpl::get_Options()
extern void ContextPropagationTokenImpl_get_Options_m6668D4A98A0F5CB6CCB4A5E8058458FED68E130A (void);
// 0x0000021C Grpc.Core.Internal.ContextPropagationTokenImpl Grpc.Core.Internal.ContextPropagationTokenExtensions::AsImplOrNull(Grpc.Core.ContextPropagationToken)
extern void ContextPropagationTokenExtensions_AsImplOrNull_m5911F5EC8859CF68C39903DF341B43AB0CB4DDB3 (void);
// 0x0000021D System.Void Grpc.Core.Internal.CoreErrorDetailException::.ctor(System.String)
extern void CoreErrorDetailException__ctor_m28B8365A04E7E493D82652961560533D0DE3E7D5 (void);
// 0x0000021E System.Void Grpc.Core.Internal.CStringSafeHandle::.ctor()
extern void CStringSafeHandle__ctor_mBD9927ABE5E20C3F3DAE74430ACF8A270221BC17 (void);
// 0x0000021F System.String Grpc.Core.Internal.CStringSafeHandle::GetValue()
extern void CStringSafeHandle_GetValue_m1D278B3BF7864290FA0DB6FC304A7BFA63203635 (void);
// 0x00000220 System.Boolean Grpc.Core.Internal.CStringSafeHandle::ReleaseHandle()
extern void CStringSafeHandle_ReleaseHandle_m6850FB9650DFEB18767301D4FAA572049AF183F7 (void);
// 0x00000221 System.Void Grpc.Core.Internal.CStringSafeHandle::.cctor()
extern void CStringSafeHandle__cctor_m38B865929A68F48027E6C9F5EBEF109B7278AEE3 (void);
// 0x00000222 System.Void Grpc.Core.Internal.DebugStats::CheckOK()
extern void DebugStats_CheckOK_m3AA4EDEBFDA45B1E6DBE0D32F1CE05BF5E5D6206 (void);
// 0x00000223 System.Void Grpc.Core.Internal.DebugStats::DebugWarning(System.String)
extern void DebugStats_DebugWarning_mA4408EFB3841F4E7C341145290987A5EFAC01D1E (void);
// 0x00000224 System.Void Grpc.Core.Internal.DebugStats::.ctor()
extern void DebugStats__ctor_mAAEBD7D39AB0B9A935DA803324CED0BA4D8A4682 (void);
// 0x00000225 Grpc.Core.Internal.CallCredentialsSafeHandle Grpc.Core.Internal.DefaultCallCredentialsConfigurator::get_NativeCredentials()
extern void DefaultCallCredentialsConfigurator_get_NativeCredentials_mB90C00BC71BE05BBCE1CF0E9FFDA02D5894347A6 (void);
// 0x00000226 System.Void Grpc.Core.Internal.DefaultCallCredentialsConfigurator::SetAsyncAuthInterceptorCredentials(System.Object,Grpc.Core.AsyncAuthInterceptor)
extern void DefaultCallCredentialsConfigurator_SetAsyncAuthInterceptorCredentials_mAEC9E74949EBD06647568F3950E73AC4BCD1AB82 (void);
// 0x00000227 System.Void Grpc.Core.Internal.DefaultCallCredentialsConfigurator::SetCompositeCredentials(System.Object,System.Collections.Generic.IReadOnlyList`1<Grpc.Core.CallCredentials>)
extern void DefaultCallCredentialsConfigurator_SetCompositeCredentials_m74443F8D77A911D2A2D73BA1F38BEF2E2592AA02 (void);
// 0x00000228 Grpc.Core.Internal.CallCredentialsSafeHandle Grpc.Core.Internal.DefaultCallCredentialsConfigurator::CompositeToNativeRecursive(System.Collections.Generic.IReadOnlyList`1<Grpc.Core.CallCredentials>,System.Int32)
extern void DefaultCallCredentialsConfigurator_CompositeToNativeRecursive_m402B165BB3ECB49643C46ACCCBF573035C712ED2 (void);
// 0x00000229 System.Void Grpc.Core.Internal.DefaultCallCredentialsConfigurator::.ctor()
extern void DefaultCallCredentialsConfigurator__ctor_mB2078727CD16C1DB8CF105F007D8CFEB135E7526 (void);
// 0x0000022A Grpc.Core.Internal.CallCredentialsSafeHandle Grpc.Core.Internal.CallCredentialsExtensions::ToNativeCredentials(Grpc.Core.CallCredentials)
extern void CallCredentialsExtensions_ToNativeCredentials_m35B462FD8BE2BB6C50DEB03CDA5249336FDADC9B (void);
// 0x0000022B Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.DefaultChannelCredentialsConfigurator::get_NativeCredentials()
extern void DefaultChannelCredentialsConfigurator_get_NativeCredentials_mE089B36B5582D855C6E5AB4D3E5FE02DE0A0CAC0 (void);
// 0x0000022C System.Void Grpc.Core.Internal.DefaultChannelCredentialsConfigurator::SetInsecureCredentials(System.Object)
extern void DefaultChannelCredentialsConfigurator_SetInsecureCredentials_mE15A46A873EFD9E342DF7AEF4825822267A2B005 (void);
// 0x0000022D System.Void Grpc.Core.Internal.DefaultChannelCredentialsConfigurator::SetSslCredentials(System.Object,System.String,Grpc.Core.KeyCertificatePair,Grpc.Core.VerifyPeerCallback)
extern void DefaultChannelCredentialsConfigurator_SetSslCredentials_m74A804A13E98A0A1678B3369FA2F2F388C80FB96 (void);
// 0x0000022E System.Void Grpc.Core.Internal.DefaultChannelCredentialsConfigurator::SetCompositeCredentials(System.Object,Grpc.Core.ChannelCredentials,Grpc.Core.CallCredentials)
extern void DefaultChannelCredentialsConfigurator_SetCompositeCredentials_m6A1994E91E3321A44FBE961B71A7D6E79253C37E (void);
// 0x0000022F Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.DefaultChannelCredentialsConfigurator::CreateNativeSslCredentials(System.String,Grpc.Core.KeyCertificatePair,Grpc.Core.VerifyPeerCallback)
extern void DefaultChannelCredentialsConfigurator_CreateNativeSslCredentials_m6AFDEAE643B59DA30687E3E667432824AE6BB494 (void);
// 0x00000230 Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.DefaultChannelCredentialsConfigurator::CreateNativeCompositeCredentials(Grpc.Core.ChannelCredentials,Grpc.Core.CallCredentials)
extern void DefaultChannelCredentialsConfigurator_CreateNativeCompositeCredentials_m56D7B4F05465EB411D294083034FEC062BBFBB8F (void);
// 0x00000231 Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.DefaultChannelCredentialsConfigurator::GetOrCreateNativeCredentials(Grpc.Core.ChannelCredentials,System.Func`1<Grpc.Core.Internal.ChannelCredentialsSafeHandle>)
extern void DefaultChannelCredentialsConfigurator_GetOrCreateNativeCredentials_m970C5790669A1D18A53CB369A0461689C89D1A8C (void);
// 0x00000232 System.Void Grpc.Core.Internal.DefaultChannelCredentialsConfigurator::.ctor()
extern void DefaultChannelCredentialsConfigurator__ctor_mBC04E7D4351ADF20A62B725D1B434EC5BF2A5902 (void);
// 0x00000233 System.Void Grpc.Core.Internal.DefaultChannelCredentialsConfigurator::.cctor()
extern void DefaultChannelCredentialsConfigurator__cctor_mF619632B4E9E3C7BD94C2AF28E216010BC142788 (void);
// 0x00000234 System.Void Grpc.Core.Internal.DefaultChannelCredentialsConfigurator/VerifyPeerCallbackRegistration::.ctor(Grpc.Core.VerifyPeerCallback)
extern void VerifyPeerCallbackRegistration__ctor_m42BD369DD7238374134C37C94D330A5488827B4F (void);
// 0x00000235 Grpc.Core.Internal.NativeCallbackRegistration Grpc.Core.Internal.DefaultChannelCredentialsConfigurator/VerifyPeerCallbackRegistration::get_CallbackRegistration()
extern void VerifyPeerCallbackRegistration_get_CallbackRegistration_m15A104C3EF153C15FB6313FCC88012009404D643 (void);
// 0x00000236 System.Int32 Grpc.Core.Internal.DefaultChannelCredentialsConfigurator/VerifyPeerCallbackRegistration::HandleUniversalCallback(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern void VerifyPeerCallbackRegistration_HandleUniversalCallback_mBD73897BDB111218EB25DA868420A76E1B63B702 (void);
// 0x00000237 System.Int32 Grpc.Core.Internal.DefaultChannelCredentialsConfigurator/VerifyPeerCallbackRegistration::VerifyPeerCallbackHandler(System.IntPtr,System.IntPtr,System.Boolean)
extern void VerifyPeerCallbackRegistration_VerifyPeerCallbackHandler_m159D402367B734736AA80A2ED7773785C604E32C (void);
// 0x00000238 System.Void Grpc.Core.Internal.DefaultChannelCredentialsConfigurator/<>c__DisplayClass8_0::.ctor()
extern void U3CU3Ec__DisplayClass8_0__ctor_m244618FCC966F26479493D08FCBABA910A5D8DE0 (void);
// 0x00000239 Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.DefaultChannelCredentialsConfigurator/<>c__DisplayClass8_0::<SetSslCredentials>b__0()
extern void U3CU3Ec__DisplayClass8_0_U3CSetSslCredentialsU3Eb__0_m3D0D6DBA5F818153DED8DC0AA91F840757F5CA37 (void);
// 0x0000023A System.Void Grpc.Core.Internal.DefaultChannelCredentialsConfigurator/<>c__DisplayClass9_0::.ctor()
extern void U3CU3Ec__DisplayClass9_0__ctor_m1E8ACEF5DAC1915FA4ED0615ED7556DFCDA919B3 (void);
// 0x0000023B Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.DefaultChannelCredentialsConfigurator/<>c__DisplayClass9_0::<SetCompositeCredentials>b__0()
extern void U3CU3Ec__DisplayClass9_0_U3CSetCompositeCredentialsU3Eb__0_m9EEDCE9976514AA7CB431F8240965B7F379E2A7B (void);
// 0x0000023C Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.ChannelCredentialsExtensions::ToNativeCredentials(Grpc.Core.ChannelCredentials)
extern void ChannelCredentialsExtensions_ToNativeCredentials_m836B7B19DC901BB5BDE78E69AB545168D799ABF3 (void);
// 0x0000023D System.Void Grpc.Core.Internal.DefaultDeserializationContext::.ctor()
extern void DefaultDeserializationContext__ctor_mEBDD259883DAB17F6283A2CAF83994E8D3849425 (void);
// 0x0000023E System.Int32 Grpc.Core.Internal.DefaultDeserializationContext::get_PayloadLength()
extern void DefaultDeserializationContext_get_PayloadLength_m476064D32418EE41842B2AD5D1A89D7F84BD5BC9 (void);
// 0x0000023F System.Byte[] Grpc.Core.Internal.DefaultDeserializationContext::PayloadAsNewBuffer()
extern void DefaultDeserializationContext_PayloadAsNewBuffer_m6B69CA9AEE46815BA9B22983D7DB38625C066E0F (void);
// 0x00000240 System.Buffers.ReadOnlySequence`1<System.Byte> Grpc.Core.Internal.DefaultDeserializationContext::PayloadAsReadOnlySequence()
extern void DefaultDeserializationContext_PayloadAsReadOnlySequence_m497BE8ECFC1DC0030C428F0221D9E8AEA7E210D7 (void);
// 0x00000241 System.Void Grpc.Core.Internal.DefaultDeserializationContext::Initialize(Grpc.Core.Internal.IBufferReader)
extern void DefaultDeserializationContext_Initialize_m927F2E9FAF003500FB6E321E37FAC75C6AFD9C43 (void);
// 0x00000242 System.Void Grpc.Core.Internal.DefaultDeserializationContext::Reset()
extern void DefaultDeserializationContext_Reset_m238EFD1170986CD2FFC63BCE1A8E56BA41D61C17 (void);
// 0x00000243 Grpc.Core.Internal.DefaultDeserializationContext Grpc.Core.Internal.DefaultDeserializationContext::GetInitializedThreadLocal(Grpc.Core.Internal.IBufferReader)
extern void DefaultDeserializationContext_GetInitializedThreadLocal_m01C72F8D3008E53D97BD83BDBCC5B87D27BC747F (void);
// 0x00000244 System.Void Grpc.Core.Internal.DefaultDeserializationContext::.cctor()
extern void DefaultDeserializationContext__cctor_m7FBCD9D55AE2220B8D3FB08A73731D7B44D9A071 (void);
// 0x00000245 System.Void Grpc.Core.Internal.DefaultDeserializationContext/<>c::.cctor()
extern void U3CU3Ec__cctor_m20372300B13E0DF8D98E65FFE04C0D2C0D40020C (void);
// 0x00000246 System.Void Grpc.Core.Internal.DefaultDeserializationContext/<>c::.ctor()
extern void U3CU3Ec__ctor_m5D3D4E43C59145DEBCD57937669E506136BEAC86 (void);
// 0x00000247 Grpc.Core.Internal.DefaultDeserializationContext Grpc.Core.Internal.DefaultDeserializationContext/<>c::<.cctor>b__12_0()
extern void U3CU3Ec_U3C_cctorU3Eb__12_0_mBCC3D563F0C6B4CA8000CB25B20BE4AD9DE37EF2 (void);
// 0x00000248 System.Void Grpc.Core.Internal.DefaultObjectPool`1::.ctor(System.Func`1<T>,System.Int32,System.Int32)
// 0x00000249 T Grpc.Core.Internal.DefaultObjectPool`1::Lease()
// 0x0000024A T Grpc.Core.Internal.DefaultObjectPool`1::LeaseInternal()
// 0x0000024B System.Void Grpc.Core.Internal.DefaultObjectPool`1::Return(T)
// 0x0000024C System.Void Grpc.Core.Internal.DefaultObjectPool`1::Dispose()
// 0x0000024D System.Void Grpc.Core.Internal.DefaultObjectPool`1/ThreadLocalData::.ctor(System.Int32)
// 0x0000024E System.Collections.Generic.Queue`1<T> Grpc.Core.Internal.DefaultObjectPool`1/ThreadLocalData::get_Queue()
// 0x0000024F System.Int32 Grpc.Core.Internal.DefaultObjectPool`1/ThreadLocalData::get_CreateBudget()
// 0x00000250 System.Void Grpc.Core.Internal.DefaultObjectPool`1/ThreadLocalData::set_CreateBudget(System.Int32)
// 0x00000251 System.Int32 Grpc.Core.Internal.DefaultObjectPool`1/ThreadLocalData::get_DisposeBudget()
// 0x00000252 System.Void Grpc.Core.Internal.DefaultObjectPool`1/ThreadLocalData::set_DisposeBudget(System.Int32)
// 0x00000253 System.Void Grpc.Core.Internal.DefaultObjectPool`1/<>c__DisplayClass9_0::.ctor()
// 0x00000254 Grpc.Core.Internal.DefaultObjectPool`1/ThreadLocalData<T> Grpc.Core.Internal.DefaultObjectPool`1/<>c__DisplayClass9_0::<.ctor>b__0()
// 0x00000255 System.Void Grpc.Core.Internal.DefaultSerializationContext::.ctor()
extern void DefaultSerializationContext__ctor_mDF45085D0456C29A00B0686B1779A3FA71632D75 (void);
// 0x00000256 System.Void Grpc.Core.Internal.DefaultSerializationContext::Complete(System.Byte[])
extern void DefaultSerializationContext_Complete_m75530A277C04FD457E120BD9D136E13135D0D598 (void);
// 0x00000257 System.Buffers.IBufferWriter`1<System.Byte> Grpc.Core.Internal.DefaultSerializationContext::GetBufferWriter()
extern void DefaultSerializationContext_GetBufferWriter_mB82B0338ED67651BE198C48841CCE9B3BCCB9D5C (void);
// 0x00000258 System.Void Grpc.Core.Internal.DefaultSerializationContext::SetPayloadLength(System.Int32)
extern void DefaultSerializationContext_SetPayloadLength_mC60EC889FDB13B141016DDCBA5A1C23F9421FB87 (void);
// 0x00000259 System.Void Grpc.Core.Internal.DefaultSerializationContext::Complete()
extern void DefaultSerializationContext_Complete_mF06B7F3F60B594E6B7A543AEF355B371B9FE5B14 (void);
// 0x0000025A Grpc.Core.Internal.SliceBufferSafeHandle Grpc.Core.Internal.DefaultSerializationContext::GetPayload()
extern void DefaultSerializationContext_GetPayload_m3F2A7FD8B27A525A5495995D751806199EEE2D80 (void);
// 0x0000025B System.Void Grpc.Core.Internal.DefaultSerializationContext::Reset()
extern void DefaultSerializationContext_Reset_m179B872AE03D886EF46B8681213462660D4E45AC (void);
// 0x0000025C Grpc.Core.Internal.DefaultSerializationContext/UsageScope Grpc.Core.Internal.DefaultSerializationContext::GetInitializedThreadLocalScope()
extern void DefaultSerializationContext_GetInitializedThreadLocalScope_mAD110DC5277112C0F95B62873A4B8D0C5E07B6B5 (void);
// 0x0000025D System.Void Grpc.Core.Internal.DefaultSerializationContext::.cctor()
extern void DefaultSerializationContext__cctor_m397BA65A6E995846BE7F3898FABE08DD167A6036 (void);
// 0x0000025E System.Void Grpc.Core.Internal.DefaultSerializationContext/UsageScope::.ctor(Grpc.Core.Internal.DefaultSerializationContext)
extern void UsageScope__ctor_m3C3C70BDF1E60BC791D77FADA1BFE5B879C9E468 (void);
// 0x0000025F Grpc.Core.Internal.DefaultSerializationContext Grpc.Core.Internal.DefaultSerializationContext/UsageScope::get_Context()
extern void UsageScope_get_Context_m1FA6D8F23AC55A9DDC3186829249DE8858E53977 (void);
// 0x00000260 System.Void Grpc.Core.Internal.DefaultSerializationContext/UsageScope::Dispose()
extern void UsageScope_Dispose_m259E60CEC25C31A8EF43A511890B07B427547DDC (void);
// 0x00000261 System.Void Grpc.Core.Internal.DefaultSerializationContext/<>c::.cctor()
extern void U3CU3Ec__cctor_m3B54B5F2975C1D819000B548237784BBA341DC7F (void);
// 0x00000262 System.Void Grpc.Core.Internal.DefaultSerializationContext/<>c::.ctor()
extern void U3CU3Ec__ctor_mC81D3BC358C40A2A7D688CB4DF255E1ECE4AC301 (void);
// 0x00000263 Grpc.Core.Internal.DefaultSerializationContext Grpc.Core.Internal.DefaultSerializationContext/<>c::<.cctor>b__12_0()
extern void U3CU3Ec_U3C_cctorU3Eb__12_0_m40B667970B1C9CF27091AD807F4B22827FCC955F (void);
// 0x00000264 System.Void Grpc.Core.Internal.DefaultSslRootsOverride::Override(Grpc.Core.Internal.NativeMethods)
extern void DefaultSslRootsOverride_Override_mCB55FE637D286E610C61CA6F33A7F6BDDB68ECA5 (void);
// 0x00000265 System.Void Grpc.Core.Internal.DefaultSslRootsOverride::.cctor()
extern void DefaultSslRootsOverride__cctor_m64386ACA016B9FBBB03BFD14B4A828ACA0793AD2 (void);
// 0x00000266 System.Void Grpc.Core.Internal.GrpcThreadPool::.ctor(Grpc.Core.GrpcEnvironment,System.Int32,System.Int32,System.Boolean)
extern void GrpcThreadPool__ctor_m67DF9B8223DDA35921125E1EACFEAFA3FDE114FE (void);
// 0x00000267 System.Void Grpc.Core.Internal.GrpcThreadPool::Start()
extern void GrpcThreadPool_Start_m435A8BEE19A57D450FEC0A81D4D98F01CF1C95F8 (void);
// 0x00000268 System.Threading.Tasks.Task Grpc.Core.Internal.GrpcThreadPool::StopAsync()
extern void GrpcThreadPool_StopAsync_mFB1A7735DD53ACBBF0CC2BDD7F6598904ADDEF0D (void);
// 0x00000269 System.Boolean Grpc.Core.Internal.GrpcThreadPool::get_IsAlive()
extern void GrpcThreadPool_get_IsAlive_mF6ACA5D069ACA744855046D5F276BEED38C2BBA0 (void);
// 0x0000026A System.Collections.Generic.IReadOnlyCollection`1<Grpc.Core.Internal.CompletionQueueSafeHandle> Grpc.Core.Internal.GrpcThreadPool::get_CompletionQueues()
extern void GrpcThreadPool_get_CompletionQueues_mD574D6BE7F6C710CA39F0F1B37A4078F46DF53C7 (void);
// 0x0000026B System.Threading.Thread Grpc.Core.Internal.GrpcThreadPool::CreateAndStartThread(System.Int32,Grpc.Core.Profiling.IProfiler)
extern void GrpcThreadPool_CreateAndStartThread_mDE948CD645057FC428F7C7EB079B9D6019B786AC (void);
// 0x0000026C System.Void Grpc.Core.Internal.GrpcThreadPool::RunHandlerLoop(Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Profiling.IProfiler)
extern void GrpcThreadPool_RunHandlerLoop_mA3D17A716AE7D4C82B804C06EA30A0671809875A (void);
// 0x0000026D System.Collections.Generic.IReadOnlyCollection`1<Grpc.Core.Internal.CompletionQueueSafeHandle> Grpc.Core.Internal.GrpcThreadPool::CreateCompletionQueueList(Grpc.Core.GrpcEnvironment,System.Int32)
extern void GrpcThreadPool_CreateCompletionQueueList_m32C4E3A999B41E2355CEB0B07292A9180E0B473D (void);
// 0x0000026E System.Void Grpc.Core.Internal.GrpcThreadPool::RunCompletionQueueEventCallback(Grpc.Core.Internal.IOpCompletionCallback,System.Boolean)
extern void GrpcThreadPool_RunCompletionQueueEventCallback_mBE27B6267B2D3980B32E3CC686101B9546B4C0BF (void);
// 0x0000026F System.Void Grpc.Core.Internal.GrpcThreadPool::.cctor()
extern void GrpcThreadPool__cctor_m79326ED4FCB7F4955B936E5778E935AF15D739AA (void);
// 0x00000270 System.Void Grpc.Core.Internal.GrpcThreadPool::<.ctor>b__15_0(System.Object)
extern void GrpcThreadPool_U3C_ctorU3Eb__15_0_m90E2F006ED067869DD7C0BF6E744C43AD8E74CC4 (void);
// 0x00000271 System.Void Grpc.Core.Internal.GrpcThreadPool::<.ctor>b__15_1(System.Object)
extern void GrpcThreadPool_U3C_ctorU3Eb__15_1_mFDBF47B1D3CDDB08B5C2C76AB2677F380E225807 (void);
// 0x00000272 System.Void Grpc.Core.Internal.GrpcThreadPool::<StopAsync>b__17_0()
extern void GrpcThreadPool_U3CStopAsyncU3Eb__17_0_m2738B79A90D76699546F501489338C500A72C9FB (void);
// 0x00000273 System.Void Grpc.Core.Internal.GrpcThreadPool/<>c::.cctor()
extern void U3CU3Ec__cctor_m7610D37CEA24DFD253AE228C2E9D5CD0D21E392D (void);
// 0x00000274 System.Void Grpc.Core.Internal.GrpcThreadPool/<>c::.ctor()
extern void U3CU3Ec__ctor_m8401DD752AD03D315F76BD71E9DDA57795B20975 (void);
// 0x00000275 System.Boolean Grpc.Core.Internal.GrpcThreadPool/<>c::<get_IsAlive>b__19_0(System.Threading.Thread)
extern void U3CU3Ec_U3Cget_IsAliveU3Eb__19_0_m109E4D00A3F2CE7C62F4E0E00FD9945F3E09BE1F (void);
// 0x00000276 System.Void Grpc.Core.Internal.GrpcThreadPool/<>c__DisplayClass22_0::.ctor()
extern void U3CU3Ec__DisplayClass22_0__ctor_m6E416F688BC1D2707C1309703C1A1ED71CACFA0F (void);
// 0x00000277 System.Void Grpc.Core.Internal.GrpcThreadPool/<>c__DisplayClass22_0::<CreateAndStartThread>b__0()
extern void U3CU3Ec__DisplayClass22_0_U3CCreateAndStartThreadU3Eb__0_m1EAFF883DAFA8BCA2C294B3664B5AFC27B02CB7B (void);
// 0x00000278 System.Void Grpc.Core.Internal.GrpcThreadPool/<>c__DisplayClass24_0::.ctor()
extern void U3CU3Ec__DisplayClass24_0__ctor_m2AFAE5B1B3615BFF5CA7FF32611F672B2CF120D2 (void);
// 0x00000279 Grpc.Core.Internal.BatchContextSafeHandle Grpc.Core.Internal.GrpcThreadPool/<>c__DisplayClass24_0::<CreateCompletionQueueList>b__0()
extern void U3CU3Ec__DisplayClass24_0_U3CCreateCompletionQueueListU3Eb__0_m541BBE0DF65EA808E5295ABCAC7A376C6B986F16 (void);
// 0x0000027A Grpc.Core.Internal.RequestCallContextSafeHandle Grpc.Core.Internal.GrpcThreadPool/<>c__DisplayClass24_0::<CreateCompletionQueueList>b__1()
extern void U3CU3Ec__DisplayClass24_0_U3CCreateCompletionQueueListU3Eb__1_mF5816EB9AF60EC286C176780F5E206D129803865 (void);
// 0x0000027B System.Void Grpc.Core.Internal.IUnaryResponseClientCallback::OnUnaryResponseClient(System.Boolean,Grpc.Core.Internal.ClientSideStatus,Grpc.Core.Internal.IBufferReader,Grpc.Core.Metadata)
// 0x0000027C System.Void Grpc.Core.Internal.IReceivedStatusOnClientCallback::OnReceivedStatusOnClient(System.Boolean,Grpc.Core.Internal.ClientSideStatus)
// 0x0000027D System.Void Grpc.Core.Internal.IReceivedMessageCallback::OnReceivedMessage(System.Boolean,Grpc.Core.Internal.IBufferReader)
// 0x0000027E System.Void Grpc.Core.Internal.IReceivedResponseHeadersCallback::OnReceivedResponseHeaders(System.Boolean,Grpc.Core.Metadata)
// 0x0000027F System.Void Grpc.Core.Internal.ISendCompletionCallback::OnSendCompletion(System.Boolean)
// 0x00000280 System.Void Grpc.Core.Internal.ISendStatusFromServerCompletionCallback::OnSendStatusFromServerCompletion(System.Boolean)
// 0x00000281 System.Void Grpc.Core.Internal.IReceivedCloseOnServerCallback::OnReceivedCloseOnServer(System.Boolean,System.Boolean)
// 0x00000282 System.Void Grpc.Core.Internal.INativeCall::Cancel()
// 0x00000283 System.Void Grpc.Core.Internal.INativeCall::CancelWithStatus(Grpc.Core.Status)
// 0x00000284 System.String Grpc.Core.Internal.INativeCall::GetPeer()
// 0x00000285 System.Void Grpc.Core.Internal.INativeCall::StartUnary(Grpc.Core.Internal.IUnaryResponseClientCallback,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
// 0x00000286 System.Void Grpc.Core.Internal.INativeCall::StartUnary(Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
// 0x00000287 System.Void Grpc.Core.Internal.INativeCall::StartClientStreaming(Grpc.Core.Internal.IUnaryResponseClientCallback,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
// 0x00000288 System.Void Grpc.Core.Internal.INativeCall::StartServerStreaming(Grpc.Core.Internal.IReceivedStatusOnClientCallback,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
// 0x00000289 System.Void Grpc.Core.Internal.INativeCall::StartDuplexStreaming(Grpc.Core.Internal.IReceivedStatusOnClientCallback,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
// 0x0000028A System.Void Grpc.Core.Internal.INativeCall::StartReceiveMessage(Grpc.Core.Internal.IReceivedMessageCallback)
// 0x0000028B System.Void Grpc.Core.Internal.INativeCall::StartReceiveInitialMetadata(Grpc.Core.Internal.IReceivedResponseHeadersCallback)
// 0x0000028C System.Void Grpc.Core.Internal.INativeCall::StartSendInitialMetadata(Grpc.Core.Internal.ISendCompletionCallback,Grpc.Core.Internal.MetadataArraySafeHandle)
// 0x0000028D System.Void Grpc.Core.Internal.INativeCall::StartSendMessage(Grpc.Core.Internal.ISendCompletionCallback,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,System.Boolean)
// 0x0000028E System.Void Grpc.Core.Internal.INativeCall::StartSendCloseFromClient(Grpc.Core.Internal.ISendCompletionCallback)
// 0x0000028F System.Void Grpc.Core.Internal.INativeCall::StartSendStatusFromServer(Grpc.Core.Internal.ISendStatusFromServerCompletionCallback,Grpc.Core.Status,Grpc.Core.Internal.MetadataArraySafeHandle,System.Boolean,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags)
// 0x00000290 System.Void Grpc.Core.Internal.INativeCall::StartServerSide(Grpc.Core.Internal.IReceivedCloseOnServerCallback)
// 0x00000291 T Grpc.Core.Internal.IObjectPool`1::Lease()
// 0x00000292 System.Void Grpc.Core.Internal.IObjectPool`1::Return(T)
// 0x00000293 System.Void Grpc.Core.Internal.IPooledObject`1::SetReturnToPoolAction(System.Action`1<T>)
// 0x00000294 System.Threading.Tasks.Task Grpc.Core.Internal.IServerResponseStream::WriteResponseHeadersAsync(Grpc.Core.Metadata)
// 0x00000295 Grpc.Core.WriteOptions Grpc.Core.Internal.IServerResponseStream::get_WriteOptions()
// 0x00000296 System.Void Grpc.Core.Internal.IServerResponseStream::set_WriteOptions(Grpc.Core.WriteOptions)
// 0x00000297 System.String Grpc.Core.Internal.MarshalUtils::PtrToStringUTF8(System.IntPtr,System.Int32)
extern void MarshalUtils_PtrToStringUTF8_m63A1F40ADE9C701B2E425C6730134EA1319412CB (void);
// 0x00000298 System.Int32 Grpc.Core.Internal.MarshalUtils::GetBytesUTF8(System.String,System.Byte*,System.Int32)
extern void MarshalUtils_GetBytesUTF8_m0CDB5BDAD4347C3B9688D7E318D172A8B86D181E (void);
// 0x00000299 System.Int32 Grpc.Core.Internal.MarshalUtils::GetMaxByteCountUTF8(System.String)
extern void MarshalUtils_GetMaxByteCountUTF8_mA6EF73AE334A184FF48EA33791C7D134BD3C9DD9 (void);
// 0x0000029A System.Int32 Grpc.Core.Internal.MarshalUtils::GetByteCountUTF8(System.String)
extern void MarshalUtils_GetByteCountUTF8_m88976F3A04B957F83F628A7D08018CD0A0D94896 (void);
// 0x0000029B System.Void Grpc.Core.Internal.MarshalUtils::.cctor()
extern void MarshalUtils__cctor_m5225B8AE02F89C5C1A5A10253A3AE90D4D408ADA (void);
// 0x0000029C System.Void Grpc.Core.Internal.MetadataArraySafeHandle::.ctor()
extern void MetadataArraySafeHandle__ctor_mB255B6AD799B4896D76556FD4BFA08C1C0493683 (void);
// 0x0000029D Grpc.Core.Internal.MetadataArraySafeHandle Grpc.Core.Internal.MetadataArraySafeHandle::Create(Grpc.Core.Metadata)
extern void MetadataArraySafeHandle_Create_m95D2F899A233A80977EBD32204D6B33AEAF6D840 (void);
// 0x0000029E Grpc.Core.Metadata Grpc.Core.Internal.MetadataArraySafeHandle::ReadMetadataFromPtrUnsafe(System.IntPtr)
extern void MetadataArraySafeHandle_ReadMetadataFromPtrUnsafe_m7362DF0700D86B05DBE11621925082F7D000000C (void);
// 0x0000029F System.IntPtr Grpc.Core.Internal.MetadataArraySafeHandle::get_Handle()
extern void MetadataArraySafeHandle_get_Handle_mE5D59A3DCB1FA643595A3D45A5E60723A397CACB (void);
// 0x000002A0 System.Boolean Grpc.Core.Internal.MetadataArraySafeHandle::ReleaseHandle()
extern void MetadataArraySafeHandle_ReleaseHandle_mCF6BE9E15D054104C854D7B6710DFA8F6064BD38 (void);
// 0x000002A1 System.Void Grpc.Core.Internal.MetadataArraySafeHandle::.cctor()
extern void MetadataArraySafeHandle__cctor_mE3A79F72617FFECD482D07C89D677AF5CA51FD8B (void);
// 0x000002A2 System.Void Grpc.Core.Internal.MonoPInvokeCallbackAttribute::.ctor(System.Type)
extern void MonoPInvokeCallbackAttribute__ctor_mA684132905EE5F1391B7B717F598B08856B3F453 (void);
// 0x000002A3 System.Type Grpc.Core.Internal.MonoPInvokeCallbackAttribute::get_Type()
extern void MonoPInvokeCallbackAttribute_get_Type_m394A567C42B5DF112A653D1F6189098ACA1DA5E8 (void);
// 0x000002A4 System.Void Grpc.Core.Internal.MonoPInvokeCallbackAttribute::set_Type(System.Type)
extern void MonoPInvokeCallbackAttribute_set_Type_mDFBCAD32FAFB6F753AE54D83B10999446EC3DF45 (void);
// 0x000002A5 System.Void Grpc.Core.Internal.UniversalNativeCallback::.ctor(System.Object,System.IntPtr)
extern void UniversalNativeCallback__ctor_mD0A97D0551AE24ED9E9C09F589F82CE7324D2F94 (void);
// 0x000002A6 System.Int32 Grpc.Core.Internal.UniversalNativeCallback::Invoke(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern void UniversalNativeCallback_Invoke_mD9641639DF44DDE95637347D87428AE382C5CEFF (void);
// 0x000002A7 System.IAsyncResult Grpc.Core.Internal.UniversalNativeCallback::BeginInvoke(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
extern void UniversalNativeCallback_BeginInvoke_m97441F316E128417F89AA1A9C099D41B5FDC530A (void);
// 0x000002A8 System.Int32 Grpc.Core.Internal.UniversalNativeCallback::EndInvoke(System.IAsyncResult)
extern void UniversalNativeCallback_EndInvoke_m53B9863FF6280DB816D1B3819EB33AB9225FE8BB (void);
// 0x000002A9 System.Void Grpc.Core.Internal.NativeCallbackDispatcherCallback::.ctor(System.Object,System.IntPtr)
extern void NativeCallbackDispatcherCallback__ctor_m00E072611DE70BB27700ED15BF4AD0A68EC17DF4 (void);
// 0x000002AA System.Int32 Grpc.Core.Internal.NativeCallbackDispatcherCallback::Invoke(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern void NativeCallbackDispatcherCallback_Invoke_m8EC3545427DAAB98EBBF36193F202E44FC5F4BC7 (void);
// 0x000002AB System.IAsyncResult Grpc.Core.Internal.NativeCallbackDispatcherCallback::BeginInvoke(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
extern void NativeCallbackDispatcherCallback_BeginInvoke_mFEAFF24CD227F0B36224549363CB81563BB4DA64 (void);
// 0x000002AC System.Int32 Grpc.Core.Internal.NativeCallbackDispatcherCallback::EndInvoke(System.IAsyncResult)
extern void NativeCallbackDispatcherCallback_EndInvoke_m9F61BB5B03E84541DCC3378B28C654BFAB86B292 (void);
// 0x000002AD System.Void Grpc.Core.Internal.NativeCallbackDispatcher::Init(Grpc.Core.Internal.NativeMethods)
extern void NativeCallbackDispatcher_Init_m89237127CB049C40B5FAA7C3A7B9CF71BF5C1E90 (void);
// 0x000002AE Grpc.Core.Internal.NativeCallbackRegistration Grpc.Core.Internal.NativeCallbackDispatcher::RegisterCallback(Grpc.Core.Internal.UniversalNativeCallback)
extern void NativeCallbackDispatcher_RegisterCallback_m64728E103A471BB5A1167FC690DC841AF593410C (void);
// 0x000002AF System.Int32 Grpc.Core.Internal.NativeCallbackDispatcher::HandleDispatcherCallback(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern void NativeCallbackDispatcher_HandleDispatcherCallback_mF4899474F5F4DB052FE06AF3F349726F6C08102E (void);
// 0x000002B0 System.Void Grpc.Core.Internal.NativeCallbackDispatcher::.ctor()
extern void NativeCallbackDispatcher__ctor_m323191ED8B80020B5FB88154A47070848F9FD533 (void);
// 0x000002B1 System.Void Grpc.Core.Internal.NativeCallbackDispatcher::.cctor()
extern void NativeCallbackDispatcher__cctor_m625A6DC33601A5821A7262D04F99FF74FC16AB9F (void);
// 0x000002B2 System.Void Grpc.Core.Internal.NativeCallbackRegistration::.ctor(System.Runtime.InteropServices.GCHandle)
extern void NativeCallbackRegistration__ctor_m4A143AA11614DB827DF2CA86061A9E3201A4D083 (void);
// 0x000002B3 System.IntPtr Grpc.Core.Internal.NativeCallbackRegistration::get_Tag()
extern void NativeCallbackRegistration_get_Tag_m38AFBF50DBC4468BD558FC6B49A24832C38C5AF1 (void);
// 0x000002B4 System.Void Grpc.Core.Internal.NativeCallbackRegistration::Dispose()
extern void NativeCallbackRegistration_Dispose_mC41A72A585C82F92672CE85DC74BC7DF6D43D8DC (void);
// 0x000002B5 System.Void Grpc.Core.Internal.NativeExtension::.ctor()
extern void NativeExtension__ctor_m55A63D1FFBA543478FFF18D93A1D25B9D909A1AA (void);
// 0x000002B6 Grpc.Core.Internal.NativeExtension Grpc.Core.Internal.NativeExtension::Get()
extern void NativeExtension_Get_m70DF065FC9D6A25F40742F9B03C9E63BE1543ED5 (void);
// 0x000002B7 Grpc.Core.Internal.NativeMethods Grpc.Core.Internal.NativeExtension::get_NativeMethods()
extern void NativeExtension_get_NativeMethods_mE1E311761BBED051E09E518F46AD098062998839 (void);
// 0x000002B8 Grpc.Core.Internal.NativeMethods Grpc.Core.Internal.NativeExtension::LoadNativeMethodsUsingExplicitLoad()
extern void NativeExtension_LoadNativeMethodsUsingExplicitLoad_mF1403F614C7E0AC9322384EA8647440A45EEA68A (void);
// 0x000002B9 Grpc.Core.Internal.NativeMethods Grpc.Core.Internal.NativeExtension::LoadNativeMethodsUsingDllImports()
extern void NativeExtension_LoadNativeMethodsUsingDllImports_mF30C439DA8970B0031E1E2B2FF4ECAE7D34B81B2 (void);
// 0x000002BA Grpc.Core.Internal.NativeMethods Grpc.Core.Internal.NativeExtension::LoadNativeMethods()
extern void NativeExtension_LoadNativeMethods_mA052501DDD8983BE29D249DFA9690D03985762F2 (void);
// 0x000002BB Grpc.Core.Internal.NativeMethods Grpc.Core.Internal.NativeExtension::LoadNativeMethodsUnity()
extern void NativeExtension_LoadNativeMethodsUnity_m186D341D78E4437B8665A7023FF7E41353046E7B (void);
// 0x000002BC Grpc.Core.Internal.NativeMethods Grpc.Core.Internal.NativeExtension::LoadNativeMethodsXamarin()
extern void NativeExtension_LoadNativeMethodsXamarin_mD5D871A1F81F509EF8A87D4BEACF7BBA7D4DBBB4 (void);
// 0x000002BD System.String Grpc.Core.Internal.NativeExtension::GetAssemblyDirectory()
extern void NativeExtension_GetAssemblyDirectory_m5C944DA33493C62FB62EF433658D13CB52B36F53 (void);
// 0x000002BE System.Boolean Grpc.Core.Internal.NativeExtension::IsNet5SingleFileApp()
extern void NativeExtension_IsNet5SingleFileApp_m30527EB5EA8CA0C6AF15161DCC52FB37FE2CF958 (void);
// 0x000002BF System.Boolean Grpc.Core.Internal.NativeExtension::IsFileUri(System.String)
extern void NativeExtension_IsFileUri_mA3EF4956006532BCE5F90E0F9A34EEDADDFF0360 (void);
// 0x000002C0 System.String Grpc.Core.Internal.NativeExtension::GetRuntimeIdString()
extern void NativeExtension_GetRuntimeIdString_m3EF8CADDAB35DAC66B59AD45EC0CDF983FD5381C (void);
// 0x000002C1 System.String Grpc.Core.Internal.NativeExtension::GetArchitectureString()
extern void NativeExtension_GetArchitectureString_m58B41756AC3EF8285515F0EE165F98ADFF1D0613 (void);
// 0x000002C2 System.String Grpc.Core.Internal.NativeExtension::GetNativeLibraryFilename()
extern void NativeExtension_GetNativeLibraryFilename_mB2F5AE7FCDD9A0B3164BBA18EFE4BD64D797FA11 (void);
// 0x000002C3 System.Void Grpc.Core.Internal.NativeExtension::.cctor()
extern void NativeExtension__cctor_mF2D470C845FE9A71F6A8F5F88DC5F1864990C079 (void);
// 0x000002C4 System.Void Grpc.Core.Internal.GprLogDelegate::.ctor(System.Object,System.IntPtr)
extern void GprLogDelegate__ctor_mBCD1C608A8287FF8793A122A0FE1B402E32360E9 (void);
// 0x000002C5 System.Void Grpc.Core.Internal.GprLogDelegate::Invoke(System.IntPtr,System.Int32,System.UInt64,System.IntPtr,System.IntPtr)
extern void GprLogDelegate_Invoke_mB8A31D48196275E0864E35EB35B64D08A45A2FF6 (void);
// 0x000002C6 System.IAsyncResult Grpc.Core.Internal.GprLogDelegate::BeginInvoke(System.IntPtr,System.Int32,System.UInt64,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
extern void GprLogDelegate_BeginInvoke_m5370FE92494541926EE2B58A7268FD47AA816BC4 (void);
// 0x000002C7 System.Void Grpc.Core.Internal.GprLogDelegate::EndInvoke(System.IAsyncResult)
extern void GprLogDelegate_EndInvoke_m07E54BFE77AE5AA9B693B040A8762BA4D805E274 (void);
// 0x000002C8 System.Void Grpc.Core.Internal.NativeLogRedirector::Redirect(Grpc.Core.Internal.NativeMethods)
extern void NativeLogRedirector_Redirect_m0ED2983977B3591E00FD987E197B9FEF5984DF5B (void);
// 0x000002C9 System.Void Grpc.Core.Internal.NativeLogRedirector::HandleWrite(System.IntPtr,System.Int32,System.UInt64,System.IntPtr,System.IntPtr)
extern void NativeLogRedirector_HandleWrite_m95766B386578549BD1126A99659E02C302D40267 (void);
// 0x000002CA System.Void Grpc.Core.Internal.NativeLogRedirector::.cctor()
extern void NativeLogRedirector__cctor_mACD64D7F06E71E9EE25F7738DAF1A28B14770F38 (void);
// 0x000002CB System.Void Grpc.Core.Internal.NativeMetadataCredentialsPlugin::.ctor(Grpc.Core.AsyncAuthInterceptor)
extern void NativeMetadataCredentialsPlugin__ctor_m0335B650FEE0AA4F24F5D3D61D6971721A3B55ED (void);
// 0x000002CC Grpc.Core.Internal.CallCredentialsSafeHandle Grpc.Core.Internal.NativeMetadataCredentialsPlugin::get_Credentials()
extern void NativeMetadataCredentialsPlugin_get_Credentials_m99D4CE1805F7749FA1E05AFDAFA3DFF0038C329B (void);
// 0x000002CD System.Int32 Grpc.Core.Internal.NativeMetadataCredentialsPlugin::HandleUniversalCallback(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern void NativeMetadataCredentialsPlugin_HandleUniversalCallback_m300F2CC4D79DE61E184AD2BD9AAFCCC6DF09FFF2 (void);
// 0x000002CE System.Void Grpc.Core.Internal.NativeMetadataCredentialsPlugin::NativeMetadataInterceptorHandler(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Boolean)
extern void NativeMetadataCredentialsPlugin_NativeMetadataInterceptorHandler_mB606889AA8DB49FEF9527C38A44159AAAC59BD25 (void);
// 0x000002CF System.Threading.Tasks.Task Grpc.Core.Internal.NativeMetadataCredentialsPlugin::GetMetadataAsync(Grpc.Core.AuthInterceptorContext,System.IntPtr,System.IntPtr)
extern void NativeMetadataCredentialsPlugin_GetMetadataAsync_m9C3EFBBAC80E7C757884FAE4C9D7F5898AF83E08 (void);
// 0x000002D0 System.Void Grpc.Core.Internal.NativeMetadataCredentialsPlugin::.cctor()
extern void NativeMetadataCredentialsPlugin__cctor_m0B85F7E6CB017519C7C265864E8F3E48C185EFB9 (void);
// 0x000002D1 System.Void Grpc.Core.Internal.NativeMetadataCredentialsPlugin/<>c__DisplayClass11_0::.ctor()
extern void U3CU3Ec__DisplayClass11_0__ctor_mD6099B4676C117D3A401F0832808D7FB1500B212 (void);
// 0x000002D2 System.Void Grpc.Core.Internal.NativeMetadataCredentialsPlugin/<>c__DisplayClass11_0::<NativeMetadataInterceptorHandler>b__0(System.Object)
extern void U3CU3Ec__DisplayClass11_0_U3CNativeMetadataInterceptorHandlerU3Eb__0_mD9AA2BFB988F2C181B93666A4082534C3BE4811B (void);
// 0x000002D3 System.Void Grpc.Core.Internal.NativeMetadataCredentialsPlugin/<>c__DisplayClass11_0/<<NativeMetadataInterceptorHandler>b__0>d::MoveNext()
extern void U3CU3CNativeMetadataInterceptorHandlerU3Eb__0U3Ed_MoveNext_m128CD090C01DA7F3F84A5E98AD3058CD8BDA99C5 (void);
// 0x000002D4 System.Void Grpc.Core.Internal.NativeMetadataCredentialsPlugin/<>c__DisplayClass11_0/<<NativeMetadataInterceptorHandler>b__0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CU3CNativeMetadataInterceptorHandlerU3Eb__0U3Ed_SetStateMachine_m34553CA5709B0917286E53A524EB1D58E8F633E0 (void);
// 0x000002D5 System.Void Grpc.Core.Internal.NativeMetadataCredentialsPlugin/<GetMetadataAsync>d__12::MoveNext()
extern void U3CGetMetadataAsyncU3Ed__12_MoveNext_mFB5D53C73AC5AD8518488967C9DB7B65A2A4FD32 (void);
// 0x000002D6 System.Void Grpc.Core.Internal.NativeMetadataCredentialsPlugin/<GetMetadataAsync>d__12::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetMetadataAsyncU3Ed__12_SetStateMachine_mBB81F11716F31F15A11D1F0051392F6E5CEAB0FE (void);
// 0x000002D7 System.Void Grpc.Core.Internal.NativeCallbackTestDelegate::.ctor(System.Object,System.IntPtr)
extern void NativeCallbackTestDelegate__ctor_m127EF31E4C9CE1CD6624B0B01C9DBB60373C0E91 (void);
// 0x000002D8 System.Void Grpc.Core.Internal.NativeCallbackTestDelegate::Invoke(System.Boolean)
extern void NativeCallbackTestDelegate_Invoke_mA2B16E8C5CC2119E8CA6BD889F59EBDAD16D34AC (void);
// 0x000002D9 System.IAsyncResult Grpc.Core.Internal.NativeCallbackTestDelegate::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
extern void NativeCallbackTestDelegate_BeginInvoke_mB2B6249372D9F84C274D0A4EC92B896AD8F795C7 (void);
// 0x000002DA System.Void Grpc.Core.Internal.NativeCallbackTestDelegate::EndInvoke(System.IAsyncResult)
extern void NativeCallbackTestDelegate_EndInvoke_m06154103A5D63201B212F6549F1A03DD9BA524F7 (void);
// 0x000002DB Grpc.Core.Internal.NativeMethods Grpc.Core.Internal.NativeMethods::Get()
extern void NativeMethods_Get_m5796015C16701910D51402D497439BD210A09362 (void);
// 0x000002DC T Grpc.Core.Internal.NativeMethods::GetMethodDelegate(Grpc.Core.Internal.UnmanagedLibrary)
// 0x000002DD System.String Grpc.Core.Internal.NativeMethods::RemoveStringSuffix(System.String,System.String)
extern void NativeMethods_RemoveStringSuffix_m160C3491DE533D272DB3F442151057E392CA556F (void);
// 0x000002DE System.Void Grpc.Core.Internal.NativeMethods::.ctor(Grpc.Core.Internal.UnmanagedLibrary)
extern void NativeMethods__ctor_m90FEB04F877A5479DAC02381E19E756A8813E1B1 (void);
// 0x000002DF System.Void Grpc.Core.Internal.NativeMethods::.ctor(Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib)
extern void NativeMethods__ctor_m583F22EBE1F27446130D842EB5CB96183C235F4D (void);
// 0x000002E0 System.Void Grpc.Core.Internal.NativeMethods::.ctor(Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib)
extern void NativeMethods__ctor_mDAE96586E0854FF01E91B4C5E76F8F00C2D75AC3 (void);
// 0x000002E1 System.Void Grpc.Core.Internal.NativeMethods::.ctor(Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86)
extern void NativeMethods__ctor_m9B93AB6D7DCAA43D8944AE12B704BCE24FAAEB7B (void);
// 0x000002E2 System.Void Grpc.Core.Internal.NativeMethods::.ctor(Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64)
extern void NativeMethods__ctor_m6CABC3DEAA22FCFF6B2A0D7A744662EFD69B8A1D (void);
// 0x000002E3 System.Void Grpc.Core.Internal.NativeMethods::.ctor(Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64)
extern void NativeMethods__ctor_mA306020DB7FAAFC579963CB53997DDD25E6DB33E (void);
// 0x000002E4 System.Void Grpc.Core.Internal.NativeMethods::.ctor(Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll)
extern void NativeMethods__ctor_m8A685C66F094CDB0667792E2AFFD3D458429A29B (void);
// 0x000002E5 System.Void Grpc.Core.Internal.NativeMethods::.ctor(Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll)
extern void NativeMethods__ctor_m87800F71D4562F907A361A12EFDD38113B0E93D7 (void);
// 0x000002E6 System.Void Grpc.Core.Internal.NativeMethods/Delegates::.ctor()
extern void Delegates__ctor_mC3133EF9DE299AC4E41D54D124B2CCE2FFFCCFCE (void);
// 0x000002E7 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_init_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_init_delegate__ctor_mEA037FE8B5204B27797704A6118B15A193B8777F (void);
// 0x000002E8 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_init_delegate::Invoke()
extern void grpcsharp_init_delegate_Invoke_m742C0E641BB87E8A03089C0FA98C3A220F1774A4 (void);
// 0x000002E9 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_init_delegate::BeginInvoke(System.AsyncCallback,System.Object)
extern void grpcsharp_init_delegate_BeginInvoke_m249A638FF4FAF7B3AC439FE162A032D096F9AAD7 (void);
// 0x000002EA System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_init_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_init_delegate_EndInvoke_mEC506F603D962AC8B36FAC9C36BC4D69D5027494 (void);
// 0x000002EB System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_shutdown_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_shutdown_delegate__ctor_m2036CE7AEB9190FC7126E70E733EC803999AFFD3 (void);
// 0x000002EC System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_shutdown_delegate::Invoke()
extern void grpcsharp_shutdown_delegate_Invoke_m90D094CCE5A699FF1D3584979F0269B2F5FFDC24 (void);
// 0x000002ED System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_shutdown_delegate::BeginInvoke(System.AsyncCallback,System.Object)
extern void grpcsharp_shutdown_delegate_BeginInvoke_m568BCE3C473F123522F42757F080EF42B188C7FD (void);
// 0x000002EE System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_shutdown_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_shutdown_delegate_EndInvoke_m7F75E88194F20061BDCDF222CB83F6685967E42F (void);
// 0x000002EF System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_version_string_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_version_string_delegate__ctor_mA8CE247ECFFC0831FE4C8E150DAD34628CF9CA64 (void);
// 0x000002F0 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_version_string_delegate::Invoke()
extern void grpcsharp_version_string_delegate_Invoke_mE07F01439E33C0CDC4AD26EB6166353B14C39409 (void);
// 0x000002F1 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_version_string_delegate::BeginInvoke(System.AsyncCallback,System.Object)
extern void grpcsharp_version_string_delegate_BeginInvoke_m033F2F7EE905BB45EBABEDE485E2A1CA0B09EAC3 (void);
// 0x000002F2 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_version_string_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_version_string_delegate_EndInvoke_m7D378C7AA16AD2A62EAB6672364C305FA2788468 (void);
// 0x000002F3 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_create_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_batch_context_create_delegate__ctor_m2FF3F4A205182649CE905AA07749462E0348958B (void);
// 0x000002F4 Grpc.Core.Internal.BatchContextSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_create_delegate::Invoke()
extern void grpcsharp_batch_context_create_delegate_Invoke_mB19166BE7C4582B6ECA44115A1686C46417B120F (void);
// 0x000002F5 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_create_delegate::BeginInvoke(System.AsyncCallback,System.Object)
extern void grpcsharp_batch_context_create_delegate_BeginInvoke_m5B3F4B35D6582D051A895A7F2502EAEDB6540128 (void);
// 0x000002F6 Grpc.Core.Internal.BatchContextSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_create_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_batch_context_create_delegate_EndInvoke_mD45DD8BE83C1052F9ABD4F7AD33053E64D708F5C (void);
// 0x000002F7 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_initial_metadata_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_batch_context_recv_initial_metadata_delegate__ctor_mEC38758709702E2C3DDAC2F685B4A66D0AE953A4 (void);
// 0x000002F8 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_initial_metadata_delegate::Invoke(Grpc.Core.Internal.BatchContextSafeHandle)
extern void grpcsharp_batch_context_recv_initial_metadata_delegate_Invoke_m8587666F9163A107A219DB2D77592E2CCE8D9136 (void);
// 0x000002F9 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_initial_metadata_delegate::BeginInvoke(Grpc.Core.Internal.BatchContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_batch_context_recv_initial_metadata_delegate_BeginInvoke_m6F07B74CD052012A0D9A1499BC54459A51B12A29 (void);
// 0x000002FA System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_initial_metadata_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_batch_context_recv_initial_metadata_delegate_EndInvoke_mE0F6B5FA1F368B49336C7C782C9E4917B9A35F69 (void);
// 0x000002FB System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_message_length_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_batch_context_recv_message_length_delegate__ctor_m80567C53F00CB90DCB149B02572085C83E7D9E95 (void);
// 0x000002FC System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_message_length_delegate::Invoke(Grpc.Core.Internal.BatchContextSafeHandle)
extern void grpcsharp_batch_context_recv_message_length_delegate_Invoke_mE2CE1A2C105A781BEB60DC500AF0CCFD6E894F08 (void);
// 0x000002FD System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_message_length_delegate::BeginInvoke(Grpc.Core.Internal.BatchContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_batch_context_recv_message_length_delegate_BeginInvoke_m21871B4F3B642EF1BD8146A2A1C987FDB96F79FC (void);
// 0x000002FE System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_message_length_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_batch_context_recv_message_length_delegate_EndInvoke_m2F8E7398A9D7297F43A5F4EDC7667B885AB124D6 (void);
// 0x000002FF System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_message_next_slice_peek_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_batch_context_recv_message_next_slice_peek_delegate__ctor_mC15E27AC2665DCA31497E4305178CEA8BC8F9F15 (void);
// 0x00000300 System.Int32 Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_message_next_slice_peek_delegate::Invoke(Grpc.Core.Internal.BatchContextSafeHandle,System.UIntPtr&,System.IntPtr&)
extern void grpcsharp_batch_context_recv_message_next_slice_peek_delegate_Invoke_m228F9936F6AF584C3C86AF3AD0905E43D969DA2B (void);
// 0x00000301 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_message_next_slice_peek_delegate::BeginInvoke(Grpc.Core.Internal.BatchContextSafeHandle,System.UIntPtr&,System.IntPtr&,System.AsyncCallback,System.Object)
extern void grpcsharp_batch_context_recv_message_next_slice_peek_delegate_BeginInvoke_m71616F9F8CBB8906DB83685CE0F3C2BA25BA6BCF (void);
// 0x00000302 System.Int32 Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_message_next_slice_peek_delegate::EndInvoke(System.UIntPtr&,System.IntPtr&,System.IAsyncResult)
extern void grpcsharp_batch_context_recv_message_next_slice_peek_delegate_EndInvoke_m8507779BB50694B10274A583CFBA6636F6AD039E (void);
// 0x00000303 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_status_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_batch_context_recv_status_on_client_status_delegate__ctor_m1E7D19ED76C787975A3E26E1C45B49F20E732D6E (void);
// 0x00000304 Grpc.Core.StatusCode Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_status_delegate::Invoke(Grpc.Core.Internal.BatchContextSafeHandle)
extern void grpcsharp_batch_context_recv_status_on_client_status_delegate_Invoke_m57419AD315E0ED0AB48A9F1B04A493D78E0CAC6A (void);
// 0x00000305 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_status_delegate::BeginInvoke(Grpc.Core.Internal.BatchContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_batch_context_recv_status_on_client_status_delegate_BeginInvoke_mF961992AFFA5EF4C055D8986940C9A3BC3F20EB2 (void);
// 0x00000306 Grpc.Core.StatusCode Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_status_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_batch_context_recv_status_on_client_status_delegate_EndInvoke_m32A84939918C05726C63B879FED8F061E29E60C9 (void);
// 0x00000307 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_details_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_batch_context_recv_status_on_client_details_delegate__ctor_m58E4CA3B95194C65E8FAB12DFE4FBFA05916420F (void);
// 0x00000308 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_details_delegate::Invoke(Grpc.Core.Internal.BatchContextSafeHandle,System.UIntPtr&)
extern void grpcsharp_batch_context_recv_status_on_client_details_delegate_Invoke_m96456E954AF7988564405626C2619BC063B96AAA (void);
// 0x00000309 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_details_delegate::BeginInvoke(Grpc.Core.Internal.BatchContextSafeHandle,System.UIntPtr&,System.AsyncCallback,System.Object)
extern void grpcsharp_batch_context_recv_status_on_client_details_delegate_BeginInvoke_mB09FDD84247D0E8823B0080A40F42E23B2704D49 (void);
// 0x0000030A System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_details_delegate::EndInvoke(System.UIntPtr&,System.IAsyncResult)
extern void grpcsharp_batch_context_recv_status_on_client_details_delegate_EndInvoke_m6FB124AC718041AF57A1E34864DF44AE60BA2616 (void);
// 0x0000030B System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_error_string_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_batch_context_recv_status_on_client_error_string_delegate__ctor_mFCEC6AAB824E45702AB6789B847FAD623A0F30E2 (void);
// 0x0000030C System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_error_string_delegate::Invoke(Grpc.Core.Internal.BatchContextSafeHandle)
extern void grpcsharp_batch_context_recv_status_on_client_error_string_delegate_Invoke_m25C17854C75270B03F1F4138BC45C2D08E570C21 (void);
// 0x0000030D System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_error_string_delegate::BeginInvoke(Grpc.Core.Internal.BatchContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_batch_context_recv_status_on_client_error_string_delegate_BeginInvoke_m2F3DB0BA244E98C316E09B6D351E9B3E9FE53DA4 (void);
// 0x0000030E System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_error_string_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_batch_context_recv_status_on_client_error_string_delegate_EndInvoke_m4C163A088C496D278E147CBE38F2DEC921503FAE (void);
// 0x0000030F System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate__ctor_mD950E477EF8271DEBB26C9C48175838A6C098EE3 (void);
// 0x00000310 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate::Invoke(Grpc.Core.Internal.BatchContextSafeHandle)
extern void grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate_Invoke_m66B4A8FC056058E6E3F2EF36011467A3743D5D7F (void);
// 0x00000311 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate::BeginInvoke(Grpc.Core.Internal.BatchContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate_BeginInvoke_mFF0CD034C79C54ADF34B30555E09D086C757E435 (void);
// 0x00000312 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate_EndInvoke_m700E87E33177E52FA82EEE24C60BF3C1B7FA1A18 (void);
// 0x00000313 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_close_on_server_cancelled_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_batch_context_recv_close_on_server_cancelled_delegate__ctor_mAD266DF50DC5AF7FFDDA9D29886CEE158E906A17 (void);
// 0x00000314 System.Int32 Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_close_on_server_cancelled_delegate::Invoke(Grpc.Core.Internal.BatchContextSafeHandle)
extern void grpcsharp_batch_context_recv_close_on_server_cancelled_delegate_Invoke_m586DC4C9AB80F3CACEFBA69AD81E35A2DD72BB75 (void);
// 0x00000315 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_close_on_server_cancelled_delegate::BeginInvoke(Grpc.Core.Internal.BatchContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_batch_context_recv_close_on_server_cancelled_delegate_BeginInvoke_m13BCCA8DDF3FBC086ECD4B375FC5841C440D072C (void);
// 0x00000316 System.Int32 Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_close_on_server_cancelled_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_batch_context_recv_close_on_server_cancelled_delegate_EndInvoke_m6F511DC793D5A7EBB85B722C8E2FB966B30EA01E (void);
// 0x00000317 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_reset_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_batch_context_reset_delegate__ctor_mE4B404A995F4B1A30EAEC086528CA7E50EB69BE9 (void);
// 0x00000318 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_reset_delegate::Invoke(Grpc.Core.Internal.BatchContextSafeHandle)
extern void grpcsharp_batch_context_reset_delegate_Invoke_m47EB3BD94639D0762819C069751505816F231F8B (void);
// 0x00000319 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_reset_delegate::BeginInvoke(Grpc.Core.Internal.BatchContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_batch_context_reset_delegate_BeginInvoke_m05F0BBA294D6FF952C4C7E3BE49454613FD76861 (void);
// 0x0000031A System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_reset_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_batch_context_reset_delegate_EndInvoke_m57270752BB48C676FC7DF67323BB2C59D63F7BA2 (void);
// 0x0000031B System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_destroy_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_batch_context_destroy_delegate__ctor_mB3A90484AE4222E2A10E8430372167E7AF51443D (void);
// 0x0000031C System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_destroy_delegate::Invoke(System.IntPtr)
extern void grpcsharp_batch_context_destroy_delegate_Invoke_m91C01DD2668A75D5F85F330B935E3D9EAC350C7C (void);
// 0x0000031D System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_destroy_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_batch_context_destroy_delegate_BeginInvoke_m2FC30F78E939B9F9177E2973DDC2C24CF5005D5D (void);
// 0x0000031E System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_destroy_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_batch_context_destroy_delegate_EndInvoke_m6AF394C17D75C0F4C4DC2321C309D5E58D7913E3 (void);
// 0x0000031F System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_create_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_request_call_context_create_delegate__ctor_m3123BD685ED65BA1C56E56062B50150D36C833F1 (void);
// 0x00000320 Grpc.Core.Internal.RequestCallContextSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_create_delegate::Invoke()
extern void grpcsharp_request_call_context_create_delegate_Invoke_mCDDD9B7E5E34830285C805B05F2C0F9374AEB99A (void);
// 0x00000321 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_create_delegate::BeginInvoke(System.AsyncCallback,System.Object)
extern void grpcsharp_request_call_context_create_delegate_BeginInvoke_mC136B3D76C41EFBF6F2C0EA8C0008A18D1C4BBC8 (void);
// 0x00000322 Grpc.Core.Internal.RequestCallContextSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_create_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_request_call_context_create_delegate_EndInvoke_m879CE38C8805CB60AA29F85CE08C1955660FA4D3 (void);
// 0x00000323 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_call_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_request_call_context_call_delegate__ctor_mF2ED9122FF60D1E55E6891DA52B133462E12D2EE (void);
// 0x00000324 Grpc.Core.Internal.CallSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_call_delegate::Invoke(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void grpcsharp_request_call_context_call_delegate_Invoke_m1DBAA893A2B366381A40D5672170B7B375CEDA63 (void);
// 0x00000325 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_call_delegate::BeginInvoke(Grpc.Core.Internal.RequestCallContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_request_call_context_call_delegate_BeginInvoke_m4DF22FF009329CF18E7D0D12AD1999A3C804CB8B (void);
// 0x00000326 Grpc.Core.Internal.CallSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_call_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_request_call_context_call_delegate_EndInvoke_m2938F8F066A178BA1C05D881A504821E6B23BE87 (void);
// 0x00000327 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_method_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_request_call_context_method_delegate__ctor_m0731863A605D70740E00A4DDCC7E47073D70DDA2 (void);
// 0x00000328 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_method_delegate::Invoke(Grpc.Core.Internal.RequestCallContextSafeHandle,System.UIntPtr&)
extern void grpcsharp_request_call_context_method_delegate_Invoke_m46F68223AD40FCF07B7B5A165119C72DC97F5C52 (void);
// 0x00000329 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_method_delegate::BeginInvoke(Grpc.Core.Internal.RequestCallContextSafeHandle,System.UIntPtr&,System.AsyncCallback,System.Object)
extern void grpcsharp_request_call_context_method_delegate_BeginInvoke_m03135AE4EC6C3EA9CD4B48F47134B7F577FDE563 (void);
// 0x0000032A System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_method_delegate::EndInvoke(System.UIntPtr&,System.IAsyncResult)
extern void grpcsharp_request_call_context_method_delegate_EndInvoke_m47C18B91B85CC2669410D2CA396BCBC08EDBEF5E (void);
// 0x0000032B System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_host_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_request_call_context_host_delegate__ctor_m9798971494671581BB31E0094D10781A3C6D1EA8 (void);
// 0x0000032C System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_host_delegate::Invoke(Grpc.Core.Internal.RequestCallContextSafeHandle,System.UIntPtr&)
extern void grpcsharp_request_call_context_host_delegate_Invoke_m3BE8DA48F9558BA8D68391344852B98057C37237 (void);
// 0x0000032D System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_host_delegate::BeginInvoke(Grpc.Core.Internal.RequestCallContextSafeHandle,System.UIntPtr&,System.AsyncCallback,System.Object)
extern void grpcsharp_request_call_context_host_delegate_BeginInvoke_m9C6F7B5BB7C5663F67DF6433B8372BAF0CAF63D6 (void);
// 0x0000032E System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_host_delegate::EndInvoke(System.UIntPtr&,System.IAsyncResult)
extern void grpcsharp_request_call_context_host_delegate_EndInvoke_m81485B0D46C71AE256EAE24079AC055732E8219D (void);
// 0x0000032F System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_deadline_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_request_call_context_deadline_delegate__ctor_m6D5370EA30CDC68BBBD64DB0AE52A7125593DEBA (void);
// 0x00000330 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_deadline_delegate::Invoke(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void grpcsharp_request_call_context_deadline_delegate_Invoke_m95FC304F1EFF6CD91DFC59994A081845BDC46CEB (void);
// 0x00000331 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_deadline_delegate::BeginInvoke(Grpc.Core.Internal.RequestCallContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_request_call_context_deadline_delegate_BeginInvoke_m54C7771B9106DED42C7CF1221C1786555A1B0465 (void);
// 0x00000332 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_deadline_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_request_call_context_deadline_delegate_EndInvoke_m246787AF5BEAD3F511C845C48C6C9A9998996ADD (void);
// 0x00000333 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_request_metadata_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_request_call_context_request_metadata_delegate__ctor_mDE4930FE9570E638E03B0C42DC679D2E72CA1F11 (void);
// 0x00000334 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_request_metadata_delegate::Invoke(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void grpcsharp_request_call_context_request_metadata_delegate_Invoke_m2E3FD33D9B7DEF8D14844D59B315D372DB3C124D (void);
// 0x00000335 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_request_metadata_delegate::BeginInvoke(Grpc.Core.Internal.RequestCallContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_request_call_context_request_metadata_delegate_BeginInvoke_m584B417B58B1614010FBE67413939C2EC3734EB4 (void);
// 0x00000336 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_request_metadata_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_request_call_context_request_metadata_delegate_EndInvoke_mC6ABCC4F2A3C8845DDD6FDDBE576EFF0DFB4D751 (void);
// 0x00000337 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_reset_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_request_call_context_reset_delegate__ctor_m23F3EABD9D2F09F8171457F27CA819AC0CFD71AD (void);
// 0x00000338 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_reset_delegate::Invoke(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void grpcsharp_request_call_context_reset_delegate_Invoke_m0E4C88599E8883324089B355D7DEC973456632DF (void);
// 0x00000339 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_reset_delegate::BeginInvoke(Grpc.Core.Internal.RequestCallContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_request_call_context_reset_delegate_BeginInvoke_mCEE1CF922F13993EA9867999B3DF61902B117925 (void);
// 0x0000033A System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_reset_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_request_call_context_reset_delegate_EndInvoke_mBF01650AF76C7134DABA7752C2A170FB7423A060 (void);
// 0x0000033B System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_destroy_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_request_call_context_destroy_delegate__ctor_mCE28006B52C92D6ACF3FAF45297CF35C5DFA3EE2 (void);
// 0x0000033C System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_destroy_delegate::Invoke(System.IntPtr)
extern void grpcsharp_request_call_context_destroy_delegate_Invoke_m32808A2FE550061EBBDBF4AE0D0305363B986705 (void);
// 0x0000033D System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_destroy_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_request_call_context_destroy_delegate_BeginInvoke_m17BD19812F4FE506F076ABD39564012834C9BAEC (void);
// 0x0000033E System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_destroy_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_request_call_context_destroy_delegate_EndInvoke_m4B1549338854716D29AA20F57133180FE65BB49E (void);
// 0x0000033F System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_composite_call_credentials_create_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_composite_call_credentials_create_delegate__ctor_m29A43911F4C146C42EC10CE5D220FBCA3A818552 (void);
// 0x00000340 Grpc.Core.Internal.CallCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_composite_call_credentials_create_delegate::Invoke(Grpc.Core.Internal.CallCredentialsSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void grpcsharp_composite_call_credentials_create_delegate_Invoke_m33AD20299473E15795F6A5E6FDF34A1BAF101584 (void);
// 0x00000341 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_composite_call_credentials_create_delegate::BeginInvoke(Grpc.Core.Internal.CallCredentialsSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_composite_call_credentials_create_delegate_BeginInvoke_mFD008800397AD60AEC5C10C67BC6EED2A0D346EA (void);
// 0x00000342 Grpc.Core.Internal.CallCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_composite_call_credentials_create_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_composite_call_credentials_create_delegate_EndInvoke_m6284CAFDE6AD80EB71709E561A2CD7720A60998F (void);
// 0x00000343 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_credentials_release_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_credentials_release_delegate__ctor_m418F99CAC81F490FE1F723B89BA76DF9134BD48D (void);
// 0x00000344 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_credentials_release_delegate::Invoke(System.IntPtr)
extern void grpcsharp_call_credentials_release_delegate_Invoke_mEFCDAF3B6F0F3ADFD91F419053DD5D0FB024EFC3 (void);
// 0x00000345 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_credentials_release_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_call_credentials_release_delegate_BeginInvoke_mBB26AF5D5F7F3956A809C023DF5B731B9F8C36C6 (void);
// 0x00000346 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_credentials_release_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_credentials_release_delegate_EndInvoke_mDAB9A40B09986AD5BA2F0375136FAC837E55017E (void);
// 0x00000347 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_cancel_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_cancel_delegate__ctor_m86B4D2D807408F11F300599093F4C4723E287D4E (void);
// 0x00000348 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_cancel_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle)
extern void grpcsharp_call_cancel_delegate_Invoke_m84A1914B3F5E321E688A3826134F1E08777ED390 (void);
// 0x00000349 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_cancel_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_call_cancel_delegate_BeginInvoke_mD49C0966FD7CE4D5F26AD477DF41C3E3A1DED700 (void);
// 0x0000034A Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_cancel_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_cancel_delegate_EndInvoke_m2A30CB1ECC7287BE7146F9C00490F6F794158518 (void);
// 0x0000034B System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_cancel_with_status_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_cancel_with_status_delegate__ctor_m7D28F4786EE73327173883CAF7B6C3C2C44A1D24 (void);
// 0x0000034C Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_cancel_with_status_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.StatusCode,System.String)
extern void grpcsharp_call_cancel_with_status_delegate_Invoke_m7CE083C886F5F462E51520F163CA48E66A78638D (void);
// 0x0000034D System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_cancel_with_status_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.StatusCode,System.String,System.AsyncCallback,System.Object)
extern void grpcsharp_call_cancel_with_status_delegate_BeginInvoke_m74B5CDD8F773FFFDA0B967603D2B53552A6644C6 (void);
// 0x0000034E Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_cancel_with_status_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_cancel_with_status_delegate_EndInvoke_m5C6C49978D6DB6CD81A60A3E0CDE8072AC65A02E (void);
// 0x0000034F System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_unary_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_start_unary_delegate__ctor_m4657B1F4B2A94B2C80ECBE3B31BC9295D9D84FA0 (void);
// 0x00000350 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_unary_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void grpcsharp_call_start_unary_delegate_Invoke_m4BD315AD9FC93636231FC4E0FD7044FA4BF62D4F (void);
// 0x00000351 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_unary_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags,System.AsyncCallback,System.Object)
extern void grpcsharp_call_start_unary_delegate_BeginInvoke_m5C362FC44DF4C2F86CFA4079EFA940E3A37A99CF (void);
// 0x00000352 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_unary_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_start_unary_delegate_EndInvoke_m5338E1E12C669360DD8A262A04690F3AC05F59F5 (void);
// 0x00000353 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_client_streaming_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_start_client_streaming_delegate__ctor_m12F63DEAE9E00AB971585D687398ABA695725727 (void);
// 0x00000354 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_client_streaming_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void grpcsharp_call_start_client_streaming_delegate_Invoke_m619772C415E09A8986449DE490F8634EEB3A489D (void);
// 0x00000355 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_client_streaming_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags,System.AsyncCallback,System.Object)
extern void grpcsharp_call_start_client_streaming_delegate_BeginInvoke_mC301C0D80AF1156906C2E92BC100AE77F7373D35 (void);
// 0x00000356 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_client_streaming_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_start_client_streaming_delegate_EndInvoke_mDE5294B6D9F269DC8FDACFD289910C737C3ECCB5 (void);
// 0x00000357 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_server_streaming_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_start_server_streaming_delegate__ctor_m9353BC3658F925EAB79DD9A280ACFFD876ACA2CC (void);
// 0x00000358 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_server_streaming_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void grpcsharp_call_start_server_streaming_delegate_Invoke_m0315CF30611FFDFE4F693940C8ED822E00D22B84 (void);
// 0x00000359 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_server_streaming_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags,System.AsyncCallback,System.Object)
extern void grpcsharp_call_start_server_streaming_delegate_BeginInvoke_mB0176031FBFF868B1095AF47E6466ED51C194F50 (void);
// 0x0000035A Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_server_streaming_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_start_server_streaming_delegate_EndInvoke_m7604FD3559311F1B473B938F8A8ACF7442634D94 (void);
// 0x0000035B System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_duplex_streaming_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_start_duplex_streaming_delegate__ctor_m63326B5344F6B59852C18F3999526689EB8D20FB (void);
// 0x0000035C Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_duplex_streaming_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void grpcsharp_call_start_duplex_streaming_delegate_Invoke_mBF637E3626916C43B10B2C1AFC68063CC6AAAA22 (void);
// 0x0000035D System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_duplex_streaming_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags,System.AsyncCallback,System.Object)
extern void grpcsharp_call_start_duplex_streaming_delegate_BeginInvoke_m51AC1E4B2D959297B4B0806B5DF09F113161E8AF (void);
// 0x0000035E Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_duplex_streaming_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_start_duplex_streaming_delegate_EndInvoke_m810DBE922F9C8A3A31A23E3F040B3A8FC91A57DE (void);
// 0x0000035F System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_message_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_send_message_delegate__ctor_mA80E518534B8B129E5F11CA183DA66F03B4F27D0 (void);
// 0x00000360 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_message_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,System.Int32)
extern void grpcsharp_call_send_message_delegate_Invoke_m11513868541B35159BDE6A2EE51183BC85B5ED75 (void);
// 0x00000361 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_message_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,System.Int32,System.AsyncCallback,System.Object)
extern void grpcsharp_call_send_message_delegate_BeginInvoke_mC87A9E1D46793C1D2B2E4315CC0A20CF0358C596 (void);
// 0x00000362 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_message_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_send_message_delegate_EndInvoke_mD85DC583B2CBC8CB963640D5D9FC82800BD80DBB (void);
// 0x00000363 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_close_from_client_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_send_close_from_client_delegate__ctor_m1882DA48B2905F2BDBE86B25C84E5CFC1C549FE8 (void);
// 0x00000364 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_close_from_client_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void grpcsharp_call_send_close_from_client_delegate_Invoke_m97A5051035F97AE4BA25F3A5106313E846215C8E (void);
// 0x00000365 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_close_from_client_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_call_send_close_from_client_delegate_BeginInvoke_m027C2CE789A1C2ADA9E90BDADECFE5724BDB5BD5 (void);
// 0x00000366 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_close_from_client_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_send_close_from_client_delegate_EndInvoke_mD673295E141C4A2942D3ECFDBF95FCE50CCA7EF2 (void);
// 0x00000367 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_status_from_server_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_send_status_from_server_delegate__ctor_m10215C05028347884084027F2C0A259275C1E33D (void);
// 0x00000368 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_status_from_server_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.StatusCode,System.IntPtr,System.UIntPtr,Grpc.Core.Internal.MetadataArraySafeHandle,System.Int32,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags)
extern void grpcsharp_call_send_status_from_server_delegate_Invoke_m6F8084219AB97681C49A7A16CCFFB0A36D5FF13A (void);
// 0x00000369 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_status_from_server_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.StatusCode,System.IntPtr,System.UIntPtr,Grpc.Core.Internal.MetadataArraySafeHandle,System.Int32,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,System.AsyncCallback,System.Object)
extern void grpcsharp_call_send_status_from_server_delegate_BeginInvoke_m7F8BF72DD2F3341314F43B95508FB1CC4811D933 (void);
// 0x0000036A Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_status_from_server_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_send_status_from_server_delegate_EndInvoke_m54240FF4FF46E78AC88258A89BE6FDABF9DA15F1 (void);
// 0x0000036B System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_recv_message_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_recv_message_delegate__ctor_mEDD7A3B8F25662DECE31EDD58769C11A3FCA102B (void);
// 0x0000036C Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_recv_message_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void grpcsharp_call_recv_message_delegate_Invoke_mD5F11789662BA57D8906EBD61C8D281513A8CD4D (void);
// 0x0000036D System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_recv_message_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_call_recv_message_delegate_BeginInvoke_m15643C33F577D7351E385E3506167C352CB4CD01 (void);
// 0x0000036E Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_recv_message_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_recv_message_delegate_EndInvoke_m7B29A35789E080D89B61A7AA19556C4ED8CC17E9 (void);
// 0x0000036F System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_recv_initial_metadata_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_recv_initial_metadata_delegate__ctor_m0F48585067F2384E7F6EBE693E70D47D794D731C (void);
// 0x00000370 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_recv_initial_metadata_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void grpcsharp_call_recv_initial_metadata_delegate_Invoke_m7240D782A65F01924522A4C9C8DCF888BE8544B1 (void);
// 0x00000371 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_recv_initial_metadata_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_call_recv_initial_metadata_delegate_BeginInvoke_mD89CE41943879A886788BCE0E5E6DEE932D1FA9E (void);
// 0x00000372 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_recv_initial_metadata_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_recv_initial_metadata_delegate_EndInvoke_mFA78B3FC12B94FE5ED1AC6316C1BDA63F4B70402 (void);
// 0x00000373 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_serverside_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_start_serverside_delegate__ctor_m014AA34CE3691CAA237031C7FDD83053360E7144 (void);
// 0x00000374 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_serverside_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void grpcsharp_call_start_serverside_delegate_Invoke_m4D27E6D2C540D91A50582048416E505DFF997E10 (void);
// 0x00000375 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_serverside_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_call_start_serverside_delegate_BeginInvoke_m9B94B16E93F7DC3ACF3E2CD9AFDA169CF7733B21 (void);
// 0x00000376 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_serverside_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_start_serverside_delegate_EndInvoke_m9ADB1F8CD05D4CEFB3E97CD21EABB8297604DE95 (void);
// 0x00000377 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_initial_metadata_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_send_initial_metadata_delegate__ctor_m238FA5D1EFE9B23250BFBE3E730B9ABCCF1F224D (void);
// 0x00000378 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_initial_metadata_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle)
extern void grpcsharp_call_send_initial_metadata_delegate_Invoke_m56152245E01F7C7A3D514B5BF8FA4DDA296D18C5 (void);
// 0x00000379 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_initial_metadata_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_call_send_initial_metadata_delegate_BeginInvoke_m46F4C6A771C622187488BACAD53C02092B593B1F (void);
// 0x0000037A Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_initial_metadata_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_send_initial_metadata_delegate_EndInvoke_mE9FDDAAE58C685494F03004CF5378B3B6DCB85B4 (void);
// 0x0000037B System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_set_credentials_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_set_credentials_delegate__ctor_mEECDD8C20A35203FC3487022B889F02FDD19D840 (void);
// 0x0000037C Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_set_credentials_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void grpcsharp_call_set_credentials_delegate_Invoke_m7704EE5984CE5F05D34D31E99800AF1183B8126C (void);
// 0x0000037D System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_set_credentials_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_call_set_credentials_delegate_BeginInvoke_mEF8436C6A81118E24E5B017E77C772F47D1FFAC9 (void);
// 0x0000037E Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_set_credentials_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_set_credentials_delegate_EndInvoke_m2C6A90AECCA0622812EA8A62764EFC867307B0A6 (void);
// 0x0000037F System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_get_peer_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_get_peer_delegate__ctor_m47DF045C03ABDABC35B1ECCFF19FF775BE4A516A (void);
// 0x00000380 Grpc.Core.Internal.CStringSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_get_peer_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle)
extern void grpcsharp_call_get_peer_delegate_Invoke_m337BDBD9DF9BFA1D59897DD04963FB440C07DCB4 (void);
// 0x00000381 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_get_peer_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_call_get_peer_delegate_BeginInvoke_mF420A38413C81A4F118A6F4DF43F4DECAD83EE9B (void);
// 0x00000382 Grpc.Core.Internal.CStringSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_get_peer_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_get_peer_delegate_EndInvoke_m337D508126533206BEA354E992BB3A90793F61C5 (void);
// 0x00000383 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_destroy_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_destroy_delegate__ctor_m139E62A0C0A704A6B4A15C5A8AD42CA71E9F14CA (void);
// 0x00000384 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_destroy_delegate::Invoke(System.IntPtr)
extern void grpcsharp_call_destroy_delegate_Invoke_mD06F76D0219C1186EE2E6A98E92385ED2345870C (void);
// 0x00000385 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_destroy_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_call_destroy_delegate_BeginInvoke_m36581EB8B0CC675D0E2C9B65EA21C9AB7B9F8A21 (void);
// 0x00000386 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_destroy_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_destroy_delegate_EndInvoke_m3507B602C721847C4370113BEC6011E4A263E46D (void);
// 0x00000387 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_create_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_channel_args_create_delegate__ctor_mD5C70EDA0874792DE66B3B439D6657F3528C149B (void);
// 0x00000388 Grpc.Core.Internal.ChannelArgsSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_create_delegate::Invoke(System.UIntPtr)
extern void grpcsharp_channel_args_create_delegate_Invoke_mCF7C5372576D4515EF7A22997FECA7C4C92E1E04 (void);
// 0x00000389 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_create_delegate::BeginInvoke(System.UIntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_channel_args_create_delegate_BeginInvoke_mB74127CC1A51496BC8E4C0D7F1F07BEE7C9050F8 (void);
// 0x0000038A Grpc.Core.Internal.ChannelArgsSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_create_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_channel_args_create_delegate_EndInvoke_m64D06FCAFE8E937C6B4A5F3C1CB00B2E67F88731 (void);
// 0x0000038B System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_set_string_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_channel_args_set_string_delegate__ctor_m877E5EE0C3A91C62B3C988440A524F8C18072F1A (void);
// 0x0000038C System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_set_string_delegate::Invoke(Grpc.Core.Internal.ChannelArgsSafeHandle,System.UIntPtr,System.String,System.String)
extern void grpcsharp_channel_args_set_string_delegate_Invoke_m9D0413548A2774F9A2AA6F9DE8B70944AEF32D69 (void);
// 0x0000038D System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_set_string_delegate::BeginInvoke(Grpc.Core.Internal.ChannelArgsSafeHandle,System.UIntPtr,System.String,System.String,System.AsyncCallback,System.Object)
extern void grpcsharp_channel_args_set_string_delegate_BeginInvoke_m7FAD4FD148FBF6DF981D4DCF38BF272EA9A858C1 (void);
// 0x0000038E System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_set_string_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_channel_args_set_string_delegate_EndInvoke_m9C02551D09DB738638BF88D0CB64CC2D55AE7A19 (void);
// 0x0000038F System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_set_integer_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_channel_args_set_integer_delegate__ctor_m45CED91AC7010771F77A08EC0EBF8C99A1A20E7A (void);
// 0x00000390 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_set_integer_delegate::Invoke(Grpc.Core.Internal.ChannelArgsSafeHandle,System.UIntPtr,System.String,System.Int32)
extern void grpcsharp_channel_args_set_integer_delegate_Invoke_m4D5924A60A619F2B59F04E0E944C63757B0BC169 (void);
// 0x00000391 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_set_integer_delegate::BeginInvoke(Grpc.Core.Internal.ChannelArgsSafeHandle,System.UIntPtr,System.String,System.Int32,System.AsyncCallback,System.Object)
extern void grpcsharp_channel_args_set_integer_delegate_BeginInvoke_m9F244B41E1FB116A9CF9F7D0E76BDAB499CA8ACD (void);
// 0x00000392 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_set_integer_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_channel_args_set_integer_delegate_EndInvoke_m7047AF66D51A47541F3064799E01DEE8DD896CF5 (void);
// 0x00000393 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_destroy_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_channel_args_destroy_delegate__ctor_m55BCA2CC993CDC44A53999B3117345303DC59F8A (void);
// 0x00000394 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_destroy_delegate::Invoke(System.IntPtr)
extern void grpcsharp_channel_args_destroy_delegate_Invoke_m1AD54B200C3A8D92663A9419DF8007CFB0BCA939 (void);
// 0x00000395 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_destroy_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_channel_args_destroy_delegate_BeginInvoke_m4DB619BBDECFFF00941AFA4BC7AC116E52DE3DF1 (void);
// 0x00000396 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_destroy_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_channel_args_destroy_delegate_EndInvoke_m46F51C0C181A4410558958F8B131B29878C6E1FA (void);
// 0x00000397 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_override_default_ssl_roots_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_override_default_ssl_roots_delegate__ctor_m19D4C0FB8306630C014F96CF6A4D044AF61A7C42 (void);
// 0x00000398 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_override_default_ssl_roots_delegate::Invoke(System.String)
extern void grpcsharp_override_default_ssl_roots_delegate_Invoke_mF2EF1B1CADA92E84E74A4F601BA72C82C954A1DE (void);
// 0x00000399 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_override_default_ssl_roots_delegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern void grpcsharp_override_default_ssl_roots_delegate_BeginInvoke_m4308B653AA345471053D5BB1F28F1F9D388397EE (void);
// 0x0000039A System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_override_default_ssl_roots_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_override_default_ssl_roots_delegate_EndInvoke_m4B9BEA03E1DA5EF0CB55F9CD5B06D3C6CBA1BB5C (void);
// 0x0000039B System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_ssl_credentials_create_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_ssl_credentials_create_delegate__ctor_m9AF320EC5E38036B4D866AF5FAA21155D1201362 (void);
// 0x0000039C Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_ssl_credentials_create_delegate::Invoke(System.String,System.String,System.String,System.IntPtr)
extern void grpcsharp_ssl_credentials_create_delegate_Invoke_m466AA94A2824F4FB7D34815402E0D7AD2DDF1B8E (void);
// 0x0000039D System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_ssl_credentials_create_delegate::BeginInvoke(System.String,System.String,System.String,System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_ssl_credentials_create_delegate_BeginInvoke_m7914B18E3082C5FC01C21084EBE816DA3AC78172 (void);
// 0x0000039E Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_ssl_credentials_create_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_ssl_credentials_create_delegate_EndInvoke_m6886EB12B360B2F68944D3CC089CE55D8BDEE821 (void);
// 0x0000039F System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_composite_channel_credentials_create_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_composite_channel_credentials_create_delegate__ctor_mD12471AECF69B17224B61DAF40DB70528937139E (void);
// 0x000003A0 Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_composite_channel_credentials_create_delegate::Invoke(Grpc.Core.Internal.ChannelCredentialsSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void grpcsharp_composite_channel_credentials_create_delegate_Invoke_mACF1D25C49D71DA4C040EDE61F5CE71C91CA0224 (void);
// 0x000003A1 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_composite_channel_credentials_create_delegate::BeginInvoke(Grpc.Core.Internal.ChannelCredentialsSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_composite_channel_credentials_create_delegate_BeginInvoke_mCB805A1670512EE68E57FCBF84A9F769B8A88BEF (void);
// 0x000003A2 Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_composite_channel_credentials_create_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_composite_channel_credentials_create_delegate_EndInvoke_m7CE9DB6812CE48B50A3E81096EEDDBFAEAE00CD5 (void);
// 0x000003A3 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_credentials_release_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_channel_credentials_release_delegate__ctor_m490BDB2F2C9244BEDFA9DE7CD32D2B966E4B62CA (void);
// 0x000003A4 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_credentials_release_delegate::Invoke(System.IntPtr)
extern void grpcsharp_channel_credentials_release_delegate_Invoke_mD8D6013A9F902CC04704AEC8B893098B93CF202E (void);
// 0x000003A5 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_credentials_release_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_channel_credentials_release_delegate_BeginInvoke_m003955EE3BDEFC1DC805E42296F753572A4CED1A (void);
// 0x000003A6 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_credentials_release_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_channel_credentials_release_delegate_EndInvoke_mFD2D9AB576E0AE10DAA18D1C60D9C640FD8E9393 (void);
// 0x000003A7 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_insecure_channel_create_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_insecure_channel_create_delegate__ctor_m56739DFB9EEC933BBF662D3429E4C179C7DD2AE2 (void);
// 0x000003A8 Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_insecure_channel_create_delegate::Invoke(System.String,Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void grpcsharp_insecure_channel_create_delegate_Invoke_m9895847FACB4B8C37C7D970DFFADDAC693298B4E (void);
// 0x000003A9 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_insecure_channel_create_delegate::BeginInvoke(System.String,Grpc.Core.Internal.ChannelArgsSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_insecure_channel_create_delegate_BeginInvoke_m25860D4EC4DA28237B19335B2B65E188F798CAEC (void);
// 0x000003AA Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_insecure_channel_create_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_insecure_channel_create_delegate_EndInvoke_m6F1B2ED513E84B09CA22743F578207C5EB80FF46 (void);
// 0x000003AB System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_secure_channel_create_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_secure_channel_create_delegate__ctor_m68B5274BBCF52B68303E0532A26FA86A9250DF53 (void);
// 0x000003AC Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_secure_channel_create_delegate::Invoke(Grpc.Core.Internal.ChannelCredentialsSafeHandle,System.String,Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void grpcsharp_secure_channel_create_delegate_Invoke_mC25ED768AB7B5841FC65314FF5F2ADDFC7237ACD (void);
// 0x000003AD System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_secure_channel_create_delegate::BeginInvoke(Grpc.Core.Internal.ChannelCredentialsSafeHandle,System.String,Grpc.Core.Internal.ChannelArgsSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_secure_channel_create_delegate_BeginInvoke_mC347D91A5651364E0B711D3FE433AE8842E3D660 (void);
// 0x000003AE Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_secure_channel_create_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_secure_channel_create_delegate_EndInvoke_mC099150EBC1250029853158A981B8DCE01837EEB (void);
// 0x000003AF System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_create_call_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_channel_create_call_delegate__ctor_mE4B3C9E08103E3466F6BB443EB4E2B88E41B22B0 (void);
// 0x000003B0 Grpc.Core.Internal.CallSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_create_call_delegate::Invoke(Grpc.Core.Internal.ChannelSafeHandle,Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.ContextPropagationFlags,Grpc.Core.Internal.CompletionQueueSafeHandle,System.String,System.String,Grpc.Core.Internal.Timespec)
extern void grpcsharp_channel_create_call_delegate_Invoke_m8D6F0DBF6D134FB1F0350679A72FF2DE8D2D68BF (void);
// 0x000003B1 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_create_call_delegate::BeginInvoke(Grpc.Core.Internal.ChannelSafeHandle,Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.ContextPropagationFlags,Grpc.Core.Internal.CompletionQueueSafeHandle,System.String,System.String,Grpc.Core.Internal.Timespec,System.AsyncCallback,System.Object)
extern void grpcsharp_channel_create_call_delegate_BeginInvoke_m46A1D7938EFC5D42B2DAD19126456F2AF8034A60 (void);
// 0x000003B2 Grpc.Core.Internal.CallSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_create_call_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_channel_create_call_delegate_EndInvoke_m04EDD90EE1B3ED8674D7CB949099FDA9B53050F6 (void);
// 0x000003B3 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_check_connectivity_state_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_channel_check_connectivity_state_delegate__ctor_mF42E49C0DD935F165E620DDA0666384469193704 (void);
// 0x000003B4 Grpc.Core.ChannelState Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_check_connectivity_state_delegate::Invoke(Grpc.Core.Internal.ChannelSafeHandle,System.Int32)
extern void grpcsharp_channel_check_connectivity_state_delegate_Invoke_m8774E63EBD10A883B83CABC0D38B2F3F8486689E (void);
// 0x000003B5 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_check_connectivity_state_delegate::BeginInvoke(Grpc.Core.Internal.ChannelSafeHandle,System.Int32,System.AsyncCallback,System.Object)
extern void grpcsharp_channel_check_connectivity_state_delegate_BeginInvoke_m42C78E0BE3FAB68FF66D1929216AC92888691B2C (void);
// 0x000003B6 Grpc.Core.ChannelState Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_check_connectivity_state_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_channel_check_connectivity_state_delegate_EndInvoke_mEEFB74C89303B95DCFECD29BBDD5BDB5E2582B5D (void);
// 0x000003B7 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_watch_connectivity_state_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_channel_watch_connectivity_state_delegate__ctor_m1C721A50EC81908967E95FD340B901F5B7664ED0 (void);
// 0x000003B8 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_watch_connectivity_state_delegate::Invoke(Grpc.Core.Internal.ChannelSafeHandle,Grpc.Core.ChannelState,Grpc.Core.Internal.Timespec,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void grpcsharp_channel_watch_connectivity_state_delegate_Invoke_m13B047C205A5B235D2BF9F189A482B766E973964 (void);
// 0x000003B9 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_watch_connectivity_state_delegate::BeginInvoke(Grpc.Core.Internal.ChannelSafeHandle,Grpc.Core.ChannelState,Grpc.Core.Internal.Timespec,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_channel_watch_connectivity_state_delegate_BeginInvoke_m7701A808F711D65E84420BECA0F1CBA70E385108 (void);
// 0x000003BA System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_watch_connectivity_state_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_channel_watch_connectivity_state_delegate_EndInvoke_mCF98E6E3001EAC9D4FD14EF8F18771C904D9D475 (void);
// 0x000003BB System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_get_target_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_channel_get_target_delegate__ctor_m69E0EDBF233D285381F86340774EA517EC1A32AF (void);
// 0x000003BC Grpc.Core.Internal.CStringSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_get_target_delegate::Invoke(Grpc.Core.Internal.ChannelSafeHandle)
extern void grpcsharp_channel_get_target_delegate_Invoke_m4F91F9D133A059A0E24DA9DAB87C60307EDB6FE0 (void);
// 0x000003BD System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_get_target_delegate::BeginInvoke(Grpc.Core.Internal.ChannelSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_channel_get_target_delegate_BeginInvoke_m41FD9F8A3F9738FED121CA778D2F379536E421E6 (void);
// 0x000003BE Grpc.Core.Internal.CStringSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_get_target_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_channel_get_target_delegate_EndInvoke_mF347845D42800C0D1A8899BA0F6D65375CC3294D (void);
// 0x000003BF System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_destroy_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_channel_destroy_delegate__ctor_mCC90227F91850E872330AA38C87D60E29470324D (void);
// 0x000003C0 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_destroy_delegate::Invoke(System.IntPtr)
extern void grpcsharp_channel_destroy_delegate_Invoke_m3A15110E5BB00879FDF6FEF68F018AE0E3312890 (void);
// 0x000003C1 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_destroy_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_channel_destroy_delegate_BeginInvoke_m67ADA9DADEBAE9D3FB419543D5B5B449E216EB11 (void);
// 0x000003C2 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_destroy_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_channel_destroy_delegate_EndInvoke_m13F3B6E4E6104C15780821E4CE48D77475715275 (void);
// 0x000003C3 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_sizeof_grpc_event_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_sizeof_grpc_event_delegate__ctor_m655B25034BAA0C48555FE543C858EFF8D12A4823 (void);
// 0x000003C4 System.Int32 Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_sizeof_grpc_event_delegate::Invoke()
extern void grpcsharp_sizeof_grpc_event_delegate_Invoke_m9A9B5B83FAC1D2045E9F86377A7BD24E181FA7C2 (void);
// 0x000003C5 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_sizeof_grpc_event_delegate::BeginInvoke(System.AsyncCallback,System.Object)
extern void grpcsharp_sizeof_grpc_event_delegate_BeginInvoke_m67BB982006897AD2852E620A43FBF26BBBA279A7 (void);
// 0x000003C6 System.Int32 Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_sizeof_grpc_event_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_sizeof_grpc_event_delegate_EndInvoke_m6791FEB839B91F5C15562A82BE47DF4B4F0487DA (void);
// 0x000003C7 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_create_async_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_completion_queue_create_async_delegate__ctor_m68D5E92BEB2D2A5A03E6717ABE6A960D71DFB2BB (void);
// 0x000003C8 Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_create_async_delegate::Invoke()
extern void grpcsharp_completion_queue_create_async_delegate_Invoke_m33F8AED0850F8C5BA83FF2CA9E4DE495A03419B6 (void);
// 0x000003C9 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_create_async_delegate::BeginInvoke(System.AsyncCallback,System.Object)
extern void grpcsharp_completion_queue_create_async_delegate_BeginInvoke_m4FBAD9D3EFF0676FF4471CB4F8B78A75E327597A (void);
// 0x000003CA Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_create_async_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_completion_queue_create_async_delegate_EndInvoke_m1310AB3A1C6FBE0B32B43D3BF690FF3D7D5BD6D2 (void);
// 0x000003CB System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_create_sync_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_completion_queue_create_sync_delegate__ctor_m894E9688D7A7BF91EE7CFB734ECE1AD6D76BC9F1 (void);
// 0x000003CC Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_create_sync_delegate::Invoke()
extern void grpcsharp_completion_queue_create_sync_delegate_Invoke_mF4BBA6944F5E3D6A13E0BDE8AAA61D7DF8B6F271 (void);
// 0x000003CD System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_create_sync_delegate::BeginInvoke(System.AsyncCallback,System.Object)
extern void grpcsharp_completion_queue_create_sync_delegate_BeginInvoke_mD0AEDB4E7CD0B2ACA1554782E6F0F4C1EBA5F2FB (void);
// 0x000003CE Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_create_sync_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_completion_queue_create_sync_delegate_EndInvoke_mC1AB1A15B369B2F7FB31FD4BDE06F0728FA0EF2C (void);
// 0x000003CF System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_shutdown_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_completion_queue_shutdown_delegate__ctor_mF8C9F107D297284B54CBCA63A70E850CE896AF0F (void);
// 0x000003D0 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_shutdown_delegate::Invoke(Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void grpcsharp_completion_queue_shutdown_delegate_Invoke_m2F2C331CC84F7BE806A156C71E43F0453E858977 (void);
// 0x000003D1 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_shutdown_delegate::BeginInvoke(Grpc.Core.Internal.CompletionQueueSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_completion_queue_shutdown_delegate_BeginInvoke_mF114860209CBD70BBD1940360A9D32F51A6CAB5A (void);
// 0x000003D2 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_shutdown_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_completion_queue_shutdown_delegate_EndInvoke_mF126F6DEF24824BB85A39DFEBC36A375CBA247A8 (void);
// 0x000003D3 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_next_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_completion_queue_next_delegate__ctor_m7D455EF701175F00503842245EFCAD402ADEF449 (void);
// 0x000003D4 Grpc.Core.Internal.CompletionQueueEvent Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_next_delegate::Invoke(Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void grpcsharp_completion_queue_next_delegate_Invoke_mAA9DD405ED0710B9C07DEBCDE111DB034DDD1D6B (void);
// 0x000003D5 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_next_delegate::BeginInvoke(Grpc.Core.Internal.CompletionQueueSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_completion_queue_next_delegate_BeginInvoke_mD1C1EF3E4E2E2B1C9543A82BE5FAE1C63CC751BD (void);
// 0x000003D6 Grpc.Core.Internal.CompletionQueueEvent Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_next_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_completion_queue_next_delegate_EndInvoke_m5D2021611AEA0D44D38C2FB1410685F70CAE0900 (void);
// 0x000003D7 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_pluck_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_completion_queue_pluck_delegate__ctor_mB6A3314E0F38D36042B5C3C065A5E8A6ADC5228F (void);
// 0x000003D8 Grpc.Core.Internal.CompletionQueueEvent Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_pluck_delegate::Invoke(Grpc.Core.Internal.CompletionQueueSafeHandle,System.IntPtr)
extern void grpcsharp_completion_queue_pluck_delegate_Invoke_mCDE97BC1758BEC5BE002460F0379D7E032CCA362 (void);
// 0x000003D9 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_pluck_delegate::BeginInvoke(Grpc.Core.Internal.CompletionQueueSafeHandle,System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_completion_queue_pluck_delegate_BeginInvoke_mA77ADA64C9E72A0F26DBE9086DA263289DE0B60E (void);
// 0x000003DA Grpc.Core.Internal.CompletionQueueEvent Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_pluck_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_completion_queue_pluck_delegate_EndInvoke_m218BD0AFB231FA90C3AC01C13B0637508CD7EB94 (void);
// 0x000003DB System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_destroy_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_completion_queue_destroy_delegate__ctor_m75E6B119A599AE94BD8A8A675AC6D4A911DF4019 (void);
// 0x000003DC System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_destroy_delegate::Invoke(System.IntPtr)
extern void grpcsharp_completion_queue_destroy_delegate_Invoke_mD66DF4BDAF9BFA844303DE4F19F13093A274E808 (void);
// 0x000003DD System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_destroy_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_completion_queue_destroy_delegate_BeginInvoke_m3CCC73D12845B15C6B01358510A9FCD88DCA3899 (void);
// 0x000003DE System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_destroy_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_completion_queue_destroy_delegate_EndInvoke_mF56D7B2FAC4212B796D5982BEC561504474D3798 (void);
// 0x000003DF System.Void Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_free_delegate::.ctor(System.Object,System.IntPtr)
extern void gprsharp_free_delegate__ctor_mE59A2FAB200EE5E5F98A37335FE2B4008C65E41B (void);
// 0x000003E0 System.Void Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_free_delegate::Invoke(System.IntPtr)
extern void gprsharp_free_delegate_Invoke_mF57374375612BB38D9106975B736FB5595EE91F9 (void);
// 0x000003E1 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_free_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void gprsharp_free_delegate_BeginInvoke_mA79C4A50C449BC082F049EB064F98FFEA06D711F (void);
// 0x000003E2 System.Void Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_free_delegate::EndInvoke(System.IAsyncResult)
extern void gprsharp_free_delegate_EndInvoke_m09FE6B055D4A6B02CB73DD0398A6F511B7611DF0 (void);
// 0x000003E3 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_create_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_metadata_array_create_delegate__ctor_m69B731AC924A0034255C249604CA2322BE48D424 (void);
// 0x000003E4 Grpc.Core.Internal.MetadataArraySafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_create_delegate::Invoke(System.UIntPtr)
extern void grpcsharp_metadata_array_create_delegate_Invoke_mF0806264F8357AE9D15E87E56196CD74AB4953CD (void);
// 0x000003E5 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_create_delegate::BeginInvoke(System.UIntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_metadata_array_create_delegate_BeginInvoke_m040FE3CE054332C973D188CDE0E259384481EE3E (void);
// 0x000003E6 Grpc.Core.Internal.MetadataArraySafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_create_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_metadata_array_create_delegate_EndInvoke_m327C9F36782784CC91CA6608D41DF7F9C9D23366 (void);
// 0x000003E7 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_add_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_metadata_array_add_delegate__ctor_m7837BA398F4B697C271D3A86C353924E5D82EB8C (void);
// 0x000003E8 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_add_delegate::Invoke(Grpc.Core.Internal.MetadataArraySafeHandle,System.String,System.Byte[],System.UIntPtr)
extern void grpcsharp_metadata_array_add_delegate_Invoke_mA1B5DF2E12F0A1DA0175C1356D5C2724816DE438 (void);
// 0x000003E9 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_add_delegate::BeginInvoke(Grpc.Core.Internal.MetadataArraySafeHandle,System.String,System.Byte[],System.UIntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_metadata_array_add_delegate_BeginInvoke_m631DCCC98AD3127930DCC81C8B02E0BE1A32CCEA (void);
// 0x000003EA System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_add_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_metadata_array_add_delegate_EndInvoke_m658DC39EBCA6E9A76739CBA8575CB918A3E745AA (void);
// 0x000003EB System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_count_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_metadata_array_count_delegate__ctor_mE4CE5B74399C8A772C0B89C3EBACFDE216F123C4 (void);
// 0x000003EC System.UIntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_count_delegate::Invoke(System.IntPtr)
extern void grpcsharp_metadata_array_count_delegate_Invoke_m8C53F8C5E9407FBB62FBB92B32279E806043E1C3 (void);
// 0x000003ED System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_count_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_metadata_array_count_delegate_BeginInvoke_mAEAC3B02421ED4C964DEF3ECA103E01C58798A47 (void);
// 0x000003EE System.UIntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_count_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_metadata_array_count_delegate_EndInvoke_m1A00D6E2D618723ABDF7B4F3EC8FDAFD18376DCD (void);
// 0x000003EF System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_get_key_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_metadata_array_get_key_delegate__ctor_m62D134E73C917006721338A19126391BC571FA67 (void);
// 0x000003F0 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_get_key_delegate::Invoke(System.IntPtr,System.UIntPtr,System.UIntPtr&)
extern void grpcsharp_metadata_array_get_key_delegate_Invoke_m5A50E0C6F6FCE82E96A03CDE48EFE27499BF5035 (void);
// 0x000003F1 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_get_key_delegate::BeginInvoke(System.IntPtr,System.UIntPtr,System.UIntPtr&,System.AsyncCallback,System.Object)
extern void grpcsharp_metadata_array_get_key_delegate_BeginInvoke_m9B44B758877AB1165CD95C0813DB745F3498B0EE (void);
// 0x000003F2 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_get_key_delegate::EndInvoke(System.UIntPtr&,System.IAsyncResult)
extern void grpcsharp_metadata_array_get_key_delegate_EndInvoke_mF133D2D987A5D4EA195FB77BF2B9369D68650029 (void);
// 0x000003F3 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_get_value_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_metadata_array_get_value_delegate__ctor_mD743869A321EA666C4BCF8497973E3ED47F2DDC0 (void);
// 0x000003F4 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_get_value_delegate::Invoke(System.IntPtr,System.UIntPtr,System.UIntPtr&)
extern void grpcsharp_metadata_array_get_value_delegate_Invoke_m491126E6D1C3EA93B6C5109FC465D2490371542A (void);
// 0x000003F5 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_get_value_delegate::BeginInvoke(System.IntPtr,System.UIntPtr,System.UIntPtr&,System.AsyncCallback,System.Object)
extern void grpcsharp_metadata_array_get_value_delegate_BeginInvoke_m8AE47C9A84FCB7C99D6A59A45C6DB427A1D29F76 (void);
// 0x000003F6 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_get_value_delegate::EndInvoke(System.UIntPtr&,System.IAsyncResult)
extern void grpcsharp_metadata_array_get_value_delegate_EndInvoke_m1BDC8179A12BF55F5BDA4A775EF553EDA1EAFAFD (void);
// 0x000003F7 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_destroy_full_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_metadata_array_destroy_full_delegate__ctor_mA051E4F7036F4761D1D5565C7681FA5AC931165C (void);
// 0x000003F8 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_destroy_full_delegate::Invoke(System.IntPtr)
extern void grpcsharp_metadata_array_destroy_full_delegate_Invoke_m46F154D5D580ACA4D33E2D4BF23D3437763ECD1C (void);
// 0x000003F9 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_destroy_full_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_metadata_array_destroy_full_delegate_BeginInvoke_mB33454ED82F2F37F0CFC8449645AD46278ED9713 (void);
// 0x000003FA System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_destroy_full_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_metadata_array_destroy_full_delegate_EndInvoke_mEB24CD6DD31CDE1E951E649A234F722570DE05F9 (void);
// 0x000003FB System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_redirect_log_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_redirect_log_delegate__ctor_m6BBEAA32764841B4821AC089569E647D26E8A10B (void);
// 0x000003FC System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_redirect_log_delegate::Invoke(Grpc.Core.Internal.GprLogDelegate)
extern void grpcsharp_redirect_log_delegate_Invoke_m447207DED0EA6FC3C68355F82D5B02EBF685DAE2 (void);
// 0x000003FD System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_redirect_log_delegate::BeginInvoke(Grpc.Core.Internal.GprLogDelegate,System.AsyncCallback,System.Object)
extern void grpcsharp_redirect_log_delegate_BeginInvoke_m51E37819512166D4A2FFE85FEF3583C8260CCA98 (void);
// 0x000003FE System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_redirect_log_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_redirect_log_delegate_EndInvoke_m8D3D8713C6CB384A1A3B90FDA50C8794A8469435 (void);
// 0x000003FF System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_native_callback_dispatcher_init_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_native_callback_dispatcher_init_delegate__ctor_m2EADE727E608B1714AE9D1FFC35482A7F95999D5 (void);
// 0x00000400 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_native_callback_dispatcher_init_delegate::Invoke(Grpc.Core.Internal.NativeCallbackDispatcherCallback)
extern void grpcsharp_native_callback_dispatcher_init_delegate_Invoke_m5431A683670427B4AAF4A643DACB19061946F3D4 (void);
// 0x00000401 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_native_callback_dispatcher_init_delegate::BeginInvoke(Grpc.Core.Internal.NativeCallbackDispatcherCallback,System.AsyncCallback,System.Object)
extern void grpcsharp_native_callback_dispatcher_init_delegate_BeginInvoke_m7BF473D3142233666B59FE25E0ADE2F587DA16F3 (void);
// 0x00000402 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_native_callback_dispatcher_init_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_native_callback_dispatcher_init_delegate_EndInvoke_m0DDA8FBF09A406F0AF6A09D6F5B76E26BC67B8E1 (void);
// 0x00000403 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_credentials_create_from_plugin_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_metadata_credentials_create_from_plugin_delegate__ctor_mD7BD5BB9A71D34AFEA2F839AAD9703EEBDFF75EA (void);
// 0x00000404 Grpc.Core.Internal.CallCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_credentials_create_from_plugin_delegate::Invoke(System.IntPtr)
extern void grpcsharp_metadata_credentials_create_from_plugin_delegate_Invoke_mE1282FAE4D8479A090004BCCD1B673C9BB87B316 (void);
// 0x00000405 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_credentials_create_from_plugin_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_metadata_credentials_create_from_plugin_delegate_BeginInvoke_m51C751B535870F618B7F656EBEBC66519E9766C6 (void);
// 0x00000406 Grpc.Core.Internal.CallCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_credentials_create_from_plugin_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_metadata_credentials_create_from_plugin_delegate_EndInvoke_m5212C0F7B38CDF21CF95A395A0D8719B3D90B1B6 (void);
// 0x00000407 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_credentials_notify_from_plugin_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_metadata_credentials_notify_from_plugin_delegate__ctor_mF99185F06466B4535950EB37224FE6D24FA72E2A (void);
// 0x00000408 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_credentials_notify_from_plugin_delegate::Invoke(System.IntPtr,System.IntPtr,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.StatusCode,System.String)
extern void grpcsharp_metadata_credentials_notify_from_plugin_delegate_Invoke_m615655831538FB1245BA439BE600871440286E9B (void);
// 0x00000409 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_credentials_notify_from_plugin_delegate::BeginInvoke(System.IntPtr,System.IntPtr,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.StatusCode,System.String,System.AsyncCallback,System.Object)
extern void grpcsharp_metadata_credentials_notify_from_plugin_delegate_BeginInvoke_m939DFC7424EB0D193E1F8C735C8C378F961FB81F (void);
// 0x0000040A System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_credentials_notify_from_plugin_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_metadata_credentials_notify_from_plugin_delegate_EndInvoke_m9AF334B86D293029399A2DCC18AF93B2DEDF6C17 (void);
// 0x0000040B System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_ssl_server_credentials_create_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_ssl_server_credentials_create_delegate__ctor_m197D6298D3F644FA6832A1D4EB4A60831C0338FD (void);
// 0x0000040C Grpc.Core.Internal.ServerCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_ssl_server_credentials_create_delegate::Invoke(System.String,System.String[],System.String[],System.UIntPtr,Grpc.Core.SslClientCertificateRequestType)
extern void grpcsharp_ssl_server_credentials_create_delegate_Invoke_m93140D6D549A75BF80F07F64A68E30AD4834212A (void);
// 0x0000040D System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_ssl_server_credentials_create_delegate::BeginInvoke(System.String,System.String[],System.String[],System.UIntPtr,Grpc.Core.SslClientCertificateRequestType,System.AsyncCallback,System.Object)
extern void grpcsharp_ssl_server_credentials_create_delegate_BeginInvoke_mACA0063736719541DDAE60C12F8BD04B690E8CAE (void);
// 0x0000040E Grpc.Core.Internal.ServerCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_ssl_server_credentials_create_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_ssl_server_credentials_create_delegate_EndInvoke_mFAB9166110A2BEA9B4A07E86910D60FA1A8DA79F (void);
// 0x0000040F System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_credentials_release_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_server_credentials_release_delegate__ctor_m545DB20D9AE17C6E4E143009A99351A916EDB82B (void);
// 0x00000410 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_credentials_release_delegate::Invoke(System.IntPtr)
extern void grpcsharp_server_credentials_release_delegate_Invoke_m0D9977F82B46751195AD0B63712FB917DB2213EA (void);
// 0x00000411 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_credentials_release_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_server_credentials_release_delegate_BeginInvoke_mF233C6FCC4E7E394E2238CEEE842073FF23DFAF5 (void);
// 0x00000412 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_credentials_release_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_server_credentials_release_delegate_EndInvoke_m1E4EAF3119DD96F331FD002403A08F12F0679044 (void);
// 0x00000413 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_create_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_server_create_delegate__ctor_m783A49B172F36AE10A422E4CB4B648F1C995521A (void);
// 0x00000414 Grpc.Core.Internal.ServerSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_create_delegate::Invoke(Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void grpcsharp_server_create_delegate_Invoke_m3C07DAA69CBAE7EE33648CDFAFEABE7414BB1F5F (void);
// 0x00000415 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_create_delegate::BeginInvoke(Grpc.Core.Internal.ChannelArgsSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_server_create_delegate_BeginInvoke_mFBFAC5778B1ADDE4931BE115E9EFE8C7DF69773A (void);
// 0x00000416 Grpc.Core.Internal.ServerSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_create_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_server_create_delegate_EndInvoke_mDCADAB7362641B04B382E612FC1D77EC72B10EEE (void);
// 0x00000417 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_register_completion_queue_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_server_register_completion_queue_delegate__ctor_m3DA8B40BA2AC8D881490479D0C936D01F6FDE697 (void);
// 0x00000418 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_register_completion_queue_delegate::Invoke(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void grpcsharp_server_register_completion_queue_delegate_Invoke_m48082D196C5E256783BD4D0E5DAC77BF1FECD56F (void);
// 0x00000419 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_register_completion_queue_delegate::BeginInvoke(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_server_register_completion_queue_delegate_BeginInvoke_m04615C5EF396407271F8D9FDCE9FBE4B766B5305 (void);
// 0x0000041A System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_register_completion_queue_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_server_register_completion_queue_delegate_EndInvoke_m12CC3B82FA0BB0378BA9EC1548CFDC52F87B6DEA (void);
// 0x0000041B System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_add_insecure_http2_port_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_server_add_insecure_http2_port_delegate__ctor_m5BE635FBEBB5537F2336F1911C30D0FF8045F40C (void);
// 0x0000041C System.Int32 Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_add_insecure_http2_port_delegate::Invoke(Grpc.Core.Internal.ServerSafeHandle,System.String)
extern void grpcsharp_server_add_insecure_http2_port_delegate_Invoke_m9F60A49C25B48904DF757273003256336F1E68F4 (void);
// 0x0000041D System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_add_insecure_http2_port_delegate::BeginInvoke(Grpc.Core.Internal.ServerSafeHandle,System.String,System.AsyncCallback,System.Object)
extern void grpcsharp_server_add_insecure_http2_port_delegate_BeginInvoke_m453F74FC0A906FA2F181BC33D70171BF1D021743 (void);
// 0x0000041E System.Int32 Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_add_insecure_http2_port_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_server_add_insecure_http2_port_delegate_EndInvoke_m85AAE75D5D7DBC34CAFE6E39EB7F65B2C6A705FA (void);
// 0x0000041F System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_add_secure_http2_port_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_server_add_secure_http2_port_delegate__ctor_m68221C0DE3333CFA50EF2FD14A203A77331F6F4A (void);
// 0x00000420 System.Int32 Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_add_secure_http2_port_delegate::Invoke(Grpc.Core.Internal.ServerSafeHandle,System.String,Grpc.Core.Internal.ServerCredentialsSafeHandle)
extern void grpcsharp_server_add_secure_http2_port_delegate_Invoke_m1A99C4A2324DBDA967833A2EE4D4B7B1D2C17CAE (void);
// 0x00000421 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_add_secure_http2_port_delegate::BeginInvoke(Grpc.Core.Internal.ServerSafeHandle,System.String,Grpc.Core.Internal.ServerCredentialsSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_server_add_secure_http2_port_delegate_BeginInvoke_mCFB0B55E1739C5BB842B706B4CEF2EE2D4A9E346 (void);
// 0x00000422 System.Int32 Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_add_secure_http2_port_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_server_add_secure_http2_port_delegate_EndInvoke_m1F8BFB503EC9298467AF070E7CF19E608CCD966A (void);
// 0x00000423 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_start_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_server_start_delegate__ctor_m73C6C5DD4FF6EE902DEE76F6FC4E230FFD45DC53 (void);
// 0x00000424 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_start_delegate::Invoke(Grpc.Core.Internal.ServerSafeHandle)
extern void grpcsharp_server_start_delegate_Invoke_m7A3454C654E6FAA6D3F3EF38F590077CF9885F11 (void);
// 0x00000425 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_start_delegate::BeginInvoke(Grpc.Core.Internal.ServerSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_server_start_delegate_BeginInvoke_m1DE66B1CF8E01FC11F5CAF9B5E8240A4C4CCAC56 (void);
// 0x00000426 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_start_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_server_start_delegate_EndInvoke_m9D666BB9A7D3CD34A5DA9E9DCDD723DFD2ED880E (void);
// 0x00000427 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_request_call_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_server_request_call_delegate__ctor_mC213682D9C8F4001A6C2E6C34C68C9A8F158BE94 (void);
// 0x00000428 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_request_call_delegate::Invoke(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void grpcsharp_server_request_call_delegate_Invoke_mD9CAA765B5818B59A3BFF53C5AF0275E2763A366 (void);
// 0x00000429 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_request_call_delegate::BeginInvoke(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.RequestCallContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_server_request_call_delegate_BeginInvoke_m9BBAEBFD69FEC13D54F7D4B0C90BA6269211C93D (void);
// 0x0000042A Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_request_call_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_server_request_call_delegate_EndInvoke_m9292539890507A5905E8DFA2FB7882FE97E9FBF3 (void);
// 0x0000042B System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_cancel_all_calls_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_server_cancel_all_calls_delegate__ctor_mF1C48FD7B5C7307882F4C3898F674985EBD3314D (void);
// 0x0000042C System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_cancel_all_calls_delegate::Invoke(Grpc.Core.Internal.ServerSafeHandle)
extern void grpcsharp_server_cancel_all_calls_delegate_Invoke_m19A9BDEE2357678B8712E47AD32B74BC35820A0E (void);
// 0x0000042D System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_cancel_all_calls_delegate::BeginInvoke(Grpc.Core.Internal.ServerSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_server_cancel_all_calls_delegate_BeginInvoke_m1D727A3B3C59A3C8E4E5C8B96E913AE4192CB961 (void);
// 0x0000042E System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_cancel_all_calls_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_server_cancel_all_calls_delegate_EndInvoke_mA4D73C0D2EA9FEAD5AF1FA148C266AAB2429986E (void);
// 0x0000042F System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_shutdown_and_notify_callback_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_server_shutdown_and_notify_callback_delegate__ctor_m71A08DC150DEF116B2E71AC0BCD494DDF2D570A1 (void);
// 0x00000430 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_shutdown_and_notify_callback_delegate::Invoke(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void grpcsharp_server_shutdown_and_notify_callback_delegate_Invoke_m4ACB56A6D0FD192711001B8CCA887FC677D34A8A (void);
// 0x00000431 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_shutdown_and_notify_callback_delegate::BeginInvoke(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_server_shutdown_and_notify_callback_delegate_BeginInvoke_m252547855D82CDD1B4937039CF99EB729AAC86BE (void);
// 0x00000432 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_shutdown_and_notify_callback_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_server_shutdown_and_notify_callback_delegate_EndInvoke_m389B44FD5C6AEFBF311E6A1F2E3EC3B5F10A8FEF (void);
// 0x00000433 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_destroy_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_server_destroy_delegate__ctor_m730E6EF04686CB6A20621C1635A60BBD0C6527FF (void);
// 0x00000434 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_destroy_delegate::Invoke(System.IntPtr)
extern void grpcsharp_server_destroy_delegate_Invoke_m72D7DB1FA99BB0A0F5C5B064C5830DB9C9B58011 (void);
// 0x00000435 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_destroy_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_server_destroy_delegate_BeginInvoke_mC72FFBBA172BDB2556010052F81A42E9A20974AC (void);
// 0x00000436 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_destroy_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_server_destroy_delegate_EndInvoke_m0E47AB2358D17611B7A75A199AC17ECBF52C32E9 (void);
// 0x00000437 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_auth_context_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_auth_context_delegate__ctor_m7FB8CA5E19DD01B964216240A4A4B9134ED7480F (void);
// 0x00000438 Grpc.Core.Internal.AuthContextSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_auth_context_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle)
extern void grpcsharp_call_auth_context_delegate_Invoke_mCFE15D90A7464F1DB7289A62AD2D8A8556AD92DE (void);
// 0x00000439 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_auth_context_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_call_auth_context_delegate_BeginInvoke_mDCD1DE1649CE81E0086EE6D8B432875250DCC036 (void);
// 0x0000043A Grpc.Core.Internal.AuthContextSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_auth_context_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_auth_context_delegate_EndInvoke_m09A54D3B86B745E1C0907BD518AFDAB42E7FF4B6 (void);
// 0x0000043B System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_peer_identity_property_name_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_auth_context_peer_identity_property_name_delegate__ctor_m330A08C8041EAFF0FBA325BDC4DAA9EF48305D3F (void);
// 0x0000043C System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_peer_identity_property_name_delegate::Invoke(Grpc.Core.Internal.AuthContextSafeHandle)
extern void grpcsharp_auth_context_peer_identity_property_name_delegate_Invoke_mF785304C38FBCDEC63B5CADD38F4EDF8E7F041D6 (void);
// 0x0000043D System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_peer_identity_property_name_delegate::BeginInvoke(Grpc.Core.Internal.AuthContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_auth_context_peer_identity_property_name_delegate_BeginInvoke_mACA41711C623E205E5B1EF02FF4C4EB63CBF8E91 (void);
// 0x0000043E System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_peer_identity_property_name_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_auth_context_peer_identity_property_name_delegate_EndInvoke_m5A9AA0EB33FBDFE26E1A5C2F2CF62BE34B1371EF (void);
// 0x0000043F System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_property_iterator_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_auth_context_property_iterator_delegate__ctor_m92B9BEDF493F52A812975990A0329A78E83B3162 (void);
// 0x00000440 Grpc.Core.Internal.AuthContextSafeHandle/NativeAuthPropertyIterator Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_property_iterator_delegate::Invoke(Grpc.Core.Internal.AuthContextSafeHandle)
extern void grpcsharp_auth_context_property_iterator_delegate_Invoke_m239265BA84B1E38049A298C7BEB2E03535118093 (void);
// 0x00000441 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_property_iterator_delegate::BeginInvoke(Grpc.Core.Internal.AuthContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_auth_context_property_iterator_delegate_BeginInvoke_mE3E4D47BC70F3605C2D39BDE5728BC6C21E02488 (void);
// 0x00000442 Grpc.Core.Internal.AuthContextSafeHandle/NativeAuthPropertyIterator Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_property_iterator_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_auth_context_property_iterator_delegate_EndInvoke_mD79347B919D1304F9240D7F30281BA1CACBE9360 (void);
// 0x00000443 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_property_iterator_next_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_auth_property_iterator_next_delegate__ctor_m97CB1B8CD1A85102526689B3ADD5B49550793100 (void);
// 0x00000444 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_property_iterator_next_delegate::Invoke(Grpc.Core.Internal.AuthContextSafeHandle/NativeAuthPropertyIterator&)
extern void grpcsharp_auth_property_iterator_next_delegate_Invoke_mA4F3ACA820549431B25CE1A14B12598C98E2F5C7 (void);
// 0x00000445 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_property_iterator_next_delegate::BeginInvoke(Grpc.Core.Internal.AuthContextSafeHandle/NativeAuthPropertyIterator&,System.AsyncCallback,System.Object)
extern void grpcsharp_auth_property_iterator_next_delegate_BeginInvoke_mBF9BAD7B0DB94F3604011F6384A9413DF8999E6A (void);
// 0x00000446 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_property_iterator_next_delegate::EndInvoke(Grpc.Core.Internal.AuthContextSafeHandle/NativeAuthPropertyIterator&,System.IAsyncResult)
extern void grpcsharp_auth_property_iterator_next_delegate_EndInvoke_m1AFB9170CCF61B9CE8A00BA97263865B7E767638 (void);
// 0x00000447 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_release_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_auth_context_release_delegate__ctor_m94B16E7C720663BD24DC47CB62EA4C55FC9A2691 (void);
// 0x00000448 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_release_delegate::Invoke(System.IntPtr)
extern void grpcsharp_auth_context_release_delegate_Invoke_mA39EE4DA38DC5783E5EA32C5408AFA52FF60DA77 (void);
// 0x00000449 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_release_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_auth_context_release_delegate_BeginInvoke_m0C81127B3C3512A2774C555637F9A49B44A51853 (void);
// 0x0000044A System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_release_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_auth_context_release_delegate_EndInvoke_m978AB944BD9C7B4335BE4B5B9D2B995FA17A93AF (void);
// 0x0000044B System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_slice_buffer_create_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_slice_buffer_create_delegate__ctor_mEDDA4FBCA510654B2B485A15FF5F8B5E6A70D5E7 (void);
// 0x0000044C Grpc.Core.Internal.SliceBufferSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_slice_buffer_create_delegate::Invoke()
extern void grpcsharp_slice_buffer_create_delegate_Invoke_m438BF2A4CA2F56DD63D08F78FF3CAFA7DCAFE719 (void);
// 0x0000044D System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_slice_buffer_create_delegate::BeginInvoke(System.AsyncCallback,System.Object)
extern void grpcsharp_slice_buffer_create_delegate_BeginInvoke_mBA9BD6E3F48FE6D559F3AECB2DA76E46DE25E695 (void);
// 0x0000044E Grpc.Core.Internal.SliceBufferSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_slice_buffer_create_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_slice_buffer_create_delegate_EndInvoke_m093CC980C104B4DB7E5F74435366C288046272CD (void);
// 0x0000044F System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_slice_buffer_adjust_tail_space_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_slice_buffer_adjust_tail_space_delegate__ctor_m8BA67D64EF4C1A2C4879ADD1A1AB1EBD044B94A6 (void);
// 0x00000450 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_slice_buffer_adjust_tail_space_delegate::Invoke(Grpc.Core.Internal.SliceBufferSafeHandle,System.UIntPtr,System.UIntPtr)
extern void grpcsharp_slice_buffer_adjust_tail_space_delegate_Invoke_mA54976F469E0DDB382F99E61DC856E2DA88BAE9D (void);
// 0x00000451 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_slice_buffer_adjust_tail_space_delegate::BeginInvoke(Grpc.Core.Internal.SliceBufferSafeHandle,System.UIntPtr,System.UIntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_slice_buffer_adjust_tail_space_delegate_BeginInvoke_m752FCEDAA93E8806845EE19D02101F78E027334B (void);
// 0x00000452 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_slice_buffer_adjust_tail_space_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_slice_buffer_adjust_tail_space_delegate_EndInvoke_m0EF375A88AD60DA6D5BD1B8CF4BD2CFC3FEF56F8 (void);
// 0x00000453 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_slice_buffer_slice_count_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_slice_buffer_slice_count_delegate__ctor_m68F6B07EF2E201708E7C8DC79A9E94DCD5F7F976 (void);
// 0x00000454 System.UIntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_slice_buffer_slice_count_delegate::Invoke(Grpc.Core.Internal.SliceBufferSafeHandle)
extern void grpcsharp_slice_buffer_slice_count_delegate_Invoke_m45FB7F1C9B9FEBCB02B04004FB1B5332B6F1B87C (void);
// 0x00000455 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_slice_buffer_slice_count_delegate::BeginInvoke(Grpc.Core.Internal.SliceBufferSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_slice_buffer_slice_count_delegate_BeginInvoke_mE3472B68A11003CFAEFCB0A798A0717B6CD4DD79 (void);
// 0x00000456 System.UIntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_slice_buffer_slice_count_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_slice_buffer_slice_count_delegate_EndInvoke_m39368D07CC99F3D2ED8D17F1DF4C0D9A9C0F8336 (void);
// 0x00000457 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_slice_buffer_slice_peek_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_slice_buffer_slice_peek_delegate__ctor_mE5C13AEB0FB7756233B8A879AAC5FC2EFAA98565 (void);
// 0x00000458 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_slice_buffer_slice_peek_delegate::Invoke(Grpc.Core.Internal.SliceBufferSafeHandle,System.UIntPtr,System.UIntPtr&,System.IntPtr&)
extern void grpcsharp_slice_buffer_slice_peek_delegate_Invoke_m5DB5875127C670B87BE3CF80C106728E57114329 (void);
// 0x00000459 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_slice_buffer_slice_peek_delegate::BeginInvoke(Grpc.Core.Internal.SliceBufferSafeHandle,System.UIntPtr,System.UIntPtr&,System.IntPtr&,System.AsyncCallback,System.Object)
extern void grpcsharp_slice_buffer_slice_peek_delegate_BeginInvoke_m460D31907BA186865A347EE5565974DCF46288C0 (void);
// 0x0000045A System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_slice_buffer_slice_peek_delegate::EndInvoke(System.UIntPtr&,System.IntPtr&,System.IAsyncResult)
extern void grpcsharp_slice_buffer_slice_peek_delegate_EndInvoke_mD36B5F5234C7CCF6C67D35F2FBD179D3E32D1A68 (void);
// 0x0000045B System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_slice_buffer_reset_and_unref_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_slice_buffer_reset_and_unref_delegate__ctor_mADE97CE07906CA7EB951AF48CB883F0F400F13F9 (void);
// 0x0000045C System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_slice_buffer_reset_and_unref_delegate::Invoke(Grpc.Core.Internal.SliceBufferSafeHandle)
extern void grpcsharp_slice_buffer_reset_and_unref_delegate_Invoke_m31B7F628F64EC09A4E4F1828CCB7ECB3E368496A (void);
// 0x0000045D System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_slice_buffer_reset_and_unref_delegate::BeginInvoke(Grpc.Core.Internal.SliceBufferSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_slice_buffer_reset_and_unref_delegate_BeginInvoke_m4B767EC82FBFBB6FDC110F57E0F2F6F5C8A7A546 (void);
// 0x0000045E System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_slice_buffer_reset_and_unref_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_slice_buffer_reset_and_unref_delegate_EndInvoke_m7878917B9017086042377355EDE10492260F958C (void);
// 0x0000045F System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_slice_buffer_destroy_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_slice_buffer_destroy_delegate__ctor_m3B7C7CD6245156639AF47E684DFCCDBBF4D6BD32 (void);
// 0x00000460 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_slice_buffer_destroy_delegate::Invoke(System.IntPtr)
extern void grpcsharp_slice_buffer_destroy_delegate_Invoke_m57095F9CF46499F78D6F0A03685E81C6C5EF0754 (void);
// 0x00000461 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_slice_buffer_destroy_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_slice_buffer_destroy_delegate_BeginInvoke_m4B20D64E8AC7AC4CA8CD08377608DEACE116A8D5 (void);
// 0x00000462 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_slice_buffer_destroy_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_slice_buffer_destroy_delegate_EndInvoke_m372D75CE4DAA64B6FE4CD2B9F53BA1E81CCCDE91 (void);
// 0x00000463 System.Void Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_now_delegate::.ctor(System.Object,System.IntPtr)
extern void gprsharp_now_delegate__ctor_m3879E6298194FC24B77052FDAEC69A127821F87E (void);
// 0x00000464 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_now_delegate::Invoke(Grpc.Core.Internal.ClockType)
extern void gprsharp_now_delegate_Invoke_m405142383BF968F955BE1796C7612D86E02A3504 (void);
// 0x00000465 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_now_delegate::BeginInvoke(Grpc.Core.Internal.ClockType,System.AsyncCallback,System.Object)
extern void gprsharp_now_delegate_BeginInvoke_mC589638EC38C2E574B6893CFED7F3C9D40F65A6D (void);
// 0x00000466 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_now_delegate::EndInvoke(System.IAsyncResult)
extern void gprsharp_now_delegate_EndInvoke_m0D165A76B57B2D7AD036A1154784896FE2BEF5D2 (void);
// 0x00000467 System.Void Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_inf_future_delegate::.ctor(System.Object,System.IntPtr)
extern void gprsharp_inf_future_delegate__ctor_mEF086DBAD8DA00B4D9002FEEC803AAD1F15F77B0 (void);
// 0x00000468 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_inf_future_delegate::Invoke(Grpc.Core.Internal.ClockType)
extern void gprsharp_inf_future_delegate_Invoke_m91E1550D9F31CB073E5D30CF70742DC4AB991B5E (void);
// 0x00000469 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_inf_future_delegate::BeginInvoke(Grpc.Core.Internal.ClockType,System.AsyncCallback,System.Object)
extern void gprsharp_inf_future_delegate_BeginInvoke_m3DED992B2D45E353AEA40ED4686CB5576AF339A6 (void);
// 0x0000046A Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_inf_future_delegate::EndInvoke(System.IAsyncResult)
extern void gprsharp_inf_future_delegate_EndInvoke_mA2F11EDE903BA3C43BD2AC197DF60B3E56683239 (void);
// 0x0000046B System.Void Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_inf_past_delegate::.ctor(System.Object,System.IntPtr)
extern void gprsharp_inf_past_delegate__ctor_mCD3EC5B870E9EF002902827BDE5C19FD95690FFE (void);
// 0x0000046C Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_inf_past_delegate::Invoke(Grpc.Core.Internal.ClockType)
extern void gprsharp_inf_past_delegate_Invoke_mC054A4E6E158EE6464BAF2B16316931EDAE610DC (void);
// 0x0000046D System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_inf_past_delegate::BeginInvoke(Grpc.Core.Internal.ClockType,System.AsyncCallback,System.Object)
extern void gprsharp_inf_past_delegate_BeginInvoke_m737D0FB767DE4C6CAEC9C0911023C6EA523E9E21 (void);
// 0x0000046E Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_inf_past_delegate::EndInvoke(System.IAsyncResult)
extern void gprsharp_inf_past_delegate_EndInvoke_m771282F17C9E243E029EE3F2C581DE392D48B198 (void);
// 0x0000046F System.Void Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_convert_clock_type_delegate::.ctor(System.Object,System.IntPtr)
extern void gprsharp_convert_clock_type_delegate__ctor_m8E1039A12A3E0E22473A8C86476BC961C5BEF6FE (void);
// 0x00000470 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_convert_clock_type_delegate::Invoke(Grpc.Core.Internal.Timespec,Grpc.Core.Internal.ClockType)
extern void gprsharp_convert_clock_type_delegate_Invoke_m43584D2805AF7159C25D8BFBF0AC2F57936BA65F (void);
// 0x00000471 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_convert_clock_type_delegate::BeginInvoke(Grpc.Core.Internal.Timespec,Grpc.Core.Internal.ClockType,System.AsyncCallback,System.Object)
extern void gprsharp_convert_clock_type_delegate_BeginInvoke_m034ED63C52A33889597A69108DE4477C9581B942 (void);
// 0x00000472 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_convert_clock_type_delegate::EndInvoke(System.IAsyncResult)
extern void gprsharp_convert_clock_type_delegate_EndInvoke_m1456772E71AC2B1BD0E511DE92555FC042102A6E (void);
// 0x00000473 System.Void Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_sizeof_timespec_delegate::.ctor(System.Object,System.IntPtr)
extern void gprsharp_sizeof_timespec_delegate__ctor_m8C56A726F691FC3E547FF30BA724BEFA41CD73EA (void);
// 0x00000474 System.Int32 Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_sizeof_timespec_delegate::Invoke()
extern void gprsharp_sizeof_timespec_delegate_Invoke_m9824EC4BDC9E98302E8A4004CBCF8AE43F7BC468 (void);
// 0x00000475 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_sizeof_timespec_delegate::BeginInvoke(System.AsyncCallback,System.Object)
extern void gprsharp_sizeof_timespec_delegate_BeginInvoke_m65EB6624992C244525F28F2E8DF304A47D63289B (void);
// 0x00000476 System.Int32 Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_sizeof_timespec_delegate::EndInvoke(System.IAsyncResult)
extern void gprsharp_sizeof_timespec_delegate_EndInvoke_mB1CF3E6E20C76F4EAD8E9D497D92F0DEACCE0A0C (void);
// 0x00000477 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_callback_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_test_callback_delegate__ctor_mF23FFB0CB95AB3E1E60B9DFBDB3C89437BAF4AE0 (void);
// 0x00000478 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_callback_delegate::Invoke(Grpc.Core.Internal.NativeCallbackTestDelegate)
extern void grpcsharp_test_callback_delegate_Invoke_mE46231A5CA8DF28AD96ECC6A3697050880A3821B (void);
// 0x00000479 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_callback_delegate::BeginInvoke(Grpc.Core.Internal.NativeCallbackTestDelegate,System.AsyncCallback,System.Object)
extern void grpcsharp_test_callback_delegate_BeginInvoke_m2CD4E0D8CE30C7408A5FA22B410CACA04A46EE91 (void);
// 0x0000047A Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_callback_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_test_callback_delegate_EndInvoke_mA69A9CBD0F265F9D3B49EE4F3EA8F8FF83E0F810 (void);
// 0x0000047B System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_nop_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_test_nop_delegate__ctor_mB58E188466D843D12AE239C2479EB6FA8578A3D5 (void);
// 0x0000047C System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_nop_delegate::Invoke(System.IntPtr)
extern void grpcsharp_test_nop_delegate_Invoke_m9804DFAF31E78C0DF88F627931F686B8FFFF0521 (void);
// 0x0000047D System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_nop_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_test_nop_delegate_BeginInvoke_m2B1D66DDD34F452DE6071F2AF78A7DE24878682B (void);
// 0x0000047E System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_nop_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_test_nop_delegate_EndInvoke_mF6DA3BD7AFF27A1EBD4A8A30CBDCA73178F09B81 (void);
// 0x0000047F System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_override_method_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_test_override_method_delegate__ctor_m9A1B4A7CBD02159F48A187351CA3CA623A8481C0 (void);
// 0x00000480 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_override_method_delegate::Invoke(System.String,System.String)
extern void grpcsharp_test_override_method_delegate_Invoke_mE4A25BB843EA31476F9C43FE53FAC2856C2E07AA (void);
// 0x00000481 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_override_method_delegate::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
extern void grpcsharp_test_override_method_delegate_BeginInvoke_mCD3415011E6D9BEDE14B871E7994F51BBBB1C7D0 (void);
// 0x00000482 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_override_method_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_test_override_method_delegate_EndInvoke_m1BD71C7D2B9B65AD8831E3CD448C213C2A67EA05 (void);
// 0x00000483 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_call_start_unary_echo_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_test_call_start_unary_echo_delegate__ctor_mB6B7CA9593F4A98C6A17353A3734761263B9D187 (void);
// 0x00000484 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_call_start_unary_echo_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void grpcsharp_test_call_start_unary_echo_delegate_Invoke_m34AC91406570708BE73CA09AE2E03C73E3C03689 (void);
// 0x00000485 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_call_start_unary_echo_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags,System.AsyncCallback,System.Object)
extern void grpcsharp_test_call_start_unary_echo_delegate_BeginInvoke_mC90B001F8993CFACFA626DF2089C588187B9FBF1 (void);
// 0x00000486 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_call_start_unary_echo_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_test_call_start_unary_echo_delegate_EndInvoke_m35A7C274DCE269750245C2A3D2624F1F5ED3DD41 (void);
// 0x00000487 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_init()
extern void DllImportsFromStaticLib_grpcsharp_init_m8206CF5586DF5190DEAE25BB6ACAAD8CB1391E21 (void);
// 0x00000488 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_shutdown()
extern void DllImportsFromStaticLib_grpcsharp_shutdown_m9314914E46F97AB4B8C059A27452DCC9A867A0E9 (void);
// 0x00000489 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_version_string()
extern void DllImportsFromStaticLib_grpcsharp_version_string_mEC8D236EB8B035D9A640E783F8BF56245D51D178 (void);
// 0x0000048A Grpc.Core.Internal.BatchContextSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_batch_context_create()
extern void DllImportsFromStaticLib_grpcsharp_batch_context_create_m7F9EFF37B246FAF9CFFE9D8051B5D420EC0D0DFD (void);
// 0x0000048B System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_batch_context_recv_initial_metadata(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_batch_context_recv_initial_metadata_mA5B0603A6FC47E919B6DD6874754125D06D47FE5 (void);
// 0x0000048C System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_batch_context_recv_message_length(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_batch_context_recv_message_length_m7895F9C131B8A55AE0C3E71E9EBBEEBB17BC6A6B (void);
// 0x0000048D System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_batch_context_recv_message_next_slice_peek(Grpc.Core.Internal.BatchContextSafeHandle,System.UIntPtr&,System.IntPtr&)
extern void DllImportsFromStaticLib_grpcsharp_batch_context_recv_message_next_slice_peek_mE19DEC2B2473B9EA0F06C4B7678C6FC4B611ED27 (void);
// 0x0000048E Grpc.Core.StatusCode Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_batch_context_recv_status_on_client_status(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_batch_context_recv_status_on_client_status_m513FEC9D4128E37D5E72EE45FED437B23B44D6D9 (void);
// 0x0000048F System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_batch_context_recv_status_on_client_details(Grpc.Core.Internal.BatchContextSafeHandle,System.UIntPtr&)
extern void DllImportsFromStaticLib_grpcsharp_batch_context_recv_status_on_client_details_mB6F94AC19102E151025E92FA5662046C276B5CF1 (void);
// 0x00000490 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_batch_context_recv_status_on_client_error_string(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_batch_context_recv_status_on_client_error_string_m9982E92F1DCECFE6BDBD0DAC132EA287D19EDCDB (void);
// 0x00000491 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_batch_context_recv_status_on_client_trailing_metadata(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_batch_context_recv_status_on_client_trailing_metadata_m95D45CB0BEA88755638E9634F44FF4236CC5AB1E (void);
// 0x00000492 System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_batch_context_recv_close_on_server_cancelled(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_batch_context_recv_close_on_server_cancelled_m3BDEF62C162DCA25552BE41C8F2E68B07942A865 (void);
// 0x00000493 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_batch_context_reset(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_batch_context_reset_mABDF6DAE8F874A479F4D53080A7956BF5325331E (void);
// 0x00000494 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_batch_context_destroy(System.IntPtr)
extern void DllImportsFromStaticLib_grpcsharp_batch_context_destroy_m0D8DB39C3FD496329AD5E593AF2963F8B998FC8F (void);
// 0x00000495 Grpc.Core.Internal.RequestCallContextSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_request_call_context_create()
extern void DllImportsFromStaticLib_grpcsharp_request_call_context_create_m92300F4722E9427DDC01AFCAB2E004CA2E700E7C (void);
// 0x00000496 Grpc.Core.Internal.CallSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_request_call_context_call(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_request_call_context_call_mE92CAD2B71CAC46A928A5E94B0E8AAFD9E4E88F3 (void);
// 0x00000497 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_request_call_context_method(Grpc.Core.Internal.RequestCallContextSafeHandle,System.UIntPtr&)
extern void DllImportsFromStaticLib_grpcsharp_request_call_context_method_m95933990E4FDE2F2E853BB7074F1EB54DA7B91EC (void);
// 0x00000498 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_request_call_context_host(Grpc.Core.Internal.RequestCallContextSafeHandle,System.UIntPtr&)
extern void DllImportsFromStaticLib_grpcsharp_request_call_context_host_m35C310B9670D1E20AD8B2B0507EFB8D6C880FCDC (void);
// 0x00000499 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_request_call_context_deadline(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_request_call_context_deadline_mE250533838C8D4D97F5211047706D7BBA1D72D89 (void);
// 0x0000049A System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_request_call_context_request_metadata(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_request_call_context_request_metadata_m5258746C265DF0CE63A21B3C327F4DB8D96646AA (void);
// 0x0000049B System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_request_call_context_reset(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_request_call_context_reset_mA04E2F4102020AF03DE89EE1047FA122AA616C91 (void);
// 0x0000049C System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_request_call_context_destroy(System.IntPtr)
extern void DllImportsFromStaticLib_grpcsharp_request_call_context_destroy_m23B43B48E297216E349013349A9E5DF86449E984 (void);
// 0x0000049D Grpc.Core.Internal.CallCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_composite_call_credentials_create(Grpc.Core.Internal.CallCredentialsSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_composite_call_credentials_create_m2FDB5B8E1674CC3A502AD164247E15F382C43ACA (void);
// 0x0000049E System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_call_credentials_release(System.IntPtr)
extern void DllImportsFromStaticLib_grpcsharp_call_credentials_release_m3B859FC3CBFC65B20E65D604C51C655720382E3E (void);
// 0x0000049F Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_call_cancel(Grpc.Core.Internal.CallSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_call_cancel_m2B045949B0A7F9988CED13F85727058D6F8DAA8F (void);
// 0x000004A0 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_call_cancel_with_status(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.StatusCode,System.String)
extern void DllImportsFromStaticLib_grpcsharp_call_cancel_with_status_m704BC392BACFF922492FD58FF675EA476091CC11 (void);
// 0x000004A1 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_call_start_unary(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromStaticLib_grpcsharp_call_start_unary_m77AE8349799141713EE2AAC026BFEB0EE52A94F4 (void);
// 0x000004A2 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_call_start_client_streaming(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromStaticLib_grpcsharp_call_start_client_streaming_m61381229AF07ACCE3490937754FA291E16B6E180 (void);
// 0x000004A3 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_call_start_server_streaming(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromStaticLib_grpcsharp_call_start_server_streaming_m0889BC919ACAE5B63A6F5E3D66D65DDB8A939E88 (void);
// 0x000004A4 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_call_start_duplex_streaming(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromStaticLib_grpcsharp_call_start_duplex_streaming_m7BA2E05190F6C0686F04A6DC7AEE47F78F68164D (void);
// 0x000004A5 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_call_send_message(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,System.Int32)
extern void DllImportsFromStaticLib_grpcsharp_call_send_message_m21E5E439AE7825276516A2C8527E31796B7B665B (void);
// 0x000004A6 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_call_send_close_from_client(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_call_send_close_from_client_m1079E22BF1A2FE2A7D4B3F9AFCC62304827A58B7 (void);
// 0x000004A7 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_call_send_status_from_server(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.StatusCode,System.IntPtr,System.UIntPtr,Grpc.Core.Internal.MetadataArraySafeHandle,System.Int32,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags)
extern void DllImportsFromStaticLib_grpcsharp_call_send_status_from_server_m74096CB8AC61E17B2D1AF1BC9CF74F62022A1DB3 (void);
// 0x000004A8 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_call_recv_message(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_call_recv_message_m958C51D93B81861608DF58452216B550E07E79CE (void);
// 0x000004A9 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_call_recv_initial_metadata(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_call_recv_initial_metadata_m4A99C72864A6E8C6AD7CFBC40575C36977B0269F (void);
// 0x000004AA Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_call_start_serverside(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_call_start_serverside_m63D8C38B87E9988864D7C27CCD2C4E2D5A424219 (void);
// 0x000004AB Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_call_send_initial_metadata(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_call_send_initial_metadata_mDB5031483A959226AFAC2B4928770A7C94203550 (void);
// 0x000004AC Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_call_set_credentials(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_call_set_credentials_m0301BAAD237A9E2A0991F06A965B4EEA11E2AE6A (void);
// 0x000004AD Grpc.Core.Internal.CStringSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_call_get_peer(Grpc.Core.Internal.CallSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_call_get_peer_mC1A0C914BE60BB8BD90FB2E753E2DF62861230F5 (void);
// 0x000004AE System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_call_destroy(System.IntPtr)
extern void DllImportsFromStaticLib_grpcsharp_call_destroy_mD6634D7E8C5014A0DC5D859FD1E94CB1F68FD7E6 (void);
// 0x000004AF Grpc.Core.Internal.ChannelArgsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_channel_args_create(System.UIntPtr)
extern void DllImportsFromStaticLib_grpcsharp_channel_args_create_mB3A85BAB324B9DA8B5E2959F61CFDB30A177AC25 (void);
// 0x000004B0 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_channel_args_set_string(Grpc.Core.Internal.ChannelArgsSafeHandle,System.UIntPtr,System.String,System.String)
extern void DllImportsFromStaticLib_grpcsharp_channel_args_set_string_m943F2D1263C7E757D99CD216A9D85BE9C02636D8 (void);
// 0x000004B1 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_channel_args_set_integer(Grpc.Core.Internal.ChannelArgsSafeHandle,System.UIntPtr,System.String,System.Int32)
extern void DllImportsFromStaticLib_grpcsharp_channel_args_set_integer_m5575CFD676AC4F623D9506DF519E626D3FF75951 (void);
// 0x000004B2 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_channel_args_destroy(System.IntPtr)
extern void DllImportsFromStaticLib_grpcsharp_channel_args_destroy_m1410AA2346E54C5C32F38B42264F09C46D9954BD (void);
// 0x000004B3 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_override_default_ssl_roots(System.String)
extern void DllImportsFromStaticLib_grpcsharp_override_default_ssl_roots_mA60708CC494BE1FF552F6A72EECF8C7EC701C8CF (void);
// 0x000004B4 Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_ssl_credentials_create(System.String,System.String,System.String,System.IntPtr)
extern void DllImportsFromStaticLib_grpcsharp_ssl_credentials_create_m9FE934DBFDAAA29995A5188E277236CECCFD0FD3 (void);
// 0x000004B5 Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_composite_channel_credentials_create(Grpc.Core.Internal.ChannelCredentialsSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_composite_channel_credentials_create_m89A8C48A2536BD80651957D658B2907A6E5AB15B (void);
// 0x000004B6 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_channel_credentials_release(System.IntPtr)
extern void DllImportsFromStaticLib_grpcsharp_channel_credentials_release_m1AC2EA299A7DA7319E0FAF2E0732E16F8EF52D7B (void);
// 0x000004B7 Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_insecure_channel_create(System.String,Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_insecure_channel_create_m4EEAAC80E98ACDA5B404F3EDA8BC1F664A861788 (void);
// 0x000004B8 Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_secure_channel_create(Grpc.Core.Internal.ChannelCredentialsSafeHandle,System.String,Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_secure_channel_create_m85E57DDDEEDB5066C422410976B8E8972175DF94 (void);
// 0x000004B9 Grpc.Core.Internal.CallSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_channel_create_call(Grpc.Core.Internal.ChannelSafeHandle,Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.ContextPropagationFlags,Grpc.Core.Internal.CompletionQueueSafeHandle,System.String,System.String,Grpc.Core.Internal.Timespec)
extern void DllImportsFromStaticLib_grpcsharp_channel_create_call_m430290BF7EC7E3E047621748A754CAE15CD6EF83 (void);
// 0x000004BA Grpc.Core.ChannelState Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_channel_check_connectivity_state(Grpc.Core.Internal.ChannelSafeHandle,System.Int32)
extern void DllImportsFromStaticLib_grpcsharp_channel_check_connectivity_state_m9D33D1C479C81A9115BD0755B25C70811EE33CE0 (void);
// 0x000004BB System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_channel_watch_connectivity_state(Grpc.Core.Internal.ChannelSafeHandle,Grpc.Core.ChannelState,Grpc.Core.Internal.Timespec,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_channel_watch_connectivity_state_m1CB523A79A47EC50FBD9F028A85EDB99342F77C3 (void);
// 0x000004BC Grpc.Core.Internal.CStringSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_channel_get_target(Grpc.Core.Internal.ChannelSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_channel_get_target_m505BD5E2EBBC3E04BC35436E069340B12531DA73 (void);
// 0x000004BD System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_channel_destroy(System.IntPtr)
extern void DllImportsFromStaticLib_grpcsharp_channel_destroy_m9405FCE1D3C5D3AED159E3F7E8856A0A9A5CFBBC (void);
// 0x000004BE System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_sizeof_grpc_event()
extern void DllImportsFromStaticLib_grpcsharp_sizeof_grpc_event_mFFC8E9FB66333C913C442451CF46B89ADBC1107E (void);
// 0x000004BF Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_completion_queue_create_async()
extern void DllImportsFromStaticLib_grpcsharp_completion_queue_create_async_m9EE4312FB688DC262430A47225F59E4CBF76DE4B (void);
// 0x000004C0 Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_completion_queue_create_sync()
extern void DllImportsFromStaticLib_grpcsharp_completion_queue_create_sync_m49851C795FB0DB561567BDFFF90ACB27AB9B46A2 (void);
// 0x000004C1 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_completion_queue_shutdown(Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_completion_queue_shutdown_m68D2897D4C034B71403CC4E0CBE93C90FB77DB82 (void);
// 0x000004C2 Grpc.Core.Internal.CompletionQueueEvent Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_completion_queue_next(Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_completion_queue_next_mE5E568B72C2147F5F5069A683D3D4D2892163B9D (void);
// 0x000004C3 Grpc.Core.Internal.CompletionQueueEvent Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_completion_queue_pluck(Grpc.Core.Internal.CompletionQueueSafeHandle,System.IntPtr)
extern void DllImportsFromStaticLib_grpcsharp_completion_queue_pluck_m8871B7C4C160E0A76C03494762DE13B3C4128FBF (void);
// 0x000004C4 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_completion_queue_destroy(System.IntPtr)
extern void DllImportsFromStaticLib_grpcsharp_completion_queue_destroy_m45BC8EFF447EB73C6D1D240281A5B0FA4CF955FD (void);
// 0x000004C5 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::gprsharp_free(System.IntPtr)
extern void DllImportsFromStaticLib_gprsharp_free_m23BE6FB3B7A0E27CC8C065E1B677B98EC7908DB6 (void);
// 0x000004C6 Grpc.Core.Internal.MetadataArraySafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_metadata_array_create(System.UIntPtr)
extern void DllImportsFromStaticLib_grpcsharp_metadata_array_create_m6709B285C1F38638C48B9AB4A4846A729D97E090 (void);
// 0x000004C7 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_metadata_array_add(Grpc.Core.Internal.MetadataArraySafeHandle,System.String,System.Byte[],System.UIntPtr)
extern void DllImportsFromStaticLib_grpcsharp_metadata_array_add_m2EE7A0191CFD8A4308E3B909FD771F510E4ED6F1 (void);
// 0x000004C8 System.UIntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_metadata_array_count(System.IntPtr)
extern void DllImportsFromStaticLib_grpcsharp_metadata_array_count_mC0D06A0C931B69CC470CC5859947A4E6B4513EFC (void);
// 0x000004C9 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_metadata_array_get_key(System.IntPtr,System.UIntPtr,System.UIntPtr&)
extern void DllImportsFromStaticLib_grpcsharp_metadata_array_get_key_m28AF46E50E3024078DC39EAF8D993B78386FD834 (void);
// 0x000004CA System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_metadata_array_get_value(System.IntPtr,System.UIntPtr,System.UIntPtr&)
extern void DllImportsFromStaticLib_grpcsharp_metadata_array_get_value_mB0BAC0E1D0C5E22AF839D77CDD2813F138DC579D (void);
// 0x000004CB System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_metadata_array_destroy_full(System.IntPtr)
extern void DllImportsFromStaticLib_grpcsharp_metadata_array_destroy_full_m264720EFD0990FD5726AFA09E1474DC278C327AD (void);
// 0x000004CC System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_redirect_log(Grpc.Core.Internal.GprLogDelegate)
extern void DllImportsFromStaticLib_grpcsharp_redirect_log_mDC0D873C9074BE2CD1146847F7E427C6E0273990 (void);
// 0x000004CD System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_native_callback_dispatcher_init(Grpc.Core.Internal.NativeCallbackDispatcherCallback)
extern void DllImportsFromStaticLib_grpcsharp_native_callback_dispatcher_init_mEC1B959F3331551AEF814DB966C11516AB729FC2 (void);
// 0x000004CE Grpc.Core.Internal.CallCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_metadata_credentials_create_from_plugin(System.IntPtr)
extern void DllImportsFromStaticLib_grpcsharp_metadata_credentials_create_from_plugin_mCF104FF9E088F7291E451097BBB59D5998CFA79E (void);
// 0x000004CF System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_metadata_credentials_notify_from_plugin(System.IntPtr,System.IntPtr,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.StatusCode,System.String)
extern void DllImportsFromStaticLib_grpcsharp_metadata_credentials_notify_from_plugin_m267983DB31BF4DCD3DDFE0D7C5DE6C336CB859F7 (void);
// 0x000004D0 Grpc.Core.Internal.ServerCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_ssl_server_credentials_create(System.String,System.String[],System.String[],System.UIntPtr,Grpc.Core.SslClientCertificateRequestType)
extern void DllImportsFromStaticLib_grpcsharp_ssl_server_credentials_create_mA9403B27FA540BCEFFB1602D125174A1FCC8F6F2 (void);
// 0x000004D1 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_server_credentials_release(System.IntPtr)
extern void DllImportsFromStaticLib_grpcsharp_server_credentials_release_mCF4AC621BC77A884E024058801F91FE1C8200764 (void);
// 0x000004D2 Grpc.Core.Internal.ServerSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_server_create(Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_server_create_m6F782C16FF7792187BB33FAB9BAB1F5AE1E1B060 (void);
// 0x000004D3 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_server_register_completion_queue(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_server_register_completion_queue_m7F0B0B46942ADD7EBD832201FE00CF595E977B22 (void);
// 0x000004D4 System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_server_add_insecure_http2_port(Grpc.Core.Internal.ServerSafeHandle,System.String)
extern void DllImportsFromStaticLib_grpcsharp_server_add_insecure_http2_port_mE20693EFE018DBA49D671E1982391D9ECA13CF09 (void);
// 0x000004D5 System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_server_add_secure_http2_port(Grpc.Core.Internal.ServerSafeHandle,System.String,Grpc.Core.Internal.ServerCredentialsSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_server_add_secure_http2_port_mBB92ECFB4D90C543A914BDE1E5A6607BC1B235F1 (void);
// 0x000004D6 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_server_start(Grpc.Core.Internal.ServerSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_server_start_m883CE2C7B3A05F5A2DA19F067567E893710CBBB3 (void);
// 0x000004D7 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_server_request_call(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_server_request_call_mF0018653E03CE2C0F04A2E29AA0606AB6B73132B (void);
// 0x000004D8 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_server_cancel_all_calls(Grpc.Core.Internal.ServerSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_server_cancel_all_calls_m0B8BDDA263D96FA596DBB0AF0FEF5B8F9B61EB1A (void);
// 0x000004D9 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_server_shutdown_and_notify_callback(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_server_shutdown_and_notify_callback_mE8D64D81CB9A024CC1DC70C17C4E7FA21DF4606C (void);
// 0x000004DA System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_server_destroy(System.IntPtr)
extern void DllImportsFromStaticLib_grpcsharp_server_destroy_mF96214E8C4054E119896147B0BDE26A864EB85DD (void);
// 0x000004DB Grpc.Core.Internal.AuthContextSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_call_auth_context(Grpc.Core.Internal.CallSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_call_auth_context_m99583632C88149DCEA714478F0E1444C71DB9D5D (void);
// 0x000004DC System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_auth_context_peer_identity_property_name(Grpc.Core.Internal.AuthContextSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_auth_context_peer_identity_property_name_m3B928E4CABCC8501272254D86658302EDE569150 (void);
// 0x000004DD Grpc.Core.Internal.AuthContextSafeHandle/NativeAuthPropertyIterator Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_auth_context_property_iterator(Grpc.Core.Internal.AuthContextSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_auth_context_property_iterator_mFB201E26B57CF42F2993C1DE925E01F7AEE1D1FE (void);
// 0x000004DE System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_auth_property_iterator_next(Grpc.Core.Internal.AuthContextSafeHandle/NativeAuthPropertyIterator&)
extern void DllImportsFromStaticLib_grpcsharp_auth_property_iterator_next_m7844E255103A4993E9A8A1F711F9C113F296A6D9 (void);
// 0x000004DF System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_auth_context_release(System.IntPtr)
extern void DllImportsFromStaticLib_grpcsharp_auth_context_release_m139750A9D5E221B1223ECEC1224F9CE5A69BBE16 (void);
// 0x000004E0 Grpc.Core.Internal.SliceBufferSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_slice_buffer_create()
extern void DllImportsFromStaticLib_grpcsharp_slice_buffer_create_mA37F738178525E0148975A365996B703CBC4A3C1 (void);
// 0x000004E1 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_slice_buffer_adjust_tail_space(Grpc.Core.Internal.SliceBufferSafeHandle,System.UIntPtr,System.UIntPtr)
extern void DllImportsFromStaticLib_grpcsharp_slice_buffer_adjust_tail_space_m5D9571ADCDA1609C725F08C775F41CC5F509A55C (void);
// 0x000004E2 System.UIntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_slice_buffer_slice_count(Grpc.Core.Internal.SliceBufferSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_slice_buffer_slice_count_mC8C0A5E5BF1D2A06DAD978DC8BE2FF6E40CEB7CA (void);
// 0x000004E3 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_slice_buffer_slice_peek(Grpc.Core.Internal.SliceBufferSafeHandle,System.UIntPtr,System.UIntPtr&,System.IntPtr&)
extern void DllImportsFromStaticLib_grpcsharp_slice_buffer_slice_peek_m31B1C281CEB628C30A1B3FC5240A9EC223944BE3 (void);
// 0x000004E4 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_slice_buffer_reset_and_unref(Grpc.Core.Internal.SliceBufferSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_slice_buffer_reset_and_unref_m5929DB0A4E105B4764DDDE00285CA97E6F6D2C80 (void);
// 0x000004E5 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_slice_buffer_destroy(System.IntPtr)
extern void DllImportsFromStaticLib_grpcsharp_slice_buffer_destroy_mB3363783415B4F3DDAA97BAF6E56C260FD57EEEE (void);
// 0x000004E6 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::gprsharp_now(Grpc.Core.Internal.ClockType)
extern void DllImportsFromStaticLib_gprsharp_now_mB3F87344C298722B3099E0F88F39C3930AA9C9E4 (void);
// 0x000004E7 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::gprsharp_inf_future(Grpc.Core.Internal.ClockType)
extern void DllImportsFromStaticLib_gprsharp_inf_future_mE446851BA362783E4C7B6A25C1ED02F98091747B (void);
// 0x000004E8 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::gprsharp_inf_past(Grpc.Core.Internal.ClockType)
extern void DllImportsFromStaticLib_gprsharp_inf_past_m9F147A05DF8E7CD9AF391419745444ADEA871F61 (void);
// 0x000004E9 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::gprsharp_convert_clock_type(Grpc.Core.Internal.Timespec,Grpc.Core.Internal.ClockType)
extern void DllImportsFromStaticLib_gprsharp_convert_clock_type_m075398857E3AFE2AF9CECF8BF034092680257554 (void);
// 0x000004EA System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::gprsharp_sizeof_timespec()
extern void DllImportsFromStaticLib_gprsharp_sizeof_timespec_m83FB072CAA683B2FCF6A4656F343F7CEB6794ED8 (void);
// 0x000004EB Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_test_callback(Grpc.Core.Internal.NativeCallbackTestDelegate)
extern void DllImportsFromStaticLib_grpcsharp_test_callback_m917EECD3241B1B1B940D5272ED49D3742A8F2579 (void);
// 0x000004EC System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_test_nop(System.IntPtr)
extern void DllImportsFromStaticLib_grpcsharp_test_nop_mC44AFCD74552FD8885D90413EBB8A256D809E714 (void);
// 0x000004ED System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_test_override_method(System.String,System.String)
extern void DllImportsFromStaticLib_grpcsharp_test_override_method_mC20E93DE58A768CD5EE9FF0F1E9644A27AEA11EC (void);
// 0x000004EE Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_test_call_start_unary_echo(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromStaticLib_grpcsharp_test_call_start_unary_echo_m2A1056D71EF7305A0B8322B2C6D14283BD62A51C (void);
// 0x000004EF System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::.ctor()
extern void DllImportsFromStaticLib__ctor_mDBFB69E002213875CDED8AD6E6717DC848F359FF (void);
// 0x000004F0 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_init()
extern void DllImportsFromSharedLib_grpcsharp_init_m341FFE573469D8D321E50582D91B11E562072540 (void);
// 0x000004F1 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_shutdown()
extern void DllImportsFromSharedLib_grpcsharp_shutdown_m1AFB3A9EBAB48AD44BC9170B6A455E8E25DBC7FA (void);
// 0x000004F2 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_version_string()
extern void DllImportsFromSharedLib_grpcsharp_version_string_mEF1B90870A0798D966416DC23FA5B7E85338F56C (void);
// 0x000004F3 Grpc.Core.Internal.BatchContextSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_batch_context_create()
extern void DllImportsFromSharedLib_grpcsharp_batch_context_create_m35E51F9481321C3706183071FEF4B8FE72FA5AB1 (void);
// 0x000004F4 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_batch_context_recv_initial_metadata(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_batch_context_recv_initial_metadata_mE9615ACB8D37E7A7845C5D32470106777381C228 (void);
// 0x000004F5 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_batch_context_recv_message_length(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_batch_context_recv_message_length_m3DC4345D3E4991FC0DD7675835258CF70585E4CB (void);
// 0x000004F6 System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_batch_context_recv_message_next_slice_peek(Grpc.Core.Internal.BatchContextSafeHandle,System.UIntPtr&,System.IntPtr&)
extern void DllImportsFromSharedLib_grpcsharp_batch_context_recv_message_next_slice_peek_mCDCC86482DEB9EE5A35897C7E916056662FAABE6 (void);
// 0x000004F7 Grpc.Core.StatusCode Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_batch_context_recv_status_on_client_status(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_batch_context_recv_status_on_client_status_m4B0CEFABC203D2551CA393D6C1BBB16B92D07361 (void);
// 0x000004F8 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_batch_context_recv_status_on_client_details(Grpc.Core.Internal.BatchContextSafeHandle,System.UIntPtr&)
extern void DllImportsFromSharedLib_grpcsharp_batch_context_recv_status_on_client_details_m6436C28021E8419AAD5FBBF2C1D5852685EE67C7 (void);
// 0x000004F9 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_batch_context_recv_status_on_client_error_string(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_batch_context_recv_status_on_client_error_string_mD86AC26B9134C103A5720881EAC62BC7E97B7DAB (void);
// 0x000004FA System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_batch_context_recv_status_on_client_trailing_metadata(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_batch_context_recv_status_on_client_trailing_metadata_m52B5266F3340F37398F3CE222DC74A1D2030698A (void);
// 0x000004FB System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_batch_context_recv_close_on_server_cancelled(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_batch_context_recv_close_on_server_cancelled_m93778A089770E9A96AA9F86345D746E132B8EE8D (void);
// 0x000004FC System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_batch_context_reset(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_batch_context_reset_m90F6ECC71771831069EC0D01622A93D06440E862 (void);
// 0x000004FD System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_batch_context_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_grpcsharp_batch_context_destroy_m1A7E46B24C24921854F9D878833509A4942C961C (void);
// 0x000004FE Grpc.Core.Internal.RequestCallContextSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_request_call_context_create()
extern void DllImportsFromSharedLib_grpcsharp_request_call_context_create_m79AE4549674326371047ACECE38F592E90049F9B (void);
// 0x000004FF Grpc.Core.Internal.CallSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_request_call_context_call(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_request_call_context_call_m1559544F560C17292C32281D815FEA42522C2F5A (void);
// 0x00000500 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_request_call_context_method(Grpc.Core.Internal.RequestCallContextSafeHandle,System.UIntPtr&)
extern void DllImportsFromSharedLib_grpcsharp_request_call_context_method_mA8698AAE4034ED5FF36D6F7BFD4BF31865188200 (void);
// 0x00000501 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_request_call_context_host(Grpc.Core.Internal.RequestCallContextSafeHandle,System.UIntPtr&)
extern void DllImportsFromSharedLib_grpcsharp_request_call_context_host_mB9ABDD9C9B10C8155B25F9A6A754F033ED62004B (void);
// 0x00000502 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_request_call_context_deadline(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_request_call_context_deadline_m715D7CF87DBE336C519A113804C8EBCB81780310 (void);
// 0x00000503 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_request_call_context_request_metadata(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_request_call_context_request_metadata_mC7D0E279B904378E600354F068E22BD1BE13ECD2 (void);
// 0x00000504 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_request_call_context_reset(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_request_call_context_reset_m92C560CD8DD879B95E80C42B99106474B65E7990 (void);
// 0x00000505 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_request_call_context_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_grpcsharp_request_call_context_destroy_m3793373A730A377834DFFBC7ECCB6A8DDE733A78 (void);
// 0x00000506 Grpc.Core.Internal.CallCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_composite_call_credentials_create(Grpc.Core.Internal.CallCredentialsSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_composite_call_credentials_create_mAA036E448C84740D98C1615B93F87A57A11C496D (void);
// 0x00000507 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_call_credentials_release(System.IntPtr)
extern void DllImportsFromSharedLib_grpcsharp_call_credentials_release_mF6DAF6901EA5C0C58F6FED7D6BC6845E8F614777 (void);
// 0x00000508 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_call_cancel(Grpc.Core.Internal.CallSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_call_cancel_m3A319400AABF304D835A730E4480B0C6BB8D59CB (void);
// 0x00000509 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_call_cancel_with_status(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.StatusCode,System.String)
extern void DllImportsFromSharedLib_grpcsharp_call_cancel_with_status_m1FB4C52EAAC64397693A3937888283605F5E3C8A (void);
// 0x0000050A Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_call_start_unary(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromSharedLib_grpcsharp_call_start_unary_m2AD4EBB3D00627CC17AFEAFDB41CD6F15FF2C435 (void);
// 0x0000050B Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_call_start_client_streaming(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromSharedLib_grpcsharp_call_start_client_streaming_m503F937BF7F29FA255BB5D856608741539667C6C (void);
// 0x0000050C Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_call_start_server_streaming(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromSharedLib_grpcsharp_call_start_server_streaming_m09FB17B404EFE801E7E372A6A22E6CDD35956122 (void);
// 0x0000050D Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_call_start_duplex_streaming(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromSharedLib_grpcsharp_call_start_duplex_streaming_mE2832FACD2267674837B907E2DE87FF3421FCB6C (void);
// 0x0000050E Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_call_send_message(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,System.Int32)
extern void DllImportsFromSharedLib_grpcsharp_call_send_message_mBF1295946B169D8FBAA57A6F2C6F8D17DDBC3F34 (void);
// 0x0000050F Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_call_send_close_from_client(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_call_send_close_from_client_m7ABF17D0DEB60F26720321A809A863188CA53B5F (void);
// 0x00000510 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_call_send_status_from_server(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.StatusCode,System.IntPtr,System.UIntPtr,Grpc.Core.Internal.MetadataArraySafeHandle,System.Int32,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags)
extern void DllImportsFromSharedLib_grpcsharp_call_send_status_from_server_mD6178794D83EF0353095AC8553872B6E7C039200 (void);
// 0x00000511 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_call_recv_message(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_call_recv_message_mAF651B7E07DF859A97944558FEF47A28C95EC8D5 (void);
// 0x00000512 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_call_recv_initial_metadata(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_call_recv_initial_metadata_m4147731DD670A670611BD0045FA65F29A08E44BC (void);
// 0x00000513 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_call_start_serverside(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_call_start_serverside_m7056FEFCCD56F911BC49DEF6C2692ED857C8C5FF (void);
// 0x00000514 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_call_send_initial_metadata(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_call_send_initial_metadata_m3318711C01725F79C3D18B68536DADD10311972D (void);
// 0x00000515 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_call_set_credentials(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_call_set_credentials_m12BF3CE001F8721F920201A7744F5AF314C7EAAA (void);
// 0x00000516 Grpc.Core.Internal.CStringSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_call_get_peer(Grpc.Core.Internal.CallSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_call_get_peer_m31A7FBCC732D4BB33A6EB487783931721D76CA09 (void);
// 0x00000517 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_call_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_grpcsharp_call_destroy_m315BB72F3703105D72CA0429F5E1039EF424C0CF (void);
// 0x00000518 Grpc.Core.Internal.ChannelArgsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_channel_args_create(System.UIntPtr)
extern void DllImportsFromSharedLib_grpcsharp_channel_args_create_m6BDAECDD486B7AEC59071AD24B70FA2653824F64 (void);
// 0x00000519 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_channel_args_set_string(Grpc.Core.Internal.ChannelArgsSafeHandle,System.UIntPtr,System.String,System.String)
extern void DllImportsFromSharedLib_grpcsharp_channel_args_set_string_mE7EC162D43A8915ADC762DA3246722C42F4AA893 (void);
// 0x0000051A System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_channel_args_set_integer(Grpc.Core.Internal.ChannelArgsSafeHandle,System.UIntPtr,System.String,System.Int32)
extern void DllImportsFromSharedLib_grpcsharp_channel_args_set_integer_mB9AD05FCB5C3F684480AAFAFF4477DDD7D5D5E9B (void);
// 0x0000051B System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_channel_args_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_grpcsharp_channel_args_destroy_mDA0C99D7A4EF7725AFABC5234D2DE09054B51D26 (void);
// 0x0000051C System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_override_default_ssl_roots(System.String)
extern void DllImportsFromSharedLib_grpcsharp_override_default_ssl_roots_m948E44F696EAE6E45A73BA914534D0371AD96FD8 (void);
// 0x0000051D Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_ssl_credentials_create(System.String,System.String,System.String,System.IntPtr)
extern void DllImportsFromSharedLib_grpcsharp_ssl_credentials_create_m75147197009C2421EB71A7294E4AA8A849B2D353 (void);
// 0x0000051E Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_composite_channel_credentials_create(Grpc.Core.Internal.ChannelCredentialsSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_composite_channel_credentials_create_m946E6E4CC17228C26421E3441CCACB5565DB9A6F (void);
// 0x0000051F System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_channel_credentials_release(System.IntPtr)
extern void DllImportsFromSharedLib_grpcsharp_channel_credentials_release_m5A1ED07B83B83419767AFDA31E1B7FBFBE364645 (void);
// 0x00000520 Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_insecure_channel_create(System.String,Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_insecure_channel_create_m13995F7ACE0FD04E1BB69B81B34CC8758318B23E (void);
// 0x00000521 Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_secure_channel_create(Grpc.Core.Internal.ChannelCredentialsSafeHandle,System.String,Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_secure_channel_create_mA104F11A4B655353F5E00FAE913F563AFCE58D08 (void);
// 0x00000522 Grpc.Core.Internal.CallSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_channel_create_call(Grpc.Core.Internal.ChannelSafeHandle,Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.ContextPropagationFlags,Grpc.Core.Internal.CompletionQueueSafeHandle,System.String,System.String,Grpc.Core.Internal.Timespec)
extern void DllImportsFromSharedLib_grpcsharp_channel_create_call_m8827B7884B2A1B67F041421D2B95D485B9699AF8 (void);
// 0x00000523 Grpc.Core.ChannelState Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_channel_check_connectivity_state(Grpc.Core.Internal.ChannelSafeHandle,System.Int32)
extern void DllImportsFromSharedLib_grpcsharp_channel_check_connectivity_state_m42CCF8201F0FEA9F50429378685EDEACFABE6E9B (void);
// 0x00000524 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_channel_watch_connectivity_state(Grpc.Core.Internal.ChannelSafeHandle,Grpc.Core.ChannelState,Grpc.Core.Internal.Timespec,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_channel_watch_connectivity_state_mC491DBC49D0D46F5E22A29D294F3ACF57896220E (void);
// 0x00000525 Grpc.Core.Internal.CStringSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_channel_get_target(Grpc.Core.Internal.ChannelSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_channel_get_target_mB272780230D7CFC4253672841571F03C0DC00B57 (void);
// 0x00000526 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_channel_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_grpcsharp_channel_destroy_m26B7F399EFF310BF0B7F000D86662BDBCF6C90F8 (void);
// 0x00000527 System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_sizeof_grpc_event()
extern void DllImportsFromSharedLib_grpcsharp_sizeof_grpc_event_m9D0E1243128BE6C39B62AB10B2F47AD7E914A721 (void);
// 0x00000528 Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_completion_queue_create_async()
extern void DllImportsFromSharedLib_grpcsharp_completion_queue_create_async_mD84CABB65977E3D00E003EFF379CF1345F0A92CA (void);
// 0x00000529 Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_completion_queue_create_sync()
extern void DllImportsFromSharedLib_grpcsharp_completion_queue_create_sync_m5BF94C3D27081632FE7CD9F07175687D308A1A0B (void);
// 0x0000052A System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_completion_queue_shutdown(Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_completion_queue_shutdown_m7A30038FA25F627C4857F7B393D2CD41E4003159 (void);
// 0x0000052B Grpc.Core.Internal.CompletionQueueEvent Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_completion_queue_next(Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_completion_queue_next_mFFBE7D6196AAD5503D63F6C9C7CB60998D8DA8E1 (void);
// 0x0000052C Grpc.Core.Internal.CompletionQueueEvent Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_completion_queue_pluck(Grpc.Core.Internal.CompletionQueueSafeHandle,System.IntPtr)
extern void DllImportsFromSharedLib_grpcsharp_completion_queue_pluck_m68850D60FE35F63F4790BB61CF14FFE9C6E34E49 (void);
// 0x0000052D System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_completion_queue_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_grpcsharp_completion_queue_destroy_mF15009B9B43850543A17CA62E0BD2243D3E89C7F (void);
// 0x0000052E System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::gprsharp_free(System.IntPtr)
extern void DllImportsFromSharedLib_gprsharp_free_m73D2083F7796DF9D177E5B31A23357C8DD7E4CF3 (void);
// 0x0000052F Grpc.Core.Internal.MetadataArraySafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_metadata_array_create(System.UIntPtr)
extern void DllImportsFromSharedLib_grpcsharp_metadata_array_create_m285699BAD578155484B6EF82E45F8E061C09FEE9 (void);
// 0x00000530 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_metadata_array_add(Grpc.Core.Internal.MetadataArraySafeHandle,System.String,System.Byte[],System.UIntPtr)
extern void DllImportsFromSharedLib_grpcsharp_metadata_array_add_m452B7FF052E871A422D035D5609BA205CF5182CC (void);
// 0x00000531 System.UIntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_metadata_array_count(System.IntPtr)
extern void DllImportsFromSharedLib_grpcsharp_metadata_array_count_m731CEB060CC812FB545555EB53E8FD249A784DF7 (void);
// 0x00000532 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_metadata_array_get_key(System.IntPtr,System.UIntPtr,System.UIntPtr&)
extern void DllImportsFromSharedLib_grpcsharp_metadata_array_get_key_mFEEA962D91DD29110CED5C4545E9CB1F14DBA1BC (void);
// 0x00000533 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_metadata_array_get_value(System.IntPtr,System.UIntPtr,System.UIntPtr&)
extern void DllImportsFromSharedLib_grpcsharp_metadata_array_get_value_m703CF748E00CC762B7CE04A5B9C1D928482287EA (void);
// 0x00000534 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_metadata_array_destroy_full(System.IntPtr)
extern void DllImportsFromSharedLib_grpcsharp_metadata_array_destroy_full_mDC086DF7C3F97AE69F0A87282909E6A8BC03FE7B (void);
// 0x00000535 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_redirect_log(Grpc.Core.Internal.GprLogDelegate)
extern void DllImportsFromSharedLib_grpcsharp_redirect_log_m7FEAC17113FB1A722DCB17A9922E2F2BC1C5B424 (void);
// 0x00000536 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_native_callback_dispatcher_init(Grpc.Core.Internal.NativeCallbackDispatcherCallback)
extern void DllImportsFromSharedLib_grpcsharp_native_callback_dispatcher_init_mE4649BE3C37CC305389F929C8C5E60BA7EE5C892 (void);
// 0x00000537 Grpc.Core.Internal.CallCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_metadata_credentials_create_from_plugin(System.IntPtr)
extern void DllImportsFromSharedLib_grpcsharp_metadata_credentials_create_from_plugin_m0BFAA42B1D8954DB3BE7E4D2DDF8324F6B1F031C (void);
// 0x00000538 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_metadata_credentials_notify_from_plugin(System.IntPtr,System.IntPtr,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.StatusCode,System.String)
extern void DllImportsFromSharedLib_grpcsharp_metadata_credentials_notify_from_plugin_mA7502EA3D88F74B024807E33DFCD934CB6FE04D3 (void);
// 0x00000539 Grpc.Core.Internal.ServerCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_ssl_server_credentials_create(System.String,System.String[],System.String[],System.UIntPtr,Grpc.Core.SslClientCertificateRequestType)
extern void DllImportsFromSharedLib_grpcsharp_ssl_server_credentials_create_mD01F08FF83D28FF27D9C45F8E1E63A26EA76C684 (void);
// 0x0000053A System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_server_credentials_release(System.IntPtr)
extern void DllImportsFromSharedLib_grpcsharp_server_credentials_release_mA287BD769C0E12A996ED6AEDFC7E08701D2C22EF (void);
// 0x0000053B Grpc.Core.Internal.ServerSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_server_create(Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_server_create_m1F890F97F8C2DCE0A782706AFE3B3C0CE2972DF5 (void);
// 0x0000053C System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_server_register_completion_queue(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_server_register_completion_queue_m409287E89693A01DEA0DDF69E46849FB58BF6E6E (void);
// 0x0000053D System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_server_add_insecure_http2_port(Grpc.Core.Internal.ServerSafeHandle,System.String)
extern void DllImportsFromSharedLib_grpcsharp_server_add_insecure_http2_port_m7596DCFA6E8507E17E61924D264A72B1ECC4457C (void);
// 0x0000053E System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_server_add_secure_http2_port(Grpc.Core.Internal.ServerSafeHandle,System.String,Grpc.Core.Internal.ServerCredentialsSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_server_add_secure_http2_port_mE47C5F45D7256FDFE41595B1908D53C6F47A22AE (void);
// 0x0000053F System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_server_start(Grpc.Core.Internal.ServerSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_server_start_m069D28A8E5E1A896752ACE3AB6AC0643CD57973A (void);
// 0x00000540 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_server_request_call(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_server_request_call_m55C754E3EC63C6A94F17E39B7A66E0C7A707C6B6 (void);
// 0x00000541 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_server_cancel_all_calls(Grpc.Core.Internal.ServerSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_server_cancel_all_calls_m753AAA7893D7A883940F97CFFAB9D90E771E18CA (void);
// 0x00000542 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_server_shutdown_and_notify_callback(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_server_shutdown_and_notify_callback_mC367E0EA7C89EF0D4D01A4DC46014A0C564ECA16 (void);
// 0x00000543 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_server_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_grpcsharp_server_destroy_m586B731A3ADEAB55DB3643E3BD25EE1C385AF0F0 (void);
// 0x00000544 Grpc.Core.Internal.AuthContextSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_call_auth_context(Grpc.Core.Internal.CallSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_call_auth_context_mE6983AE2F64AE1B98E0A49F5F5E504BA4C30E886 (void);
// 0x00000545 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_auth_context_peer_identity_property_name(Grpc.Core.Internal.AuthContextSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_auth_context_peer_identity_property_name_m605B5C7A8CAA8C0B181DDE3732C758ECBF8741E1 (void);
// 0x00000546 Grpc.Core.Internal.AuthContextSafeHandle/NativeAuthPropertyIterator Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_auth_context_property_iterator(Grpc.Core.Internal.AuthContextSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_auth_context_property_iterator_m3B64328F618A0EC32BD4D09B8376BFB72E552377 (void);
// 0x00000547 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_auth_property_iterator_next(Grpc.Core.Internal.AuthContextSafeHandle/NativeAuthPropertyIterator&)
extern void DllImportsFromSharedLib_grpcsharp_auth_property_iterator_next_m4FBAE7E2243059A71B8D211BC2C79E7A3D614A98 (void);
// 0x00000548 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_auth_context_release(System.IntPtr)
extern void DllImportsFromSharedLib_grpcsharp_auth_context_release_m3B72992C82B3911F4F19C1AFD2883192788DF2F3 (void);
// 0x00000549 Grpc.Core.Internal.SliceBufferSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_slice_buffer_create()
extern void DllImportsFromSharedLib_grpcsharp_slice_buffer_create_m60AA3F5045DC08B852F15A838F24D1B91FFC87B7 (void);
// 0x0000054A System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_slice_buffer_adjust_tail_space(Grpc.Core.Internal.SliceBufferSafeHandle,System.UIntPtr,System.UIntPtr)
extern void DllImportsFromSharedLib_grpcsharp_slice_buffer_adjust_tail_space_m669CD54CEDF4769DC6B15E1EE842F8D8749A16B4 (void);
// 0x0000054B System.UIntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_slice_buffer_slice_count(Grpc.Core.Internal.SliceBufferSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_slice_buffer_slice_count_m8A8566A3AE45798A7BAED908DD6AFFE992F00AF3 (void);
// 0x0000054C System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_slice_buffer_slice_peek(Grpc.Core.Internal.SliceBufferSafeHandle,System.UIntPtr,System.UIntPtr&,System.IntPtr&)
extern void DllImportsFromSharedLib_grpcsharp_slice_buffer_slice_peek_mB7F167C2943C66BE93A4013670032F113FF21E50 (void);
// 0x0000054D System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_slice_buffer_reset_and_unref(Grpc.Core.Internal.SliceBufferSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_slice_buffer_reset_and_unref_m03F94F30F3CECEC43BDD318A319739C2416607A2 (void);
// 0x0000054E System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_slice_buffer_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_grpcsharp_slice_buffer_destroy_mB2F8B97415115343547FB9081B0EF7A14FC798D5 (void);
// 0x0000054F Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::gprsharp_now(Grpc.Core.Internal.ClockType)
extern void DllImportsFromSharedLib_gprsharp_now_m7618C0C36F4177D5CDE9BDB8673C771C0E8804D2 (void);
// 0x00000550 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::gprsharp_inf_future(Grpc.Core.Internal.ClockType)
extern void DllImportsFromSharedLib_gprsharp_inf_future_mCF536F9E8247A179754A896053859E0BBBA953AE (void);
// 0x00000551 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::gprsharp_inf_past(Grpc.Core.Internal.ClockType)
extern void DllImportsFromSharedLib_gprsharp_inf_past_m8EEAD4758DA7F3EE95B6D97848C6A3AAF01FFC04 (void);
// 0x00000552 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::gprsharp_convert_clock_type(Grpc.Core.Internal.Timespec,Grpc.Core.Internal.ClockType)
extern void DllImportsFromSharedLib_gprsharp_convert_clock_type_mEACC6C58D04179D6C381B477752E62E23A20BEDA (void);
// 0x00000553 System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::gprsharp_sizeof_timespec()
extern void DllImportsFromSharedLib_gprsharp_sizeof_timespec_m8DE6D8724129CE481ADC104C9D9BF628050858E4 (void);
// 0x00000554 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_test_callback(Grpc.Core.Internal.NativeCallbackTestDelegate)
extern void DllImportsFromSharedLib_grpcsharp_test_callback_m0D7876F134ABB10B22F4DDF0097CBCC7F196724F (void);
// 0x00000555 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_test_nop(System.IntPtr)
extern void DllImportsFromSharedLib_grpcsharp_test_nop_mFE1FB5527D1BD6CE1D97291F8D3004EE8CEEE0DF (void);
// 0x00000556 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_test_override_method(System.String,System.String)
extern void DllImportsFromSharedLib_grpcsharp_test_override_method_mA625FFE899155925468B6BEBA3872F49AEE8A081 (void);
// 0x00000557 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_test_call_start_unary_echo(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromSharedLib_grpcsharp_test_call_start_unary_echo_m388744B9408A44F2C3A4891E522ADB22BC6FE838 (void);
// 0x00000558 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::.ctor()
extern void DllImportsFromSharedLib__ctor_mF6A20118B4EDD7EDEF37BD83237210110E1B0F7D (void);
// 0x00000559 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_init()
extern void DllImportsFromSharedLib_x86_grpcsharp_init_m33E12F2438DD7FD802925C06DC1DABEE0E184E9E (void);
// 0x0000055A System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_shutdown()
extern void DllImportsFromSharedLib_x86_grpcsharp_shutdown_mAD1D10D5C1D266A2EC75976F2F435835CF8791FC (void);
// 0x0000055B System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_version_string()
extern void DllImportsFromSharedLib_x86_grpcsharp_version_string_m54782C5A168DF98510C669523E5791F2C73C50E9 (void);
// 0x0000055C Grpc.Core.Internal.BatchContextSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_batch_context_create()
extern void DllImportsFromSharedLib_x86_grpcsharp_batch_context_create_m273F85C8F853AC2D799194F7525D864FC3ADAD0A (void);
// 0x0000055D System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_batch_context_recv_initial_metadata(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_batch_context_recv_initial_metadata_m5E6B620223E2A0C6FD70925C5E342F1A821E559F (void);
// 0x0000055E System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_batch_context_recv_message_length(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_batch_context_recv_message_length_m00083C95FC980F326FC58DB1E131E6F368F67655 (void);
// 0x0000055F System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_batch_context_recv_message_next_slice_peek(Grpc.Core.Internal.BatchContextSafeHandle,System.UIntPtr&,System.IntPtr&)
extern void DllImportsFromSharedLib_x86_grpcsharp_batch_context_recv_message_next_slice_peek_mF7BD2815051CBC2D03683F21540FCF2ACCB7BF93 (void);
// 0x00000560 Grpc.Core.StatusCode Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_batch_context_recv_status_on_client_status(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_batch_context_recv_status_on_client_status_m16AD7B01B22EEE3E9989E3CF14DC242DDEFC9FA7 (void);
// 0x00000561 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_batch_context_recv_status_on_client_details(Grpc.Core.Internal.BatchContextSafeHandle,System.UIntPtr&)
extern void DllImportsFromSharedLib_x86_grpcsharp_batch_context_recv_status_on_client_details_mD09574F766CB6AD4A341B3FD3BCF66C5BF62A160 (void);
// 0x00000562 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_batch_context_recv_status_on_client_error_string(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_batch_context_recv_status_on_client_error_string_m85A228E173057E5261454E5F02CAD5D6D7105195 (void);
// 0x00000563 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_batch_context_recv_status_on_client_trailing_metadata(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_batch_context_recv_status_on_client_trailing_metadata_m81AD7BB37BE3B7B8AF921DC8AD13BDA4EE3E07C4 (void);
// 0x00000564 System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_batch_context_recv_close_on_server_cancelled(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_batch_context_recv_close_on_server_cancelled_m64F45B3AEE109C85684FB41CA3E3BBB39D65A37F (void);
// 0x00000565 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_batch_context_reset(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_batch_context_reset_m3D5AE07C53E65D4B90D345242727E2FDF8DD97F1 (void);
// 0x00000566 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_batch_context_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x86_grpcsharp_batch_context_destroy_m138C207A3B5CBDE3D2131D3C89519710AD8AE0A7 (void);
// 0x00000567 Grpc.Core.Internal.RequestCallContextSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_request_call_context_create()
extern void DllImportsFromSharedLib_x86_grpcsharp_request_call_context_create_m511B7BDCE2D4B55F2BAD1A65C70EB3ABDF2B663A (void);
// 0x00000568 Grpc.Core.Internal.CallSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_request_call_context_call(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_request_call_context_call_mB01D0AB5E26A9934AE12A480AFFD20CBCF343BFF (void);
// 0x00000569 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_request_call_context_method(Grpc.Core.Internal.RequestCallContextSafeHandle,System.UIntPtr&)
extern void DllImportsFromSharedLib_x86_grpcsharp_request_call_context_method_m62D3F4AF9BCA4BAA406EBCF1F2E75529EA1D8655 (void);
// 0x0000056A System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_request_call_context_host(Grpc.Core.Internal.RequestCallContextSafeHandle,System.UIntPtr&)
extern void DllImportsFromSharedLib_x86_grpcsharp_request_call_context_host_m7D302278B2A22E5CE29BC3C469315A929772352E (void);
// 0x0000056B Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_request_call_context_deadline(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_request_call_context_deadline_mD6A27DF349934EB84D16CA83E8EFA382E6DBE09B (void);
// 0x0000056C System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_request_call_context_request_metadata(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_request_call_context_request_metadata_mB2BF0C8DFCFBC74EA8C46933B16C3C5D28B6836F (void);
// 0x0000056D System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_request_call_context_reset(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_request_call_context_reset_m093F4306933F4F1AFA0AC31F9A944997AD60A912 (void);
// 0x0000056E System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_request_call_context_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x86_grpcsharp_request_call_context_destroy_m2C6ED0B8A8A53FC14D6A1FD71F562C454C02E79B (void);
// 0x0000056F Grpc.Core.Internal.CallCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_composite_call_credentials_create(Grpc.Core.Internal.CallCredentialsSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_composite_call_credentials_create_m65239C13637D2183605D8C8E254F43284BF0FF75 (void);
// 0x00000570 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_call_credentials_release(System.IntPtr)
extern void DllImportsFromSharedLib_x86_grpcsharp_call_credentials_release_m5C3A6F4B21F701913FE3734E6F22805AB4C02675 (void);
// 0x00000571 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_call_cancel(Grpc.Core.Internal.CallSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_call_cancel_m5FF8DFBFBD4F490171D629A200F0BCE5C19107DB (void);
// 0x00000572 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_call_cancel_with_status(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.StatusCode,System.String)
extern void DllImportsFromSharedLib_x86_grpcsharp_call_cancel_with_status_m474E2374949FA69B096327C51C1EE7C0896E5FB1 (void);
// 0x00000573 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_call_start_unary(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromSharedLib_x86_grpcsharp_call_start_unary_mF8293D5620088D0ACE01631F57DDD647DBE0F48E (void);
// 0x00000574 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_call_start_client_streaming(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromSharedLib_x86_grpcsharp_call_start_client_streaming_mE4FE5B4ED5DEDDE9A1081A4D9BE7A0A48A6330DD (void);
// 0x00000575 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_call_start_server_streaming(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromSharedLib_x86_grpcsharp_call_start_server_streaming_m9C3A3AA2F2372426487F1F1F1F78F0DD537E780F (void);
// 0x00000576 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_call_start_duplex_streaming(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromSharedLib_x86_grpcsharp_call_start_duplex_streaming_m8E1C95D3D8B609577970F8B11FDB37AD8A371ACB (void);
// 0x00000577 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_call_send_message(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,System.Int32)
extern void DllImportsFromSharedLib_x86_grpcsharp_call_send_message_mC9EB90E2F49729A345EF4C760E64911B96819E02 (void);
// 0x00000578 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_call_send_close_from_client(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_call_send_close_from_client_mD709C2723023FE2188BE6F3C4395A2FD5F8E6201 (void);
// 0x00000579 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_call_send_status_from_server(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.StatusCode,System.IntPtr,System.UIntPtr,Grpc.Core.Internal.MetadataArraySafeHandle,System.Int32,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags)
extern void DllImportsFromSharedLib_x86_grpcsharp_call_send_status_from_server_m63254E111B333FC932C0CC0BAE7E4169DE0D22D7 (void);
// 0x0000057A Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_call_recv_message(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_call_recv_message_mC83F6C653BCAF98B8D54E405F9C70D6F93BE5924 (void);
// 0x0000057B Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_call_recv_initial_metadata(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_call_recv_initial_metadata_m92F71199DCCD0326BA0F68D149D9F0AFF9950FE3 (void);
// 0x0000057C Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_call_start_serverside(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_call_start_serverside_m49680296193D388C53F3FBB3B53DEA935592F1FA (void);
// 0x0000057D Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_call_send_initial_metadata(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_call_send_initial_metadata_m42753FE29B9F214876316160C5154ECC4A7C3232 (void);
// 0x0000057E Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_call_set_credentials(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_call_set_credentials_m3ACBF9C85A24FB290A009CA1B320F10A3448BD2F (void);
// 0x0000057F Grpc.Core.Internal.CStringSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_call_get_peer(Grpc.Core.Internal.CallSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_call_get_peer_m18DCEF1119E86A92CE8884E5F9EF9275BCFB5DB7 (void);
// 0x00000580 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_call_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x86_grpcsharp_call_destroy_mC406C30D61A772FC68F24ED2E96579042DDC6AED (void);
// 0x00000581 Grpc.Core.Internal.ChannelArgsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_channel_args_create(System.UIntPtr)
extern void DllImportsFromSharedLib_x86_grpcsharp_channel_args_create_mEDF1A256997EA165CF7185C18C48D65DEEEEDC0F (void);
// 0x00000582 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_channel_args_set_string(Grpc.Core.Internal.ChannelArgsSafeHandle,System.UIntPtr,System.String,System.String)
extern void DllImportsFromSharedLib_x86_grpcsharp_channel_args_set_string_m7F7A2436EFED1C0205CD87DE9ECCDDBBD7562AE2 (void);
// 0x00000583 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_channel_args_set_integer(Grpc.Core.Internal.ChannelArgsSafeHandle,System.UIntPtr,System.String,System.Int32)
extern void DllImportsFromSharedLib_x86_grpcsharp_channel_args_set_integer_m0E7420967637B3671AC6895FF10CDD5D48AF4E75 (void);
// 0x00000584 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_channel_args_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x86_grpcsharp_channel_args_destroy_mF8A441AC87E15FDB4F4F6A0CB5FAC5DB98FF2507 (void);
// 0x00000585 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_override_default_ssl_roots(System.String)
extern void DllImportsFromSharedLib_x86_grpcsharp_override_default_ssl_roots_m74F483F5E476157B84725204EC208E412FCABD4F (void);
// 0x00000586 Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_ssl_credentials_create(System.String,System.String,System.String,System.IntPtr)
extern void DllImportsFromSharedLib_x86_grpcsharp_ssl_credentials_create_m793384399663A093D60A5DE6FED315C3C411CCC8 (void);
// 0x00000587 Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_composite_channel_credentials_create(Grpc.Core.Internal.ChannelCredentialsSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_composite_channel_credentials_create_m8D8724496758831FFF3363A4AD9B6FA83F75E96F (void);
// 0x00000588 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_channel_credentials_release(System.IntPtr)
extern void DllImportsFromSharedLib_x86_grpcsharp_channel_credentials_release_mEA8CDEA170D1BF1294E08597088A62B680346530 (void);
// 0x00000589 Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_insecure_channel_create(System.String,Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_insecure_channel_create_m675A6E8BE4F493B44D2D5CD2A147E7A7D02C2B45 (void);
// 0x0000058A Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_secure_channel_create(Grpc.Core.Internal.ChannelCredentialsSafeHandle,System.String,Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_secure_channel_create_m077CD7927B3BF585D60AF6B1DD40172230350159 (void);
// 0x0000058B Grpc.Core.Internal.CallSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_channel_create_call(Grpc.Core.Internal.ChannelSafeHandle,Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.ContextPropagationFlags,Grpc.Core.Internal.CompletionQueueSafeHandle,System.String,System.String,Grpc.Core.Internal.Timespec)
extern void DllImportsFromSharedLib_x86_grpcsharp_channel_create_call_mBE7EB427FD3FED6FD61ABA3F90F264A98E3D720F (void);
// 0x0000058C Grpc.Core.ChannelState Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_channel_check_connectivity_state(Grpc.Core.Internal.ChannelSafeHandle,System.Int32)
extern void DllImportsFromSharedLib_x86_grpcsharp_channel_check_connectivity_state_m7840340D70B8238356CB62D641A13C67A3756B9F (void);
// 0x0000058D System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_channel_watch_connectivity_state(Grpc.Core.Internal.ChannelSafeHandle,Grpc.Core.ChannelState,Grpc.Core.Internal.Timespec,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_channel_watch_connectivity_state_m678BBC1FAEF71A609B0CF027C9AB98C96D393495 (void);
// 0x0000058E Grpc.Core.Internal.CStringSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_channel_get_target(Grpc.Core.Internal.ChannelSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_channel_get_target_m73415A6DBCC1A72F0CED8C5D09E91CF81749DCEF (void);
// 0x0000058F System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_channel_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x86_grpcsharp_channel_destroy_m1446504EFF1FED970D5D61A0603E529F6FDFA2FA (void);
// 0x00000590 System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_sizeof_grpc_event()
extern void DllImportsFromSharedLib_x86_grpcsharp_sizeof_grpc_event_m7BB9FB3CDC67E86C69D3CFF8B1F87B02114BAEF1 (void);
// 0x00000591 Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_completion_queue_create_async()
extern void DllImportsFromSharedLib_x86_grpcsharp_completion_queue_create_async_mB680BDCA668EEE32CB08E2ADEF961C56B9F82572 (void);
// 0x00000592 Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_completion_queue_create_sync()
extern void DllImportsFromSharedLib_x86_grpcsharp_completion_queue_create_sync_mDB12D809D1C175CED23B077EBB75E52119A8FD6A (void);
// 0x00000593 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_completion_queue_shutdown(Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_completion_queue_shutdown_mBA033897D5F66A79B290F736EF8F2CEF621CF9FF (void);
// 0x00000594 Grpc.Core.Internal.CompletionQueueEvent Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_completion_queue_next(Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_completion_queue_next_mC1FC3285FEE2F5D57631DF3E2BC08F41D2A58FC1 (void);
// 0x00000595 Grpc.Core.Internal.CompletionQueueEvent Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_completion_queue_pluck(Grpc.Core.Internal.CompletionQueueSafeHandle,System.IntPtr)
extern void DllImportsFromSharedLib_x86_grpcsharp_completion_queue_pluck_mC14DA99F17FDA5EA2C64A8DECDA4269F7AF503D8 (void);
// 0x00000596 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_completion_queue_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x86_grpcsharp_completion_queue_destroy_mEF4A6755E0F142A5BC9618BAC8FE0A645941175B (void);
// 0x00000597 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::gprsharp_free(System.IntPtr)
extern void DllImportsFromSharedLib_x86_gprsharp_free_mAD8E9809722D2115206E66F1D2DEABBD57B6B9DE (void);
// 0x00000598 Grpc.Core.Internal.MetadataArraySafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_metadata_array_create(System.UIntPtr)
extern void DllImportsFromSharedLib_x86_grpcsharp_metadata_array_create_m0A24D077690D3E31CA45BBBD474E51963065C930 (void);
// 0x00000599 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_metadata_array_add(Grpc.Core.Internal.MetadataArraySafeHandle,System.String,System.Byte[],System.UIntPtr)
extern void DllImportsFromSharedLib_x86_grpcsharp_metadata_array_add_m02AD694431EB14E36F7E5DA6171E3736C172AB8F (void);
// 0x0000059A System.UIntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_metadata_array_count(System.IntPtr)
extern void DllImportsFromSharedLib_x86_grpcsharp_metadata_array_count_m47E800DD00C3AC2C14F911846381BC556E2A2834 (void);
// 0x0000059B System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_metadata_array_get_key(System.IntPtr,System.UIntPtr,System.UIntPtr&)
extern void DllImportsFromSharedLib_x86_grpcsharp_metadata_array_get_key_m2E1C4CC5EDEE51855F7D5652B4A5E0CB0A5DE1F6 (void);
// 0x0000059C System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_metadata_array_get_value(System.IntPtr,System.UIntPtr,System.UIntPtr&)
extern void DllImportsFromSharedLib_x86_grpcsharp_metadata_array_get_value_m7DFEC48E6BB3552004C22D77AEC133AA2F25E6F6 (void);
// 0x0000059D System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_metadata_array_destroy_full(System.IntPtr)
extern void DllImportsFromSharedLib_x86_grpcsharp_metadata_array_destroy_full_mA1761718BEA498433F426943B842BE81BE77C72A (void);
// 0x0000059E System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_redirect_log(Grpc.Core.Internal.GprLogDelegate)
extern void DllImportsFromSharedLib_x86_grpcsharp_redirect_log_mFC5DAB9387F180C4E16784931B1C03B831772CC0 (void);
// 0x0000059F System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_native_callback_dispatcher_init(Grpc.Core.Internal.NativeCallbackDispatcherCallback)
extern void DllImportsFromSharedLib_x86_grpcsharp_native_callback_dispatcher_init_mE1746BFFD492F1D7045AFAE5D626F49834BEEF55 (void);
// 0x000005A0 Grpc.Core.Internal.CallCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_metadata_credentials_create_from_plugin(System.IntPtr)
extern void DllImportsFromSharedLib_x86_grpcsharp_metadata_credentials_create_from_plugin_m9249C6913F863F712E3A9E67691517F42C28A2B1 (void);
// 0x000005A1 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_metadata_credentials_notify_from_plugin(System.IntPtr,System.IntPtr,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.StatusCode,System.String)
extern void DllImportsFromSharedLib_x86_grpcsharp_metadata_credentials_notify_from_plugin_m99DC3D07EA5FB50F00EBA3D70549A6B8B3647EC9 (void);
// 0x000005A2 Grpc.Core.Internal.ServerCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_ssl_server_credentials_create(System.String,System.String[],System.String[],System.UIntPtr,Grpc.Core.SslClientCertificateRequestType)
extern void DllImportsFromSharedLib_x86_grpcsharp_ssl_server_credentials_create_mEAB1FE56D13D41DF7AC0E81BBE4AC7CD99DC04CB (void);
// 0x000005A3 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_server_credentials_release(System.IntPtr)
extern void DllImportsFromSharedLib_x86_grpcsharp_server_credentials_release_m72AEFD30E2885FDA4F2CD29B5CA2944CCE7010B2 (void);
// 0x000005A4 Grpc.Core.Internal.ServerSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_server_create(Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_server_create_m7DFB46D93B73DD41FCB80F95C9C8DFC237A2754E (void);
// 0x000005A5 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_server_register_completion_queue(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_server_register_completion_queue_m7E75DDFB48FE0F0D779DE458C549AB0F0E9150EB (void);
// 0x000005A6 System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_server_add_insecure_http2_port(Grpc.Core.Internal.ServerSafeHandle,System.String)
extern void DllImportsFromSharedLib_x86_grpcsharp_server_add_insecure_http2_port_m68FCCF178877BA0BFA4856F348209DD8CEC50A46 (void);
// 0x000005A7 System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_server_add_secure_http2_port(Grpc.Core.Internal.ServerSafeHandle,System.String,Grpc.Core.Internal.ServerCredentialsSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_server_add_secure_http2_port_mB8B74D31F6868257201423E4A7FB6D7E7C4F1D45 (void);
// 0x000005A8 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_server_start(Grpc.Core.Internal.ServerSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_server_start_m67EA396467B695E88F6730ECC19E32639045D138 (void);
// 0x000005A9 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_server_request_call(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_server_request_call_m07185B865D45245AF884E11C1650E1DBBA47E3E6 (void);
// 0x000005AA System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_server_cancel_all_calls(Grpc.Core.Internal.ServerSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_server_cancel_all_calls_m4546C82061495C9BC6F5C42A3E89496F3E8D0FD6 (void);
// 0x000005AB System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_server_shutdown_and_notify_callback(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_server_shutdown_and_notify_callback_m6DCD6CC4C44E628C584EC26DFEC46683F17C1029 (void);
// 0x000005AC System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_server_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x86_grpcsharp_server_destroy_mC532545F7176B1E3E625B96A691C759DA7E34106 (void);
// 0x000005AD Grpc.Core.Internal.AuthContextSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_call_auth_context(Grpc.Core.Internal.CallSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_call_auth_context_m3CDA79FC162567B64E924E2645F5AD4BEC854596 (void);
// 0x000005AE System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_auth_context_peer_identity_property_name(Grpc.Core.Internal.AuthContextSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_auth_context_peer_identity_property_name_mC8A67BB5184B0981B61EFE325770A08D6EFC1049 (void);
// 0x000005AF Grpc.Core.Internal.AuthContextSafeHandle/NativeAuthPropertyIterator Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_auth_context_property_iterator(Grpc.Core.Internal.AuthContextSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_auth_context_property_iterator_m8B9AD60711D1F76EACA8326331409C5EC4EE75ED (void);
// 0x000005B0 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_auth_property_iterator_next(Grpc.Core.Internal.AuthContextSafeHandle/NativeAuthPropertyIterator&)
extern void DllImportsFromSharedLib_x86_grpcsharp_auth_property_iterator_next_m92CC03085A2D1D82A2ED2D17D50C4D1D77FE6ADC (void);
// 0x000005B1 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_auth_context_release(System.IntPtr)
extern void DllImportsFromSharedLib_x86_grpcsharp_auth_context_release_mADA973A198590428FB11D6E3A7E0B5E8D1859D09 (void);
// 0x000005B2 Grpc.Core.Internal.SliceBufferSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_slice_buffer_create()
extern void DllImportsFromSharedLib_x86_grpcsharp_slice_buffer_create_m867FFA0D67D95A7F091F329236EBBFDFDCB6FA6D (void);
// 0x000005B3 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_slice_buffer_adjust_tail_space(Grpc.Core.Internal.SliceBufferSafeHandle,System.UIntPtr,System.UIntPtr)
extern void DllImportsFromSharedLib_x86_grpcsharp_slice_buffer_adjust_tail_space_m5420D9CD609BD12427E1D5D48B4B9382D326E342 (void);
// 0x000005B4 System.UIntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_slice_buffer_slice_count(Grpc.Core.Internal.SliceBufferSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_slice_buffer_slice_count_m3FD7F3CD0CC37B01B91BAF6C7FB76DD3868F3E5C (void);
// 0x000005B5 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_slice_buffer_slice_peek(Grpc.Core.Internal.SliceBufferSafeHandle,System.UIntPtr,System.UIntPtr&,System.IntPtr&)
extern void DllImportsFromSharedLib_x86_grpcsharp_slice_buffer_slice_peek_m1A7060F77ED6089CF9EDB19F50E8220C0688D016 (void);
// 0x000005B6 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_slice_buffer_reset_and_unref(Grpc.Core.Internal.SliceBufferSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_slice_buffer_reset_and_unref_m6769F713E458C3E9C4D1295F0EECEB3DD3110A0A (void);
// 0x000005B7 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_slice_buffer_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x86_grpcsharp_slice_buffer_destroy_m331973FA6F65B6DFB61441B9DCBEC41444C47F4E (void);
// 0x000005B8 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::gprsharp_now(Grpc.Core.Internal.ClockType)
extern void DllImportsFromSharedLib_x86_gprsharp_now_mE6565C81B3C5AB05D34DF50E1F4B8E5DF959C612 (void);
// 0x000005B9 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::gprsharp_inf_future(Grpc.Core.Internal.ClockType)
extern void DllImportsFromSharedLib_x86_gprsharp_inf_future_m9D35A2351E7579061C79322D9E3C5A39934473BB (void);
// 0x000005BA Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::gprsharp_inf_past(Grpc.Core.Internal.ClockType)
extern void DllImportsFromSharedLib_x86_gprsharp_inf_past_mF1E55F142F6B82DDE2EC3037CC5FB4AD3AC732D9 (void);
// 0x000005BB Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::gprsharp_convert_clock_type(Grpc.Core.Internal.Timespec,Grpc.Core.Internal.ClockType)
extern void DllImportsFromSharedLib_x86_gprsharp_convert_clock_type_mB9D51065593E7FF0622C1BBE941A96B3D7849CE1 (void);
// 0x000005BC System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::gprsharp_sizeof_timespec()
extern void DllImportsFromSharedLib_x86_gprsharp_sizeof_timespec_m568DB7853FE17846BE459ABA3E9134F400FDB5BB (void);
// 0x000005BD Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_test_callback(Grpc.Core.Internal.NativeCallbackTestDelegate)
extern void DllImportsFromSharedLib_x86_grpcsharp_test_callback_m3CA16345B98543434012E2202D06840893D2C464 (void);
// 0x000005BE System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_test_nop(System.IntPtr)
extern void DllImportsFromSharedLib_x86_grpcsharp_test_nop_m2E185F8A86524ACCEDCD9F6A9D99A6D0CCBCCFCC (void);
// 0x000005BF System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_test_override_method(System.String,System.String)
extern void DllImportsFromSharedLib_x86_grpcsharp_test_override_method_m75E7F9D99AE24AF462202AE50F0116375E6DAF47 (void);
// 0x000005C0 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_test_call_start_unary_echo(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromSharedLib_x86_grpcsharp_test_call_start_unary_echo_m5623028A829C53EBEEE5CB1F1DC5CB9DF6BBC13A (void);
// 0x000005C1 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::.ctor()
extern void DllImportsFromSharedLib_x86__ctor_m670F3E637C563D0913F4DDA9B558D552191F74BF (void);
// 0x000005C2 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_init()
extern void DllImportsFromSharedLib_x64_grpcsharp_init_m405288B13EA9DF25D312C98B7800AE41A7443BDC (void);
// 0x000005C3 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_shutdown()
extern void DllImportsFromSharedLib_x64_grpcsharp_shutdown_mA5966F3088EF7D55C25D51014FDB9D4C05A2BF36 (void);
// 0x000005C4 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_version_string()
extern void DllImportsFromSharedLib_x64_grpcsharp_version_string_m565070FB2240FDF90D77C1AE781586D6536FC6E0 (void);
// 0x000005C5 Grpc.Core.Internal.BatchContextSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_batch_context_create()
extern void DllImportsFromSharedLib_x64_grpcsharp_batch_context_create_m42B76D6EDF19A7E76F11F0275D7D6CFDE3C5CC23 (void);
// 0x000005C6 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_batch_context_recv_initial_metadata(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_batch_context_recv_initial_metadata_m6DB9D4ED2BD766D72F564E903C3861888906E0C6 (void);
// 0x000005C7 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_batch_context_recv_message_length(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_batch_context_recv_message_length_mDFA448702A5093796B6946C9898FBA5B20B9A33F (void);
// 0x000005C8 System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_batch_context_recv_message_next_slice_peek(Grpc.Core.Internal.BatchContextSafeHandle,System.UIntPtr&,System.IntPtr&)
extern void DllImportsFromSharedLib_x64_grpcsharp_batch_context_recv_message_next_slice_peek_m890C16E37C5B68C49D48170C34A965E848146CBE (void);
// 0x000005C9 Grpc.Core.StatusCode Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_batch_context_recv_status_on_client_status(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_batch_context_recv_status_on_client_status_m327B3DEE00F5E0AD8B2B440252481D3FC25FF3E8 (void);
// 0x000005CA System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_batch_context_recv_status_on_client_details(Grpc.Core.Internal.BatchContextSafeHandle,System.UIntPtr&)
extern void DllImportsFromSharedLib_x64_grpcsharp_batch_context_recv_status_on_client_details_mFE5A073F6A34606C7D982FED2DF61C7860344FF2 (void);
// 0x000005CB System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_batch_context_recv_status_on_client_error_string(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_batch_context_recv_status_on_client_error_string_m0FCDC59F25B2A764E6E93DD9536E4D377143A184 (void);
// 0x000005CC System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_batch_context_recv_status_on_client_trailing_metadata(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_batch_context_recv_status_on_client_trailing_metadata_m1A4A5B2AFCEC7AFF4F92738069A0365E4EE1D6C0 (void);
// 0x000005CD System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_batch_context_recv_close_on_server_cancelled(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_batch_context_recv_close_on_server_cancelled_m15E7565774FA0929052B53CB1622DC218659DA75 (void);
// 0x000005CE System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_batch_context_reset(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_batch_context_reset_m684777FFC5763828997FE4A052B594FF5B66DB87 (void);
// 0x000005CF System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_batch_context_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x64_grpcsharp_batch_context_destroy_mA30B770FA2E1FDB9D749FC932D104F2F3B34C5EC (void);
// 0x000005D0 Grpc.Core.Internal.RequestCallContextSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_request_call_context_create()
extern void DllImportsFromSharedLib_x64_grpcsharp_request_call_context_create_mA3B3C90B38FD3B7A064D2C9077FDFC5FDB4C1E5D (void);
// 0x000005D1 Grpc.Core.Internal.CallSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_request_call_context_call(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_request_call_context_call_m071C3AFED4902BDC324873D088643FAA35F39537 (void);
// 0x000005D2 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_request_call_context_method(Grpc.Core.Internal.RequestCallContextSafeHandle,System.UIntPtr&)
extern void DllImportsFromSharedLib_x64_grpcsharp_request_call_context_method_mC9756E31C16C9AB68AA5CD881C5A8FF27EE98D20 (void);
// 0x000005D3 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_request_call_context_host(Grpc.Core.Internal.RequestCallContextSafeHandle,System.UIntPtr&)
extern void DllImportsFromSharedLib_x64_grpcsharp_request_call_context_host_mDB4CCE50127E755A188661AF1B24A4ADB464196B (void);
// 0x000005D4 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_request_call_context_deadline(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_request_call_context_deadline_mE6374B4EA20E3FE50B0A2194EE84EC3F8B0124DC (void);
// 0x000005D5 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_request_call_context_request_metadata(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_request_call_context_request_metadata_m76F5144E312F98B3BA2367F457916159189748F0 (void);
// 0x000005D6 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_request_call_context_reset(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_request_call_context_reset_m31A43C3947EF0BA0CF6DEB4233C6F5196432D001 (void);
// 0x000005D7 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_request_call_context_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x64_grpcsharp_request_call_context_destroy_m122B4D439014F185E7EB3310378CDD46571FA970 (void);
// 0x000005D8 Grpc.Core.Internal.CallCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_composite_call_credentials_create(Grpc.Core.Internal.CallCredentialsSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_composite_call_credentials_create_mA55BE8F46B2C6525575832A7CE799A9A86A2E8F7 (void);
// 0x000005D9 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_call_credentials_release(System.IntPtr)
extern void DllImportsFromSharedLib_x64_grpcsharp_call_credentials_release_m66E57A8F440CDD708BDEEF74336FA3F3BB28D977 (void);
// 0x000005DA Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_call_cancel(Grpc.Core.Internal.CallSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_call_cancel_m512DF11BC0FB0137F4A1E52B6F5D8D802200BA22 (void);
// 0x000005DB Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_call_cancel_with_status(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.StatusCode,System.String)
extern void DllImportsFromSharedLib_x64_grpcsharp_call_cancel_with_status_m1D8CBB2CAFF1E1895897C46FDD756D29249AB14B (void);
// 0x000005DC Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_call_start_unary(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromSharedLib_x64_grpcsharp_call_start_unary_mC86AFDAD4C968A83D2DD450AC4F4AAC9C7A978DD (void);
// 0x000005DD Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_call_start_client_streaming(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromSharedLib_x64_grpcsharp_call_start_client_streaming_m9B2CD0254220B3E3F5461F2D1C6337598E775BE8 (void);
// 0x000005DE Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_call_start_server_streaming(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromSharedLib_x64_grpcsharp_call_start_server_streaming_mEF3B680CD0046244D00FA26FF2A762392615BA1B (void);
// 0x000005DF Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_call_start_duplex_streaming(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromSharedLib_x64_grpcsharp_call_start_duplex_streaming_mDD6157A4A07CE8E7A2C53C4B5CED5F72C3217695 (void);
// 0x000005E0 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_call_send_message(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,System.Int32)
extern void DllImportsFromSharedLib_x64_grpcsharp_call_send_message_mD5CE20279EA2E59E21E4D28FD53EE2614CE74D4C (void);
// 0x000005E1 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_call_send_close_from_client(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_call_send_close_from_client_m4EE86DA8810A0DC4EDD1EB0775591A6118BD0E67 (void);
// 0x000005E2 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_call_send_status_from_server(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.StatusCode,System.IntPtr,System.UIntPtr,Grpc.Core.Internal.MetadataArraySafeHandle,System.Int32,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags)
extern void DllImportsFromSharedLib_x64_grpcsharp_call_send_status_from_server_m35286CA3CE0B4C5308A43F487BBB1BDC7F90C261 (void);
// 0x000005E3 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_call_recv_message(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_call_recv_message_m7EF7FBE09606BADFF17AAD75A362EB829F1F67A5 (void);
// 0x000005E4 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_call_recv_initial_metadata(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_call_recv_initial_metadata_mF7A00D1913674EE3AD3F3A7DBF00A884377307E0 (void);
// 0x000005E5 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_call_start_serverside(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_call_start_serverside_mBEA36EC5A0252B09B3785F6A2DD7909D8E30CFF5 (void);
// 0x000005E6 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_call_send_initial_metadata(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_call_send_initial_metadata_m27EF55F76313339C142DF716E20BC704D21AFCAD (void);
// 0x000005E7 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_call_set_credentials(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_call_set_credentials_mC0E19B973025090546BBCB55A2EB8A029CFC60C3 (void);
// 0x000005E8 Grpc.Core.Internal.CStringSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_call_get_peer(Grpc.Core.Internal.CallSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_call_get_peer_m835A51262F91CD7C1E263720BDAA01DE2FC84A31 (void);
// 0x000005E9 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_call_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x64_grpcsharp_call_destroy_mFF873FBB4E8D5710656582703A3BD046F1857381 (void);
// 0x000005EA Grpc.Core.Internal.ChannelArgsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_channel_args_create(System.UIntPtr)
extern void DllImportsFromSharedLib_x64_grpcsharp_channel_args_create_m9F8EBE475F3672F140236A2DB3AE81C17C5B3D4D (void);
// 0x000005EB System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_channel_args_set_string(Grpc.Core.Internal.ChannelArgsSafeHandle,System.UIntPtr,System.String,System.String)
extern void DllImportsFromSharedLib_x64_grpcsharp_channel_args_set_string_mB3D6E42C4E4EB3929664CA3F52537652A8F2BCF7 (void);
// 0x000005EC System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_channel_args_set_integer(Grpc.Core.Internal.ChannelArgsSafeHandle,System.UIntPtr,System.String,System.Int32)
extern void DllImportsFromSharedLib_x64_grpcsharp_channel_args_set_integer_mE6835BE27E1BBB5257054FD12E5BE2DBF368EEF2 (void);
// 0x000005ED System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_channel_args_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x64_grpcsharp_channel_args_destroy_m226F32E0E72F4180B93A8949CDD38A6754B962C4 (void);
// 0x000005EE System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_override_default_ssl_roots(System.String)
extern void DllImportsFromSharedLib_x64_grpcsharp_override_default_ssl_roots_m18DBD45D560286D7B09CA9F04670FBA1E76E8345 (void);
// 0x000005EF Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_ssl_credentials_create(System.String,System.String,System.String,System.IntPtr)
extern void DllImportsFromSharedLib_x64_grpcsharp_ssl_credentials_create_mACB2DB0728B8E4F0C717217B43F9CE2AE3BC950A (void);
// 0x000005F0 Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_composite_channel_credentials_create(Grpc.Core.Internal.ChannelCredentialsSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_composite_channel_credentials_create_m7E11D7254C67B5750775D19EB428FE5492A667DB (void);
// 0x000005F1 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_channel_credentials_release(System.IntPtr)
extern void DllImportsFromSharedLib_x64_grpcsharp_channel_credentials_release_m0929ADBE2291098831A11D55973CB5643D4DE59B (void);
// 0x000005F2 Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_insecure_channel_create(System.String,Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_insecure_channel_create_m3D5AA32704E0C96C887BE6C76FC866176AD15E8A (void);
// 0x000005F3 Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_secure_channel_create(Grpc.Core.Internal.ChannelCredentialsSafeHandle,System.String,Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_secure_channel_create_m11F7DA7E44FDE2634F49006B80E699C13256C84A (void);
// 0x000005F4 Grpc.Core.Internal.CallSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_channel_create_call(Grpc.Core.Internal.ChannelSafeHandle,Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.ContextPropagationFlags,Grpc.Core.Internal.CompletionQueueSafeHandle,System.String,System.String,Grpc.Core.Internal.Timespec)
extern void DllImportsFromSharedLib_x64_grpcsharp_channel_create_call_m7DF9304AEC29E43B614F553A2C0ECB5534311FC8 (void);
// 0x000005F5 Grpc.Core.ChannelState Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_channel_check_connectivity_state(Grpc.Core.Internal.ChannelSafeHandle,System.Int32)
extern void DllImportsFromSharedLib_x64_grpcsharp_channel_check_connectivity_state_m49855B7D7C3D5082D6E3B0401F269332F7028860 (void);
// 0x000005F6 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_channel_watch_connectivity_state(Grpc.Core.Internal.ChannelSafeHandle,Grpc.Core.ChannelState,Grpc.Core.Internal.Timespec,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_channel_watch_connectivity_state_m412B53A9BF5EBEF2197446A7466118140DC8542E (void);
// 0x000005F7 Grpc.Core.Internal.CStringSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_channel_get_target(Grpc.Core.Internal.ChannelSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_channel_get_target_mDBD933D3F8A457DC8EE68C72EF7F70A274D67668 (void);
// 0x000005F8 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_channel_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x64_grpcsharp_channel_destroy_m1F57186E2C5AF94DA6AF0475D15984FE9C52C31C (void);
// 0x000005F9 System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_sizeof_grpc_event()
extern void DllImportsFromSharedLib_x64_grpcsharp_sizeof_grpc_event_mCE1B599F6995576F970E01DA52578963503A3E95 (void);
// 0x000005FA Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_completion_queue_create_async()
extern void DllImportsFromSharedLib_x64_grpcsharp_completion_queue_create_async_m0545BB3F2194B5165DF26330A94C689C4212650D (void);
// 0x000005FB Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_completion_queue_create_sync()
extern void DllImportsFromSharedLib_x64_grpcsharp_completion_queue_create_sync_mC32F189438C2C78955E7079A621FCADAF069362E (void);
// 0x000005FC System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_completion_queue_shutdown(Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_completion_queue_shutdown_m91C7D97DF85A3DDBEFBC13425CD8DDFF9AA9496D (void);
// 0x000005FD Grpc.Core.Internal.CompletionQueueEvent Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_completion_queue_next(Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_completion_queue_next_mA0B0773DE7207878526749881238FA2E2A448A8C (void);
// 0x000005FE Grpc.Core.Internal.CompletionQueueEvent Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_completion_queue_pluck(Grpc.Core.Internal.CompletionQueueSafeHandle,System.IntPtr)
extern void DllImportsFromSharedLib_x64_grpcsharp_completion_queue_pluck_m7FA9BCD09E33F153793B40A0AB3EB5AE777B92FE (void);
// 0x000005FF System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_completion_queue_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x64_grpcsharp_completion_queue_destroy_m963180EABC2C5089CD078AFCB9AA90A6A2FFE1B6 (void);
// 0x00000600 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::gprsharp_free(System.IntPtr)
extern void DllImportsFromSharedLib_x64_gprsharp_free_m739A1F91589285624E2663FDC7203399D139DB56 (void);
// 0x00000601 Grpc.Core.Internal.MetadataArraySafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_metadata_array_create(System.UIntPtr)
extern void DllImportsFromSharedLib_x64_grpcsharp_metadata_array_create_m018278B9DEAFF6DA516E283E2799F1D275C1CC60 (void);
// 0x00000602 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_metadata_array_add(Grpc.Core.Internal.MetadataArraySafeHandle,System.String,System.Byte[],System.UIntPtr)
extern void DllImportsFromSharedLib_x64_grpcsharp_metadata_array_add_m72411330B96EC3B1F49FC8C906FBBA94D296A1FE (void);
// 0x00000603 System.UIntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_metadata_array_count(System.IntPtr)
extern void DllImportsFromSharedLib_x64_grpcsharp_metadata_array_count_m8277E14D18D919FA96C9BA0E565195EC1CC05771 (void);
// 0x00000604 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_metadata_array_get_key(System.IntPtr,System.UIntPtr,System.UIntPtr&)
extern void DllImportsFromSharedLib_x64_grpcsharp_metadata_array_get_key_m3CD494DCCA4F22051DF45197E82509210B5D413D (void);
// 0x00000605 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_metadata_array_get_value(System.IntPtr,System.UIntPtr,System.UIntPtr&)
extern void DllImportsFromSharedLib_x64_grpcsharp_metadata_array_get_value_m2DFCB7C2AEA9979B4FF2C27DEEDAF867BBF290C0 (void);
// 0x00000606 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_metadata_array_destroy_full(System.IntPtr)
extern void DllImportsFromSharedLib_x64_grpcsharp_metadata_array_destroy_full_m4A25945314405B5FAA4679B79A5DDEF5994B9252 (void);
// 0x00000607 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_redirect_log(Grpc.Core.Internal.GprLogDelegate)
extern void DllImportsFromSharedLib_x64_grpcsharp_redirect_log_mAB321B86CE5ABA8624959DE4CA0EBBB47E276F04 (void);
// 0x00000608 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_native_callback_dispatcher_init(Grpc.Core.Internal.NativeCallbackDispatcherCallback)
extern void DllImportsFromSharedLib_x64_grpcsharp_native_callback_dispatcher_init_m45C3FC5F0E2B18D35B4C47E9AD612D5B6BE3296C (void);
// 0x00000609 Grpc.Core.Internal.CallCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_metadata_credentials_create_from_plugin(System.IntPtr)
extern void DllImportsFromSharedLib_x64_grpcsharp_metadata_credentials_create_from_plugin_m70FD5A755E4E134747FFE4D13D287659BA5DAD93 (void);
// 0x0000060A System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_metadata_credentials_notify_from_plugin(System.IntPtr,System.IntPtr,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.StatusCode,System.String)
extern void DllImportsFromSharedLib_x64_grpcsharp_metadata_credentials_notify_from_plugin_mA06303798AB4A5D1F8CB4E30A3155C69D3F9C826 (void);
// 0x0000060B Grpc.Core.Internal.ServerCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_ssl_server_credentials_create(System.String,System.String[],System.String[],System.UIntPtr,Grpc.Core.SslClientCertificateRequestType)
extern void DllImportsFromSharedLib_x64_grpcsharp_ssl_server_credentials_create_m1782455FFE4ACCF49FF1324521DD110984CACDC2 (void);
// 0x0000060C System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_server_credentials_release(System.IntPtr)
extern void DllImportsFromSharedLib_x64_grpcsharp_server_credentials_release_m38F7FAFEAC00E33766DE7B4422AB1560DDC6FE89 (void);
// 0x0000060D Grpc.Core.Internal.ServerSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_server_create(Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_server_create_m6DD7CCD2486A0681488B99D350AAE7DB9761D82B (void);
// 0x0000060E System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_server_register_completion_queue(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_server_register_completion_queue_m1464CBF41D89F6F21E1DCF124939F93ACDE500BD (void);
// 0x0000060F System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_server_add_insecure_http2_port(Grpc.Core.Internal.ServerSafeHandle,System.String)
extern void DllImportsFromSharedLib_x64_grpcsharp_server_add_insecure_http2_port_mD87928932760A2CA94C9D84957FAE63967AEAC51 (void);
// 0x00000610 System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_server_add_secure_http2_port(Grpc.Core.Internal.ServerSafeHandle,System.String,Grpc.Core.Internal.ServerCredentialsSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_server_add_secure_http2_port_m5630E0CDDBC6537A419B193B50380EE91C24E73E (void);
// 0x00000611 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_server_start(Grpc.Core.Internal.ServerSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_server_start_mB654BB3514A071C121A2C4D20DE39BCC3FAFD1AC (void);
// 0x00000612 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_server_request_call(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_server_request_call_m2FBA6402963FDD81819A5BDE151CD3865251CE37 (void);
// 0x00000613 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_server_cancel_all_calls(Grpc.Core.Internal.ServerSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_server_cancel_all_calls_m53731F5F7361606408F9BE8876BA62C6DDE3A975 (void);
// 0x00000614 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_server_shutdown_and_notify_callback(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_server_shutdown_and_notify_callback_m0F66A22FB695F5ECC473D8B4BBB627499736B6DD (void);
// 0x00000615 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_server_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x64_grpcsharp_server_destroy_m23C0D8D1A1F859CB0BD7A46E2099217A75EC41BF (void);
// 0x00000616 Grpc.Core.Internal.AuthContextSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_call_auth_context(Grpc.Core.Internal.CallSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_call_auth_context_m9D5FFE62B109EF9804BA443A5FFB0F3122139FB1 (void);
// 0x00000617 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_auth_context_peer_identity_property_name(Grpc.Core.Internal.AuthContextSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_auth_context_peer_identity_property_name_m0A2A1427A06AC651459C1625CC1F4D8095077DE0 (void);
// 0x00000618 Grpc.Core.Internal.AuthContextSafeHandle/NativeAuthPropertyIterator Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_auth_context_property_iterator(Grpc.Core.Internal.AuthContextSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_auth_context_property_iterator_mE60935A3A750074B1238E3C39A5B3C6087879EA6 (void);
// 0x00000619 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_auth_property_iterator_next(Grpc.Core.Internal.AuthContextSafeHandle/NativeAuthPropertyIterator&)
extern void DllImportsFromSharedLib_x64_grpcsharp_auth_property_iterator_next_m6ACE12D3905CF0A7DE1A0BDE5327D40CDD651CE2 (void);
// 0x0000061A System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_auth_context_release(System.IntPtr)
extern void DllImportsFromSharedLib_x64_grpcsharp_auth_context_release_mFA85C800444C1D0D15938FFD144BB32E110A6332 (void);
// 0x0000061B Grpc.Core.Internal.SliceBufferSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_slice_buffer_create()
extern void DllImportsFromSharedLib_x64_grpcsharp_slice_buffer_create_mC9E9EC2419B3159A99432ECAD30809B973F10CAA (void);
// 0x0000061C System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_slice_buffer_adjust_tail_space(Grpc.Core.Internal.SliceBufferSafeHandle,System.UIntPtr,System.UIntPtr)
extern void DllImportsFromSharedLib_x64_grpcsharp_slice_buffer_adjust_tail_space_m4012C2D4DDF7F86AFCEB30E0DD3B5481C981D1A5 (void);
// 0x0000061D System.UIntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_slice_buffer_slice_count(Grpc.Core.Internal.SliceBufferSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_slice_buffer_slice_count_mA5C38FD6BB47D454B7320F717F43952E515AF9A0 (void);
// 0x0000061E System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_slice_buffer_slice_peek(Grpc.Core.Internal.SliceBufferSafeHandle,System.UIntPtr,System.UIntPtr&,System.IntPtr&)
extern void DllImportsFromSharedLib_x64_grpcsharp_slice_buffer_slice_peek_m6A0EBEBA6D0F9C02745E2A42CB2C4F2429DEA52B (void);
// 0x0000061F System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_slice_buffer_reset_and_unref(Grpc.Core.Internal.SliceBufferSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_slice_buffer_reset_and_unref_mCCB85FC68351E9434E32E8631C408444079D0F5F (void);
// 0x00000620 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_slice_buffer_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x64_grpcsharp_slice_buffer_destroy_m5C4155D4794AF640C834500DFDDB54D629290B09 (void);
// 0x00000621 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::gprsharp_now(Grpc.Core.Internal.ClockType)
extern void DllImportsFromSharedLib_x64_gprsharp_now_m45CA6166E7433BB8D1CD5C9EC66677E633D1FF1E (void);
// 0x00000622 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::gprsharp_inf_future(Grpc.Core.Internal.ClockType)
extern void DllImportsFromSharedLib_x64_gprsharp_inf_future_m3724F5EF4A4E2F7BBCB90032ECE80093349FF2E1 (void);
// 0x00000623 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::gprsharp_inf_past(Grpc.Core.Internal.ClockType)
extern void DllImportsFromSharedLib_x64_gprsharp_inf_past_mB125A51733B098CD12DEACD8B0C1682BE0DAFCB5 (void);
// 0x00000624 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::gprsharp_convert_clock_type(Grpc.Core.Internal.Timespec,Grpc.Core.Internal.ClockType)
extern void DllImportsFromSharedLib_x64_gprsharp_convert_clock_type_mD3A1EF02C4422E24A79DB6431904306EA3DF8FCD (void);
// 0x00000625 System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::gprsharp_sizeof_timespec()
extern void DllImportsFromSharedLib_x64_gprsharp_sizeof_timespec_mAA75ACD68E4E0EFA1E2DFAD991A25D3BC930129A (void);
// 0x00000626 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_test_callback(Grpc.Core.Internal.NativeCallbackTestDelegate)
extern void DllImportsFromSharedLib_x64_grpcsharp_test_callback_m907CF728E3D1C99848559D4EF7E341787341EB19 (void);
// 0x00000627 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_test_nop(System.IntPtr)
extern void DllImportsFromSharedLib_x64_grpcsharp_test_nop_m02B09D4484BB430DC23E1E4C830DABE00FCCB643 (void);
// 0x00000628 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_test_override_method(System.String,System.String)
extern void DllImportsFromSharedLib_x64_grpcsharp_test_override_method_m74B47A61256EBCEA90EDFB77BC8D25325EAAD066 (void);
// 0x00000629 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_test_call_start_unary_echo(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromSharedLib_x64_grpcsharp_test_call_start_unary_echo_m66BCD70AB6259047DBC0ED02897645A868F2A764 (void);
// 0x0000062A System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::.ctor()
extern void DllImportsFromSharedLib_x64__ctor_m80449530F50FFD329C15D1A010D6A75211B4F1D7 (void);
// 0x0000062B System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_init()
extern void DllImportsFromSharedLib_arm64_grpcsharp_init_mD7F778570FB89FDDD6B7A3768B69ABEDA6D6B1A2 (void);
// 0x0000062C System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_shutdown()
extern void DllImportsFromSharedLib_arm64_grpcsharp_shutdown_m610C0A84D1876F6E0A13C7BB2510623E3FCDC617 (void);
// 0x0000062D System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_version_string()
extern void DllImportsFromSharedLib_arm64_grpcsharp_version_string_m69C05C3656B7CCC4691918D07459184C1B0B2D39 (void);
// 0x0000062E Grpc.Core.Internal.BatchContextSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_batch_context_create()
extern void DllImportsFromSharedLib_arm64_grpcsharp_batch_context_create_m285BB7110EF0152D7D109740C15708883A429D0C (void);
// 0x0000062F System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_batch_context_recv_initial_metadata(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_arm64_grpcsharp_batch_context_recv_initial_metadata_m2F0BC587D3271242FA5290F52051FEF34E0B4DC1 (void);
// 0x00000630 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_batch_context_recv_message_length(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_arm64_grpcsharp_batch_context_recv_message_length_m51443BED7803EAB8D1D30988FFBAC7F1DCE71C45 (void);
// 0x00000631 System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_batch_context_recv_message_next_slice_peek(Grpc.Core.Internal.BatchContextSafeHandle,System.UIntPtr&,System.IntPtr&)
extern void DllImportsFromSharedLib_arm64_grpcsharp_batch_context_recv_message_next_slice_peek_m3822BF4C845A3F27A11FD63F650A25AAC52D9EE5 (void);
// 0x00000632 Grpc.Core.StatusCode Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_batch_context_recv_status_on_client_status(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_arm64_grpcsharp_batch_context_recv_status_on_client_status_m8E40E5A63C937E54962D0C45DA0569C5FE623378 (void);
// 0x00000633 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_batch_context_recv_status_on_client_details(Grpc.Core.Internal.BatchContextSafeHandle,System.UIntPtr&)
extern void DllImportsFromSharedLib_arm64_grpcsharp_batch_context_recv_status_on_client_details_m2C675BDA28EB22DFE8A5E98C39DB54D73D6C5248 (void);
// 0x00000634 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_batch_context_recv_status_on_client_error_string(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_arm64_grpcsharp_batch_context_recv_status_on_client_error_string_m8390982DAE68E18DADE3A5245AD9DDF483BCF000 (void);
// 0x00000635 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_batch_context_recv_status_on_client_trailing_metadata(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_arm64_grpcsharp_batch_context_recv_status_on_client_trailing_metadata_m2864526B13B1FAD6E56DB8062D66BE2C0A4A73D8 (void);
// 0x00000636 System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_batch_context_recv_close_on_server_cancelled(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_arm64_grpcsharp_batch_context_recv_close_on_server_cancelled_m15E21B60FEFFDA4F5DE80961E1D4B16547ECAF54 (void);
// 0x00000637 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_batch_context_reset(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_arm64_grpcsharp_batch_context_reset_m2E429449D42E7815418369F9BFABD8FB460F327B (void);
// 0x00000638 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_batch_context_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_arm64_grpcsharp_batch_context_destroy_m1E582B668EE40D3006D03F4D0849D831E0B6C77A (void);
// 0x00000639 Grpc.Core.Internal.RequestCallContextSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_request_call_context_create()
extern void DllImportsFromSharedLib_arm64_grpcsharp_request_call_context_create_m0373A2474E474D506ED3C4915B5039E557FDA76A (void);
// 0x0000063A Grpc.Core.Internal.CallSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_request_call_context_call(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromSharedLib_arm64_grpcsharp_request_call_context_call_m73641D364C72A2CBFDAD76B727DCA23B665583B9 (void);
// 0x0000063B System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_request_call_context_method(Grpc.Core.Internal.RequestCallContextSafeHandle,System.UIntPtr&)
extern void DllImportsFromSharedLib_arm64_grpcsharp_request_call_context_method_mC27F083018209225F6B0AE23124B6FA208C3C832 (void);
// 0x0000063C System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_request_call_context_host(Grpc.Core.Internal.RequestCallContextSafeHandle,System.UIntPtr&)
extern void DllImportsFromSharedLib_arm64_grpcsharp_request_call_context_host_m76D5F68860E940608FD773D6DD08D674B37754D9 (void);
// 0x0000063D Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_request_call_context_deadline(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromSharedLib_arm64_grpcsharp_request_call_context_deadline_mE565C81DC7B838140B690B0185BF2A064D96A999 (void);
// 0x0000063E System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_request_call_context_request_metadata(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromSharedLib_arm64_grpcsharp_request_call_context_request_metadata_m3C2C38D4F3AA018949B536EC2F42AA6D8D1426D5 (void);
// 0x0000063F System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_request_call_context_reset(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromSharedLib_arm64_grpcsharp_request_call_context_reset_m5757794ED0747C230BB9CDC7349D765D4019BF30 (void);
// 0x00000640 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_request_call_context_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_arm64_grpcsharp_request_call_context_destroy_m3F569A85546445F516D732B9B647FA55F236035F (void);
// 0x00000641 Grpc.Core.Internal.CallCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_composite_call_credentials_create(Grpc.Core.Internal.CallCredentialsSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void DllImportsFromSharedLib_arm64_grpcsharp_composite_call_credentials_create_mA7EF012C53EB8C15DF5630B1DD05770AE936AA3D (void);
// 0x00000642 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_call_credentials_release(System.IntPtr)
extern void DllImportsFromSharedLib_arm64_grpcsharp_call_credentials_release_m5CFDD356043C21B684598E1BC533F1C365EB608F (void);
// 0x00000643 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_call_cancel(Grpc.Core.Internal.CallSafeHandle)
extern void DllImportsFromSharedLib_arm64_grpcsharp_call_cancel_mB5B4C46E83DC4663A52F001A686C1B11CE05E428 (void);
// 0x00000644 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_call_cancel_with_status(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.StatusCode,System.String)
extern void DllImportsFromSharedLib_arm64_grpcsharp_call_cancel_with_status_m8708087F72216EA78867B443F78526AFB15FF3E6 (void);
// 0x00000645 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_call_start_unary(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromSharedLib_arm64_grpcsharp_call_start_unary_m48B388433707375C1FE2F63EE4AE6D2AA48E3CB7 (void);
// 0x00000646 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_call_start_client_streaming(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromSharedLib_arm64_grpcsharp_call_start_client_streaming_mA1EE81AADDEA2EB6373CA2DC14C7AADE6F4273B0 (void);
// 0x00000647 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_call_start_server_streaming(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromSharedLib_arm64_grpcsharp_call_start_server_streaming_mB63F6037386AE3096D54D5DFB1D72F5C2AF85F32 (void);
// 0x00000648 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_call_start_duplex_streaming(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromSharedLib_arm64_grpcsharp_call_start_duplex_streaming_m5DE73531243AE400026AEDADFE779817504F463C (void);
// 0x00000649 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_call_send_message(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,System.Int32)
extern void DllImportsFromSharedLib_arm64_grpcsharp_call_send_message_mC8CF5CE7690E6FF04A061BFE49BE279C7F1CF6DD (void);
// 0x0000064A Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_call_send_close_from_client(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_arm64_grpcsharp_call_send_close_from_client_m86291BCE5E268A4A8A3B89E8654D03E46F7A94DE (void);
// 0x0000064B Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_call_send_status_from_server(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.StatusCode,System.IntPtr,System.UIntPtr,Grpc.Core.Internal.MetadataArraySafeHandle,System.Int32,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags)
extern void DllImportsFromSharedLib_arm64_grpcsharp_call_send_status_from_server_m168AB74B8BD82A71B70E48A3071912BD3871E5AC (void);
// 0x0000064C Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_call_recv_message(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_arm64_grpcsharp_call_recv_message_m7D1C44E635FA6597798FB5E01F28D4E0F074DADC (void);
// 0x0000064D Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_call_recv_initial_metadata(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_arm64_grpcsharp_call_recv_initial_metadata_m06626703D87541495F3B191E97458B966051CF81 (void);
// 0x0000064E Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_call_start_serverside(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_arm64_grpcsharp_call_start_serverside_m5441CC2212A60F22E393165665D3342214FC31E3 (void);
// 0x0000064F Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_call_send_initial_metadata(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle)
extern void DllImportsFromSharedLib_arm64_grpcsharp_call_send_initial_metadata_m4DBC8F95FC4B62C0B4EF9C11F12BC17C01184796 (void);
// 0x00000650 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_call_set_credentials(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void DllImportsFromSharedLib_arm64_grpcsharp_call_set_credentials_mA3FB65EEBAAD04BD9EDB6C4EBBFD8565BB796321 (void);
// 0x00000651 Grpc.Core.Internal.CStringSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_call_get_peer(Grpc.Core.Internal.CallSafeHandle)
extern void DllImportsFromSharedLib_arm64_grpcsharp_call_get_peer_m6BECDC5BCFFE58E008506786B768A566C17B79A0 (void);
// 0x00000652 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_call_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_arm64_grpcsharp_call_destroy_m6B8553E8EAF5F2C1C07AB9A92C9E5AE6DD7FC220 (void);
// 0x00000653 Grpc.Core.Internal.ChannelArgsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_channel_args_create(System.UIntPtr)
extern void DllImportsFromSharedLib_arm64_grpcsharp_channel_args_create_m604AA89AA50AE388EF59877BB85D7B36A4B577C9 (void);
// 0x00000654 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_channel_args_set_string(Grpc.Core.Internal.ChannelArgsSafeHandle,System.UIntPtr,System.String,System.String)
extern void DllImportsFromSharedLib_arm64_grpcsharp_channel_args_set_string_m5A43F66F58CBF122716D432ECC15CDCB6CB058F3 (void);
// 0x00000655 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_channel_args_set_integer(Grpc.Core.Internal.ChannelArgsSafeHandle,System.UIntPtr,System.String,System.Int32)
extern void DllImportsFromSharedLib_arm64_grpcsharp_channel_args_set_integer_m928BE0473CF0BB9E50B90B2502EE40B3C13E3C91 (void);
// 0x00000656 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_channel_args_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_arm64_grpcsharp_channel_args_destroy_m0404E289380156B02626D932BFA6A19F6158B4D9 (void);
// 0x00000657 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_override_default_ssl_roots(System.String)
extern void DllImportsFromSharedLib_arm64_grpcsharp_override_default_ssl_roots_m2F59D5519DA54A79076194484DC67FC8E5600E35 (void);
// 0x00000658 Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_ssl_credentials_create(System.String,System.String,System.String,System.IntPtr)
extern void DllImportsFromSharedLib_arm64_grpcsharp_ssl_credentials_create_m8274F7236F1E9064F0A19CF595016F67E7268F3D (void);
// 0x00000659 Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_composite_channel_credentials_create(Grpc.Core.Internal.ChannelCredentialsSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void DllImportsFromSharedLib_arm64_grpcsharp_composite_channel_credentials_create_m4D37EE2DF35B7C7F1B29C9C30E3FA9931A5CD361 (void);
// 0x0000065A System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_channel_credentials_release(System.IntPtr)
extern void DllImportsFromSharedLib_arm64_grpcsharp_channel_credentials_release_mFA5A0F0D7E80BDA6C542EA73DEF83030F15F9AEE (void);
// 0x0000065B Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_insecure_channel_create(System.String,Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void DllImportsFromSharedLib_arm64_grpcsharp_insecure_channel_create_m1DBE7393D66BE66875A4C775368EDDDA295AA9DB (void);
// 0x0000065C Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_secure_channel_create(Grpc.Core.Internal.ChannelCredentialsSafeHandle,System.String,Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void DllImportsFromSharedLib_arm64_grpcsharp_secure_channel_create_mEC0BAB56264890E92B04D3F7486596AB60536C2F (void);
// 0x0000065D Grpc.Core.Internal.CallSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_channel_create_call(Grpc.Core.Internal.ChannelSafeHandle,Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.ContextPropagationFlags,Grpc.Core.Internal.CompletionQueueSafeHandle,System.String,System.String,Grpc.Core.Internal.Timespec)
extern void DllImportsFromSharedLib_arm64_grpcsharp_channel_create_call_mC59E1F352929186679470825740AB1335BE3DA39 (void);
// 0x0000065E Grpc.Core.ChannelState Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_channel_check_connectivity_state(Grpc.Core.Internal.ChannelSafeHandle,System.Int32)
extern void DllImportsFromSharedLib_arm64_grpcsharp_channel_check_connectivity_state_m6BAD152582180B150A41E3871CA689486668B895 (void);
// 0x0000065F System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_channel_watch_connectivity_state(Grpc.Core.Internal.ChannelSafeHandle,Grpc.Core.ChannelState,Grpc.Core.Internal.Timespec,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_arm64_grpcsharp_channel_watch_connectivity_state_m9A5A5A4A3A8783EA1067ACE407BA1E1AFFAEEDFD (void);
// 0x00000660 Grpc.Core.Internal.CStringSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_channel_get_target(Grpc.Core.Internal.ChannelSafeHandle)
extern void DllImportsFromSharedLib_arm64_grpcsharp_channel_get_target_mC73099A189FE6C24B7758D81D0C80CC7D4AFFFB2 (void);
// 0x00000661 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_channel_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_arm64_grpcsharp_channel_destroy_m5DBC44FD93A4727089D3D92122160B48FDCB0659 (void);
// 0x00000662 System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_sizeof_grpc_event()
extern void DllImportsFromSharedLib_arm64_grpcsharp_sizeof_grpc_event_mFD476EBA5F17F11077951D79B96324A8C8782E93 (void);
// 0x00000663 Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_completion_queue_create_async()
extern void DllImportsFromSharedLib_arm64_grpcsharp_completion_queue_create_async_m42E554834847FDF27740E1906E25A9FDC4C76E93 (void);
// 0x00000664 Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_completion_queue_create_sync()
extern void DllImportsFromSharedLib_arm64_grpcsharp_completion_queue_create_sync_m019C832FF4833C4D41822B1663A5D94F2080205E (void);
// 0x00000665 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_completion_queue_shutdown(Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void DllImportsFromSharedLib_arm64_grpcsharp_completion_queue_shutdown_mD750A767801C63A63C54FAD4FF8A73434CFF921B (void);
// 0x00000666 Grpc.Core.Internal.CompletionQueueEvent Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_completion_queue_next(Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void DllImportsFromSharedLib_arm64_grpcsharp_completion_queue_next_mB005C507DDBDE5A401C6C11C138FC11EA8062A1B (void);
// 0x00000667 Grpc.Core.Internal.CompletionQueueEvent Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_completion_queue_pluck(Grpc.Core.Internal.CompletionQueueSafeHandle,System.IntPtr)
extern void DllImportsFromSharedLib_arm64_grpcsharp_completion_queue_pluck_m0D0D564FF3EE80826449955B59BDAB70BB545EBD (void);
// 0x00000668 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_completion_queue_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_arm64_grpcsharp_completion_queue_destroy_m9F660E8E2CB031AB0223BAB2B3098903FA7216A8 (void);
// 0x00000669 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::gprsharp_free(System.IntPtr)
extern void DllImportsFromSharedLib_arm64_gprsharp_free_m0049F3353E1DB96F026E5C3B5AF612574726FBBE (void);
// 0x0000066A Grpc.Core.Internal.MetadataArraySafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_metadata_array_create(System.UIntPtr)
extern void DllImportsFromSharedLib_arm64_grpcsharp_metadata_array_create_m1C67746C1F066E957F04D0106BD3305702CDE02B (void);
// 0x0000066B System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_metadata_array_add(Grpc.Core.Internal.MetadataArraySafeHandle,System.String,System.Byte[],System.UIntPtr)
extern void DllImportsFromSharedLib_arm64_grpcsharp_metadata_array_add_m74370630405A7DC94B95AFCFB71F12519D4D0390 (void);
// 0x0000066C System.UIntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_metadata_array_count(System.IntPtr)
extern void DllImportsFromSharedLib_arm64_grpcsharp_metadata_array_count_m0B3FC5F269C2748FA38AE3E51962B1EBF5EF9960 (void);
// 0x0000066D System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_metadata_array_get_key(System.IntPtr,System.UIntPtr,System.UIntPtr&)
extern void DllImportsFromSharedLib_arm64_grpcsharp_metadata_array_get_key_mDFF006BBFC9A204AD001F137E580AEC059D0FF87 (void);
// 0x0000066E System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_metadata_array_get_value(System.IntPtr,System.UIntPtr,System.UIntPtr&)
extern void DllImportsFromSharedLib_arm64_grpcsharp_metadata_array_get_value_m9A7EAA6F1E030902E4FE40180A822C6B293E3F61 (void);
// 0x0000066F System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_metadata_array_destroy_full(System.IntPtr)
extern void DllImportsFromSharedLib_arm64_grpcsharp_metadata_array_destroy_full_m70D35AAD537C317C8BE5E028492079D2FBF32288 (void);
// 0x00000670 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_redirect_log(Grpc.Core.Internal.GprLogDelegate)
extern void DllImportsFromSharedLib_arm64_grpcsharp_redirect_log_m4988CE0314588AF5F7CF7CBB59BB64094F59E91D (void);
// 0x00000671 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_native_callback_dispatcher_init(Grpc.Core.Internal.NativeCallbackDispatcherCallback)
extern void DllImportsFromSharedLib_arm64_grpcsharp_native_callback_dispatcher_init_m48415A010E3D12AD950A81DCF80BA8F043EF1B5B (void);
// 0x00000672 Grpc.Core.Internal.CallCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_metadata_credentials_create_from_plugin(System.IntPtr)
extern void DllImportsFromSharedLib_arm64_grpcsharp_metadata_credentials_create_from_plugin_m4B1D61A8B8B69474156012ADAFA6570CEE3526DD (void);
// 0x00000673 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_metadata_credentials_notify_from_plugin(System.IntPtr,System.IntPtr,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.StatusCode,System.String)
extern void DllImportsFromSharedLib_arm64_grpcsharp_metadata_credentials_notify_from_plugin_mD9B37A65971927E566524D41528FA902D821126E (void);
// 0x00000674 Grpc.Core.Internal.ServerCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_ssl_server_credentials_create(System.String,System.String[],System.String[],System.UIntPtr,Grpc.Core.SslClientCertificateRequestType)
extern void DllImportsFromSharedLib_arm64_grpcsharp_ssl_server_credentials_create_mEB5BFF8A608CFFA116C23BFB30744A380A90B029 (void);
// 0x00000675 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_server_credentials_release(System.IntPtr)
extern void DllImportsFromSharedLib_arm64_grpcsharp_server_credentials_release_m09B7C357FDEE922C293A04E8145349F458C43E2E (void);
// 0x00000676 Grpc.Core.Internal.ServerSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_server_create(Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void DllImportsFromSharedLib_arm64_grpcsharp_server_create_m21F6662F83C8C5DED1026E3F7CF26DBA82E73CB2 (void);
// 0x00000677 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_server_register_completion_queue(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void DllImportsFromSharedLib_arm64_grpcsharp_server_register_completion_queue_m0F3BF18D3BCD0C3C8D357683A14DA1F96BABFBEB (void);
// 0x00000678 System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_server_add_insecure_http2_port(Grpc.Core.Internal.ServerSafeHandle,System.String)
extern void DllImportsFromSharedLib_arm64_grpcsharp_server_add_insecure_http2_port_m967F4648932C3A7AFA0FDD8C73E4FDF2442AD4C2 (void);
// 0x00000679 System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_server_add_secure_http2_port(Grpc.Core.Internal.ServerSafeHandle,System.String,Grpc.Core.Internal.ServerCredentialsSafeHandle)
extern void DllImportsFromSharedLib_arm64_grpcsharp_server_add_secure_http2_port_m28B53CDA15CC5415E83C021C4226EC455C71E242 (void);
// 0x0000067A System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_server_start(Grpc.Core.Internal.ServerSafeHandle)
extern void DllImportsFromSharedLib_arm64_grpcsharp_server_start_mF29D627AD677EA43F5088B357E243A9763D0A4CA (void);
// 0x0000067B Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_server_request_call(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromSharedLib_arm64_grpcsharp_server_request_call_m25E709EAB34F2D14ACD58D80E535914EDF11D420 (void);
// 0x0000067C System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_server_cancel_all_calls(Grpc.Core.Internal.ServerSafeHandle)
extern void DllImportsFromSharedLib_arm64_grpcsharp_server_cancel_all_calls_mD3DFB2672798809ADB3CD6D81BD3B238DDF3DFBE (void);
// 0x0000067D System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_server_shutdown_and_notify_callback(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_arm64_grpcsharp_server_shutdown_and_notify_callback_m39BA4FD6CD283428041AB3BFFE0ADD966088646E (void);
// 0x0000067E System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_server_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_arm64_grpcsharp_server_destroy_m9145AD7383CB2BC627AC1565224D01EC5EC5C8E6 (void);
// 0x0000067F Grpc.Core.Internal.AuthContextSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_call_auth_context(Grpc.Core.Internal.CallSafeHandle)
extern void DllImportsFromSharedLib_arm64_grpcsharp_call_auth_context_m4FC3E77871270769E7101CE5B34C0CE2B27C4AB0 (void);
// 0x00000680 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_auth_context_peer_identity_property_name(Grpc.Core.Internal.AuthContextSafeHandle)
extern void DllImportsFromSharedLib_arm64_grpcsharp_auth_context_peer_identity_property_name_mDBB00FD312A48C2BAB01CF9B9362B4FB430A73B1 (void);
// 0x00000681 Grpc.Core.Internal.AuthContextSafeHandle/NativeAuthPropertyIterator Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_auth_context_property_iterator(Grpc.Core.Internal.AuthContextSafeHandle)
extern void DllImportsFromSharedLib_arm64_grpcsharp_auth_context_property_iterator_m65BB43CBA62D4606581F139C0023CF98F840E477 (void);
// 0x00000682 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_auth_property_iterator_next(Grpc.Core.Internal.AuthContextSafeHandle/NativeAuthPropertyIterator&)
extern void DllImportsFromSharedLib_arm64_grpcsharp_auth_property_iterator_next_mD037D88F4C101E414D589224EF9CD5B53526619B (void);
// 0x00000683 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_auth_context_release(System.IntPtr)
extern void DllImportsFromSharedLib_arm64_grpcsharp_auth_context_release_m2845736A492AF9E90DD2476302EC66A916FD6C4E (void);
// 0x00000684 Grpc.Core.Internal.SliceBufferSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_slice_buffer_create()
extern void DllImportsFromSharedLib_arm64_grpcsharp_slice_buffer_create_m0361D8342CA65D88E06AEA904B006278AFA5B302 (void);
// 0x00000685 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_slice_buffer_adjust_tail_space(Grpc.Core.Internal.SliceBufferSafeHandle,System.UIntPtr,System.UIntPtr)
extern void DllImportsFromSharedLib_arm64_grpcsharp_slice_buffer_adjust_tail_space_mE6BABDD79BD7FC267B46D0EB7DE1451649A6EB83 (void);
// 0x00000686 System.UIntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_slice_buffer_slice_count(Grpc.Core.Internal.SliceBufferSafeHandle)
extern void DllImportsFromSharedLib_arm64_grpcsharp_slice_buffer_slice_count_m8C7328B27CB2C3A3D47A7527255D73AA81FC8C0F (void);
// 0x00000687 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_slice_buffer_slice_peek(Grpc.Core.Internal.SliceBufferSafeHandle,System.UIntPtr,System.UIntPtr&,System.IntPtr&)
extern void DllImportsFromSharedLib_arm64_grpcsharp_slice_buffer_slice_peek_m38D1036242BB991B4488568B46844BA88D5F9F3E (void);
// 0x00000688 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_slice_buffer_reset_and_unref(Grpc.Core.Internal.SliceBufferSafeHandle)
extern void DllImportsFromSharedLib_arm64_grpcsharp_slice_buffer_reset_and_unref_m8E28CD72ABE6BA3373C100ECC7E161E8A5EC2505 (void);
// 0x00000689 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_slice_buffer_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_arm64_grpcsharp_slice_buffer_destroy_m23B2DE31AEC8A8FA14006DB3F91776D6513579B9 (void);
// 0x0000068A Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::gprsharp_now(Grpc.Core.Internal.ClockType)
extern void DllImportsFromSharedLib_arm64_gprsharp_now_m02D0D362BFBA0A376C64448F261FA3CD8B22D8B6 (void);
// 0x0000068B Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::gprsharp_inf_future(Grpc.Core.Internal.ClockType)
extern void DllImportsFromSharedLib_arm64_gprsharp_inf_future_mC01AB77CD63DD1A6DF6749419BE5EA57940ABB75 (void);
// 0x0000068C Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::gprsharp_inf_past(Grpc.Core.Internal.ClockType)
extern void DllImportsFromSharedLib_arm64_gprsharp_inf_past_m0A21A7FECC34EFC39C9DB791A39D3630585EC3DD (void);
// 0x0000068D Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::gprsharp_convert_clock_type(Grpc.Core.Internal.Timespec,Grpc.Core.Internal.ClockType)
extern void DllImportsFromSharedLib_arm64_gprsharp_convert_clock_type_m18BC8E65488BEC448824198AA68EBFE82E3F1221 (void);
// 0x0000068E System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::gprsharp_sizeof_timespec()
extern void DllImportsFromSharedLib_arm64_gprsharp_sizeof_timespec_m9E33D3860AD9B7FFA9C04E12FCA0209BD138C75C (void);
// 0x0000068F Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_test_callback(Grpc.Core.Internal.NativeCallbackTestDelegate)
extern void DllImportsFromSharedLib_arm64_grpcsharp_test_callback_m9C9466C8BDC31E7A9EB7DD0D61DB603EF228909A (void);
// 0x00000690 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_test_nop(System.IntPtr)
extern void DllImportsFromSharedLib_arm64_grpcsharp_test_nop_mD29BA6118EEDACF341423B3373A807634BE344B8 (void);
// 0x00000691 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_test_override_method(System.String,System.String)
extern void DllImportsFromSharedLib_arm64_grpcsharp_test_override_method_m7D26F5AA3657FB0E6AF20B1430E161C068A48E87 (void);
// 0x00000692 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::grpcsharp_test_call_start_unary_echo(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromSharedLib_arm64_grpcsharp_test_call_start_unary_echo_m313F2B5DE5F467CB4721833DE55C0A7A099776F8 (void);
// 0x00000693 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_arm64::.ctor()
extern void DllImportsFromSharedLib_arm64__ctor_m0FFFF043E76E1C076931F8253EADD5C486766B30 (void);
// 0x00000694 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_init()
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_init_m5BCCAC7D8215B79834D55EC34DD27F962C4CBEB1 (void);
// 0x00000695 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_shutdown()
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_shutdown_m47883A88FC6D2FF3E338217DEB7C0DA9972D043A (void);
// 0x00000696 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_version_string()
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_version_string_mBA2AD17CAF71AF7794E40F546F061EF127171943 (void);
// 0x00000697 Grpc.Core.Internal.BatchContextSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_batch_context_create()
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_batch_context_create_m4D9BC88A478B713C8B896E48B510589539FA830D (void);
// 0x00000698 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_batch_context_recv_initial_metadata(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_batch_context_recv_initial_metadata_m2C01F9CFBCD6503B53E2C5B31AB7A99EC99EE457 (void);
// 0x00000699 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_batch_context_recv_message_length(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_batch_context_recv_message_length_m18BAB0C83D67D54C6EFC66D4CB058CAB781F9CDB (void);
// 0x0000069A System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_batch_context_recv_message_next_slice_peek(Grpc.Core.Internal.BatchContextSafeHandle,System.UIntPtr&,System.IntPtr&)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_batch_context_recv_message_next_slice_peek_m6049B19936DBF714FDABEF007E802FC88BE5C5D8 (void);
// 0x0000069B Grpc.Core.StatusCode Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_batch_context_recv_status_on_client_status(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_batch_context_recv_status_on_client_status_mA97F7F4DCD4E0EACBF0772CF9EA8898E622DD1D9 (void);
// 0x0000069C System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_batch_context_recv_status_on_client_details(Grpc.Core.Internal.BatchContextSafeHandle,System.UIntPtr&)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_batch_context_recv_status_on_client_details_m9E9899843D92F23852B1D654E4BA270D161D8B58 (void);
// 0x0000069D System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_batch_context_recv_status_on_client_error_string(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_batch_context_recv_status_on_client_error_string_m1CA5E889A90B8296C6132B1B5CDCFB0E77B7EAA3 (void);
// 0x0000069E System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_batch_context_recv_status_on_client_trailing_metadata(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_batch_context_recv_status_on_client_trailing_metadata_m5503D8E91BFAA3E30554DE29AB54877CC92A3D2F (void);
// 0x0000069F System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_batch_context_recv_close_on_server_cancelled(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_batch_context_recv_close_on_server_cancelled_m8DB3AEC10D7BDCD47DB7F9A38D2BC177AA3520C5 (void);
// 0x000006A0 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_batch_context_reset(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_batch_context_reset_mFA4BF88F8A05DE604EB0DABCFB58D16662480989 (void);
// 0x000006A1 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_batch_context_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_batch_context_destroy_mE71F503CBC1FABFB7440BAC3A25AC908AB077F0A (void);
// 0x000006A2 Grpc.Core.Internal.RequestCallContextSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_request_call_context_create()
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_request_call_context_create_m9B8C2F751F85002B170DB85583EE7E347D5FE885 (void);
// 0x000006A3 Grpc.Core.Internal.CallSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_request_call_context_call(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_request_call_context_call_mD99D3277877A411CCE6DFF9ADA0C5C1B4AFFE021 (void);
// 0x000006A4 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_request_call_context_method(Grpc.Core.Internal.RequestCallContextSafeHandle,System.UIntPtr&)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_request_call_context_method_m003CA105298D9651AEB03FCAD238ACA97AA81E65 (void);
// 0x000006A5 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_request_call_context_host(Grpc.Core.Internal.RequestCallContextSafeHandle,System.UIntPtr&)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_request_call_context_host_mDE33D0A82FDC57689B8FBB11BD9E2F4DFDF319A9 (void);
// 0x000006A6 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_request_call_context_deadline(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_request_call_context_deadline_m2A5E7FBD379E4436890A8A00C2B98D22BE77E88A (void);
// 0x000006A7 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_request_call_context_request_metadata(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_request_call_context_request_metadata_m55CF27A83E870917AA96167A5B838A746D884C19 (void);
// 0x000006A8 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_request_call_context_reset(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_request_call_context_reset_mADD3AA68D9FA85C9D4166BE286E9BF0CBF14F752 (void);
// 0x000006A9 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_request_call_context_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_request_call_context_destroy_m17C496C6765CEE45CDFDA03E3F583EDDF274023D (void);
// 0x000006AA Grpc.Core.Internal.CallCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_composite_call_credentials_create(Grpc.Core.Internal.CallCredentialsSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_composite_call_credentials_create_mD9AC8C943A6B04B6395E47CED9152D9CFF48FBFF (void);
// 0x000006AB System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_call_credentials_release(System.IntPtr)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_call_credentials_release_mA4288762F6F60E7EC29465FA803A6436C4C4E19F (void);
// 0x000006AC Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_call_cancel(Grpc.Core.Internal.CallSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_call_cancel_m57AD4B06930A78C03F646FDBCB2F438255969711 (void);
// 0x000006AD Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_call_cancel_with_status(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.StatusCode,System.String)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_call_cancel_with_status_m57FA769B394CDF7DE2895680ACAD27AE00FD46A6 (void);
// 0x000006AE Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_call_start_unary(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_call_start_unary_m71C39BCD49FC81B0B97BCB8522E4B2A0AEC6B065 (void);
// 0x000006AF Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_call_start_client_streaming(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_call_start_client_streaming_mE0D3300B476DE276966968ED724BE59577060D65 (void);
// 0x000006B0 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_call_start_server_streaming(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_call_start_server_streaming_mF1353864FD7CF97EA507A05368F0F4421179C1AD (void);
// 0x000006B1 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_call_start_duplex_streaming(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_call_start_duplex_streaming_m4CB925896D8B56A1029D841815E204CF79B85205 (void);
// 0x000006B2 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_call_send_message(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,System.Int32)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_call_send_message_mF042730792ACC314716A2FAFDFD73CA865A71648 (void);
// 0x000006B3 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_call_send_close_from_client(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_call_send_close_from_client_m07B279BF3340E952820CAC6A32AD9C559BCA48D8 (void);
// 0x000006B4 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_call_send_status_from_server(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.StatusCode,System.IntPtr,System.UIntPtr,Grpc.Core.Internal.MetadataArraySafeHandle,System.Int32,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_call_send_status_from_server_m479327C300D433FCE22E47689631A76F7E43F325 (void);
// 0x000006B5 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_call_recv_message(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_call_recv_message_mB9FF6E6AAC3F24936D845316294A594D978ACB22 (void);
// 0x000006B6 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_call_recv_initial_metadata(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_call_recv_initial_metadata_mF1DA8B622447887156A360A507A7075ECC1502BD (void);
// 0x000006B7 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_call_start_serverside(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_call_start_serverside_mF373AE763AC88A06E71B0A7783BEAFFCAC9ACD2E (void);
// 0x000006B8 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_call_send_initial_metadata(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_call_send_initial_metadata_mDC41A339DA089F2B5BA904CCE3D7D01D2B9577E4 (void);
// 0x000006B9 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_call_set_credentials(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_call_set_credentials_m79C852996C1AB1116CB60CC85A3C3883F2FC5830 (void);
// 0x000006BA Grpc.Core.Internal.CStringSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_call_get_peer(Grpc.Core.Internal.CallSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_call_get_peer_m9512D14D58C0737AAC44993E1EEEAD370FBC9CDB (void);
// 0x000006BB System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_call_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_call_destroy_m141583064C67BCD536215B09ADEF71AAC2E7D2B2 (void);
// 0x000006BC Grpc.Core.Internal.ChannelArgsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_channel_args_create(System.UIntPtr)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_channel_args_create_mE044A926A954F448F44464ABCDFED03110F77DEE (void);
// 0x000006BD System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_channel_args_set_string(Grpc.Core.Internal.ChannelArgsSafeHandle,System.UIntPtr,System.String,System.String)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_channel_args_set_string_m7C2B8B7F9CD389F7BF078A78C9D42FD1761F92E5 (void);
// 0x000006BE System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_channel_args_set_integer(Grpc.Core.Internal.ChannelArgsSafeHandle,System.UIntPtr,System.String,System.Int32)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_channel_args_set_integer_mC67E1CEFA29083951C285EE00E18A17158543BB1 (void);
// 0x000006BF System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_channel_args_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_channel_args_destroy_m193E9497ADBD761A9FE4B9D68ABBC6C2013A65A1 (void);
// 0x000006C0 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_override_default_ssl_roots(System.String)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_override_default_ssl_roots_m3F90A3A0EABB2D04D3A7802A968FC5A3916BD275 (void);
// 0x000006C1 Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_ssl_credentials_create(System.String,System.String,System.String,System.IntPtr)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_ssl_credentials_create_mC27A3168A86C46C8C50BD95CF3415CD46032C7F7 (void);
// 0x000006C2 Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_composite_channel_credentials_create(Grpc.Core.Internal.ChannelCredentialsSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_composite_channel_credentials_create_m3F9B81D387E8A3274660DFD8E8011A470BCBF7B4 (void);
// 0x000006C3 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_channel_credentials_release(System.IntPtr)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_channel_credentials_release_m1C171480C84CC4298ACF550D3CE1887436B5A51A (void);
// 0x000006C4 Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_insecure_channel_create(System.String,Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_insecure_channel_create_mDD65E12ADB166F704848C2CBA0547DFEEC732877 (void);
// 0x000006C5 Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_secure_channel_create(Grpc.Core.Internal.ChannelCredentialsSafeHandle,System.String,Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_secure_channel_create_m3E86FC6026220D856046D45AB4CA903A43BD636E (void);
// 0x000006C6 Grpc.Core.Internal.CallSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_channel_create_call(Grpc.Core.Internal.ChannelSafeHandle,Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.ContextPropagationFlags,Grpc.Core.Internal.CompletionQueueSafeHandle,System.String,System.String,Grpc.Core.Internal.Timespec)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_channel_create_call_m15C92CD5B9D9AA3102F85266B5430CB72550CA2B (void);
// 0x000006C7 Grpc.Core.ChannelState Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_channel_check_connectivity_state(Grpc.Core.Internal.ChannelSafeHandle,System.Int32)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_channel_check_connectivity_state_mF3E996E362DEA432556A110C986144B2D3D55138 (void);
// 0x000006C8 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_channel_watch_connectivity_state(Grpc.Core.Internal.ChannelSafeHandle,Grpc.Core.ChannelState,Grpc.Core.Internal.Timespec,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_channel_watch_connectivity_state_m10328848A4352397970FCE8081C0280A5C9CE0B8 (void);
// 0x000006C9 Grpc.Core.Internal.CStringSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_channel_get_target(Grpc.Core.Internal.ChannelSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_channel_get_target_m958B4436F520F2A5E48E0D3F62083997D208184B (void);
// 0x000006CA System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_channel_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_channel_destroy_m3EF6FE0A3CD21A9BC960FB92D0A2C5ECE19884A8 (void);
// 0x000006CB System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_sizeof_grpc_event()
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_sizeof_grpc_event_m8F9B540308E0A7715A9A3AD99261F9279C31559E (void);
// 0x000006CC Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_completion_queue_create_async()
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_completion_queue_create_async_m4C34A42663FF97A0A986ABCB303B526B18A60149 (void);
// 0x000006CD Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_completion_queue_create_sync()
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_completion_queue_create_sync_m76FECF3C643DA6FFB52A060CF85C21B7BEFF3D84 (void);
// 0x000006CE System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_completion_queue_shutdown(Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_completion_queue_shutdown_m760BE31E8A367A4D3EC48D8E0A7B422414C0A222 (void);
// 0x000006CF Grpc.Core.Internal.CompletionQueueEvent Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_completion_queue_next(Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_completion_queue_next_m5E1B15064ECBD39E252DE8B13B0F792A2D09DA1E (void);
// 0x000006D0 Grpc.Core.Internal.CompletionQueueEvent Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_completion_queue_pluck(Grpc.Core.Internal.CompletionQueueSafeHandle,System.IntPtr)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_completion_queue_pluck_mB2BFA556522E44ED0FDEED56DC361CD62233847B (void);
// 0x000006D1 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_completion_queue_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_completion_queue_destroy_m33182FDA921D04F3FD4368C64259F7AC769C7A36 (void);
// 0x000006D2 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::gprsharp_free(System.IntPtr)
extern void DllImportsFromSharedLib_x86_dll_gprsharp_free_m7F05F076A6E40E2221F4EABBEA76A720CB85ECA3 (void);
// 0x000006D3 Grpc.Core.Internal.MetadataArraySafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_metadata_array_create(System.UIntPtr)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_metadata_array_create_mA4DEBDDA38D071B04C18CB42667A41A4DD5093CE (void);
// 0x000006D4 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_metadata_array_add(Grpc.Core.Internal.MetadataArraySafeHandle,System.String,System.Byte[],System.UIntPtr)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_metadata_array_add_mED0E56CE26407CBF5D3E8B0D0FF58910596C4A5F (void);
// 0x000006D5 System.UIntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_metadata_array_count(System.IntPtr)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_metadata_array_count_mAAF799A0F395994C5501F077E89558F11B75C912 (void);
// 0x000006D6 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_metadata_array_get_key(System.IntPtr,System.UIntPtr,System.UIntPtr&)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_metadata_array_get_key_mDC46A425838BBDB1B655C23437906AAE9062FA8A (void);
// 0x000006D7 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_metadata_array_get_value(System.IntPtr,System.UIntPtr,System.UIntPtr&)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_metadata_array_get_value_m31ECB56B086AB6D55B346398F33F3402F370556B (void);
// 0x000006D8 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_metadata_array_destroy_full(System.IntPtr)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_metadata_array_destroy_full_m508DD128683A9769253F9E04E2D527DD62B8CF78 (void);
// 0x000006D9 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_redirect_log(Grpc.Core.Internal.GprLogDelegate)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_redirect_log_m77740B14447BBB456E3C002CF69BD4EB429FE7EC (void);
// 0x000006DA System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_native_callback_dispatcher_init(Grpc.Core.Internal.NativeCallbackDispatcherCallback)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_native_callback_dispatcher_init_m6BA900FEBEB609C1624628185413FA7E2DEED386 (void);
// 0x000006DB Grpc.Core.Internal.CallCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_metadata_credentials_create_from_plugin(System.IntPtr)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_metadata_credentials_create_from_plugin_m89C964C5FB971724A38AC1D58BA5201E669F36E9 (void);
// 0x000006DC System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_metadata_credentials_notify_from_plugin(System.IntPtr,System.IntPtr,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.StatusCode,System.String)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_metadata_credentials_notify_from_plugin_m67A713C5EE1FC64B76400C2DA0AAE77CCBF1A979 (void);
// 0x000006DD Grpc.Core.Internal.ServerCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_ssl_server_credentials_create(System.String,System.String[],System.String[],System.UIntPtr,Grpc.Core.SslClientCertificateRequestType)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_ssl_server_credentials_create_mABFEE54ACE089E8D71651CB42C80256CE1E3FDD9 (void);
// 0x000006DE System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_server_credentials_release(System.IntPtr)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_server_credentials_release_m33AB13B4E61232CFA395027FF91548AEB7B50534 (void);
// 0x000006DF Grpc.Core.Internal.ServerSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_server_create(Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_server_create_m86727519BC8524C909A3E8E45C90F2839BF76A1D (void);
// 0x000006E0 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_server_register_completion_queue(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_server_register_completion_queue_m7274DB062DE07275C2C4560DCBBDA74C379F3C41 (void);
// 0x000006E1 System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_server_add_insecure_http2_port(Grpc.Core.Internal.ServerSafeHandle,System.String)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_server_add_insecure_http2_port_mE0BCDE3A0621ACF472FAD493CFAFD37F3A21A0F4 (void);
// 0x000006E2 System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_server_add_secure_http2_port(Grpc.Core.Internal.ServerSafeHandle,System.String,Grpc.Core.Internal.ServerCredentialsSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_server_add_secure_http2_port_m5D0ADD83E7A93E3F268BB5BC24F1B3676AEF3911 (void);
// 0x000006E3 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_server_start(Grpc.Core.Internal.ServerSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_server_start_mEC2526471522756C43A5A11084A4BCF8B1A0CCD2 (void);
// 0x000006E4 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_server_request_call(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_server_request_call_m90F4F51C2A1255211F17B2DF7320488BA3A4156D (void);
// 0x000006E5 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_server_cancel_all_calls(Grpc.Core.Internal.ServerSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_server_cancel_all_calls_m8243A4B45A51AF5494FB83915DBFC7F34459DFD2 (void);
// 0x000006E6 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_server_shutdown_and_notify_callback(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_server_shutdown_and_notify_callback_mAB258800D5154D7CAB0A05DA7779E2FB0E4677D7 (void);
// 0x000006E7 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_server_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_server_destroy_mD0E811B8A28C6509B7D136CDDA917063250EAEE1 (void);
// 0x000006E8 Grpc.Core.Internal.AuthContextSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_call_auth_context(Grpc.Core.Internal.CallSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_call_auth_context_m522CB9F4D84B53BC958F5D543438C18F7BCC5D56 (void);
// 0x000006E9 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_auth_context_peer_identity_property_name(Grpc.Core.Internal.AuthContextSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_auth_context_peer_identity_property_name_mABB0833D53B1BB2562966FE71DB027247FA2E10D (void);
// 0x000006EA Grpc.Core.Internal.AuthContextSafeHandle/NativeAuthPropertyIterator Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_auth_context_property_iterator(Grpc.Core.Internal.AuthContextSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_auth_context_property_iterator_mA3D9671B35E8CD5BAA79ABBB1AF0C26736D094B7 (void);
// 0x000006EB System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_auth_property_iterator_next(Grpc.Core.Internal.AuthContextSafeHandle/NativeAuthPropertyIterator&)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_auth_property_iterator_next_m8DE1B296F0DD3E2BF33D5F4EF0BD96C69F79D6DC (void);
// 0x000006EC System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_auth_context_release(System.IntPtr)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_auth_context_release_m6B9B99837D1C22A62D86FA6D95A16A9D3E4AE590 (void);
// 0x000006ED Grpc.Core.Internal.SliceBufferSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_slice_buffer_create()
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_slice_buffer_create_m617F3414FF6C40DD73FA9F77246DBD4F9D25741E (void);
// 0x000006EE System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_slice_buffer_adjust_tail_space(Grpc.Core.Internal.SliceBufferSafeHandle,System.UIntPtr,System.UIntPtr)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_slice_buffer_adjust_tail_space_m68CB772A542CD45F479867AB54834B0B9AD12E60 (void);
// 0x000006EF System.UIntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_slice_buffer_slice_count(Grpc.Core.Internal.SliceBufferSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_slice_buffer_slice_count_m08BC97FBEC8D3C032C8FE745859B3DCDDC7E0364 (void);
// 0x000006F0 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_slice_buffer_slice_peek(Grpc.Core.Internal.SliceBufferSafeHandle,System.UIntPtr,System.UIntPtr&,System.IntPtr&)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_slice_buffer_slice_peek_m944090CE91F025B1E7C841EB956964D845505FF2 (void);
// 0x000006F1 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_slice_buffer_reset_and_unref(Grpc.Core.Internal.SliceBufferSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_slice_buffer_reset_and_unref_m8C3D95F428AFCDE7FA1095ADC4C390B6AD33CDD8 (void);
// 0x000006F2 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_slice_buffer_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_slice_buffer_destroy_m15BBA2676EF8840787B419BAE58A87DD610370CE (void);
// 0x000006F3 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::gprsharp_now(Grpc.Core.Internal.ClockType)
extern void DllImportsFromSharedLib_x86_dll_gprsharp_now_m0D69E87CAB075F1D345882F6950189855D592C78 (void);
// 0x000006F4 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::gprsharp_inf_future(Grpc.Core.Internal.ClockType)
extern void DllImportsFromSharedLib_x86_dll_gprsharp_inf_future_m7973B3A6E1C9A168ED6B36254A0C6CD6B0927E2D (void);
// 0x000006F5 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::gprsharp_inf_past(Grpc.Core.Internal.ClockType)
extern void DllImportsFromSharedLib_x86_dll_gprsharp_inf_past_mE7EB1FC44EFCECA917204B47E70EE42CDAED1F04 (void);
// 0x000006F6 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::gprsharp_convert_clock_type(Grpc.Core.Internal.Timespec,Grpc.Core.Internal.ClockType)
extern void DllImportsFromSharedLib_x86_dll_gprsharp_convert_clock_type_m4CB1CB5EAF4D5459CF88F8CB7B9AD5471041BE40 (void);
// 0x000006F7 System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::gprsharp_sizeof_timespec()
extern void DllImportsFromSharedLib_x86_dll_gprsharp_sizeof_timespec_mE866F753D62B6866CA532638F9A17701E56D2D4B (void);
// 0x000006F8 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_test_callback(Grpc.Core.Internal.NativeCallbackTestDelegate)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_test_callback_m59DABA90E5A7C3C9EC18935C1465902BB8E7D141 (void);
// 0x000006F9 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_test_nop(System.IntPtr)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_test_nop_mB16D5B0EA27E0C34AEB84A972E39607B4B24E8B8 (void);
// 0x000006FA System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_test_override_method(System.String,System.String)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_test_override_method_m9D7D646D8FF3CC9C81F68867144A9C1ADF6EBE27 (void);
// 0x000006FB Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_test_call_start_unary_echo(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_test_call_start_unary_echo_mB24481D3A3BC1C0C14CEFBA711EC8DCC61746155 (void);
// 0x000006FC System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::.ctor()
extern void DllImportsFromSharedLib_x86_dll__ctor_m94179D91304EA8DCF1252FF97EC7A9E753DEC896 (void);
// 0x000006FD System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_init()
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_init_m9E7BD00CD45B6AFBF881D7A7E521CEDFAF11E05F (void);
// 0x000006FE System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_shutdown()
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_shutdown_m1F9334F53B45F49832A223C3DE99A2C864F779EA (void);
// 0x000006FF System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_version_string()
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_version_string_m821A31CF4A10846A42813564489826097D905470 (void);
// 0x00000700 Grpc.Core.Internal.BatchContextSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_batch_context_create()
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_batch_context_create_mA9E08BC14A67BD6DDC17765F260F6B3825F3CAF7 (void);
// 0x00000701 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_batch_context_recv_initial_metadata(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_batch_context_recv_initial_metadata_m4375213A79E8ED4F948829E9A8033E7380BDD897 (void);
// 0x00000702 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_batch_context_recv_message_length(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_batch_context_recv_message_length_m3095201E46DA6AD3585CF7B2654201D1FE955C6E (void);
// 0x00000703 System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_batch_context_recv_message_next_slice_peek(Grpc.Core.Internal.BatchContextSafeHandle,System.UIntPtr&,System.IntPtr&)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_batch_context_recv_message_next_slice_peek_m27FED1B7A39340168366F75EF489F7F59934D7DE (void);
// 0x00000704 Grpc.Core.StatusCode Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_batch_context_recv_status_on_client_status(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_batch_context_recv_status_on_client_status_m09A3C13CBAD9BEE2B755F95933B21A2DD1D817BA (void);
// 0x00000705 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_batch_context_recv_status_on_client_details(Grpc.Core.Internal.BatchContextSafeHandle,System.UIntPtr&)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_batch_context_recv_status_on_client_details_mE56FC9B504C6B0B4DDAECB0FAFC575F25AF60EDE (void);
// 0x00000706 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_batch_context_recv_status_on_client_error_string(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_batch_context_recv_status_on_client_error_string_m6513122D2863A9775B59B582B9F0C912E7D5B11B (void);
// 0x00000707 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_batch_context_recv_status_on_client_trailing_metadata(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_batch_context_recv_status_on_client_trailing_metadata_m6F70853CF3A27ED82D9E6916D9FBCDCCA6532FC5 (void);
// 0x00000708 System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_batch_context_recv_close_on_server_cancelled(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_batch_context_recv_close_on_server_cancelled_m5622C90C5FC90EC70E76A41DA417206FD7D2EA28 (void);
// 0x00000709 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_batch_context_reset(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_batch_context_reset_m4052068B01815F6ED8C8084E3C647F9D62E920FD (void);
// 0x0000070A System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_batch_context_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_batch_context_destroy_m9FB80B64B7AD1110F73B57AFA1DA1F54A60BEE11 (void);
// 0x0000070B Grpc.Core.Internal.RequestCallContextSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_request_call_context_create()
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_request_call_context_create_m310BDAD9B71F80AEBEF088D3C06F640F08987649 (void);
// 0x0000070C Grpc.Core.Internal.CallSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_request_call_context_call(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_request_call_context_call_m8370F4B57D28563A1FE479C3CC57A342B5351745 (void);
// 0x0000070D System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_request_call_context_method(Grpc.Core.Internal.RequestCallContextSafeHandle,System.UIntPtr&)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_request_call_context_method_m019DE909A511B5A1B31970A067C576740AB15307 (void);
// 0x0000070E System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_request_call_context_host(Grpc.Core.Internal.RequestCallContextSafeHandle,System.UIntPtr&)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_request_call_context_host_mF95124E6016F60759C3722E3D6A1BC5B67B8F045 (void);
// 0x0000070F Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_request_call_context_deadline(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_request_call_context_deadline_m13B7681C6960F71B8221900A9D96270D9D319A00 (void);
// 0x00000710 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_request_call_context_request_metadata(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_request_call_context_request_metadata_mE7DBD489B81976EAB7962744CC36FB2ADFD6C565 (void);
// 0x00000711 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_request_call_context_reset(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_request_call_context_reset_m81ADE5C4F2DE4B8786E802BE20C01CE7CA83524C (void);
// 0x00000712 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_request_call_context_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_request_call_context_destroy_m2412A95DB92D43F029D160B72EC8057F941B7B75 (void);
// 0x00000713 Grpc.Core.Internal.CallCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_composite_call_credentials_create(Grpc.Core.Internal.CallCredentialsSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_composite_call_credentials_create_mC41043329525CBA9D330D264143A4983F3DCAEC1 (void);
// 0x00000714 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_call_credentials_release(System.IntPtr)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_call_credentials_release_m1020EB6119539210205180251AF3FA4613D0DE14 (void);
// 0x00000715 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_call_cancel(Grpc.Core.Internal.CallSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_call_cancel_m2142368527A43F7A4A878635FF24731F1C53A3F6 (void);
// 0x00000716 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_call_cancel_with_status(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.StatusCode,System.String)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_call_cancel_with_status_m7C937427F00448205AB7BA82A280518C5B16A711 (void);
// 0x00000717 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_call_start_unary(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_call_start_unary_mA7737E75BFEDABF1EC3F0DE03AE4F2D4334A9E99 (void);
// 0x00000718 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_call_start_client_streaming(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_call_start_client_streaming_m5558F5A84B8A7EC47D3F14C407C7CEFE1686A7F4 (void);
// 0x00000719 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_call_start_server_streaming(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_call_start_server_streaming_mB20B225DF37106869C9A67A861A29164E4DC0F02 (void);
// 0x0000071A Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_call_start_duplex_streaming(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_call_start_duplex_streaming_m80AACD9EF12F0DCE762B55426F938AD22CB0D5FE (void);
// 0x0000071B Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_call_send_message(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,System.Int32)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_call_send_message_mF377877ECFFC180A897791F37A627B25E5898A98 (void);
// 0x0000071C Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_call_send_close_from_client(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_call_send_close_from_client_mED3F53AAEB505797588FBDE77106A174A90CC8F5 (void);
// 0x0000071D Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_call_send_status_from_server(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.StatusCode,System.IntPtr,System.UIntPtr,Grpc.Core.Internal.MetadataArraySafeHandle,System.Int32,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_call_send_status_from_server_mF8039F6ED832CBFB236FF4CE61CB4E06D9BDECE0 (void);
// 0x0000071E Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_call_recv_message(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_call_recv_message_m05E73263B26520BE6FDC6331B55DA564CFC59262 (void);
// 0x0000071F Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_call_recv_initial_metadata(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_call_recv_initial_metadata_m253F9E6399576613EB9888947DF92965738B6E03 (void);
// 0x00000720 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_call_start_serverside(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_call_start_serverside_mE8485A31644401DA02431B70F5FF2FCC1EF89142 (void);
// 0x00000721 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_call_send_initial_metadata(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_call_send_initial_metadata_m323576B74085D1EE75873EDBA84F7BD60233E5D1 (void);
// 0x00000722 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_call_set_credentials(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_call_set_credentials_m3DCCDA8063A75B1954B9E9B6E0B20760E1BB63E9 (void);
// 0x00000723 Grpc.Core.Internal.CStringSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_call_get_peer(Grpc.Core.Internal.CallSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_call_get_peer_m5AC6D6279D8D896BDE47AD5196DB150A0CD76718 (void);
// 0x00000724 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_call_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_call_destroy_mB25B3FAEE38D9357B9FA533F1E4CECB28CB95C35 (void);
// 0x00000725 Grpc.Core.Internal.ChannelArgsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_channel_args_create(System.UIntPtr)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_channel_args_create_mAC2CD79DAF4B03C74C44450D2D5D3FD53C12FDEA (void);
// 0x00000726 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_channel_args_set_string(Grpc.Core.Internal.ChannelArgsSafeHandle,System.UIntPtr,System.String,System.String)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_channel_args_set_string_m0E4B18E081AFFB304E6C1EE02E5EAD5E2F72E977 (void);
// 0x00000727 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_channel_args_set_integer(Grpc.Core.Internal.ChannelArgsSafeHandle,System.UIntPtr,System.String,System.Int32)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_channel_args_set_integer_mE362DA8AB170B8A9C0CE65B9D076B314AD69DB23 (void);
// 0x00000728 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_channel_args_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_channel_args_destroy_mA375053C52A52502A5B47C66B3AA559F9F631A9D (void);
// 0x00000729 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_override_default_ssl_roots(System.String)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_override_default_ssl_roots_mB264F182DB0D62348C9D8EF0CEEFF1A0ABE24F2E (void);
// 0x0000072A Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_ssl_credentials_create(System.String,System.String,System.String,System.IntPtr)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_ssl_credentials_create_m2C266BCB36A3D562B0D7D5A45BCEC8F20843D2FD (void);
// 0x0000072B Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_composite_channel_credentials_create(Grpc.Core.Internal.ChannelCredentialsSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_composite_channel_credentials_create_mA7E31B68CBEC825781C868228B3FCDB48689E7EC (void);
// 0x0000072C System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_channel_credentials_release(System.IntPtr)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_channel_credentials_release_mB1B9B0D3A3A8ABBEA451896A7279BA8ED9BF2128 (void);
// 0x0000072D Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_insecure_channel_create(System.String,Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_insecure_channel_create_mF7B5D435BC1A609875AA3C3ABFC014E1E3DB4684 (void);
// 0x0000072E Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_secure_channel_create(Grpc.Core.Internal.ChannelCredentialsSafeHandle,System.String,Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_secure_channel_create_mC28E8239B22F460F23D4B22B64B271DE6208C574 (void);
// 0x0000072F Grpc.Core.Internal.CallSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_channel_create_call(Grpc.Core.Internal.ChannelSafeHandle,Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.ContextPropagationFlags,Grpc.Core.Internal.CompletionQueueSafeHandle,System.String,System.String,Grpc.Core.Internal.Timespec)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_channel_create_call_m579C7697572BA30B57EBC39E373F2EE98CB59ED8 (void);
// 0x00000730 Grpc.Core.ChannelState Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_channel_check_connectivity_state(Grpc.Core.Internal.ChannelSafeHandle,System.Int32)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_channel_check_connectivity_state_mA502B2A047A936C1E90F9791F03ABDC59F4860C1 (void);
// 0x00000731 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_channel_watch_connectivity_state(Grpc.Core.Internal.ChannelSafeHandle,Grpc.Core.ChannelState,Grpc.Core.Internal.Timespec,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_channel_watch_connectivity_state_mBB42EEF24F9956D50B6467285296268B8F04D5D8 (void);
// 0x00000732 Grpc.Core.Internal.CStringSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_channel_get_target(Grpc.Core.Internal.ChannelSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_channel_get_target_m5D826967D55161AE4FC3E0BCD058CBA03CF9035E (void);
// 0x00000733 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_channel_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_channel_destroy_m67274E43E5B77BE53BC4E282B8F85B683E90CF19 (void);
// 0x00000734 System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_sizeof_grpc_event()
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_sizeof_grpc_event_m2FEA488FF91FF616F74687C453246BB742E60388 (void);
// 0x00000735 Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_completion_queue_create_async()
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_completion_queue_create_async_m79B24E5DAE70387751169166465CE3C65AC7A0F3 (void);
// 0x00000736 Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_completion_queue_create_sync()
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_completion_queue_create_sync_m8533785745285E3C00457593FFC09143D08EF470 (void);
// 0x00000737 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_completion_queue_shutdown(Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_completion_queue_shutdown_m52EAAEF6E2D0E8D4B189184E3E828F7F16A5F7D8 (void);
// 0x00000738 Grpc.Core.Internal.CompletionQueueEvent Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_completion_queue_next(Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_completion_queue_next_mD636827A9BAC3C58DC94B600E17E023A3B653D62 (void);
// 0x00000739 Grpc.Core.Internal.CompletionQueueEvent Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_completion_queue_pluck(Grpc.Core.Internal.CompletionQueueSafeHandle,System.IntPtr)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_completion_queue_pluck_mDBA24A5993338E2E66C48FB886E375433FFB27DE (void);
// 0x0000073A System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_completion_queue_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_completion_queue_destroy_m179670BC0B71B258B938C3DD8F75D35E92A7718D (void);
// 0x0000073B System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::gprsharp_free(System.IntPtr)
extern void DllImportsFromSharedLib_x64_dll_gprsharp_free_m158891F786C4FAC87DA7098912ED774980319BEA (void);
// 0x0000073C Grpc.Core.Internal.MetadataArraySafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_metadata_array_create(System.UIntPtr)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_metadata_array_create_mC7B98F133442140335BBF50977C151CC237FC7D9 (void);
// 0x0000073D System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_metadata_array_add(Grpc.Core.Internal.MetadataArraySafeHandle,System.String,System.Byte[],System.UIntPtr)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_metadata_array_add_m440F9ECCB2C277EAEBA6DDFF9CBA738890EBFEC7 (void);
// 0x0000073E System.UIntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_metadata_array_count(System.IntPtr)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_metadata_array_count_mBB017C450D5A84A9CF69CE7FBD6A9373796FF08D (void);
// 0x0000073F System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_metadata_array_get_key(System.IntPtr,System.UIntPtr,System.UIntPtr&)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_metadata_array_get_key_m39B98ACECFA0BE3E7F25D8750A8B30E4EEF65700 (void);
// 0x00000740 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_metadata_array_get_value(System.IntPtr,System.UIntPtr,System.UIntPtr&)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_metadata_array_get_value_m94287A554EF15ED78FAF556ECF60FEE46503F2AF (void);
// 0x00000741 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_metadata_array_destroy_full(System.IntPtr)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_metadata_array_destroy_full_mD9D6C1F2FDF5029E4DCCC438550F2832A7AA8E4E (void);
// 0x00000742 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_redirect_log(Grpc.Core.Internal.GprLogDelegate)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_redirect_log_mABF8DF8A36B5B21291E8DDAE363B660D32D8AFD3 (void);
// 0x00000743 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_native_callback_dispatcher_init(Grpc.Core.Internal.NativeCallbackDispatcherCallback)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_native_callback_dispatcher_init_m730EDE1A06B0C31F29885376C61D72D4B1049246 (void);
// 0x00000744 Grpc.Core.Internal.CallCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_metadata_credentials_create_from_plugin(System.IntPtr)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_metadata_credentials_create_from_plugin_m53D50E327FB400261DA098BC5DEECD65013F70C5 (void);
// 0x00000745 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_metadata_credentials_notify_from_plugin(System.IntPtr,System.IntPtr,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.StatusCode,System.String)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_metadata_credentials_notify_from_plugin_m23916BBBB2B5132A452B2A8EC311B08AF52EDC3E (void);
// 0x00000746 Grpc.Core.Internal.ServerCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_ssl_server_credentials_create(System.String,System.String[],System.String[],System.UIntPtr,Grpc.Core.SslClientCertificateRequestType)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_ssl_server_credentials_create_mFE1EAD747A9E90D26238815F5C7656CC4FF11C46 (void);
// 0x00000747 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_server_credentials_release(System.IntPtr)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_server_credentials_release_m820FDEA1343EDA01F8E75DCFD73F781D0F68939B (void);
// 0x00000748 Grpc.Core.Internal.ServerSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_server_create(Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_server_create_mEF6122E124ACAE9C82B54E1722F7504EBC594DA5 (void);
// 0x00000749 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_server_register_completion_queue(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_server_register_completion_queue_mFE58AD7B8420F3EA23D3B1ED15C21B02219F03D5 (void);
// 0x0000074A System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_server_add_insecure_http2_port(Grpc.Core.Internal.ServerSafeHandle,System.String)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_server_add_insecure_http2_port_m102BB17709F1095B1ACF2D1D39C1F4C32FA633C5 (void);
// 0x0000074B System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_server_add_secure_http2_port(Grpc.Core.Internal.ServerSafeHandle,System.String,Grpc.Core.Internal.ServerCredentialsSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_server_add_secure_http2_port_mDAA1E3C7C7241B48A50CC54068B03ED35CA849A3 (void);
// 0x0000074C System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_server_start(Grpc.Core.Internal.ServerSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_server_start_m01193F30EA133B83B48FAD4032845A65BE2F2B03 (void);
// 0x0000074D Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_server_request_call(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_server_request_call_m32BFF84E480466BA217FF34C05B167FFD562237B (void);
// 0x0000074E System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_server_cancel_all_calls(Grpc.Core.Internal.ServerSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_server_cancel_all_calls_m924FC9DACA8C8E314E098C2B998485B4958EF5E8 (void);
// 0x0000074F System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_server_shutdown_and_notify_callback(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_server_shutdown_and_notify_callback_mEFF582C5AB207465DA26EC1C7339CE9008E6C33E (void);
// 0x00000750 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_server_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_server_destroy_m5719CBAEC6D805718B2864B35F675A1301022C6A (void);
// 0x00000751 Grpc.Core.Internal.AuthContextSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_call_auth_context(Grpc.Core.Internal.CallSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_call_auth_context_m348093E4DC22443586F167B39D73EB1E0B8FE3D7 (void);
// 0x00000752 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_auth_context_peer_identity_property_name(Grpc.Core.Internal.AuthContextSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_auth_context_peer_identity_property_name_m982D085F54D6F69BD73CFA6352809408EE3492D4 (void);
// 0x00000753 Grpc.Core.Internal.AuthContextSafeHandle/NativeAuthPropertyIterator Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_auth_context_property_iterator(Grpc.Core.Internal.AuthContextSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_auth_context_property_iterator_m501CC40A9BFE0799A68836D68A1ED0D8C1EB7731 (void);
// 0x00000754 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_auth_property_iterator_next(Grpc.Core.Internal.AuthContextSafeHandle/NativeAuthPropertyIterator&)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_auth_property_iterator_next_mBB1043B43012072F7A7E8A9B7C6412ECBACCB95A (void);
// 0x00000755 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_auth_context_release(System.IntPtr)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_auth_context_release_m54DE8946E5134E6474E9E370C53CBBD510396F28 (void);
// 0x00000756 Grpc.Core.Internal.SliceBufferSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_slice_buffer_create()
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_slice_buffer_create_mDC2BD72C89453EFE28C421C4E8C95159825CE210 (void);
// 0x00000757 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_slice_buffer_adjust_tail_space(Grpc.Core.Internal.SliceBufferSafeHandle,System.UIntPtr,System.UIntPtr)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_slice_buffer_adjust_tail_space_mF1D1A4D1633F82F9FB369C238CE37C8B0E2B9F8F (void);
// 0x00000758 System.UIntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_slice_buffer_slice_count(Grpc.Core.Internal.SliceBufferSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_slice_buffer_slice_count_m5BC3C6B5D2A3451677F02CEE5A9E26E88872ED8D (void);
// 0x00000759 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_slice_buffer_slice_peek(Grpc.Core.Internal.SliceBufferSafeHandle,System.UIntPtr,System.UIntPtr&,System.IntPtr&)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_slice_buffer_slice_peek_mE4F2456871446323C8AA54C5546F7326564DA6C0 (void);
// 0x0000075A System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_slice_buffer_reset_and_unref(Grpc.Core.Internal.SliceBufferSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_slice_buffer_reset_and_unref_mBD1414BD4693207D1BAFCFCE17E1E61FE10082D2 (void);
// 0x0000075B System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_slice_buffer_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_slice_buffer_destroy_mD34F9223CA157E8CA55F94A407053E8E4EFDCBF3 (void);
// 0x0000075C Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::gprsharp_now(Grpc.Core.Internal.ClockType)
extern void DllImportsFromSharedLib_x64_dll_gprsharp_now_mAE14E2859AA4147EEA1635EDB4A85AF3DC452917 (void);
// 0x0000075D Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::gprsharp_inf_future(Grpc.Core.Internal.ClockType)
extern void DllImportsFromSharedLib_x64_dll_gprsharp_inf_future_mC7C6B21F05511C238A15E00268EF3EC315E2FCCA (void);
// 0x0000075E Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::gprsharp_inf_past(Grpc.Core.Internal.ClockType)
extern void DllImportsFromSharedLib_x64_dll_gprsharp_inf_past_mDE4A281A304626DEA5FA7EE2775766704431EA07 (void);
// 0x0000075F Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::gprsharp_convert_clock_type(Grpc.Core.Internal.Timespec,Grpc.Core.Internal.ClockType)
extern void DllImportsFromSharedLib_x64_dll_gprsharp_convert_clock_type_mC0C18DF0195010105AA54F1F368B49FACA5F88DF (void);
// 0x00000760 System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::gprsharp_sizeof_timespec()
extern void DllImportsFromSharedLib_x64_dll_gprsharp_sizeof_timespec_mE55F35BB918905D365D0457808796DE4B7CB6A6D (void);
// 0x00000761 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_test_callback(Grpc.Core.Internal.NativeCallbackTestDelegate)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_test_callback_m1C444F7D292CFF3D24CFBCDC90F5CE85B2AF0DCA (void);
// 0x00000762 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_test_nop(System.IntPtr)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_test_nop_mE33FBB89FA3CADA0200EFA7E4BCAF1555AEDE03E (void);
// 0x00000763 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_test_override_method(System.String,System.String)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_test_override_method_mA43D09C38AFC5462DDBE83DB2D7C67B4AA31DD49 (void);
// 0x00000764 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_test_call_start_unary_echo(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_test_call_start_unary_echo_m78D199D8557EB71083C44C8B279DF87583CC13ED (void);
// 0x00000765 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::.ctor()
extern void DllImportsFromSharedLib_x64_dll__ctor_m5A9FF23CA4935343E7E14F63D4B264CBA4F6FAAB (void);
// 0x00000766 System.Void Grpc.Core.Internal.PlatformApis::.cctor()
extern void PlatformApis__cctor_mD6524D4E0ADE7F971F0C6E7E724DD1D649C257A4 (void);
// 0x00000767 System.Boolean Grpc.Core.Internal.PlatformApis::get_IsLinux()
extern void PlatformApis_get_IsLinux_m3A31E3845BB05443A04A9EFCEA9A7053FC7ECE24 (void);
// 0x00000768 System.Boolean Grpc.Core.Internal.PlatformApis::get_IsMacOSX()
extern void PlatformApis_get_IsMacOSX_mEBCEB9C394146D47A17D74DE056E30DDB69C2631 (void);
// 0x00000769 System.Boolean Grpc.Core.Internal.PlatformApis::get_IsWindows()
extern void PlatformApis_get_IsWindows_mFF7F998678839E7FBB82025A2C6E104D8ADC40EB (void);
// 0x0000076A System.Boolean Grpc.Core.Internal.PlatformApis::get_IsMono()
extern void PlatformApis_get_IsMono_m1894BBD7E5C32AA03503871687A95B82F1359336 (void);
// 0x0000076B System.Boolean Grpc.Core.Internal.PlatformApis::get_IsUnity()
extern void PlatformApis_get_IsUnity_m876B45221B880B8562FC4C684D7F804DBCE136E6 (void);
// 0x0000076C System.Boolean Grpc.Core.Internal.PlatformApis::get_IsUnityIOS()
extern void PlatformApis_get_IsUnityIOS_mE3D59C90E10D7FE81A053692445BEE1AB3ACB01B (void);
// 0x0000076D System.Boolean Grpc.Core.Internal.PlatformApis::get_IsXamarin()
extern void PlatformApis_get_IsXamarin_m5ECD1C2D4DF50946C5DE891A2C2AAB3688F08B19 (void);
// 0x0000076E System.Boolean Grpc.Core.Internal.PlatformApis::get_IsXamarinIOS()
extern void PlatformApis_get_IsXamarinIOS_mE0BA829DA458617818B4389997AF9F3EE72C74DD (void);
// 0x0000076F System.Boolean Grpc.Core.Internal.PlatformApis::get_IsXamarinAndroid()
extern void PlatformApis_get_IsXamarinAndroid_mCD1C341C257220058F1C6E9197B5DE9E7D350CDB (void);
// 0x00000770 System.Boolean Grpc.Core.Internal.PlatformApis::get_IsNet5OrHigher()
extern void PlatformApis_get_IsNet5OrHigher_mA7E90DBA8E889041AA657F81936A7992A7F1D074 (void);
// 0x00000771 System.String Grpc.Core.Internal.PlatformApis::get_FrameworkDescription()
extern void PlatformApis_get_FrameworkDescription_m4437076C55FFA76649EC64FF8B24EB5DBE19ECD2 (void);
// 0x00000772 System.String Grpc.Core.Internal.PlatformApis::get_ClrVersion()
extern void PlatformApis_get_ClrVersion_m5CB5C21478084799BDEA1D15B49A0EFAE097B893 (void);
// 0x00000773 System.Boolean Grpc.Core.Internal.PlatformApis::get_IsNetCore()
extern void PlatformApis_get_IsNetCore_m7654B396FB51F16560E1A39A443793D14A334A9A (void);
// 0x00000774 System.Boolean Grpc.Core.Internal.PlatformApis::get_Is64Bit()
extern void PlatformApis_get_Is64Bit_m0D37A031F72E4F83EB8D961BF476BBEDCE5B6C49 (void);
// 0x00000775 Grpc.Core.Internal.CommonPlatformDetection/CpuArchitecture Grpc.Core.Internal.PlatformApis::get_ProcessArchitecture()
extern void PlatformApis_get_ProcessArchitecture_m26CE3A2B1586C968242D7BD8FA459A41C4FF4073 (void);
// 0x00000776 System.String Grpc.Core.Internal.PlatformApis::GetUnityApplicationPlatform()
extern void PlatformApis_GetUnityApplicationPlatform_m612371BF8673ACE270892C0EC0548FADD926B302 (void);
// 0x00000777 System.String Grpc.Core.Internal.PlatformApis::TryGetUnityApplicationPlatform()
extern void PlatformApis_TryGetUnityApplicationPlatform_m33C92D187F55DC12DC1A3D8B757EC54AB3241B3D (void);
// 0x00000778 System.String Grpc.Core.Internal.PlatformApis::TryGetFrameworkDescription()
extern void PlatformApis_TryGetFrameworkDescription_m1904D5F1887BD1A550C8C7F41594306D06FD6244 (void);
// 0x00000779 System.String Grpc.Core.Internal.PlatformApis::TryGetClrVersion()
extern void PlatformApis_TryGetClrVersion_m5218643092474932574A48CE76FA50E744DC81D2 (void);
// 0x0000077A System.String Grpc.Core.Internal.PlatformApis::GetGrpcCoreTargetFrameworkMoniker()
extern void PlatformApis_GetGrpcCoreTargetFrameworkMoniker_mBAD02225ED96B1F334B7154E8924B38D1BEFE19C (void);
// 0x0000077B System.Void Grpc.Core.Internal.PlatformApis/<>c::.cctor()
extern void U3CU3Ec__cctor_m9272DB7730E903CB5CFBA19C14188C25C87ADCB5 (void);
// 0x0000077C System.Void Grpc.Core.Internal.PlatformApis/<>c::.ctor()
extern void U3CU3Ec__ctor_m2623EB539914F957C5ABA33476C6E812F4A32410 (void);
// 0x0000077D System.Boolean Grpc.Core.Internal.PlatformApis/<>c::<TryGetUnityApplicationPlatform>b__49_0(System.Reflection.Assembly)
extern void U3CU3Ec_U3CTryGetUnityApplicationPlatformU3Eb__49_0_mBE35EE19B0610811A96F8DF6C8529911590AC854 (void);
// 0x0000077E System.Void Grpc.Core.Internal.RequestCallContextSafeHandle::.ctor()
extern void RequestCallContextSafeHandle__ctor_m2813E35A100074528BEF3874183DD7CB8043C7AD (void);
// 0x0000077F Grpc.Core.Internal.RequestCallContextSafeHandle Grpc.Core.Internal.RequestCallContextSafeHandle::Create()
extern void RequestCallContextSafeHandle_Create_m33160BD033CECA4B9895A15CB0B83DE3DE75DB9C (void);
// 0x00000780 System.IntPtr Grpc.Core.Internal.RequestCallContextSafeHandle::get_Handle()
extern void RequestCallContextSafeHandle_get_Handle_m798D47A8CD387461EF6D8F5E0BE7BED248FAB0D3 (void);
// 0x00000781 System.Void Grpc.Core.Internal.RequestCallContextSafeHandle::SetReturnToPoolAction(System.Action`1<Grpc.Core.Internal.RequestCallContextSafeHandle>)
extern void RequestCallContextSafeHandle_SetReturnToPoolAction_mB61CB73828F2554248A1B83D33DF25DE285E31B2 (void);
// 0x00000782 Grpc.Core.Internal.RequestCallCompletionDelegate Grpc.Core.Internal.RequestCallContextSafeHandle::get_CompletionCallback()
extern void RequestCallContextSafeHandle_get_CompletionCallback_mDBE9925BCE73FF75318A634547E0C0BC137BCA2B (void);
// 0x00000783 System.Void Grpc.Core.Internal.RequestCallContextSafeHandle::set_CompletionCallback(Grpc.Core.Internal.RequestCallCompletionDelegate)
extern void RequestCallContextSafeHandle_set_CompletionCallback_m5E3B89F62926D9C236BD2EFED184A435AFC40C37 (void);
// 0x00000784 Grpc.Core.Internal.ServerRpcNew Grpc.Core.Internal.RequestCallContextSafeHandle::GetServerRpcNew(Grpc.Core.Server)
extern void RequestCallContextSafeHandle_GetServerRpcNew_m3B60DAC9938765C45D3F8597A9CEDA9C56E0682F (void);
// 0x00000785 System.Void Grpc.Core.Internal.RequestCallContextSafeHandle::Recycle()
extern void RequestCallContextSafeHandle_Recycle_m8AF1E4C3A3FD2917F76346F188A11BE9993C378F (void);
// 0x00000786 System.Boolean Grpc.Core.Internal.RequestCallContextSafeHandle::ReleaseHandle()
extern void RequestCallContextSafeHandle_ReleaseHandle_m2A4BDBCBE02CEF467BBE6098D22D5BB63794C01D (void);
// 0x00000787 System.Void Grpc.Core.Internal.RequestCallContextSafeHandle::Grpc.Core.Internal.IOpCompletionCallback.OnComplete(System.Boolean)
extern void RequestCallContextSafeHandle_Grpc_Core_Internal_IOpCompletionCallback_OnComplete_mA37E78584954AE9EF76F07873FB2C60CE369D92A (void);
// 0x00000788 System.Void Grpc.Core.Internal.RequestCallContextSafeHandle::.cctor()
extern void RequestCallContextSafeHandle__cctor_m0DFF4B0B7B4A21EBD110E105FC9D78D4ED78DFCB (void);
// 0x00000789 System.Buffers.ReadOnlySequence`1<System.Byte> Grpc.Core.Internal.ReusableSliceBuffer::PopulateFrom(Grpc.Core.Internal.IBufferReader)
extern void ReusableSliceBuffer_PopulateFrom_m529DA56A9D54ED916BF1727AD28A37CB6E68279F (void);
// 0x0000078A System.Void Grpc.Core.Internal.ReusableSliceBuffer::Invalidate()
extern void ReusableSliceBuffer_Invalidate_m2F524DE51964D4C14C21E9FB16533C501D3DC32F (void);
// 0x0000078B System.Void Grpc.Core.Internal.ReusableSliceBuffer::.ctor()
extern void ReusableSliceBuffer__ctor_mEBA6F0C0EDB21ACCE6CD798B82042308FD6B1401 (void);
// 0x0000078C System.Void Grpc.Core.Internal.ReusableSliceBuffer/SliceSegment::Reset(Grpc.Core.Internal.Slice,System.Int64)
extern void SliceSegment_Reset_m5CF4C4F5164E07D4980C88B197E65C78BBE30049 (void);
// 0x0000078D System.Void Grpc.Core.Internal.ReusableSliceBuffer/SliceSegment::SetNext(System.Buffers.ReadOnlySequenceSegment`1<System.Byte>)
extern void SliceSegment_SetNext_m59332BBC6ACE52AF771B6B179A3F6A7735C105B4 (void);
// 0x0000078E System.Void Grpc.Core.Internal.ReusableSliceBuffer/SliceSegment::.ctor()
extern void SliceSegment__ctor_m4C58697EDD443F87D76FCC6FA3E72E1C4FF54090 (void);
// 0x0000078F System.Void Grpc.Core.Internal.SafeHandleZeroIsInvalid::.ctor()
extern void SafeHandleZeroIsInvalid__ctor_m7437699C7878B2D5B2CC415C4AD081A2B7C9EE00 (void);
// 0x00000790 System.Boolean Grpc.Core.Internal.SafeHandleZeroIsInvalid::get_IsInvalid()
extern void SafeHandleZeroIsInvalid_get_IsInvalid_m2261B4C6D2B8220BE4FD449C270A2C5688CD6EE3 (void);
// 0x00000791 System.Threading.Tasks.Task Grpc.Core.Internal.IServerCallHandler::HandleCall(Grpc.Core.Internal.ServerRpcNew,Grpc.Core.Internal.CompletionQueueSafeHandle)
// 0x00000792 System.Void Grpc.Core.Internal.UnaryServerCallHandler`2::.ctor(Grpc.Core.Method`2<TRequest,TResponse>,Grpc.Core.UnaryServerMethod`2<TRequest,TResponse>)
// 0x00000793 System.Threading.Tasks.Task Grpc.Core.Internal.UnaryServerCallHandler`2::HandleCall(Grpc.Core.Internal.ServerRpcNew,Grpc.Core.Internal.CompletionQueueSafeHandle)
// 0x00000794 System.Void Grpc.Core.Internal.UnaryServerCallHandler`2::.cctor()
// 0x00000795 System.Void Grpc.Core.Internal.UnaryServerCallHandler`2/<HandleCall>d__4::MoveNext()
// 0x00000796 System.Void Grpc.Core.Internal.UnaryServerCallHandler`2/<HandleCall>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
// 0x00000797 System.Void Grpc.Core.Internal.ServerStreamingServerCallHandler`2::.ctor(Grpc.Core.Method`2<TRequest,TResponse>,Grpc.Core.ServerStreamingServerMethod`2<TRequest,TResponse>)
// 0x00000798 System.Threading.Tasks.Task Grpc.Core.Internal.ServerStreamingServerCallHandler`2::HandleCall(Grpc.Core.Internal.ServerRpcNew,Grpc.Core.Internal.CompletionQueueSafeHandle)
// 0x00000799 System.Void Grpc.Core.Internal.ServerStreamingServerCallHandler`2::.cctor()
// 0x0000079A System.Void Grpc.Core.Internal.ServerStreamingServerCallHandler`2/<HandleCall>d__4::MoveNext()
// 0x0000079B System.Void Grpc.Core.Internal.ServerStreamingServerCallHandler`2/<HandleCall>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
// 0x0000079C System.Void Grpc.Core.Internal.ClientStreamingServerCallHandler`2::.ctor(Grpc.Core.Method`2<TRequest,TResponse>,Grpc.Core.ClientStreamingServerMethod`2<TRequest,TResponse>)
// 0x0000079D System.Threading.Tasks.Task Grpc.Core.Internal.ClientStreamingServerCallHandler`2::HandleCall(Grpc.Core.Internal.ServerRpcNew,Grpc.Core.Internal.CompletionQueueSafeHandle)
// 0x0000079E System.Void Grpc.Core.Internal.ClientStreamingServerCallHandler`2::.cctor()
// 0x0000079F System.Void Grpc.Core.Internal.ClientStreamingServerCallHandler`2/<HandleCall>d__4::MoveNext()
// 0x000007A0 System.Void Grpc.Core.Internal.ClientStreamingServerCallHandler`2/<HandleCall>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
// 0x000007A1 System.Void Grpc.Core.Internal.DuplexStreamingServerCallHandler`2::.ctor(Grpc.Core.Method`2<TRequest,TResponse>,Grpc.Core.DuplexStreamingServerMethod`2<TRequest,TResponse>)
// 0x000007A2 System.Threading.Tasks.Task Grpc.Core.Internal.DuplexStreamingServerCallHandler`2::HandleCall(Grpc.Core.Internal.ServerRpcNew,Grpc.Core.Internal.CompletionQueueSafeHandle)
// 0x000007A3 System.Void Grpc.Core.Internal.DuplexStreamingServerCallHandler`2::.cctor()
// 0x000007A4 System.Void Grpc.Core.Internal.DuplexStreamingServerCallHandler`2/<HandleCall>d__4::MoveNext()
// 0x000007A5 System.Void Grpc.Core.Internal.DuplexStreamingServerCallHandler`2/<HandleCall>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
// 0x000007A6 System.Void Grpc.Core.Internal.UnimplementedMethodCallHandler::.ctor()
extern void UnimplementedMethodCallHandler__ctor_mF07EACD670EC51C4B38EFC657D5A5583FC29D766 (void);
// 0x000007A7 System.Threading.Tasks.Task Grpc.Core.Internal.UnimplementedMethodCallHandler::UnimplementedMethod(Grpc.Core.IAsyncStreamReader`1<System.Byte[]>,Grpc.Core.IServerStreamWriter`1<System.Byte[]>,Grpc.Core.ServerCallContext)
extern void UnimplementedMethodCallHandler_UnimplementedMethod_mF1A52C8038A2B461ACF14090B319894809842DFD (void);
// 0x000007A8 System.Threading.Tasks.Task Grpc.Core.Internal.UnimplementedMethodCallHandler::HandleCall(Grpc.Core.Internal.ServerRpcNew,Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void UnimplementedMethodCallHandler_HandleCall_mF31E27B1869DF9DF404B7965C2DBBFBC88DBBA9B (void);
// 0x000007A9 System.Void Grpc.Core.Internal.UnimplementedMethodCallHandler::.cctor()
extern void UnimplementedMethodCallHandler__cctor_m1D4083830E8A8A5F5CDF3813670397E31784483B (void);
// 0x000007AA System.Void Grpc.Core.Internal.UnimplementedMethodCallHandler/<>c::.cctor()
extern void U3CU3Ec__cctor_mE9201783B4CF8D6B60F54E004B24999E785293CF (void);
// 0x000007AB System.Void Grpc.Core.Internal.UnimplementedMethodCallHandler/<>c::.ctor()
extern void U3CU3Ec__ctor_mFE8CC528DE9A7DDA58C9A68AAF82B59C08695FB1 (void);
// 0x000007AC System.Byte[] Grpc.Core.Internal.UnimplementedMethodCallHandler/<>c::<.ctor>b__2_0(System.Byte[])
extern void U3CU3Ec_U3C_ctorU3Eb__2_0_mF5311EF89104817350C43D0BC306CE2EC2B216DA (void);
// 0x000007AD System.Byte[] Grpc.Core.Internal.UnimplementedMethodCallHandler/<>c::<.ctor>b__2_1(System.Byte[])
extern void U3CU3Ec_U3C_ctorU3Eb__2_1_m4A30CD80A886435C304958DCADAA254A80FF1EDC (void);
// 0x000007AE Grpc.Core.Status Grpc.Core.Internal.HandlerUtils::GetStatusFromExceptionAndMergeTrailers(System.Exception,Grpc.Core.Metadata)
extern void HandlerUtils_GetStatusFromExceptionAndMergeTrailers_mECA714134D8DE4D8B872A8D2EB607CD29D025737 (void);
// 0x000007AF Grpc.Core.WriteFlags Grpc.Core.Internal.HandlerUtils::GetWriteFlags(Grpc.Core.WriteOptions)
extern void HandlerUtils_GetWriteFlags_m1E7FE467A3A0E44CFC2F6E73E10F44223F14DF0F (void);
// 0x000007B0 Grpc.Core.ServerCallContext Grpc.Core.Internal.HandlerUtils::NewContext(Grpc.Core.Internal.ServerRpcNew,Grpc.Core.Internal.IServerResponseStream,System.Threading.CancellationToken)
extern void HandlerUtils_NewContext_m0FC85DA17A9121431BAF1C5BDAC94C6C72D46E32 (void);
// 0x000007B1 Grpc.Core.Internal.IServerCallHandler Grpc.Core.Internal.ServerCalls::UnaryCall(Grpc.Core.Method`2<TRequest,TResponse>,Grpc.Core.UnaryServerMethod`2<TRequest,TResponse>)
// 0x000007B2 Grpc.Core.Internal.IServerCallHandler Grpc.Core.Internal.ServerCalls::ClientStreamingCall(Grpc.Core.Method`2<TRequest,TResponse>,Grpc.Core.ClientStreamingServerMethod`2<TRequest,TResponse>)
// 0x000007B3 Grpc.Core.Internal.IServerCallHandler Grpc.Core.Internal.ServerCalls::ServerStreamingCall(Grpc.Core.Method`2<TRequest,TResponse>,Grpc.Core.ServerStreamingServerMethod`2<TRequest,TResponse>)
// 0x000007B4 Grpc.Core.Internal.IServerCallHandler Grpc.Core.Internal.ServerCalls::DuplexStreamingCall(Grpc.Core.Method`2<TRequest,TResponse>,Grpc.Core.DuplexStreamingServerMethod`2<TRequest,TResponse>)
// 0x000007B5 System.Void Grpc.Core.Internal.ServerCredentialsSafeHandle::.ctor()
extern void ServerCredentialsSafeHandle__ctor_m0159E5A320A90D9EAC68C38105BA89AE37C7F1C5 (void);
// 0x000007B6 Grpc.Core.Internal.ServerCredentialsSafeHandle Grpc.Core.Internal.ServerCredentialsSafeHandle::CreateSslCredentials(System.String,System.String[],System.String[],Grpc.Core.SslClientCertificateRequestType)
extern void ServerCredentialsSafeHandle_CreateSslCredentials_mD07B8B6318F397595D6B85090A8C037E56AF8A54 (void);
// 0x000007B7 System.Boolean Grpc.Core.Internal.ServerCredentialsSafeHandle::ReleaseHandle()
extern void ServerCredentialsSafeHandle_ReleaseHandle_mC7FA15834B2F9EE12F57B7A592BE39627791A00F (void);
// 0x000007B8 System.Void Grpc.Core.Internal.ServerCredentialsSafeHandle::.cctor()
extern void ServerCredentialsSafeHandle__cctor_mA0F48F62B325B1E64E1EE49FF095F141CA4987D1 (void);
// 0x000007B9 System.Void Grpc.Core.Internal.ServerRequestStream`2::.ctor(Grpc.Core.Internal.AsyncCallServer`2<TRequest,TResponse>)
// 0x000007BA TRequest Grpc.Core.Internal.ServerRequestStream`2::get_Current()
// 0x000007BB System.Threading.Tasks.Task`1<System.Boolean> Grpc.Core.Internal.ServerRequestStream`2::MoveNext(System.Threading.CancellationToken)
// 0x000007BC System.Void Grpc.Core.Internal.ServerRequestStream`2::Dispose()
// 0x000007BD System.Void Grpc.Core.Internal.ServerRequestStream`2/<MoveNext>d__5::MoveNext()
// 0x000007BE System.Void Grpc.Core.Internal.ServerRequestStream`2/<MoveNext>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
// 0x000007BF System.Void Grpc.Core.Internal.ServerResponseStream`2::.ctor(Grpc.Core.Internal.AsyncCallServer`2<TRequest,TResponse>)
// 0x000007C0 System.Threading.Tasks.Task Grpc.Core.Internal.ServerResponseStream`2::WriteAsync(TResponse)
// 0x000007C1 System.Threading.Tasks.Task Grpc.Core.Internal.ServerResponseStream`2::WriteResponseHeadersAsync(Grpc.Core.Metadata)
// 0x000007C2 Grpc.Core.WriteOptions Grpc.Core.Internal.ServerResponseStream`2::get_WriteOptions()
// 0x000007C3 System.Void Grpc.Core.Internal.ServerResponseStream`2::set_WriteOptions(Grpc.Core.WriteOptions)
// 0x000007C4 Grpc.Core.WriteFlags Grpc.Core.Internal.ServerResponseStream`2::GetWriteFlags()
// 0x000007C5 System.Void Grpc.Core.Internal.ServerRpcNew::.ctor(Grpc.Core.Server,Grpc.Core.Internal.CallSafeHandle,System.String,System.String,Grpc.Core.Internal.Timespec,Grpc.Core.Metadata)
extern void ServerRpcNew__ctor_m812399CDF08C8EBDA8E534F0101627886658BDD6 (void);
// 0x000007C6 Grpc.Core.Server Grpc.Core.Internal.ServerRpcNew::get_Server()
extern void ServerRpcNew_get_Server_m87B680FC40D0D915644F02EC34EB1C6AC07AD14B (void);
// 0x000007C7 Grpc.Core.Internal.CallSafeHandle Grpc.Core.Internal.ServerRpcNew::get_Call()
extern void ServerRpcNew_get_Call_m763D4B9EDCE95FD3BDF6CBC2E45D093B67415B02 (void);
// 0x000007C8 System.String Grpc.Core.Internal.ServerRpcNew::get_Method()
extern void ServerRpcNew_get_Method_m4828D959C47D085F8AC61EA81C2F93F7E19073E2 (void);
// 0x000007C9 System.String Grpc.Core.Internal.ServerRpcNew::get_Host()
extern void ServerRpcNew_get_Host_mB9402BAD4EEE97C1B2B0936C08FDC4D99209891C (void);
// 0x000007CA Grpc.Core.Internal.Timespec Grpc.Core.Internal.ServerRpcNew::get_Deadline()
extern void ServerRpcNew_get_Deadline_mB68D819B1743D463CE36E274F07D36922065016B (void);
// 0x000007CB Grpc.Core.Metadata Grpc.Core.Internal.ServerRpcNew::get_RequestMetadata()
extern void ServerRpcNew_get_RequestMetadata_m9B06EBC35F9F64F34C7BA9FC7D9B2268BF2A1777 (void);
// 0x000007CC System.Void Grpc.Core.Internal.ServerSafeHandle::.ctor()
extern void ServerSafeHandle__ctor_m26ABD7F4CD998FC49F017035D87252D8BC0700B6 (void);
// 0x000007CD Grpc.Core.Internal.ServerSafeHandle Grpc.Core.Internal.ServerSafeHandle::NewServer(Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void ServerSafeHandle_NewServer_mBAECCA1802E39E185C5517975ABA4BDCD4F6E905 (void);
// 0x000007CE System.Void Grpc.Core.Internal.ServerSafeHandle::RegisterCompletionQueue(Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void ServerSafeHandle_RegisterCompletionQueue_m2C56BC611B55732F13182D35834EA77C91BD0045 (void);
// 0x000007CF System.Int32 Grpc.Core.Internal.ServerSafeHandle::AddInsecurePort(System.String)
extern void ServerSafeHandle_AddInsecurePort_m6221E47E2611B89683699AA3B13EE817C5A6D34B (void);
// 0x000007D0 System.Int32 Grpc.Core.Internal.ServerSafeHandle::AddSecurePort(System.String,Grpc.Core.Internal.ServerCredentialsSafeHandle)
extern void ServerSafeHandle_AddSecurePort_mB5817D42ABC318A20ACCCD6B22A70DFDDAF4D177 (void);
// 0x000007D1 System.Void Grpc.Core.Internal.ServerSafeHandle::Start()
extern void ServerSafeHandle_Start_mFA5BA67499892A8FCAD71E230C195E1BA4DC3D93 (void);
// 0x000007D2 System.Void Grpc.Core.Internal.ServerSafeHandle::ShutdownAndNotify(Grpc.Core.Internal.BatchCompletionDelegate,Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void ServerSafeHandle_ShutdownAndNotify_m18CB916A7D419F85E97F75BD61A1E37CBA4FA55D (void);
// 0x000007D3 System.Void Grpc.Core.Internal.ServerSafeHandle::RequestCall(Grpc.Core.Internal.RequestCallCompletionDelegate,Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void ServerSafeHandle_RequestCall_mF45B53E2A868874FEA4E46EC5DAA4B947784AC38 (void);
// 0x000007D4 System.Boolean Grpc.Core.Internal.ServerSafeHandle::ReleaseHandle()
extern void ServerSafeHandle_ReleaseHandle_m4FB39CA9E7FDCEE3CCFC26EF890071AA0876D289 (void);
// 0x000007D5 System.Void Grpc.Core.Internal.ServerSafeHandle::CancelAllCalls()
extern void ServerSafeHandle_CancelAllCalls_mC579F18BB3CF29C4CBFF6B2885846F026F850AE0 (void);
// 0x000007D6 System.Void Grpc.Core.Internal.ServerSafeHandle::.cctor()
extern void ServerSafeHandle__cctor_m1AF9A3AA8E5E80EAC548AE79E2A790148DD9267E (void);
// 0x000007D7 System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,Grpc.Core.Internal.IServerCallHandler> Grpc.Core.Internal.ServerServiceDefinitionExtensions::GetCallHandlers(Grpc.Core.ServerServiceDefinition)
extern void ServerServiceDefinitionExtensions_GetCallHandlers_m6C4B06DBD0F5B9E0F8ACDBE13E9EB8247FAD415D (void);
// 0x000007D8 System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,Grpc.Core.Internal.IServerCallHandler> Grpc.Core.Internal.ServerServiceDefinitionExtensions/DefaultServiceBinder::GetCallHandlers()
extern void DefaultServiceBinder_GetCallHandlers_m25A1DD407ED0E325D533DC0BC744E1B814E170C8 (void);
// 0x000007D9 System.Void Grpc.Core.Internal.ServerServiceDefinitionExtensions/DefaultServiceBinder::AddMethod(Grpc.Core.Method`2<TRequest,TResponse>,Grpc.Core.UnaryServerMethod`2<TRequest,TResponse>)
// 0x000007DA System.Void Grpc.Core.Internal.ServerServiceDefinitionExtensions/DefaultServiceBinder::AddMethod(Grpc.Core.Method`2<TRequest,TResponse>,Grpc.Core.ClientStreamingServerMethod`2<TRequest,TResponse>)
// 0x000007DB System.Void Grpc.Core.Internal.ServerServiceDefinitionExtensions/DefaultServiceBinder::AddMethod(Grpc.Core.Method`2<TRequest,TResponse>,Grpc.Core.ServerStreamingServerMethod`2<TRequest,TResponse>)
// 0x000007DC System.Void Grpc.Core.Internal.ServerServiceDefinitionExtensions/DefaultServiceBinder::AddMethod(Grpc.Core.Method`2<TRequest,TResponse>,Grpc.Core.DuplexStreamingServerMethod`2<TRequest,TResponse>)
// 0x000007DD System.Void Grpc.Core.Internal.ServerServiceDefinitionExtensions/DefaultServiceBinder::.ctor()
extern void DefaultServiceBinder__ctor_m0B873479C3E8BAA34573DC67948ED653FDA04E1D (void);
// 0x000007DE System.Void Grpc.Core.Internal.Slice::.ctor(System.IntPtr,System.Int32)
extern void Slice__ctor_m215A4A67A3804109D17E135DB6FE31AF1C150BFD (void);
// 0x000007DF System.Int32 Grpc.Core.Internal.Slice::get_Length()
extern void Slice_get_Length_m9EF58B298772325ADE2185E64636F450541A9879 (void);
// 0x000007E0 System.Span`1<System.Byte> Grpc.Core.Internal.Slice::ToSpanUnsafe()
extern void Slice_ToSpanUnsafe_m204F2CA57F323C0375206B0A39B7CC1D8DDA67E4 (void);
// 0x000007E1 System.String Grpc.Core.Internal.Slice::ToString()
extern void Slice_ToString_m6813024B28CAFDE3C72F7B0B8BA48F729E2C88E2 (void);
// 0x000007E2 System.Void Grpc.Core.Internal.SliceBufferSafeHandle::.ctor()
extern void SliceBufferSafeHandle__ctor_mB497B342160E2FECFDAB11C561DFD0FBA03AF97C (void);
// 0x000007E3 Grpc.Core.Internal.SliceBufferSafeHandle Grpc.Core.Internal.SliceBufferSafeHandle::Create()
extern void SliceBufferSafeHandle_Create_mD6126885827B07FFFFE1B34E32A0068422F19142 (void);
// 0x000007E4 System.IntPtr Grpc.Core.Internal.SliceBufferSafeHandle::get_Handle()
extern void SliceBufferSafeHandle_get_Handle_m56E5D00C4588B1EB6E4BBF58BF265F90F391AFA7 (void);
// 0x000007E5 System.Void Grpc.Core.Internal.SliceBufferSafeHandle::Advance(System.Int32)
extern void SliceBufferSafeHandle_Advance_m6E40E5CDB0770AE933E1A112BCA1B3D63595F676 (void);
// 0x000007E6 System.Memory`1<System.Byte> Grpc.Core.Internal.SliceBufferSafeHandle::GetMemory(System.Int32)
extern void SliceBufferSafeHandle_GetMemory_mC2CB1DC320382508A7BE5EDEE7E95684F2194DCF (void);
// 0x000007E7 System.Span`1<System.Byte> Grpc.Core.Internal.SliceBufferSafeHandle::GetSpan(System.Int32)
extern void SliceBufferSafeHandle_GetSpan_m8E7454F669EBC3ADE73E6B43D373BD400D77E32F (void);
// 0x000007E8 System.Void Grpc.Core.Internal.SliceBufferSafeHandle::Complete()
extern void SliceBufferSafeHandle_Complete_mB2B79B60B1A66806F22503E8BDB0B741387E5B3C (void);
// 0x000007E9 System.Void Grpc.Core.Internal.SliceBufferSafeHandle::Reset()
extern void SliceBufferSafeHandle_Reset_m3D6A9CE926B84EB676032CADD19CAEF8AEAF848E (void);
// 0x000007EA System.Byte[] Grpc.Core.Internal.SliceBufferSafeHandle::ToByteArray()
extern void SliceBufferSafeHandle_ToByteArray_mDC0703A891077F68DBD74C0DDD6EA99E076E07FB (void);
// 0x000007EB System.Void Grpc.Core.Internal.SliceBufferSafeHandle::EnsureBufferSpace(System.Int32)
extern void SliceBufferSafeHandle_EnsureBufferSpace_m7A07C77926A5BC2D83A3FF784E9EB0F0A88548ED (void);
// 0x000007EC System.Void Grpc.Core.Internal.SliceBufferSafeHandle::AdjustTailSpace(System.Int32)
extern void SliceBufferSafeHandle_AdjustTailSpace_m6C16C8AB7E1C3FC85B1632806FF33E4710667A6C (void);
// 0x000007ED System.Boolean Grpc.Core.Internal.SliceBufferSafeHandle::ReleaseHandle()
extern void SliceBufferSafeHandle_ReleaseHandle_mD2744F7EEF68DF570923489F6212CD36C860430C (void);
// 0x000007EE System.Void Grpc.Core.Internal.SliceBufferSafeHandle::.cctor()
extern void SliceBufferSafeHandle__cctor_mE95C4EA2FA3DDDE2A3F1BF8ECF736A67A7472F97 (void);
// 0x000007EF System.Void Grpc.Core.Internal.SliceMemoryManager::Reset(Grpc.Core.Internal.Slice)
extern void SliceMemoryManager_Reset_m7A385F5AAECDFDEBBAF901DB399D25A6A395AE10 (void);
// 0x000007F0 System.Void Grpc.Core.Internal.SliceMemoryManager::Reset()
extern void SliceMemoryManager_Reset_m79EC26F4DD58D9D1B8D6AD661D4B28B96D856001 (void);
// 0x000007F1 System.Span`1<System.Byte> Grpc.Core.Internal.SliceMemoryManager::GetSpan()
extern void SliceMemoryManager_GetSpan_m57AFE739737ADFD4E4E7920B26FC70200B21B047 (void);
// 0x000007F2 System.Buffers.MemoryHandle Grpc.Core.Internal.SliceMemoryManager::Pin(System.Int32)
extern void SliceMemoryManager_Pin_mE0C2942A17DC007CF6F7CF22DA36D00559477C5B (void);
// 0x000007F3 System.Void Grpc.Core.Internal.SliceMemoryManager::Unpin()
extern void SliceMemoryManager_Unpin_m5BC909D171B9DBCDB28324D27532D4D9F80143A8 (void);
// 0x000007F4 System.Void Grpc.Core.Internal.SliceMemoryManager::Dispose(System.Boolean)
extern void SliceMemoryManager_Dispose_mAAD896D53252A7E46E00374F7608E24A49859D83 (void);
// 0x000007F5 System.Void Grpc.Core.Internal.SliceMemoryManager::.ctor()
extern void SliceMemoryManager__ctor_m2543DF8914F62B18FCB43A93AA54BFDE3613A20F (void);
// 0x000007F6 System.Boolean Grpc.Core.Internal.Timespec::Equals(System.Object)
extern void Timespec_Equals_m424E3C360D432E90A3A6C43ECD9843DE74DA4967 (void);
// 0x000007F7 System.Int32 Grpc.Core.Internal.Timespec::GetHashCode()
extern void Timespec_GetHashCode_mB18E5C6167F4A6CEAD178D009D2AA80DF54FD1F8 (void);
// 0x000007F8 System.String Grpc.Core.Internal.Timespec::ToString()
extern void Timespec_ToString_m4C5C0DFFE4377ED54A87A05216730EAE94B20B50 (void);
// 0x000007F9 System.Boolean Grpc.Core.Internal.Timespec::Equals(Grpc.Core.Internal.Timespec)
extern void Timespec_Equals_m5E505EC54B0B0460601ABB54F190E462F987EA67 (void);
// 0x000007FA System.Void Grpc.Core.Internal.Timespec::.ctor(System.Int64,System.Int32)
extern void Timespec__ctor_m6ED659F8011A6D43892EF69CE7A99C3B78E12733 (void);
// 0x000007FB System.Void Grpc.Core.Internal.Timespec::.ctor(System.Int64,System.Int32,Grpc.Core.Internal.ClockType)
extern void Timespec__ctor_m6A0D2BB6975E9FA6E3B10689801A863BEBEDB04E (void);
// 0x000007FC Grpc.Core.Internal.Timespec Grpc.Core.Internal.Timespec::get_InfFuture()
extern void Timespec_get_InfFuture_mF824F501FC6D5F4771B3DABAC8694FDB0A04D4C5 (void);
// 0x000007FD Grpc.Core.Internal.Timespec Grpc.Core.Internal.Timespec::get_InfPast()
extern void Timespec_get_InfPast_mB31180C41D7A6AE239D1E5A8B2A8AFC710E6C99A (void);
// 0x000007FE Grpc.Core.Internal.Timespec Grpc.Core.Internal.Timespec::get_Now()
extern void Timespec_get_Now_m563DD2734F7B4AB38FD840478D8C15B67E23C43D (void);
// 0x000007FF System.Int64 Grpc.Core.Internal.Timespec::get_TimevalSeconds()
extern void Timespec_get_TimevalSeconds_mD94F6B602DDF2E8AFEA00799637D3848C690FA25 (void);
// 0x00000800 System.Int32 Grpc.Core.Internal.Timespec::get_TimevalNanos()
extern void Timespec_get_TimevalNanos_mA7DA2C0EBBE0AE1B19275519C44B35FA0179567D (void);
// 0x00000801 Grpc.Core.Internal.Timespec Grpc.Core.Internal.Timespec::ToClockType(Grpc.Core.Internal.ClockType)
extern void Timespec_ToClockType_m70E832C1EFB1E0F7902F2D7F81A50815EFC3AC4C (void);
// 0x00000802 System.DateTime Grpc.Core.Internal.Timespec::ToDateTime()
extern void Timespec_ToDateTime_m96FC97988DA91C21E7068F123966B3DE3DF491FA (void);
// 0x00000803 Grpc.Core.Internal.Timespec Grpc.Core.Internal.Timespec::FromDateTime(System.DateTime)
extern void Timespec_FromDateTime_mB8DC88C6B016A3A08E234F737FB1CFA07C0B543B (void);
// 0x00000804 Grpc.Core.Internal.Timespec Grpc.Core.Internal.Timespec::get_PreciseNow()
extern void Timespec_get_PreciseNow_m99C6F3D8B7191B18BBC44E6F1C4FFD9CF900CC2F (void);
// 0x00000805 System.Int32 Grpc.Core.Internal.Timespec::get_NativeSize()
extern void Timespec_get_NativeSize_mCB6272F9596FAF648C9FB372338D5FD3D7A900EB (void);
// 0x00000806 Grpc.Core.Internal.Timespec Grpc.Core.Internal.Timespec::get_NativeInfFuture()
extern void Timespec_get_NativeInfFuture_mEEAF4C5B91D4D8C869BE9A24D46062E4F660557D (void);
// 0x00000807 Grpc.Core.Internal.Timespec Grpc.Core.Internal.Timespec::get_NativeInfPast()
extern void Timespec_get_NativeInfPast_m48ADE2ABC2291249A02CF8D6685412072011D98E (void);
// 0x00000808 System.Void Grpc.Core.Internal.Timespec::.cctor()
extern void Timespec__cctor_m9CA01C6828F45E3B33170A0E45D4D4E69071276D (void);
// 0x00000809 System.Void Grpc.Core.Internal.UnimplementedCallInvoker::.ctor()
extern void UnimplementedCallInvoker__ctor_m37084568D0F765B943C69CE5523B481719B916B7 (void);
// 0x0000080A TResponse Grpc.Core.Internal.UnimplementedCallInvoker::BlockingUnaryCall(Grpc.Core.Method`2<TRequest,TResponse>,System.String,Grpc.Core.CallOptions,TRequest)
// 0x0000080B Grpc.Core.AsyncUnaryCall`1<TResponse> Grpc.Core.Internal.UnimplementedCallInvoker::AsyncUnaryCall(Grpc.Core.Method`2<TRequest,TResponse>,System.String,Grpc.Core.CallOptions,TRequest)
// 0x0000080C Grpc.Core.AsyncServerStreamingCall`1<TResponse> Grpc.Core.Internal.UnimplementedCallInvoker::AsyncServerStreamingCall(Grpc.Core.Method`2<TRequest,TResponse>,System.String,Grpc.Core.CallOptions,TRequest)
// 0x0000080D Grpc.Core.AsyncClientStreamingCall`2<TRequest,TResponse> Grpc.Core.Internal.UnimplementedCallInvoker::AsyncClientStreamingCall(Grpc.Core.Method`2<TRequest,TResponse>,System.String,Grpc.Core.CallOptions)
// 0x0000080E Grpc.Core.AsyncDuplexStreamingCall`2<TRequest,TResponse> Grpc.Core.Internal.UnimplementedCallInvoker::AsyncDuplexStreamingCall(Grpc.Core.Method`2<TRequest,TResponse>,System.String,Grpc.Core.CallOptions)
// 0x0000080F System.Void Grpc.Core.Internal.UnmanagedLibrary::.ctor(System.String[])
extern void UnmanagedLibrary__ctor_mABDF514DB467C94F585E386574C08817412E118A (void);
// 0x00000810 System.IntPtr Grpc.Core.Internal.UnmanagedLibrary::LoadSymbol(System.String)
extern void UnmanagedLibrary_LoadSymbol_m43EDA46797A156DAEA9FAB7139DE472332DF2FE6 (void);
// 0x00000811 T Grpc.Core.Internal.UnmanagedLibrary::GetNativeMethodDelegate(System.String)
// 0x00000812 System.IntPtr Grpc.Core.Internal.UnmanagedLibrary::PlatformSpecificLoadLibrary(System.String,System.String&)
extern void UnmanagedLibrary_PlatformSpecificLoadLibrary_m83449C5406B9EFDE2BC2BC3D0B05620020405159 (void);
// 0x00000813 System.IntPtr Grpc.Core.Internal.UnmanagedLibrary::LoadLibraryPosix(System.Func`3<System.String,System.Int32,System.IntPtr>,System.Func`1<System.IntPtr>,System.String,System.String&)
extern void UnmanagedLibrary_LoadLibraryPosix_m673FF31B498057327E5C718D6331D6FFCB988665 (void);
// 0x00000814 System.String Grpc.Core.Internal.UnmanagedLibrary::FirstValidLibraryPath(System.String[])
extern void UnmanagedLibrary_FirstValidLibraryPath_mFCB962ACCE3DEAF84CF06F54A8803CAD31830C87 (void);
// 0x00000815 System.Void Grpc.Core.Internal.UnmanagedLibrary::.cctor()
extern void UnmanagedLibrary__cctor_mFF702D54966C7FC5AB704A0FD3C00ECF1D83F822 (void);
// 0x00000816 System.IntPtr Grpc.Core.Internal.UnmanagedLibrary/Windows::LoadLibrary(System.String)
extern void Windows_LoadLibrary_mADA497BF6FF6B4D56974CB4B090417B7B6B23352 (void);
// 0x00000817 System.IntPtr Grpc.Core.Internal.UnmanagedLibrary/Windows::GetProcAddress(System.IntPtr,System.String)
extern void Windows_GetProcAddress_mDE3A5D086D09CECAD0C5338318F41246C014ACDD (void);
// 0x00000818 System.IntPtr Grpc.Core.Internal.UnmanagedLibrary/Linux::dlopen(System.String,System.Int32)
extern void Linux_dlopen_m294285A8DBB5D2CEE0F29DD0BA8E8D8355EB1718 (void);
// 0x00000819 System.IntPtr Grpc.Core.Internal.UnmanagedLibrary/Linux::dlerror()
extern void Linux_dlerror_m178FB5EB1D76CD0AF2C420B5A74AAF6007EA2507 (void);
// 0x0000081A System.IntPtr Grpc.Core.Internal.UnmanagedLibrary/Linux::dlsym(System.IntPtr,System.String)
extern void Linux_dlsym_mFB9A1F6F693B31AEEC408A5100FA67B7E7D1F52B (void);
// 0x0000081B System.IntPtr Grpc.Core.Internal.UnmanagedLibrary/MacOSX::dlopen(System.String,System.Int32)
extern void MacOSX_dlopen_m225A5CB7296C7BBBC8B3ABF5AB8DBEBE7AFD09D0 (void);
// 0x0000081C System.IntPtr Grpc.Core.Internal.UnmanagedLibrary/MacOSX::dlerror()
extern void MacOSX_dlerror_m83AD193EF1A4A0F8D228F7DA9899A2F26C48D664 (void);
// 0x0000081D System.IntPtr Grpc.Core.Internal.UnmanagedLibrary/MacOSX::dlsym(System.IntPtr,System.String)
extern void MacOSX_dlsym_m97302520FAEC533EB08C02EAC66788598F661EF6 (void);
// 0x0000081E System.IntPtr Grpc.Core.Internal.UnmanagedLibrary/Mono::dlopen(System.String,System.Int32)
extern void Mono_dlopen_mDF9BF224A65852EDD273193157AA66A4DDF77764 (void);
// 0x0000081F System.IntPtr Grpc.Core.Internal.UnmanagedLibrary/Mono::dlerror()
extern void Mono_dlerror_m49BC764553C0B9B7CA0950F28E448A0236E432E8 (void);
// 0x00000820 System.IntPtr Grpc.Core.Internal.UnmanagedLibrary/Mono::dlsym(System.IntPtr,System.String)
extern void Mono_dlsym_m055B22ADF70CEC1500B8F6A4B089C5B7CCAE00DC (void);
// 0x00000821 System.IntPtr Grpc.Core.Internal.UnmanagedLibrary/CoreCLR::dlopen(System.String,System.Int32)
extern void CoreCLR_dlopen_m66F8159A6DF01DB733607A585A718B44A7D16DB1 (void);
// 0x00000822 System.IntPtr Grpc.Core.Internal.UnmanagedLibrary/CoreCLR::dlerror()
extern void CoreCLR_dlerror_mFB065CA506D371BA949EA456FABA5621E29C94CC (void);
// 0x00000823 System.IntPtr Grpc.Core.Internal.UnmanagedLibrary/CoreCLR::dlsym(System.IntPtr,System.String)
extern void CoreCLR_dlsym_mC9C9F466B57771325757EF1038363D1AE7E8BCB1 (void);
// 0x00000824 System.Void Grpc.Core.Internal.UserAgentStringProvider::.cctor()
extern void UserAgentStringProvider__cctor_m2ADC866269FC2470FCE0D6F025C3B77564570DA8 (void);
// 0x00000825 Grpc.Core.Internal.UserAgentStringProvider Grpc.Core.Internal.UserAgentStringProvider::get_DefaultInstance()
extern void UserAgentStringProvider_get_DefaultInstance_mC8CF0AF9F6F02DC7359EE014F18A4991E181FB2A (void);
// 0x00000826 System.String Grpc.Core.Internal.UserAgentStringProvider::get_GrpcCsharpUserAgentString()
extern void UserAgentStringProvider_get_GrpcCsharpUserAgentString_m93644E1C5BED2C50F218DFD684B1D0D1A94BDA03 (void);
// 0x00000827 System.Void Grpc.Core.Internal.UserAgentStringProvider::.ctor(System.String,System.String,System.String,System.String,Grpc.Core.Internal.CommonPlatformDetection/CpuArchitecture)
extern void UserAgentStringProvider__ctor_m06211232854B0F724950C1A66E960DCF69EB76C1 (void);
// 0x00000828 System.String Grpc.Core.Internal.UserAgentStringProvider::TryGetArchitectureString(Grpc.Core.Internal.CommonPlatformDetection/CpuArchitecture)
extern void UserAgentStringProvider_TryGetArchitectureString_mD7CC281B99428BBF457920F42D1FF4BC5B893C63 (void);
// 0x00000829 System.String Grpc.Core.Internal.UserAgentStringProvider::SanitizeFrameworkDescription(System.String)
extern void UserAgentStringProvider_SanitizeFrameworkDescription_mCF7FCF3A14A3F9C6EDC370AD83D7ACD9221D7C43 (void);
// 0x0000082A System.UInt64 Grpc.Core.Internal.WellKnownStrings::Coerce64(System.Byte*)
extern void WellKnownStrings_Coerce64_m71B5D6229DCB09F6CFC2D79A41D8500C1180B9D0 (void);
// 0x0000082B System.UInt32 Grpc.Core.Internal.WellKnownStrings::Coerce32(System.Byte*)
extern void WellKnownStrings_Coerce32_m5A2C524C0D683EBD59ED31613DC3160F75634039 (void);
// 0x0000082C System.UInt16 Grpc.Core.Internal.WellKnownStrings::Coerce16(System.Byte*)
extern void WellKnownStrings_Coerce16_mF65025003F00395C2C095D97EB4C34C5171F3343 (void);
// 0x0000082D System.String Grpc.Core.Internal.WellKnownStrings::TryIdentify(System.IntPtr,System.Int32)
extern void WellKnownStrings_TryIdentify_m7D73F9733BAE186E0298F8670B5342D0F25A36A8 (void);
// 0x0000082E System.String Grpc.Core.Internal.WellKnownStrings::TryIdentify(System.Byte*,System.Int32)
extern void WellKnownStrings_TryIdentify_mF98950731F7321A2FFC068709607C759972DE1C3 (void);
// 0x0000082F Grpc.Core.ServerServiceDefinition Grpc.Core.Interceptors.ServerServiceDefinitionExtensions::Intercept(Grpc.Core.ServerServiceDefinition,Grpc.Core.Interceptors.Interceptor)
extern void ServerServiceDefinitionExtensions_Intercept_mBA2FFD9D927D17B326907EA51D40C2DF8F20B13D (void);
// 0x00000830 Grpc.Core.ServerServiceDefinition Grpc.Core.Interceptors.ServerServiceDefinitionExtensions::Intercept(Grpc.Core.ServerServiceDefinition,Grpc.Core.Interceptors.Interceptor[])
extern void ServerServiceDefinitionExtensions_Intercept_m13846586BF84E4693790C29AE52983BEA9F8A64D (void);
// 0x00000831 System.Void Grpc.Core.Interceptors.ServerServiceDefinitionExtensions/InterceptingServiceBinder::.ctor(Grpc.Core.Interceptors.Interceptor)
extern void InterceptingServiceBinder__ctor_mF331115BBF62BCB7237ACBF5FF4E0B56595225F7 (void);
// 0x00000832 Grpc.Core.ServerServiceDefinition Grpc.Core.Interceptors.ServerServiceDefinitionExtensions/InterceptingServiceBinder::GetInterceptedServerServiceDefinition()
extern void InterceptingServiceBinder_GetInterceptedServerServiceDefinition_mEAA52B2757800B324A215DD7F1A9E5D3232B3BBB (void);
// 0x00000833 System.Void Grpc.Core.Interceptors.ServerServiceDefinitionExtensions/InterceptingServiceBinder::AddMethod(Grpc.Core.Method`2<TRequest,TResponse>,Grpc.Core.UnaryServerMethod`2<TRequest,TResponse>)
// 0x00000834 System.Void Grpc.Core.Interceptors.ServerServiceDefinitionExtensions/InterceptingServiceBinder::AddMethod(Grpc.Core.Method`2<TRequest,TResponse>,Grpc.Core.ClientStreamingServerMethod`2<TRequest,TResponse>)
// 0x00000835 System.Void Grpc.Core.Interceptors.ServerServiceDefinitionExtensions/InterceptingServiceBinder::AddMethod(Grpc.Core.Method`2<TRequest,TResponse>,Grpc.Core.ServerStreamingServerMethod`2<TRequest,TResponse>)
// 0x00000836 System.Void Grpc.Core.Interceptors.ServerServiceDefinitionExtensions/InterceptingServiceBinder::AddMethod(Grpc.Core.Method`2<TRequest,TResponse>,Grpc.Core.DuplexStreamingServerMethod`2<TRequest,TResponse>)
// 0x00000837 System.Void Grpc.Core.Interceptors.ServerServiceDefinitionExtensions/InterceptingServiceBinder/<>c__DisplayClass4_0`2::.ctor()
// 0x00000838 System.Threading.Tasks.Task`1<TResponse> Grpc.Core.Interceptors.ServerServiceDefinitionExtensions/InterceptingServiceBinder/<>c__DisplayClass4_0`2::<AddMethod>b__0(TRequest,Grpc.Core.ServerCallContext)
// 0x00000839 System.Void Grpc.Core.Interceptors.ServerServiceDefinitionExtensions/InterceptingServiceBinder/<>c__DisplayClass5_0`2::.ctor()
// 0x0000083A System.Threading.Tasks.Task`1<TResponse> Grpc.Core.Interceptors.ServerServiceDefinitionExtensions/InterceptingServiceBinder/<>c__DisplayClass5_0`2::<AddMethod>b__0(Grpc.Core.IAsyncStreamReader`1<TRequest>,Grpc.Core.ServerCallContext)
// 0x0000083B System.Void Grpc.Core.Interceptors.ServerServiceDefinitionExtensions/InterceptingServiceBinder/<>c__DisplayClass6_0`2::.ctor()
// 0x0000083C System.Threading.Tasks.Task Grpc.Core.Interceptors.ServerServiceDefinitionExtensions/InterceptingServiceBinder/<>c__DisplayClass6_0`2::<AddMethod>b__0(TRequest,Grpc.Core.IServerStreamWriter`1<TResponse>,Grpc.Core.ServerCallContext)
// 0x0000083D System.Void Grpc.Core.Interceptors.ServerServiceDefinitionExtensions/InterceptingServiceBinder/<>c__DisplayClass7_0`2::.ctor()
// 0x0000083E System.Threading.Tasks.Task Grpc.Core.Interceptors.ServerServiceDefinitionExtensions/InterceptingServiceBinder/<>c__DisplayClass7_0`2::<AddMethod>b__0(Grpc.Core.IAsyncStreamReader`1<TRequest>,Grpc.Core.IServerStreamWriter`1<TResponse>,Grpc.Core.ServerCallContext)
static Il2CppMethodPointer s_methodPointers[2110] = 
{
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Channel__ctor_m1BF943A726A2FEDA5BF5CF95B7D166C28094B788,
	Channel__ctor_mA4DF9EA81F32B85C971F3164C4102482CBD8CE5C,
	Channel__ctor_m7547604CB8D4E65801229B9674ADE2DFCAD5D3E3,
	Channel__ctor_mA01397368CA65EDEF058E5EB55FA1B0889672DD4,
	Channel_get_State_m21E0624BAD35A3B4DF6328995FD3A78338841CC8,
	Channel_WaitForStateChangedAsync_m9533042914CA1D2F9D1559ED50A01153CD638E80,
	Channel_TryWaitForStateChangedAsync_m29143A862075991F10CA8BA1D7070B063FE17048,
	Channel_get_ResolvedTarget_m9C9751E424BA210776A43B93E69EC30A46DF2B7E,
	Channel_get_ShutdownToken_mB7ED5461D55A6D4F2119D3C8B67A0A1C562D5B39,
	Channel_ConnectAsync_m4704D969A28D132C9A3001F10FA785C6715EA455,
	Channel_ShutdownAsyncCore_m525B25D4218BF51D232C678F1E5CCE3D58514760,
	Channel_CreateCallInvoker_mB181911AD8D24169C544083305D6B0BE6DAC58E4,
	Channel_get_Handle_m8A470610FDFE233900ED09BB438B5F60812DFB07,
	Channel_get_Environment_m2F2E9B7A9D2B7016A4F56E75AE09CBB5D3282C32,
	Channel_get_CompletionQueue_m58F58ABF7C70800E7F8CB60AC1CB7B190F8FD4E7,
	Channel_AddCallReference_mFB37914E2D8494F879D44A08E45EE5821C865439,
	Channel_RemoveCallReference_m63EC58A55BECE9ECE04D955D7961F12254EE5C9F,
	Channel_GetCallReferenceCount_m15FAEF446604C008B7156DDE1F54ADD6CC60D863,
	Channel_GetConnectivityState_m7F42539D7FF1173E11C4F30E0BAE1857080A6FEA,
	Channel_EnsureUserAgentChannelOption_m0D4577746E6AF0D9A8C8FAC3488396B75DC42847,
	Channel_CreateOptionsDictionary_mF47C9C7115CE06D827AA02F43A1EEE36464C351E,
	Channel__cctor_m7D8427A51A60B7B3DA02CBAE148C36C8FECF7BF3,
	U3CWaitForStateChangedAsyncU3Ed__16_MoveNext_mF00F397FFA104DB181B755041BC37DAFA2358330,
	U3CWaitForStateChangedAsyncU3Ed__16_SetStateMachine_m9110AFDE96D1F0DCF0E6ADDB0005969C223B38D0,
	U3CConnectAsyncU3Ed__22_MoveNext_mDD715A24E28F3AA27AECA6D91B2B0F86AB0DD138,
	U3CConnectAsyncU3Ed__22_SetStateMachine_mC4BF8110336827B874EFF405D4017E981B1106A0,
	U3CShutdownAsyncCoreU3Ed__23_MoveNext_m25FA2E734465BCB440892B6D4B04F84D44CDE339,
	U3CShutdownAsyncCoreU3Ed__23_SetStateMachine_m1F163AFDFA378EB1AF311DC50F723CF3A84C47DD,
	U3CU3Ec__cctor_mA541D53BC256A5AC65A5020735FDAED72ACD65CC,
	U3CU3Ec__ctor_m1BC4C37328C0B16260D30AB54A6005E40205D105,
	U3CU3Ec_U3C_cctorU3Eb__37_0_m3ED468CAE5C8A75D1433FC755EE0B9E7E6E9D202,
	ChannelOption__ctor_mA713E63D84FAE6BA39472FF2920F1647BF1552A5,
	ChannelOption__ctor_m2D7D0AB168E32C292E490DB34DB9E9297DA3179C,
	ChannelOption_get_Type_m5C74BBF10741B4CF4D341FEA0651D4F4B9E18E53,
	ChannelOption_get_Name_m80C124A673FE0E1B34EA3EB594EAE51908EA0AA4,
	ChannelOption_get_IntValue_m8FBCD03D0163CB3031DF4C87806067EB2B86EE2F,
	ChannelOption_get_StringValue_mCD57957A9C4DB03A4088FFD5787EBF8096E556E7,
	ChannelOption_Equals_m0F87F953555AD8CCF7A1DBD3D0A0BA8470EF0529,
	ChannelOption_Equals_mA7F9424B40DBB8AB5C69856CD7AF40A280B522A3,
	ChannelOption_GetHashCode_m200A7604CB94460E4F16C36265B1FCA73334B7C8,
	ChannelOption_op_Equality_m47568726F68D535B9313A0D31C3169FB391C7F2E,
	ChannelOption_op_Inequality_m80061062875E86DE0A0252DB1C5A214E77AA4810,
	ChannelOptions_CreateChannelArgs_mC40C6C2EA591E8E67671BD28F12ADE1330614BEF,
	DefaultCallInvoker__ctor_mDA34DAEBC400CBA5C3B2ED5C6D7F56AA0611ED5D,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	GrpcEnvironment_AddRef_m920F342D11E85BDE500FC180F1719BD61306D4B5,
	GrpcEnvironment_ReleaseAsync_m49A20DDA25E2DD19BBF0BA25D05BE7975B46F69E,
	GrpcEnvironment_GetRefCount_m4C6C4C4407177F9C75DFE55C6A5D2553E72A4E4F,
	GrpcEnvironment_RegisterChannel_mA9C064F4A8F12C731377BD4A962BFCDEC1FE7FF3,
	GrpcEnvironment_UnregisterChannel_m9BF5FBCAF1AFDE96C7A7BF22063ADB0298494DD7,
	GrpcEnvironment_RegisterServer_m69E100DF5B937C493B68CDF5172156DAAC6567D6,
	GrpcEnvironment_UnregisterServer_mAB58E1AB2C45F6A1CA1D2C006832F7951B0E9A7F,
	GrpcEnvironment_ShutdownChannelsAsync_mF4980CBF34B8546E4D1AC49374096AA2DAA92017,
	GrpcEnvironment_KillServersAsync_m34A091E727C308EFA5CB339EB076D0EAE7226091,
	GrpcEnvironment_get_Logger_m96D525AB9214000FFC1EB8FE1356F781DFC07C30,
	GrpcEnvironment_SetLogger_m40DA13C8DF1A3B836C5296164E931DFD43627EB3,
	GrpcEnvironment_SetThreadPoolSize_m243DF6365E57B0244D359688773C04B42B6532D3,
	GrpcEnvironment_SetCompletionQueueCount_mB247400BC2977867E31DC4E445631E6E035CB1BB,
	GrpcEnvironment_SetHandlerInlining_m232906D9F2FC637045354F8BE3B8DB7183690A19,
	GrpcEnvironment_SetBatchContextPoolParams_m43CE67C87287ECFA7054C6E5F317F919B3287734,
	GrpcEnvironment_SetRequestCallContextPoolParams_m950CEE462C947C10F04457F31792C7DEF820804B,
	GrpcEnvironment_add_ShuttingDown_m9F4B4153FC3B5AC4343737ED14233EF446A06247,
	GrpcEnvironment_remove_ShuttingDown_mC1A6D7AAC89DC92580D17C2707BC5CF7CDD067BD,
	GrpcEnvironment__ctor_m432165B0717F325BFAEE15EEF9924B0A5FF555BE,
	GrpcEnvironment_get_CompletionQueues_m838FA34856A62EEF37279028CB71DB5D262506BB,
	GrpcEnvironment_get_BatchContextPool_m4CF5F355402222CA2F97D82B42B0BF7EAC793330,
	GrpcEnvironment_get_RequestCallContextPool_m751D9F65446EC11801E4A4C202A061059F3417BB,
	GrpcEnvironment_get_IsAlive_m7EE8365CFC2356F9908443A2FA3E3243D08C460E,
	GrpcEnvironment_PickCompletionQueue_m37FDF90FEFF4AFF87C668C94142CB733945947D2,
	GrpcEnvironment_get_DebugStats_m412C3FC775F5D5FC10EDF8326794FFF011FEA6ED,
	GrpcEnvironment_GetCoreVersionString_mFAA398C9D899010F6C40495FED8D1E834CD81A91,
	GrpcEnvironment_GrpcNativeInit_m504C7D11D450437CF12C1F78C8066EAE663812EB,
	GrpcEnvironment_GrpcNativeShutdown_m0E5881A5D9CC4891CF9BE4E3B519FFE4C3C54D29,
	GrpcEnvironment_ShutdownAsync_m0C88E503590D0572F48E8D07FC7D98E7C2A9BFAF,
	GrpcEnvironment_GetThreadPoolSizeOrDefault_m2025B75AC6EF6E06094825F2AF05249F0F65DE62,
	GrpcEnvironment_GetCompletionQueueCountOrDefault_mE17E23011F6767136888385B59C410C14C57E238,
	GrpcEnvironment_get_IsNativeShutdownAllowed_m5331A7902F9708F574D9BB59BF3E224BAE5D328A,
	GrpcEnvironment__cctor_m60BFAF917745F70BE9A592A96D502B233BB71486,
	GrpcEnvironment_U3CShutdownAsyncU3Eb__60_0_m8E0C6D01D7C8A8F89247E8A3CDBF42E1151D4B5F,
	ShutdownHooks_Register_m127B4B760FA27DA6FE0C282B64F784F412B7E8B7,
	ShutdownHooks_HandleShutdown_m7DF0DE7B887A89BDF9CCED5193F9FCC741F8B2F4,
	ShutdownHooks__cctor_m4D17B62389A8705D7DAEC4BE05CA7B5C4B30B9C5,
	U3CU3Ec__cctor_mE7072C515A6F2D6C39D00657FBE75B993D40D710,
	U3CU3Ec__ctor_m6BDE1A7B20C80DF8485CA3A42326628502AD0522,
	U3CU3Ec_U3CRegisterU3Eb__2_0_mEADEB2004360CE9467C488222AC859A58CCE5279,
	U3CU3Ec_U3CRegisterU3Eb__2_1_mF4048A5350B216D63941C730DED26F267D414945,
	U3CReleaseAsyncU3Ed__26_MoveNext_mB114E8F17DC7C8F74FFE4D55BA40C92DBFB2559E,
	U3CReleaseAsyncU3Ed__26_SetStateMachine_mB59786286F81367206DEE3E3C06E63C4F3A282D1,
	U3CU3Ec__cctor_mC22F0445B0DEF4D4C0BDE1094507E63844551EDC,
	U3CU3Ec__ctor_mDAB14D206B29C49BEA3438FB8C807D1C7BEB87AA,
	U3CU3Ec_U3CShutdownChannelsAsyncU3Eb__32_0_m58B3C1E5679F238C61D8B01FD8B47EF4863CD725,
	U3CU3Ec_U3CKillServersAsyncU3Eb__33_0_mF318A03620F48CD41CD65D3C3FF3CDC3523E0EA0,
	U3CU3Ec_U3C_ctorU3Eb__45_0_m98D082DA038328E73DD3FF6D44085C867E11CC68,
	U3CU3Ec_U3C_ctorU3Eb__45_1_mF6C49D4641A636D0B2F24A2F3FA718404BCD5433,
	U3CShutdownAsyncU3Ed__60_MoveNext_m102E73DF46E0FDF83282D29CBEC96AC3586C4273,
	U3CShutdownAsyncU3Ed__60_SetStateMachine_m23B96629FBAA36989334E7997B14C41B175386F5,
	DefaultServerCallContext__ctor_m76F33C5DB85C1BA65B1F7BCC0D4D699E0CF5715F,
	DefaultServerCallContext_CreatePropagationTokenCore_m91FEFF3045CF1F7D67EB0E8760C58A84A3B7617B,
	DefaultServerCallContext_WriteResponseHeadersAsyncCore_mCD670525252CA811DDA62A616D3FBDFB1691811C,
	DefaultServerCallContext_get_MethodCore_mC48711586A4AB1643879505325857D13A8F73FAA,
	DefaultServerCallContext_get_HostCore_m80AEBB274A2A2B2805AF341D9634B6A0D4A54B13,
	DefaultServerCallContext_get_PeerCore_m32AE699C2C7356261E5777A8CD4156EFDBE2DE8B,
	DefaultServerCallContext_get_DeadlineCore_m8DB4B278E83E92F169189566782F736BAAE93805,
	DefaultServerCallContext_get_RequestHeadersCore_m9C6B07C4D910D0F9B7E89992A16F5D64635C7CB5,
	DefaultServerCallContext_get_CancellationTokenCore_mB6EE225A026B79BC86C041C0AB9AEA9AD919D29B,
	DefaultServerCallContext_get_ResponseTrailersCore_m62E6B3DAD474112C68B41E31F50931662BDD3338,
	DefaultServerCallContext_get_StatusCore_m1D8C24BFE5124EFC2961505A0124AF9A22ABD2C3,
	DefaultServerCallContext_set_StatusCore_mF5885382576D9883E5A5EB6377E405468EF32CFF,
	DefaultServerCallContext_get_WriteOptionsCore_m278875317B7FA81243C420B7304E16109A88F080,
	DefaultServerCallContext_set_WriteOptionsCore_m7862B2B777A4948BA4EE5B9F53BB2804B1E31387,
	DefaultServerCallContext_get_AuthContextCore_m3A446B542E54BF188A82EA16BB7E872638B292FA,
	DefaultServerCallContext_GetAuthContextEager_m208480DFAF87B476ED6C53B46D0EE24BB8BF5EF6,
	Server__ctor_mDB49A98ABA31292EFA47DB5A3CDA8629D4DECA15,
	Server__ctor_m41578E50BD81BA1167A961B0C0258FF5DBE5E69E,
	Server_get_Services_m7DB1D018189B952CA08C74503BBE89FFAA9B6499,
	Server_get_Ports_mA6126451CA0DD27C7452529A3623A58FB35F33A9,
	Server_get_ShutdownTask_m1E3744600E3A54D45F0BB10E032E7C33F4381B9F,
	Server_get_RequestCallTokensPerCompletionQueue_mF962A0D1E2B77BCDA8DE3083823F31754CBFAAF6,
	Server_set_RequestCallTokensPerCompletionQueue_m00711931122DB87CFEB0A3BBFE6812ECF4555C99,
	Server_Start_mAC92BF8457B0EE4BCE2A965DC5EFD4044AAE67A4,
	Server_ShutdownAsync_m1295E477325A53B52E721E69E4E9B66C406CCD71,
	Server_KillAsync_m51F978863C30C4BF4579A0429377F6BAD41212BD,
	Server_AddCallReference_m6012516727C5E40D23F3B959A75E0A3DB81FB8F9,
	Server_RemoveCallReference_m9A4E2CE4C5AC5DBDFE67C10769DD43F781B32A54,
	Server_ShutdownInternalAsync_m70A4D47FAE2D08FA17FAD40C53EDEA77A3A0E74B,
	Server_ShutdownCompleteOrEnvironmentDeadAsync_mA7DBA35AA462DE7513AB43311FE27B5F70A6A861,
	Server_AddServiceDefinitionInternal_m1DB7BE3130FF6A04455EBC45413E31CDB6E37876,
	Server_AddPortInternal_m0B3169861C41B54214811C0604B71F0992E7BF7B,
	Server_AllowOneRpc_m8DA827E5D5FB6A96AF79C6AB0F203B52AC11CF54,
	Server_CheckPortsBoundSuccessfully_mDCDCF1FD1D839B7BE128EC40B859524563D522B5,
	Server_DisposeHandle_m5427883F8BC0D113B225F5976BAB9D6674F62D68,
	Server_HandleCallAsync_m41F4B281197941A9B85BBE9D939EC2D1CAF4E8F0,
	Server_HandleNewServerRpc_mB2795B5B05624C4609D764477E41A9FE119994ED,
	Server_HandleServerShutdown_m2E311744591FA94B866F358381D1A9B544C6C1C5,
	Server__cctor_m4F08D4AD3A47D6344820E260A8CF3FF665AE63B9,
	ServiceDefinitionCollection__ctor_m684A5CF4E8ECEEC5706BF3EC09F81B5D46CC4266,
	ServiceDefinitionCollection_Add_m2047836B6BF41B143D5019FE865D96F8F0D5F5EF,
	ServiceDefinitionCollection_GetEnumerator_mB67F4BF59FF770665D0D34C9F13D76FE52826580,
	ServiceDefinitionCollection_System_Collections_IEnumerable_GetEnumerator_m62B4B595D2294FA045D1106F1B417DF288A7AD99,
	ServerPortCollection__ctor_m2A40F3BBBAF4B00460D67ABF1C75986869BDA06D,
	ServerPortCollection_Add_m935B1A2A9ADA4B6550CC6F54ED6656E2978F4722,
	ServerPortCollection_Add_m9E293F55169D0196BF9F8205B15AB93A0D7F8657,
	ServerPortCollection_GetEnumerator_mB8C7CFE4B41C78BB28E3F580FE8AB121D3C16273,
	ServerPortCollection_System_Collections_IEnumerable_GetEnumerator_mC30C951240D8B9D05856A1003F77B5BE47268F04,
	U3CShutdownInternalAsyncU3Ed__32_MoveNext_m6BA0A69B255BF9F5090F8BED5D48B578BFA4B179,
	U3CShutdownInternalAsyncU3Ed__32_SetStateMachine_mB9A057AF8A48659278D0AD3C71F3503993F41B4C,
	U3CShutdownCompleteOrEnvironmentDeadAsyncU3Ed__33_MoveNext_m805F395E5A0D26981215B281646B7C10014AB6FF,
	U3CShutdownCompleteOrEnvironmentDeadAsyncU3Ed__33_SetStateMachine_mF93B0F6537FE52E673DA4B46487A3CC5A7231CF6,
	U3CU3Ec__DisplayClass36_0__ctor_mD7D259CF4D729FFA09A59443950965214459391C,
	U3CU3Ec__DisplayClass36_0_U3CAllowOneRpcU3Eb__0_mF69C552DF18457A1491F6F3EEAD91C088AA16308,
	U3CU3Ec__cctor_mA7024F18D646B2466AFE48A718F83950D140A406,
	U3CU3Ec__ctor_mECA910A4C70E860510D6F22190946F5A3EB1C4F8,
	U3CU3Ec_U3CCheckPortsBoundSuccessfullyU3Eb__37_0_m58B50F159A90786D30028BEAEB91375943C196B1,
	U3CU3Ec_U3CHandleNewServerRpcU3Eb__40_0_m15DB6F2CF26333DD2853FF0091FB73C21BA104A0,
	U3CHandleCallAsyncU3Ed__39_MoveNext_m12FE72CB0D5A2ED66D995B5BD840E7111EA97C69,
	U3CHandleCallAsyncU3Ed__39_SetStateMachine_m86E7C92172C88BEB0C2F393560F9B9033CD9AE68,
	ServerCredentials_get_Insecure_mC7168C61277BB2A9490786BC9F2CBE909C3422CD,
	NULL,
	ServerCredentials__ctor_m7D139F5BA29507AB01F2A0DDB0232E4D594BA186,
	ServerCredentials__cctor_mF632DB15203AF79301022A9CA7BAC62DA10D53E3,
	InsecureServerCredentialsImpl_ToNativeCredentials_m35F0A178F02B68297D25869EBDFB9BBAFEA4C549,
	InsecureServerCredentialsImpl__ctor_mE69BF31601443E5FA7BC7B749D2BBC38EE7D2516,
	SslServerCredentials__ctor_m0C5CEEE8AF03C99AF5B327F259CC0957701EC52A,
	SslServerCredentials__ctor_mFDF9896C920CBDF4BF07A2A401EDC1268CBD67A6,
	SslServerCredentials__ctor_mCCA0DA94C2F99D8841E192E6F81DD2CDDA372923,
	SslServerCredentials_get_KeyCertificatePairs_mAF96E04EF89CEB00CA7BB24916FF5CFD9293C487,
	SslServerCredentials_get_RootCertificates_mB9A5479FC4D6DFF9684FBECE0F27E9C54A355887,
	SslServerCredentials_get_ForceClientAuthentication_m865DB418AA5741D5EBFD47F391982E29BB73801F,
	SslServerCredentials_get_ClientCertificateRequest_m546D0F006FD606089CB012F7E77B233127187333,
	SslServerCredentials_ToNativeCredentials_mF5ECAA74B56191D8D9EDFD8CBC24D2C135A37293,
	ServerPort__ctor_mF10AF887316A152E07D144A8F0B2E09A953D59EC,
	ServerPort__ctor_mB0DBD939EC701FCED05A6AB59203510320690044,
	ServerPort_get_Host_m5E18E55063855160AC85B79D4BCC1A6BE45B1C2E,
	ServerPort_get_Port_m636F1710F9EF9CAEDF239B12C342C05FA54EEC93,
	ServerPort_get_Credentials_m4606FE38B9B1BD44CFD66BE141817ACF92E91F80,
	ServerPort_get_BoundPort_m053CE459EA69DA7BD7E63B063EEEC0F23D46CA9C,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	BenchmarkUtil_RunBenchmark_m9E568706B4D657BA145745271D0808D01D35A035,
	TaskUtils_get_CompletedTask_m933C7974B69A94BC72205BF035CD8D394E8BA677,
	NULL,
	NULL,
	NULL,
	ProfilerEntry__ctor_mAEC39D440D3500DC3180118C7FF2AE81733864BD,
	ProfilerEntry_ToString_m25BB14397EF63D941AD2FB315D89691D3E43556F,
	ProfilerEntry_GetTypeAbbreviation_m14BF79AF1CE4EDF2D046EE9330F3F718DC5596A2,
	Profilers_ForCurrentThread_mDDD043F7BF1A4473AD7231BCC310AE8067237B34,
	Profilers_SetForCurrentThread_m2B302C7052E0078DFDE5F2B2A91CED358660B0AE,
	Profilers_NewScope_mA0A05B79272B0034E556D4613865DD1FFBFB5341,
	Profilers__cctor_mA95595211EA92C33F92E82414139E365C8D68D75,
	NopProfiler_Begin_mF9FDCD379BEEE757BF7F610FA2789C4550E46DA3,
	NopProfiler_End_mFF86BD8E003A3F5B93E4B7ED75C3D908A0653958,
	NopProfiler_Mark_m8C1C9290810158639CCD44E1969A217FA911F48F,
	NopProfiler__ctor_m5A2D1D51E7AFA13B5639F6599F3345CF8F50305F,
	BasicProfiler__ctor_m1A8F6C1CF38D6C2838B5F059B996CB1FA8EC351A,
	BasicProfiler__ctor_mF5D9860CA24C82B4CF6307F21E4FD999A6D87A3C,
	BasicProfiler_Begin_m471368A5BD49A67DC40E8F0B78AA03F8C539D3CC,
	BasicProfiler_End_mFEF08E57A10C91A153B35A0E0D0B7A98AF3547E7,
	BasicProfiler_Mark_mCD50CEEF840FC9A5E3BE9667741FF4E4CD641D20,
	BasicProfiler_Reset_m24C96D37CEC51132EE21B814A475F995F1841AF0,
	BasicProfiler_Dump_mD5533A16A48C776EB702A5EAEAD8BAE2647FC077,
	BasicProfiler_Dump_mB7DA260F78690D2D92988E5EB8C7DC7E096980D4,
	BasicProfiler_AddEntry_mFB7CB7BD663A24F2F1DA97BDD4453C9C1AB40AF0,
	ProfilerScope__ctor_m9A49CE3EE8C0BCFE524FF47A70EE79FFAE407E2D,
	ProfilerScope_Dispose_m37368A8F282FD7454A5DBB661ADD901D5BFB9475,
	ConsoleLogger__ctor_m5A13EAB3DD40CC0B209AA6786AD77A497F353A2A,
	ConsoleLogger__ctor_m1405B312A377CAD84262B9EA198B8CD178571CC0,
	NULL,
	U3CU3Ec__cctor_m4A5A83AAE210B29D40C80AA6E333403E39BF365B,
	U3CU3Ec__ctor_mEF4EE7AE52592866D50E4E5458FEE0656BD46612,
	U3CU3Ec_U3C_ctorU3Eb__1_0_m6D1A7AEB16DC1FFF08CAE774F272B036753B1E60,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	LogLevelFilterLogger__ctor_m34206D7FC0DBD317673202733C704C972F4DF56B,
	LogLevelFilterLogger__ctor_m1202657810BCB3229CC409923DF6FE51D4916E91,
	NULL,
	LogLevelFilterLogger_Debug_m79AC20421CE075C6B0ABD38DFD4647B6516C0C24,
	LogLevelFilterLogger_Debug_m70F842CFF00F6C4DF90A1E2300E5FBC50D96FC3C,
	LogLevelFilterLogger_Info_m58918E47B93B39C460BEB0A76505686619A2E5A6,
	LogLevelFilterLogger_Info_m80F10423FF929A53325447F681E89C2DAD47BE2D,
	LogLevelFilterLogger_Warning_m50EA4EE41EEE5FDE0124AEC578A8733A30C6D8BB,
	LogLevelFilterLogger_Warning_m295A576DA1A3339A42EA4A0BE4A6A295BC6532D9,
	LogLevelFilterLogger_Warning_mCAA98DE40311019D0DCD27AD8DDC180398DD306F,
	LogLevelFilterLogger_Error_m7593C755DCCA701BC8CEB0F9396950B3333C58FE,
	LogLevelFilterLogger_Error_mCA57DFC10C08763C9AE96E4E76CED5A58788040E,
	LogLevelFilterLogger_Error_mE5EF0DE5643350603E355CD2A0EABD469317927C,
	LogLevelFilterLogger_GetLogLevelFromEnvironment_m1146CFBA8E870A2B76433777331E80C9EA6A6DBD,
	NullLogger_Debug_mCD3B3D75A2F34B08AD42582DB2AC393C19254088,
	NullLogger_Debug_m1B98748B56113173643385DA396993D57CCF6E6C,
	NullLogger_Error_mD8471C7001C4D009C02738542C8B4D31999C64B2,
	NullLogger_Error_m6B11A975CECA5641B289AE3C880A920AEF8988DA,
	NullLogger_Error_m10C39A49420A10DF681EDEEAF0EC80F2402D83AD,
	NULL,
	NullLogger_Info_m86FBBF849E6144015C78E6C4BDE5205479FD0B2F,
	NullLogger_Info_m3C43D442F07825FEE29C048442C692569126F811,
	NullLogger_Warning_mFF6E06708B4240857A7A721B88A132913947A9DF,
	NullLogger_Warning_mD32616CF25F09AF25A847D401984E39D2D38E5C1,
	NullLogger_Warning_m090CAE29DB42CE7839F56F5C71178F97655C112D,
	NullLogger__ctor_m8AB15CDB291E5F61619BC21EAA72A4B37BAB9073,
	TextWriterLogger__ctor_m7EA198996BE78067F65218DE0ABA83BD4C1620BB,
	TextWriterLogger__ctor_m9A2A54D801340CA7C9A51B6D52441774EDDC1787,
	TextWriterLogger__ctor_m0BC50D1F37CA184D0FA71B81DB31D6F038087F2E,
	NULL,
	TextWriterLogger_Debug_mA1FCDBCA6463524F58FA777E3685EF171E11F575,
	TextWriterLogger_Debug_mAEC7F89332A58408BBA7BCC7524395743377C735,
	TextWriterLogger_Info_m11088A44F3459091E66BAC211F54D7F268357A2F,
	TextWriterLogger_Info_m82A7FEDFB0DC50FE188D734DB6791803E42512DA,
	TextWriterLogger_Warning_mD576AF52951D9BC7DE2C4A61C8B9320F4C825422,
	TextWriterLogger_Warning_m2ED34FDD0F348FAE60CC878DF72CA5FFA700A37B,
	TextWriterLogger_Warning_m590140F1C449148BE5B235B06ED7FDA9ECBDE0DC,
	TextWriterLogger_Error_m8170291B7CCF9C27EBF2B5CD36C4A025FB0577FB,
	TextWriterLogger_Error_m88ED096D2133CDEBB255F397204978C0BCF116FD,
	TextWriterLogger_Error_m79A2D1069E2344BE0D741467D154C141B807E388,
	TextWriterLogger_get_AssociatedType_m954FB7EAB37F4995315ED59ED962D7D18ACD4181,
	TextWriterLogger_Log_m9D03D16A552E118EA66F98E7277580404AA0C1B5,
	U3CU3Ec__DisplayClass4_0__ctor_m1008C3312C8F853B3347034A07B30C15BA87A009,
	U3CU3Ec__DisplayClass4_0_U3C_ctorU3Eb__0_m0E5546E985D86E452BED026AB95A357B676C72C2,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	AtomicCounter__ctor_mB59F75A9995C6EB1C8068DD1A172F435CEC78574,
	AtomicCounter_Increment_mC1DBB724EE3AE4D15AB04F7CFD7E34A37A5CEB42,
	AtomicCounter_IncrementIfNonzero_mC27377499F1CDA8430157125F25DD82EF60D8FA1,
	AtomicCounter_Decrement_m26FC7B346A10B0D42D377D1F9434FE46F857CEA0,
	AtomicCounter_get_Count_mC4B0E644F4B54880740CED38E34D3C592302424C,
	AuthContextSafeHandle__ctor_mDDF8431E0BED0F3C712C41770754A2F41B9EADB2,
	AuthContextSafeHandle_ToAuthContext_mCB95EB32475304E362AF12553D2DABF2DFF1E5F9,
	AuthContextSafeHandle_ReleaseHandle_m5E8B2996440F08E713B8C6F4B3008B2B3BDF46E2,
	AuthContextSafeHandle_PtrToAuthProperty_mC8E21D7FCDB50760BB8EF77A833CA1751C098980,
	AuthContextSafeHandle__cctor_m34DC11A6B337A7066B94B792767A9E3545F47E01,
	NULL,
	NULL,
	NULL,
	BatchContextSafeHandle__ctor_mB5E0087B0EF6A7DC12ADF0755012D9A90E7D12B7,
	BatchContextSafeHandle_Create_mCDF2F77A423DD402CE399695E50A77D5FF57EBC3,
	BatchContextSafeHandle_get_Handle_mE5B63ADA0D12DC32B16746D774A2DC9C747BEB72,
	BatchContextSafeHandle_SetReturnToPoolAction_mC7BB2DECFEF3EF1357F7CBBFF5C4C0DB1754A01E,
	BatchContextSafeHandle_SetCompletionCallback_m13DB8778447C7A51CADD82D29249CD65E6E012F4,
	BatchContextSafeHandle_GetReceivedInitialMetadata_mC181A87AF1FFDDA2D0D7D460DE9766C902A692C8,
	BatchContextSafeHandle_GetReceivedStatusOnClient_m9768E1E0872422E79981F32F836886C88D80223D,
	BatchContextSafeHandle_GetReceivedMessageReader_mD79B4750085987E40B482D4590335C529325A2F4,
	BatchContextSafeHandle_GetReceivedCloseOnServerCancelled_m77730231600F9E41CEBD47F308904BE77881FEC1,
	BatchContextSafeHandle_Recycle_m407B161B879ED079A121ECF17304808124572A7A,
	BatchContextSafeHandle_ReleaseHandle_m1A4247B5809EE4178EDEEC28C73F97D282D548BB,
	BatchContextSafeHandle_Grpc_Core_Internal_IOpCompletionCallback_OnComplete_m7081550B6BDCC7CD063C0951473FBA54E5C059C7,
	BatchContextSafeHandle_Grpc_Core_Internal_IBufferReader_get_TotalLength_m452CC816725318FACFA2575FF913B07BA5C018D5,
	BatchContextSafeHandle_Grpc_Core_Internal_IBufferReader_TryGetNextSlice_m3E1182C5A5DAD42FD10B6692147D645D7CAEDC74,
	BatchContextSafeHandle__cctor_mFA5A872511C2B726FE055882437DA34FBD451A36,
	CompletionCallbackData__ctor_mF1FBC5A0FB0D1375997220DA2577D1685997ED10,
	CompletionCallbackData_get_Callback_mE9D1D850F417C74757E750ABE4397CF353457368,
	CompletionCallbackData_get_State_m7847C8FEC9A38CB7D0D84F79770A94840EAB2C63,
	CallCredentialsSafeHandle__ctor_mCA696BC953128D083E65396234A6E1988436849B,
	CallCredentialsSafeHandle_CreateComposite_m0B4399022829DE19B52B4E5DA022700B85A1F4DE,
	CallCredentialsSafeHandle_ReleaseHandle_m5C0D393FDDC0A5EDE08B8448C89D0459D483B525,
	CallCredentialsSafeHandle__cctor_m6E380FB7CC692814B73E3F7F9EA15021536A21F8,
	CallErrorExtensions_CheckOk_m00F1A988C38E5EB9E04B1B3E0716E57B0819CE6D,
	CallOptionsExtensions_Normalize_mE16E0CA71F8144041FCA5E300F28BDF53E1FFFF7,
	CallSafeHandle__ctor_m83D2C4FA14E39AD36BC195F8CD2E0BA2E168D35D,
	CallSafeHandle_Initialize_m0105254DA6C1013D1DA94137DAAD23A6F3D4EE3F,
	CallSafeHandle_SetCredentials_m5EE6C59934F58CEBEA6CDE5B0C5A8EA43472964B,
	CallSafeHandle_StartUnary_m04674D06B2F52EA0F1B6847B9A44AF93EB1DF4D7,
	CallSafeHandle_StartUnary_mC4545A913C20892B09A23514116A0AE2EB4C5ED9,
	CallSafeHandle_StartClientStreaming_m7168144E4D007F33C6DEA6C5FC2E1169B641BA34,
	CallSafeHandle_StartServerStreaming_mCAE02EBDF004B7640FE0FE1495770F43DE25496B,
	CallSafeHandle_StartDuplexStreaming_mD53F8C29D51FC676AF8E5C74A1D0EFCA7ABB0356,
	CallSafeHandle_StartSendMessage_mD6FA93EA52A153B4CE940D0D8FD70F5C5B732F0F,
	CallSafeHandle_StartSendCloseFromClient_m47635CA7473866233CFD003C4229FFD43515A1AA,
	CallSafeHandle_StartSendStatusFromServer_m67D25DFA48F92A25D80D63EC42686127CAF87CE2,
	CallSafeHandle_StartReceiveMessage_m0FCC7AB4FA366615BF90FD6FD914345DCCECF40E,
	CallSafeHandle_StartReceiveInitialMetadata_m8A30FCCA22B48B7691633C41A07D07F4384D890B,
	CallSafeHandle_StartServerSide_m62FF925317EC84878E8E77405256EB6A7A26E686,
	CallSafeHandle_StartSendInitialMetadata_mB35B31CBB5C0D14B564B13F1ED18C515B499989E,
	CallSafeHandle_Cancel_mF822010E915DABD813739ECEA3C012B1CD558885,
	CallSafeHandle_CancelWithStatus_mE2E27B5C2AB9E96EB47DA6F72DB5CDA11D9A96ED,
	CallSafeHandle_GetPeer_m8CCADA17C3C121BDDE42827FCC10D9A6BD1996D4,
	CallSafeHandle_GetAuthContext_mC740570C41EACFB417AF96F8957814D4491115E8,
	CallSafeHandle_ReleaseHandle_mD7C2629249C9D7E8D79724ED0BEF9D0631034D8C,
	CallSafeHandle_GetFlags_m7040C283B6EF761A7B7BD340FABDDAA8B7917419,
	CallSafeHandle_CreateFake_mB368265AB4A8F4A4EDFCC35D548843E6F506F01D,
	CallSafeHandle__cctor_m09085D6862B20CAE070A86EBD6608FCF3E242856,
	U3CU3Ec__cctor_m81DD55164ABE8A4C2C746AEC56E277F40827A13A,
	U3CU3Ec__ctor_m1637E7EA025B77D71D1CFA4E00F48294932FB1B1,
	U3CU3Ec_U3C_cctorU3Eb__33_0_mEFAA50D897EC15A7D5EE7D615C007CE257928936,
	U3CU3Ec_U3C_cctorU3Eb__33_1_m3956F8ABBAB06A9B17FCF7B2D059E213FDEFDC58,
	U3CU3Ec_U3C_cctorU3Eb__33_2_mB8229BF5267DC630813231311D55C20BE28D4746,
	U3CU3Ec_U3C_cctorU3Eb__33_3_m7E96EDF697352F179E630B22980B99282A8D638A,
	U3CU3Ec_U3C_cctorU3Eb__33_4_mCA33FD3348E15701E0EEA0AE8DB24E02CDAE5ADE,
	U3CU3Ec_U3C_cctorU3Eb__33_5_m7D8C87DC00E5EBD26ABDA8F2E895779C0B5CE460,
	U3CU3Ec_U3C_cctorU3Eb__33_6_m44C9643FD41B4472E249FD48C3AF28AB850C5E7C,
	ChannelArgsSafeHandle__ctor_m806E42DBD18FE5DFC73026CDD9D2365B75B7982E,
	ChannelArgsSafeHandle_CreateNull_m78EEFE08AEE7C9FAC6EA3BD69E2F6D53ACFECDB6,
	ChannelArgsSafeHandle_Create_m6FDDD46A22E96B12C1CB186490E7CADE0F34D6A1,
	ChannelArgsSafeHandle_SetString_m31ADFB94DAEB47F7298C50A4BC3F7F2CC0BCA830,
	ChannelArgsSafeHandle_SetInteger_m787375F98E55184740121C54054569F0C59BE0DB,
	ChannelArgsSafeHandle_ReleaseHandle_mC80132780D829401A0B1141A0C51A52D5A23DF9C,
	ChannelArgsSafeHandle__cctor_m1902AB84A11BFD1309A7B74AE97567440AD65C05,
	ChannelCredentialsSafeHandle__ctor_m22B1465BA0CFC1CF609743D3E9DF4217155740D2,
	ChannelCredentialsSafeHandle_CreateNullCredentials_mFEFBCCEB6BF2F9980C9EE70AD7C4F92B3DCD3A38,
	ChannelCredentialsSafeHandle_CreateSslCredentials_m3019FB8C77A6B3FBE50F17DF692A58EF655078D7,
	ChannelCredentialsSafeHandle_CreateComposite_m50D7D4BC6CCC31F6ACAD572D27684829FA38C5E3,
	ChannelCredentialsSafeHandle_ReleaseHandle_m52C2D91FB6B873D7B07590AB5E391BBC32648208,
	ChannelCredentialsSafeHandle__cctor_m59BCC38EE6ED5AD9329B4A989E2FF05B24799EE6,
	ChannelSafeHandle__ctor_m748FDCF1956BFED97C7486C022917BD140C19457,
	ChannelSafeHandle_CreateInsecure_m75BEB17C81A131118320FD8F966A736C0F19004C,
	ChannelSafeHandle_CreateSecure_mD16F4CE2A193A8D5D4127C8941B935501DDE4F43,
	ChannelSafeHandle_CreateCall_m6CBF53F853E4D0C63997E3D11EFCAB20053EB51A,
	ChannelSafeHandle_CheckConnectivityState_mD50E178FE2BB354B474DA139B8FCD467A9B867F6,
	ChannelSafeHandle_WatchConnectivityState_m0E344BD19C03047F93B6720E711593443C5427E8,
	ChannelSafeHandle_GetTarget_m5E3546F8AE58E38DBAE2EB6C1E004584E09609FF,
	ChannelSafeHandle_ReleaseHandle_m6310FED59896D88CBCAB902618923C414CD48044,
	ChannelSafeHandle__cctor_mC1FA857C3F6904AE9F3A5806A162F78FE2E8BFE6,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	ClientSideStatus__ctor_mD3D8F5CD8EEBC7778D9296EA098F9055799B7277,
	ClientSideStatus_get_Status_m3B8B7A5695BEC97FFE287DE9ECA81DB6FD198D05,
	ClientSideStatus_get_Trailers_m6F448A155F2D82A4F35E4DBF65DE0164A597EDA6,
	CommonPlatformDetection_GetOSKind_mEBA2C90300F862A2ADBAD1629742E2CDA262AD36,
	CommonPlatformDetection_GetProcessArchitecture_m7390A161AFC6853439A93825A1EFB01B183712CB,
	CommonPlatformDetection_uname_m9FAB53F17753100615DD71E302C1F07A1A79D273,
	CommonPlatformDetection_GetUname_mED2C10036F585AFFCB55709DF7033F6895907B59,
	CompletionQueueEvent_get_NativeSize_m592EA13B36F8D6FC594B2E7F1C3709F618803DDA,
	CompletionQueueEvent__cctor_m4DC4FFBAE370E0DB294F4CDB2F491C8E19D08DA7,
	CompletionQueueSafeHandle__ctor_m5A84C1876FEB10756EF06A4E958B208DDCE23D48,
	CompletionQueueSafeHandle_CreateSync_m59FB6D4252D7C4365EEE136B49EF22EE8E0226E7,
	CompletionQueueSafeHandle_CreateAsync_mC304C63112972875A58AE69D63758D1446EEA5C1,
	CompletionQueueSafeHandle_Next_mA6DF243A9FB872EEBB006066DC6778DCC78587A3,
	CompletionQueueSafeHandle_Pluck_m7B71A4F5EE3578EC3FA1557A6C3BD954752BAD6D,
	CompletionQueueSafeHandle_NewScope_m443A008B5B4320332C147651952FB8BE7FA6A17E,
	CompletionQueueSafeHandle_Shutdown_mEDFD3D47778F1C2E2BA049BFC7CD166112C3548E,
	CompletionQueueSafeHandle_get_CompletionRegistry_m4FA73CF5AF68A4C1ED914E1134AD75E852F4FD9F,
	CompletionQueueSafeHandle_ReleaseHandle_mBD95586583385517D9A30ECE2BA61076CD34B2D0,
	CompletionQueueSafeHandle_DecrementShutdownRefcount_m21553711004C8839EECDB22D08074170E9A00953,
	CompletionQueueSafeHandle_BeginOp_m770FC4AA4A51EA6D3A68330AE9520B738F709882,
	CompletionQueueSafeHandle_EndOp_mAF947F537CF33A453B6E53A79CAB6918D2A29419,
	CompletionQueueSafeHandle__cctor_m93580560C8A2A7A8FC43CCD4C30FA66DFC4B5064,
	UsageScope__ctor_m3CFA62BE60021B45B003A1E1CA8A678DF55E06F3,
	UsageScope_Dispose_m349ED08E2339F12E8C2B5003E08F5F0BE2E9BE0D,
	BatchCompletionDelegate__ctor_mF106772F2B64FD18D751215C19FAC048613BCD05,
	BatchCompletionDelegate_Invoke_m7DF7FD8D4B5C9F673D1779C4CBCE791C6DF254FB,
	BatchCompletionDelegate_BeginInvoke_m722036A1C26550E88FFC129A91575D62A7B93AF5,
	BatchCompletionDelegate_EndInvoke_m93CA220DFE777E33923E0B8D78B42C468C1C54FE,
	RequestCallCompletionDelegate__ctor_m0E64B907556745BC31FDF18B8C682E9836B84C07,
	RequestCallCompletionDelegate_Invoke_m90B2C1EA10F56D52729641928A625091E759876A,
	RequestCallCompletionDelegate_BeginInvoke_m4207654B7F23AC89EFACD0C9D5328FF6F2284721,
	RequestCallCompletionDelegate_EndInvoke_m2893B001FEB50B6BBDFFBCFE8DA844F4813FD03C,
	CompletionRegistry__ctor_mC01788D6EDF5733C1F35CD3CCFBAA171466BEC1B,
	CompletionRegistry_Register_m9A1F42BEF9AD4D4B54D046DD72E7F5D57B186162,
	CompletionRegistry_RegisterBatchCompletion_mD747C56FEE7DDF057AB4F13832E2BE8B268C9B86,
	CompletionRegistry_RegisterRequestCallCompletion_mAEDA7BFE4107841032C6E319BDCAB42BA9AE0520,
	CompletionRegistry_Extract_m4438695DE2FF3994FB5D15726A2636F115B8FE3B,
	CompletionRegistry_get_LastRegisteredKey_mE0EB75DBF9C72E3030E98B0351BF6BE787967C70,
	CompletionRegistry__cctor_m58CFFB3D37F16D415695937D578149CC1F627D7E,
	IntPtrComparer_Equals_mBF72A9EE62B5544A1180E3ADCA440E3F0765B304,
	IntPtrComparer_GetHashCode_mCB4E6163F8EA2402E6431D7A27CC9EAD15E56003,
	IntPtrComparer__ctor_m5048C4CF16C30054C9C796767BF1F01FEBED4B9B,
	ContextPropagationTokenImpl__ctor_m4965C6EAAAA0172B797CDED33C5738C47CB0EBEB,
	ContextPropagationTokenImpl_get_ParentCall_mF9B40A7192C3A23E0E4DAC14C0E8B06C501FAC0C,
	ContextPropagationTokenImpl_get_ParentDeadline_m4D8FE7C1720A92717E65C91EB9AF57C0F02C677B,
	ContextPropagationTokenImpl_get_ParentCancellationToken_m5F316530DF49F7C9EB7F62D632C5F26F3FCBFF1C,
	ContextPropagationTokenImpl_get_Options_m6668D4A98A0F5CB6CCB4A5E8058458FED68E130A,
	ContextPropagationTokenExtensions_AsImplOrNull_m5911F5EC8859CF68C39903DF341B43AB0CB4DDB3,
	CoreErrorDetailException__ctor_m28B8365A04E7E493D82652961560533D0DE3E7D5,
	CStringSafeHandle__ctor_mBD9927ABE5E20C3F3DAE74430ACF8A270221BC17,
	CStringSafeHandle_GetValue_m1D278B3BF7864290FA0DB6FC304A7BFA63203635,
	CStringSafeHandle_ReleaseHandle_m6850FB9650DFEB18767301D4FAA572049AF183F7,
	CStringSafeHandle__cctor_m38B865929A68F48027E6C9F5EBEF109B7278AEE3,
	DebugStats_CheckOK_m3AA4EDEBFDA45B1E6DBE0D32F1CE05BF5E5D6206,
	DebugStats_DebugWarning_mA4408EFB3841F4E7C341145290987A5EFAC01D1E,
	DebugStats__ctor_mAAEBD7D39AB0B9A935DA803324CED0BA4D8A4682,
	DefaultCallCredentialsConfigurator_get_NativeCredentials_mB90C00BC71BE05BBCE1CF0E9FFDA02D5894347A6,
	DefaultCallCredentialsConfigurator_SetAsyncAuthInterceptorCredentials_mAEC9E74949EBD06647568F3950E73AC4BCD1AB82,
	DefaultCallCredentialsConfigurator_SetCompositeCredentials_m74443F8D77A911D2A2D73BA1F38BEF2E2592AA02,
	DefaultCallCredentialsConfigurator_CompositeToNativeRecursive_m402B165BB3ECB49643C46ACCCBF573035C712ED2,
	DefaultCallCredentialsConfigurator__ctor_mB2078727CD16C1DB8CF105F007D8CFEB135E7526,
	CallCredentialsExtensions_ToNativeCredentials_m35B462FD8BE2BB6C50DEB03CDA5249336FDADC9B,
	DefaultChannelCredentialsConfigurator_get_NativeCredentials_mE089B36B5582D855C6E5AB4D3E5FE02DE0A0CAC0,
	DefaultChannelCredentialsConfigurator_SetInsecureCredentials_mE15A46A873EFD9E342DF7AEF4825822267A2B005,
	DefaultChannelCredentialsConfigurator_SetSslCredentials_m74A804A13E98A0A1678B3369FA2F2F388C80FB96,
	DefaultChannelCredentialsConfigurator_SetCompositeCredentials_m6A1994E91E3321A44FBE961B71A7D6E79253C37E,
	DefaultChannelCredentialsConfigurator_CreateNativeSslCredentials_m6AFDEAE643B59DA30687E3E667432824AE6BB494,
	DefaultChannelCredentialsConfigurator_CreateNativeCompositeCredentials_m56D7B4F05465EB411D294083034FEC062BBFBB8F,
	DefaultChannelCredentialsConfigurator_GetOrCreateNativeCredentials_m970C5790669A1D18A53CB369A0461689C89D1A8C,
	DefaultChannelCredentialsConfigurator__ctor_mBC04E7D4351ADF20A62B725D1B434EC5BF2A5902,
	DefaultChannelCredentialsConfigurator__cctor_mF619632B4E9E3C7BD94C2AF28E216010BC142788,
	VerifyPeerCallbackRegistration__ctor_m42BD369DD7238374134C37C94D330A5488827B4F,
	VerifyPeerCallbackRegistration_get_CallbackRegistration_m15A104C3EF153C15FB6313FCC88012009404D643,
	VerifyPeerCallbackRegistration_HandleUniversalCallback_mBD73897BDB111218EB25DA868420A76E1B63B702,
	VerifyPeerCallbackRegistration_VerifyPeerCallbackHandler_m159D402367B734736AA80A2ED7773785C604E32C,
	U3CU3Ec__DisplayClass8_0__ctor_m244618FCC966F26479493D08FCBABA910A5D8DE0,
	U3CU3Ec__DisplayClass8_0_U3CSetSslCredentialsU3Eb__0_m3D0D6DBA5F818153DED8DC0AA91F840757F5CA37,
	U3CU3Ec__DisplayClass9_0__ctor_m1E8ACEF5DAC1915FA4ED0615ED7556DFCDA919B3,
	U3CU3Ec__DisplayClass9_0_U3CSetCompositeCredentialsU3Eb__0_m9EEDCE9976514AA7CB431F8240965B7F379E2A7B,
	ChannelCredentialsExtensions_ToNativeCredentials_m836B7B19DC901BB5BDE78E69AB545168D799ABF3,
	DefaultDeserializationContext__ctor_mEBDD259883DAB17F6283A2CAF83994E8D3849425,
	DefaultDeserializationContext_get_PayloadLength_m476064D32418EE41842B2AD5D1A89D7F84BD5BC9,
	DefaultDeserializationContext_PayloadAsNewBuffer_m6B69CA9AEE46815BA9B22983D7DB38625C066E0F,
	DefaultDeserializationContext_PayloadAsReadOnlySequence_m497BE8ECFC1DC0030C428F0221D9E8AEA7E210D7,
	DefaultDeserializationContext_Initialize_m927F2E9FAF003500FB6E321E37FAC75C6AFD9C43,
	DefaultDeserializationContext_Reset_m238EFD1170986CD2FFC63BCE1A8E56BA41D61C17,
	DefaultDeserializationContext_GetInitializedThreadLocal_m01C72F8D3008E53D97BD83BDBCC5B87D27BC747F,
	DefaultDeserializationContext__cctor_m7FBCD9D55AE2220B8D3FB08A73731D7B44D9A071,
	U3CU3Ec__cctor_m20372300B13E0DF8D98E65FFE04C0D2C0D40020C,
	U3CU3Ec__ctor_m5D3D4E43C59145DEBCD57937669E506136BEAC86,
	U3CU3Ec_U3C_cctorU3Eb__12_0_mBCC3D563F0C6B4CA8000CB25B20BE4AD9DE37EF2,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	DefaultSerializationContext__ctor_mDF45085D0456C29A00B0686B1779A3FA71632D75,
	DefaultSerializationContext_Complete_m75530A277C04FD457E120BD9D136E13135D0D598,
	DefaultSerializationContext_GetBufferWriter_mB82B0338ED67651BE198C48841CCE9B3BCCB9D5C,
	DefaultSerializationContext_SetPayloadLength_mC60EC889FDB13B141016DDCBA5A1C23F9421FB87,
	DefaultSerializationContext_Complete_mF06B7F3F60B594E6B7A543AEF355B371B9FE5B14,
	DefaultSerializationContext_GetPayload_m3F2A7FD8B27A525A5495995D751806199EEE2D80,
	DefaultSerializationContext_Reset_m179B872AE03D886EF46B8681213462660D4E45AC,
	DefaultSerializationContext_GetInitializedThreadLocalScope_mAD110DC5277112C0F95B62873A4B8D0C5E07B6B5,
	DefaultSerializationContext__cctor_m397BA65A6E995846BE7F3898FABE08DD167A6036,
	UsageScope__ctor_m3C3C70BDF1E60BC791D77FADA1BFE5B879C9E468,
	UsageScope_get_Context_m1FA6D8F23AC55A9DDC3186829249DE8858E53977,
	UsageScope_Dispose_m259E60CEC25C31A8EF43A511890B07B427547DDC,
	U3CU3Ec__cctor_m3B54B5F2975C1D819000B548237784BBA341DC7F,
	U3CU3Ec__ctor_mC81D3BC358C40A2A7D688CB4DF255E1ECE4AC301,
	U3CU3Ec_U3C_cctorU3Eb__12_0_m40B667970B1C9CF27091AD807F4B22827FCC955F,
	DefaultSslRootsOverride_Override_mCB55FE637D286E610C61CA6F33A7F6BDDB68ECA5,
	DefaultSslRootsOverride__cctor_m64386ACA016B9FBBB03BFD14B4A828ACA0793AD2,
	GrpcThreadPool__ctor_m67DF9B8223DDA35921125E1EACFEAFA3FDE114FE,
	GrpcThreadPool_Start_m435A8BEE19A57D450FEC0A81D4D98F01CF1C95F8,
	GrpcThreadPool_StopAsync_mFB1A7735DD53ACBBF0CC2BDD7F6598904ADDEF0D,
	GrpcThreadPool_get_IsAlive_mF6ACA5D069ACA744855046D5F276BEED38C2BBA0,
	GrpcThreadPool_get_CompletionQueues_mD574D6BE7F6C710CA39F0F1B37A4078F46DF53C7,
	GrpcThreadPool_CreateAndStartThread_mDE948CD645057FC428F7C7EB079B9D6019B786AC,
	GrpcThreadPool_RunHandlerLoop_mA3D17A716AE7D4C82B804C06EA30A0671809875A,
	GrpcThreadPool_CreateCompletionQueueList_m32C4E3A999B41E2355CEB0B07292A9180E0B473D,
	GrpcThreadPool_RunCompletionQueueEventCallback_mBE27B6267B2D3980B32E3CC686101B9546B4C0BF,
	GrpcThreadPool__cctor_m79326ED4FCB7F4955B936E5778E935AF15D739AA,
	GrpcThreadPool_U3C_ctorU3Eb__15_0_m90E2F006ED067869DD7C0BF6E744C43AD8E74CC4,
	GrpcThreadPool_U3C_ctorU3Eb__15_1_mFDBF47B1D3CDDB08B5C2C76AB2677F380E225807,
	GrpcThreadPool_U3CStopAsyncU3Eb__17_0_m2738B79A90D76699546F501489338C500A72C9FB,
	U3CU3Ec__cctor_m7610D37CEA24DFD253AE228C2E9D5CD0D21E392D,
	U3CU3Ec__ctor_m8401DD752AD03D315F76BD71E9DDA57795B20975,
	U3CU3Ec_U3Cget_IsAliveU3Eb__19_0_m109E4D00A3F2CE7C62F4E0E00FD9945F3E09BE1F,
	U3CU3Ec__DisplayClass22_0__ctor_m6E416F688BC1D2707C1309703C1A1ED71CACFA0F,
	U3CU3Ec__DisplayClass22_0_U3CCreateAndStartThreadU3Eb__0_m1EAFF883DAFA8BCA2C294B3664B5AFC27B02CB7B,
	U3CU3Ec__DisplayClass24_0__ctor_m2AFAE5B1B3615BFF5CA7FF32611F672B2CF120D2,
	U3CU3Ec__DisplayClass24_0_U3CCreateCompletionQueueListU3Eb__0_m541BBE0DF65EA808E5295ABCAC7A376C6B986F16,
	U3CU3Ec__DisplayClass24_0_U3CCreateCompletionQueueListU3Eb__1_mF5816EB9AF60EC286C176780F5E206D129803865,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	MarshalUtils_PtrToStringUTF8_m63A1F40ADE9C701B2E425C6730134EA1319412CB,
	MarshalUtils_GetBytesUTF8_m0CDB5BDAD4347C3B9688D7E318D172A8B86D181E,
	MarshalUtils_GetMaxByteCountUTF8_mA6EF73AE334A184FF48EA33791C7D134BD3C9DD9,
	MarshalUtils_GetByteCountUTF8_m88976F3A04B957F83F628A7D08018CD0A0D94896,
	MarshalUtils__cctor_m5225B8AE02F89C5C1A5A10253A3AE90D4D408ADA,
	MetadataArraySafeHandle__ctor_mB255B6AD799B4896D76556FD4BFA08C1C0493683,
	MetadataArraySafeHandle_Create_m95D2F899A233A80977EBD32204D6B33AEAF6D840,
	MetadataArraySafeHandle_ReadMetadataFromPtrUnsafe_m7362DF0700D86B05DBE11621925082F7D000000C,
	MetadataArraySafeHandle_get_Handle_mE5D59A3DCB1FA643595A3D45A5E60723A397CACB,
	MetadataArraySafeHandle_ReleaseHandle_mCF6BE9E15D054104C854D7B6710DFA8F6064BD38,
	MetadataArraySafeHandle__cctor_mE3A79F72617FFECD482D07C89D677AF5CA51FD8B,
	MonoPInvokeCallbackAttribute__ctor_mA684132905EE5F1391B7B717F598B08856B3F453,
	MonoPInvokeCallbackAttribute_get_Type_m394A567C42B5DF112A653D1F6189098ACA1DA5E8,
	MonoPInvokeCallbackAttribute_set_Type_mDFBCAD32FAFB6F753AE54D83B10999446EC3DF45,
	UniversalNativeCallback__ctor_mD0A97D0551AE24ED9E9C09F589F82CE7324D2F94,
	UniversalNativeCallback_Invoke_mD9641639DF44DDE95637347D87428AE382C5CEFF,
	UniversalNativeCallback_BeginInvoke_m97441F316E128417F89AA1A9C099D41B5FDC530A,
	UniversalNativeCallback_EndInvoke_m53B9863FF6280DB816D1B3819EB33AB9225FE8BB,
	NativeCallbackDispatcherCallback__ctor_m00E072611DE70BB27700ED15BF4AD0A68EC17DF4,
	NativeCallbackDispatcherCallback_Invoke_m8EC3545427DAAB98EBBF36193F202E44FC5F4BC7,
	NativeCallbackDispatcherCallback_BeginInvoke_mFEAFF24CD227F0B36224549363CB81563BB4DA64,
	NativeCallbackDispatcherCallback_EndInvoke_m9F61BB5B03E84541DCC3378B28C654BFAB86B292,
	NativeCallbackDispatcher_Init_m89237127CB049C40B5FAA7C3A7B9CF71BF5C1E90,
	NativeCallbackDispatcher_RegisterCallback_m64728E103A471BB5A1167FC690DC841AF593410C,
	NativeCallbackDispatcher_HandleDispatcherCallback_mF4899474F5F4DB052FE06AF3F349726F6C08102E,
	NativeCallbackDispatcher__ctor_m323191ED8B80020B5FB88154A47070848F9FD533,
	NativeCallbackDispatcher__cctor_m625A6DC33601A5821A7262D04F99FF74FC16AB9F,
	NativeCallbackRegistration__ctor_m4A143AA11614DB827DF2CA86061A9E3201A4D083,
	NativeCallbackRegistration_get_Tag_m38AFBF50DBC4468BD558FC6B49A24832C38C5AF1,
	NativeCallbackRegistration_Dispose_mC41A72A585C82F92672CE85DC74BC7DF6D43D8DC,
	NativeExtension__ctor_m55A63D1FFBA543478FFF18D93A1D25B9D909A1AA,
	NativeExtension_Get_m70DF065FC9D6A25F40742F9B03C9E63BE1543ED5,
	NativeExtension_get_NativeMethods_mE1E311761BBED051E09E518F46AD098062998839,
	NativeExtension_LoadNativeMethodsUsingExplicitLoad_mF1403F614C7E0AC9322384EA8647440A45EEA68A,
	NativeExtension_LoadNativeMethodsUsingDllImports_mF30C439DA8970B0031E1E2B2FF4ECAE7D34B81B2,
	NativeExtension_LoadNativeMethods_mA052501DDD8983BE29D249DFA9690D03985762F2,
	NativeExtension_LoadNativeMethodsUnity_m186D341D78E4437B8665A7023FF7E41353046E7B,
	NativeExtension_LoadNativeMethodsXamarin_mD5D871A1F81F509EF8A87D4BEACF7BBA7D4DBBB4,
	NativeExtension_GetAssemblyDirectory_m5C944DA33493C62FB62EF433658D13CB52B36F53,
	NativeExtension_IsNet5SingleFileApp_m30527EB5EA8CA0C6AF15161DCC52FB37FE2CF958,
	NativeExtension_IsFileUri_mA3EF4956006532BCE5F90E0F9A34EEDADDFF0360,
	NativeExtension_GetRuntimeIdString_m3EF8CADDAB35DAC66B59AD45EC0CDF983FD5381C,
	NativeExtension_GetArchitectureString_m58B41756AC3EF8285515F0EE165F98ADFF1D0613,
	NativeExtension_GetNativeLibraryFilename_mB2F5AE7FCDD9A0B3164BBA18EFE4BD64D797FA11,
	NativeExtension__cctor_mF2D470C845FE9A71F6A8F5F88DC5F1864990C079,
	GprLogDelegate__ctor_mBCD1C608A8287FF8793A122A0FE1B402E32360E9,
	GprLogDelegate_Invoke_mB8A31D48196275E0864E35EB35B64D08A45A2FF6,
	GprLogDelegate_BeginInvoke_m5370FE92494541926EE2B58A7268FD47AA816BC4,
	GprLogDelegate_EndInvoke_m07E54BFE77AE5AA9B693B040A8762BA4D805E274,
	NativeLogRedirector_Redirect_m0ED2983977B3591E00FD987E197B9FEF5984DF5B,
	NativeLogRedirector_HandleWrite_m95766B386578549BD1126A99659E02C302D40267,
	NativeLogRedirector__cctor_mACD64D7F06E71E9EE25F7738DAF1A28B14770F38,
	NativeMetadataCredentialsPlugin__ctor_m0335B650FEE0AA4F24F5D3D61D6971721A3B55ED,
	NativeMetadataCredentialsPlugin_get_Credentials_m99D4CE1805F7749FA1E05AFDAFA3DFF0038C329B,
	NativeMetadataCredentialsPlugin_HandleUniversalCallback_m300F2CC4D79DE61E184AD2BD9AAFCCC6DF09FFF2,
	NativeMetadataCredentialsPlugin_NativeMetadataInterceptorHandler_mB606889AA8DB49FEF9527C38A44159AAAC59BD25,
	NativeMetadataCredentialsPlugin_GetMetadataAsync_m9C3EFBBAC80E7C757884FAE4C9D7F5898AF83E08,
	NativeMetadataCredentialsPlugin__cctor_m0B85F7E6CB017519C7C265864E8F3E48C185EFB9,
	U3CU3Ec__DisplayClass11_0__ctor_mD6099B4676C117D3A401F0832808D7FB1500B212,
	U3CU3Ec__DisplayClass11_0_U3CNativeMetadataInterceptorHandlerU3Eb__0_mD9AA2BFB988F2C181B93666A4082534C3BE4811B,
	U3CU3CNativeMetadataInterceptorHandlerU3Eb__0U3Ed_MoveNext_m128CD090C01DA7F3F84A5E98AD3058CD8BDA99C5,
	U3CU3CNativeMetadataInterceptorHandlerU3Eb__0U3Ed_SetStateMachine_m34553CA5709B0917286E53A524EB1D58E8F633E0,
	U3CGetMetadataAsyncU3Ed__12_MoveNext_mFB5D53C73AC5AD8518488967C9DB7B65A2A4FD32,
	U3CGetMetadataAsyncU3Ed__12_SetStateMachine_mBB81F11716F31F15A11D1F0051392F6E5CEAB0FE,
	NativeCallbackTestDelegate__ctor_m127EF31E4C9CE1CD6624B0B01C9DBB60373C0E91,
	NativeCallbackTestDelegate_Invoke_mA2B16E8C5CC2119E8CA6BD889F59EBDAD16D34AC,
	NativeCallbackTestDelegate_BeginInvoke_mB2B6249372D9F84C274D0A4EC92B896AD8F795C7,
	NativeCallbackTestDelegate_EndInvoke_m06154103A5D63201B212F6549F1A03DD9BA524F7,
	NativeMethods_Get_m5796015C16701910D51402D497439BD210A09362,
	NULL,
	NativeMethods_RemoveStringSuffix_m160C3491DE533D272DB3F442151057E392CA556F,
	NativeMethods__ctor_m90FEB04F877A5479DAC02381E19E756A8813E1B1,
	NativeMethods__ctor_m583F22EBE1F27446130D842EB5CB96183C235F4D,
	NativeMethods__ctor_mDAE96586E0854FF01E91B4C5E76F8F00C2D75AC3,
	NativeMethods__ctor_m9B93AB6D7DCAA43D8944AE12B704BCE24FAAEB7B,
	NativeMethods__ctor_m6CABC3DEAA22FCFF6B2A0D7A744662EFD69B8A1D,
	NativeMethods__ctor_mA306020DB7FAAFC579963CB53997DDD25E6DB33E,
	NativeMethods__ctor_m8A685C66F094CDB0667792E2AFFD3D458429A29B,
	NativeMethods__ctor_m87800F71D4562F907A361A12EFDD38113B0E93D7,
	Delegates__ctor_mC3133EF9DE299AC4E41D54D124B2CCE2FFFCCFCE,
	grpcsharp_init_delegate__ctor_mEA037FE8B5204B27797704A6118B15A193B8777F,
	grpcsharp_init_delegate_Invoke_m742C0E641BB87E8A03089C0FA98C3A220F1774A4,
	grpcsharp_init_delegate_BeginInvoke_m249A638FF4FAF7B3AC439FE162A032D096F9AAD7,
	grpcsharp_init_delegate_EndInvoke_mEC506F603D962AC8B36FAC9C36BC4D69D5027494,
	grpcsharp_shutdown_delegate__ctor_m2036CE7AEB9190FC7126E70E733EC803999AFFD3,
	grpcsharp_shutdown_delegate_Invoke_m90D094CCE5A699FF1D3584979F0269B2F5FFDC24,
	grpcsharp_shutdown_delegate_BeginInvoke_m568BCE3C473F123522F42757F080EF42B188C7FD,
	grpcsharp_shutdown_delegate_EndInvoke_m7F75E88194F20061BDCDF222CB83F6685967E42F,
	grpcsharp_version_string_delegate__ctor_mA8CE247ECFFC0831FE4C8E150DAD34628CF9CA64,
	grpcsharp_version_string_delegate_Invoke_mE07F01439E33C0CDC4AD26EB6166353B14C39409,
	grpcsharp_version_string_delegate_BeginInvoke_m033F2F7EE905BB45EBABEDE485E2A1CA0B09EAC3,
	grpcsharp_version_string_delegate_EndInvoke_m7D378C7AA16AD2A62EAB6672364C305FA2788468,
	grpcsharp_batch_context_create_delegate__ctor_m2FF3F4A205182649CE905AA07749462E0348958B,
	grpcsharp_batch_context_create_delegate_Invoke_mB19166BE7C4582B6ECA44115A1686C46417B120F,
	grpcsharp_batch_context_create_delegate_BeginInvoke_m5B3F4B35D6582D051A895A7F2502EAEDB6540128,
	grpcsharp_batch_context_create_delegate_EndInvoke_mD45DD8BE83C1052F9ABD4F7AD33053E64D708F5C,
	grpcsharp_batch_context_recv_initial_metadata_delegate__ctor_mEC38758709702E2C3DDAC2F685B4A66D0AE953A4,
	grpcsharp_batch_context_recv_initial_metadata_delegate_Invoke_m8587666F9163A107A219DB2D77592E2CCE8D9136,
	grpcsharp_batch_context_recv_initial_metadata_delegate_BeginInvoke_m6F07B74CD052012A0D9A1499BC54459A51B12A29,
	grpcsharp_batch_context_recv_initial_metadata_delegate_EndInvoke_mE0F6B5FA1F368B49336C7C782C9E4917B9A35F69,
	grpcsharp_batch_context_recv_message_length_delegate__ctor_m80567C53F00CB90DCB149B02572085C83E7D9E95,
	grpcsharp_batch_context_recv_message_length_delegate_Invoke_mE2CE1A2C105A781BEB60DC500AF0CCFD6E894F08,
	grpcsharp_batch_context_recv_message_length_delegate_BeginInvoke_m21871B4F3B642EF1BD8146A2A1C987FDB96F79FC,
	grpcsharp_batch_context_recv_message_length_delegate_EndInvoke_m2F8E7398A9D7297F43A5F4EDC7667B885AB124D6,
	grpcsharp_batch_context_recv_message_next_slice_peek_delegate__ctor_mC15E27AC2665DCA31497E4305178CEA8BC8F9F15,
	grpcsharp_batch_context_recv_message_next_slice_peek_delegate_Invoke_m228F9936F6AF584C3C86AF3AD0905E43D969DA2B,
	grpcsharp_batch_context_recv_message_next_slice_peek_delegate_BeginInvoke_m71616F9F8CBB8906DB83685CE0F3C2BA25BA6BCF,
	grpcsharp_batch_context_recv_message_next_slice_peek_delegate_EndInvoke_m8507779BB50694B10274A583CFBA6636F6AD039E,
	grpcsharp_batch_context_recv_status_on_client_status_delegate__ctor_m1E7D19ED76C787975A3E26E1C45B49F20E732D6E,
	grpcsharp_batch_context_recv_status_on_client_status_delegate_Invoke_m57419AD315E0ED0AB48A9F1B04A493D78E0CAC6A,
	grpcsharp_batch_context_recv_status_on_client_status_delegate_BeginInvoke_mF961992AFFA5EF4C055D8986940C9A3BC3F20EB2,
	grpcsharp_batch_context_recv_status_on_client_status_delegate_EndInvoke_m32A84939918C05726C63B879FED8F061E29E60C9,
	grpcsharp_batch_context_recv_status_on_client_details_delegate__ctor_m58E4CA3B95194C65E8FAB12DFE4FBFA05916420F,
	grpcsharp_batch_context_recv_status_on_client_details_delegate_Invoke_m96456E954AF7988564405626C2619BC063B96AAA,
	grpcsharp_batch_context_recv_status_on_client_details_delegate_BeginInvoke_mB09FDD84247D0E8823B0080A40F42E23B2704D49,
	grpcsharp_batch_context_recv_status_on_client_details_delegate_EndInvoke_m6FB124AC718041AF57A1E34864DF44AE60BA2616,
	grpcsharp_batch_context_recv_status_on_client_error_string_delegate__ctor_mFCEC6AAB824E45702AB6789B847FAD623A0F30E2,
	grpcsharp_batch_context_recv_status_on_client_error_string_delegate_Invoke_m25C17854C75270B03F1F4138BC45C2D08E570C21,
	grpcsharp_batch_context_recv_status_on_client_error_string_delegate_BeginInvoke_m2F3DB0BA244E98C316E09B6D351E9B3E9FE53DA4,
	grpcsharp_batch_context_recv_status_on_client_error_string_delegate_EndInvoke_m4C163A088C496D278E147CBE38F2DEC921503FAE,
	grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate__ctor_mD950E477EF8271DEBB26C9C48175838A6C098EE3,
	grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate_Invoke_m66B4A8FC056058E6E3F2EF36011467A3743D5D7F,
	grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate_BeginInvoke_mFF0CD034C79C54ADF34B30555E09D086C757E435,
	grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate_EndInvoke_m700E87E33177E52FA82EEE24C60BF3C1B7FA1A18,
	grpcsharp_batch_context_recv_close_on_server_cancelled_delegate__ctor_mAD266DF50DC5AF7FFDDA9D29886CEE158E906A17,
	grpcsharp_batch_context_recv_close_on_server_cancelled_delegate_Invoke_m586DC4C9AB80F3CACEFBA69AD81E35A2DD72BB75,
	grpcsharp_batch_context_recv_close_on_server_cancelled_delegate_BeginInvoke_m13BCCA8DDF3FBC086ECD4B375FC5841C440D072C,
	grpcsharp_batch_context_recv_close_on_server_cancelled_delegate_EndInvoke_m6F511DC793D5A7EBB85B722C8E2FB966B30EA01E,
	grpcsharp_batch_context_reset_delegate__ctor_mE4B404A995F4B1A30EAEC086528CA7E50EB69BE9,
	grpcsharp_batch_context_reset_delegate_Invoke_m47EB3BD94639D0762819C069751505816F231F8B,
	grpcsharp_batch_context_reset_delegate_BeginInvoke_m05F0BBA294D6FF952C4C7E3BE49454613FD76861,
	grpcsharp_batch_context_reset_delegate_EndInvoke_m57270752BB48C676FC7DF67323BB2C59D63F7BA2,
	grpcsharp_batch_context_destroy_delegate__ctor_mB3A90484AE4222E2A10E8430372167E7AF51443D,
	grpcsharp_batch_context_destroy_delegate_Invoke_m91C01DD2668A75D5F85F330B935E3D9EAC350C7C,
	grpcsharp_batch_context_destroy_delegate_BeginInvoke_m2FC30F78E939B9F9177E2973DDC2C24CF5005D5D,
	grpcsharp_batch_context_destroy_delegate_EndInvoke_m6AF394C17D75C0F4C4DC2321C309D5E58D7913E3,
	grpcsharp_request_call_context_create_delegate__ctor_m3123BD685ED65BA1C56E56062B50150D36C833F1,
	grpcsharp_request_call_context_create_delegate_Invoke_mCDDD9B7E5E34830285C805B05F2C0F9374AEB99A,
	grpcsharp_request_call_context_create_delegate_BeginInvoke_mC136B3D76C41EFBF6F2C0EA8C0008A18D1C4BBC8,
	grpcsharp_request_call_context_create_delegate_EndInvoke_m879CE38C8805CB60AA29F85CE08C1955660FA4D3,
	grpcsharp_request_call_context_call_delegate__ctor_mF2ED9122FF60D1E55E6891DA52B133462E12D2EE,
	grpcsharp_request_call_context_call_delegate_Invoke_m1DBAA893A2B366381A40D5672170B7B375CEDA63,
	grpcsharp_request_call_context_call_delegate_BeginInvoke_m4DF22FF009329CF18E7D0D12AD1999A3C804CB8B,
	grpcsharp_request_call_context_call_delegate_EndInvoke_m2938F8F066A178BA1C05D881A504821E6B23BE87,
	grpcsharp_request_call_context_method_delegate__ctor_m0731863A605D70740E00A4DDCC7E47073D70DDA2,
	grpcsharp_request_call_context_method_delegate_Invoke_m46F68223AD40FCF07B7B5A165119C72DC97F5C52,
	grpcsharp_request_call_context_method_delegate_BeginInvoke_m03135AE4EC6C3EA9CD4B48F47134B7F577FDE563,
	grpcsharp_request_call_context_method_delegate_EndInvoke_m47C18B91B85CC2669410D2CA396BCBC08EDBEF5E,
	grpcsharp_request_call_context_host_delegate__ctor_m9798971494671581BB31E0094D10781A3C6D1EA8,
	grpcsharp_request_call_context_host_delegate_Invoke_m3BE8DA48F9558BA8D68391344852B98057C37237,
	grpcsharp_request_call_context_host_delegate_BeginInvoke_m9C6F7B5BB7C5663F67DF6433B8372BAF0CAF63D6,
	grpcsharp_request_call_context_host_delegate_EndInvoke_m81485B0D46C71AE256EAE24079AC055732E8219D,
	grpcsharp_request_call_context_deadline_delegate__ctor_m6D5370EA30CDC68BBBD64DB0AE52A7125593DEBA,
	grpcsharp_request_call_context_deadline_delegate_Invoke_m95FC304F1EFF6CD91DFC59994A081845BDC46CEB,
	grpcsharp_request_call_context_deadline_delegate_BeginInvoke_m54C7771B9106DED42C7CF1221C1786555A1B0465,
	grpcsharp_request_call_context_deadline_delegate_EndInvoke_m246787AF5BEAD3F511C845C48C6C9A9998996ADD,
	grpcsharp_request_call_context_request_metadata_delegate__ctor_mDE4930FE9570E638E03B0C42DC679D2E72CA1F11,
	grpcsharp_request_call_context_request_metadata_delegate_Invoke_m2E3FD33D9B7DEF8D14844D59B315D372DB3C124D,
	grpcsharp_request_call_context_request_metadata_delegate_BeginInvoke_m584B417B58B1614010FBE67413939C2EC3734EB4,
	grpcsharp_request_call_context_request_metadata_delegate_EndInvoke_mC6ABCC4F2A3C8845DDD6FDDBE576EFF0DFB4D751,
	grpcsharp_request_call_context_reset_delegate__ctor_m23F3EABD9D2F09F8171457F27CA819AC0CFD71AD,
	grpcsharp_request_call_context_reset_delegate_Invoke_m0E4C88599E8883324089B355D7DEC973456632DF,
	grpcsharp_request_call_context_reset_delegate_BeginInvoke_mCEE1CF922F13993EA9867999B3DF61902B117925,
	grpcsharp_request_call_context_reset_delegate_EndInvoke_mBF01650AF76C7134DABA7752C2A170FB7423A060,
	grpcsharp_request_call_context_destroy_delegate__ctor_mCE28006B52C92D6ACF3FAF45297CF35C5DFA3EE2,
	grpcsharp_request_call_context_destroy_delegate_Invoke_m32808A2FE550061EBBDBF4AE0D0305363B986705,
	grpcsharp_request_call_context_destroy_delegate_BeginInvoke_m17BD19812F4FE506F076ABD39564012834C9BAEC,
	grpcsharp_request_call_context_destroy_delegate_EndInvoke_m4B1549338854716D29AA20F57133180FE65BB49E,
	grpcsharp_composite_call_credentials_create_delegate__ctor_m29A43911F4C146C42EC10CE5D220FBCA3A818552,
	grpcsharp_composite_call_credentials_create_delegate_Invoke_m33AD20299473E15795F6A5E6FDF34A1BAF101584,
	grpcsharp_composite_call_credentials_create_delegate_BeginInvoke_mFD008800397AD60AEC5C10C67BC6EED2A0D346EA,
	grpcsharp_composite_call_credentials_create_delegate_EndInvoke_m6284CAFDE6AD80EB71709E561A2CD7720A60998F,
	grpcsharp_call_credentials_release_delegate__ctor_m418F99CAC81F490FE1F723B89BA76DF9134BD48D,
	grpcsharp_call_credentials_release_delegate_Invoke_mEFCDAF3B6F0F3ADFD91F419053DD5D0FB024EFC3,
	grpcsharp_call_credentials_release_delegate_BeginInvoke_mBB26AF5D5F7F3956A809C023DF5B731B9F8C36C6,
	grpcsharp_call_credentials_release_delegate_EndInvoke_mDAB9A40B09986AD5BA2F0375136FAC837E55017E,
	grpcsharp_call_cancel_delegate__ctor_m86B4D2D807408F11F300599093F4C4723E287D4E,
	grpcsharp_call_cancel_delegate_Invoke_m84A1914B3F5E321E688A3826134F1E08777ED390,
	grpcsharp_call_cancel_delegate_BeginInvoke_mD49C0966FD7CE4D5F26AD477DF41C3E3A1DED700,
	grpcsharp_call_cancel_delegate_EndInvoke_m2A30CB1ECC7287BE7146F9C00490F6F794158518,
	grpcsharp_call_cancel_with_status_delegate__ctor_m7D28F4786EE73327173883CAF7B6C3C2C44A1D24,
	grpcsharp_call_cancel_with_status_delegate_Invoke_m7CE083C886F5F462E51520F163CA48E66A78638D,
	grpcsharp_call_cancel_with_status_delegate_BeginInvoke_m74B5CDD8F773FFFDA0B967603D2B53552A6644C6,
	grpcsharp_call_cancel_with_status_delegate_EndInvoke_m5C6C49978D6DB6CD81A60A3E0CDE8072AC65A02E,
	grpcsharp_call_start_unary_delegate__ctor_m4657B1F4B2A94B2C80ECBE3B31BC9295D9D84FA0,
	grpcsharp_call_start_unary_delegate_Invoke_m4BD315AD9FC93636231FC4E0FD7044FA4BF62D4F,
	grpcsharp_call_start_unary_delegate_BeginInvoke_m5C362FC44DF4C2F86CFA4079EFA940E3A37A99CF,
	grpcsharp_call_start_unary_delegate_EndInvoke_m5338E1E12C669360DD8A262A04690F3AC05F59F5,
	grpcsharp_call_start_client_streaming_delegate__ctor_m12F63DEAE9E00AB971585D687398ABA695725727,
	grpcsharp_call_start_client_streaming_delegate_Invoke_m619772C415E09A8986449DE490F8634EEB3A489D,
	grpcsharp_call_start_client_streaming_delegate_BeginInvoke_mC301C0D80AF1156906C2E92BC100AE77F7373D35,
	grpcsharp_call_start_client_streaming_delegate_EndInvoke_mDE5294B6D9F269DC8FDACFD289910C737C3ECCB5,
	grpcsharp_call_start_server_streaming_delegate__ctor_m9353BC3658F925EAB79DD9A280ACFFD876ACA2CC,
	grpcsharp_call_start_server_streaming_delegate_Invoke_m0315CF30611FFDFE4F693940C8ED822E00D22B84,
	grpcsharp_call_start_server_streaming_delegate_BeginInvoke_mB0176031FBFF868B1095AF47E6466ED51C194F50,
	grpcsharp_call_start_server_streaming_delegate_EndInvoke_m7604FD3559311F1B473B938F8A8ACF7442634D94,
	grpcsharp_call_start_duplex_streaming_delegate__ctor_m63326B5344F6B59852C18F3999526689EB8D20FB,
	grpcsharp_call_start_duplex_streaming_delegate_Invoke_mBF637E3626916C43B10B2C1AFC68063CC6AAAA22,
	grpcsharp_call_start_duplex_streaming_delegate_BeginInvoke_m51AC1E4B2D959297B4B0806B5DF09F113161E8AF,
	grpcsharp_call_start_duplex_streaming_delegate_EndInvoke_m810DBE922F9C8A3A31A23E3F040B3A8FC91A57DE,
	grpcsharp_call_send_message_delegate__ctor_mA80E518534B8B129E5F11CA183DA66F03B4F27D0,
	grpcsharp_call_send_message_delegate_Invoke_m11513868541B35159BDE6A2EE51183BC85B5ED75,
	grpcsharp_call_send_message_delegate_BeginInvoke_mC87A9E1D46793C1D2B2E4315CC0A20CF0358C596,
	grpcsharp_call_send_message_delegate_EndInvoke_mD85DC583B2CBC8CB963640D5D9FC82800BD80DBB,
	grpcsharp_call_send_close_from_client_delegate__ctor_m1882DA48B2905F2BDBE86B25C84E5CFC1C549FE8,
	grpcsharp_call_send_close_from_client_delegate_Invoke_m97A5051035F97AE4BA25F3A5106313E846215C8E,
	grpcsharp_call_send_close_from_client_delegate_BeginInvoke_m027C2CE789A1C2ADA9E90BDADECFE5724BDB5BD5,
	grpcsharp_call_send_close_from_client_delegate_EndInvoke_mD673295E141C4A2942D3ECFDBF95FCE50CCA7EF2,
	grpcsharp_call_send_status_from_server_delegate__ctor_m10215C05028347884084027F2C0A259275C1E33D,
	grpcsharp_call_send_status_from_server_delegate_Invoke_m6F8084219AB97681C49A7A16CCFFB0A36D5FF13A,
	grpcsharp_call_send_status_from_server_delegate_BeginInvoke_m7F8BF72DD2F3341314F43B95508FB1CC4811D933,
	grpcsharp_call_send_status_from_server_delegate_EndInvoke_m54240FF4FF46E78AC88258A89BE6FDABF9DA15F1,
	grpcsharp_call_recv_message_delegate__ctor_mEDD7A3B8F25662DECE31EDD58769C11A3FCA102B,
	grpcsharp_call_recv_message_delegate_Invoke_mD5F11789662BA57D8906EBD61C8D281513A8CD4D,
	grpcsharp_call_recv_message_delegate_BeginInvoke_m15643C33F577D7351E385E3506167C352CB4CD01,
	grpcsharp_call_recv_message_delegate_EndInvoke_m7B29A35789E080D89B61A7AA19556C4ED8CC17E9,
	grpcsharp_call_recv_initial_metadata_delegate__ctor_m0F48585067F2384E7F6EBE693E70D47D794D731C,
	grpcsharp_call_recv_initial_metadata_delegate_Invoke_m7240D782A65F01924522A4C9C8DCF888BE8544B1,
	grpcsharp_call_recv_initial_metadata_delegate_BeginInvoke_mD89CE41943879A886788BCE0E5E6DEE932D1FA9E,
	grpcsharp_call_recv_initial_metadata_delegate_EndInvoke_mFA78B3FC12B94FE5ED1AC6316C1BDA63F4B70402,
	grpcsharp_call_start_serverside_delegate__ctor_m014AA34CE3691CAA237031C7FDD83053360E7144,
	grpcsharp_call_start_serverside_delegate_Invoke_m4D27E6D2C540D91A50582048416E505DFF997E10,
	grpcsharp_call_start_serverside_delegate_BeginInvoke_m9B94B16E93F7DC3ACF3E2CD9AFDA169CF7733B21,
	grpcsharp_call_start_serverside_delegate_EndInvoke_m9ADB1F8CD05D4CEFB3E97CD21EABB8297604DE95,
	grpcsharp_call_send_initial_metadata_delegate__ctor_m238FA5D1EFE9B23250BFBE3E730B9ABCCF1F224D,
	grpcsharp_call_send_initial_metadata_delegate_Invoke_m56152245E01F7C7A3D514B5BF8FA4DDA296D18C5,
	grpcsharp_call_send_initial_metadata_delegate_BeginInvoke_m46F4C6A771C622187488BACAD53C02092B593B1F,
	grpcsharp_call_send_initial_metadata_delegate_EndInvoke_mE9FDDAAE58C685494F03004CF5378B3B6DCB85B4,
	grpcsharp_call_set_credentials_delegate__ctor_mEECDD8C20A35203FC3487022B889F02FDD19D840,
	grpcsharp_call_set_credentials_delegate_Invoke_m7704EE5984CE5F05D34D31E99800AF1183B8126C,
	grpcsharp_call_set_credentials_delegate_BeginInvoke_mEF8436C6A81118E24E5B017E77C772F47D1FFAC9,
	grpcsharp_call_set_credentials_delegate_EndInvoke_m2C6A90AECCA0622812EA8A62764EFC867307B0A6,
	grpcsharp_call_get_peer_delegate__ctor_m47DF045C03ABDABC35B1ECCFF19FF775BE4A516A,
	grpcsharp_call_get_peer_delegate_Invoke_m337BDBD9DF9BFA1D59897DD04963FB440C07DCB4,
	grpcsharp_call_get_peer_delegate_BeginInvoke_mF420A38413C81A4F118A6F4DF43F4DECAD83EE9B,
	grpcsharp_call_get_peer_delegate_EndInvoke_m337D508126533206BEA354E992BB3A90793F61C5,
	grpcsharp_call_destroy_delegate__ctor_m139E62A0C0A704A6B4A15C5A8AD42CA71E9F14CA,
	grpcsharp_call_destroy_delegate_Invoke_mD06F76D0219C1186EE2E6A98E92385ED2345870C,
	grpcsharp_call_destroy_delegate_BeginInvoke_m36581EB8B0CC675D0E2C9B65EA21C9AB7B9F8A21,
	grpcsharp_call_destroy_delegate_EndInvoke_m3507B602C721847C4370113BEC6011E4A263E46D,
	grpcsharp_channel_args_create_delegate__ctor_mD5C70EDA0874792DE66B3B439D6657F3528C149B,
	grpcsharp_channel_args_create_delegate_Invoke_mCF7C5372576D4515EF7A22997FECA7C4C92E1E04,
	grpcsharp_channel_args_create_delegate_BeginInvoke_mB74127CC1A51496BC8E4C0D7F1F07BEE7C9050F8,
	grpcsharp_channel_args_create_delegate_EndInvoke_m64D06FCAFE8E937C6B4A5F3C1CB00B2E67F88731,
	grpcsharp_channel_args_set_string_delegate__ctor_m877E5EE0C3A91C62B3C988440A524F8C18072F1A,
	grpcsharp_channel_args_set_string_delegate_Invoke_m9D0413548A2774F9A2AA6F9DE8B70944AEF32D69,
	grpcsharp_channel_args_set_string_delegate_BeginInvoke_m7FAD4FD148FBF6DF981D4DCF38BF272EA9A858C1,
	grpcsharp_channel_args_set_string_delegate_EndInvoke_m9C02551D09DB738638BF88D0CB64CC2D55AE7A19,
	grpcsharp_channel_args_set_integer_delegate__ctor_m45CED91AC7010771F77A08EC0EBF8C99A1A20E7A,
	grpcsharp_channel_args_set_integer_delegate_Invoke_m4D5924A60A619F2B59F04E0E944C63757B0BC169,
	grpcsharp_channel_args_set_integer_delegate_BeginInvoke_m9F244B41E1FB116A9CF9F7D0E76BDAB499CA8ACD,
	grpcsharp_channel_args_set_integer_delegate_EndInvoke_m7047AF66D51A47541F3064799E01DEE8DD896CF5,
	grpcsharp_channel_args_destroy_delegate__ctor_m55BCA2CC993CDC44A53999B3117345303DC59F8A,
	grpcsharp_channel_args_destroy_delegate_Invoke_m1AD54B200C3A8D92663A9419DF8007CFB0BCA939,
	grpcsharp_channel_args_destroy_delegate_BeginInvoke_m4DB619BBDECFFF00941AFA4BC7AC116E52DE3DF1,
	grpcsharp_channel_args_destroy_delegate_EndInvoke_m46F51C0C181A4410558958F8B131B29878C6E1FA,
	grpcsharp_override_default_ssl_roots_delegate__ctor_m19D4C0FB8306630C014F96CF6A4D044AF61A7C42,
	grpcsharp_override_default_ssl_roots_delegate_Invoke_mF2EF1B1CADA92E84E74A4F601BA72C82C954A1DE,
	grpcsharp_override_default_ssl_roots_delegate_BeginInvoke_m4308B653AA345471053D5BB1F28F1F9D388397EE,
	grpcsharp_override_default_ssl_roots_delegate_EndInvoke_m4B9BEA03E1DA5EF0CB55F9CD5B06D3C6CBA1BB5C,
	grpcsharp_ssl_credentials_create_delegate__ctor_m9AF320EC5E38036B4D866AF5FAA21155D1201362,
	grpcsharp_ssl_credentials_create_delegate_Invoke_m466AA94A2824F4FB7D34815402E0D7AD2DDF1B8E,
	grpcsharp_ssl_credentials_create_delegate_BeginInvoke_m7914B18E3082C5FC01C21084EBE816DA3AC78172,
	grpcsharp_ssl_credentials_create_delegate_EndInvoke_m6886EB12B360B2F68944D3CC089CE55D8BDEE821,
	grpcsharp_composite_channel_credentials_create_delegate__ctor_mD12471AECF69B17224B61DAF40DB70528937139E,
	grpcsharp_composite_channel_credentials_create_delegate_Invoke_mACF1D25C49D71DA4C040EDE61F5CE71C91CA0224,
	grpcsharp_composite_channel_credentials_create_delegate_BeginInvoke_mCB805A1670512EE68E57FCBF84A9F769B8A88BEF,
	grpcsharp_composite_channel_credentials_create_delegate_EndInvoke_m7CE9DB6812CE48B50A3E81096EEDDBFAEAE00CD5,
	grpcsharp_channel_credentials_release_delegate__ctor_m490BDB2F2C9244BEDFA9DE7CD32D2B966E4B62CA,
	grpcsharp_channel_credentials_release_delegate_Invoke_mD8D6013A9F902CC04704AEC8B893098B93CF202E,
	grpcsharp_channel_credentials_release_delegate_BeginInvoke_m003955EE3BDEFC1DC805E42296F753572A4CED1A,
	grpcsharp_channel_credentials_release_delegate_EndInvoke_mFD2D9AB576E0AE10DAA18D1C60D9C640FD8E9393,
	grpcsharp_insecure_channel_create_delegate__ctor_m56739DFB9EEC933BBF662D3429E4C179C7DD2AE2,
	grpcsharp_insecure_channel_create_delegate_Invoke_m9895847FACB4B8C37C7D970DFFADDAC693298B4E,
	grpcsharp_insecure_channel_create_delegate_BeginInvoke_m25860D4EC4DA28237B19335B2B65E188F798CAEC,
	grpcsharp_insecure_channel_create_delegate_EndInvoke_m6F1B2ED513E84B09CA22743F578207C5EB80FF46,
	grpcsharp_secure_channel_create_delegate__ctor_m68B5274BBCF52B68303E0532A26FA86A9250DF53,
	grpcsharp_secure_channel_create_delegate_Invoke_mC25ED768AB7B5841FC65314FF5F2ADDFC7237ACD,
	grpcsharp_secure_channel_create_delegate_BeginInvoke_mC347D91A5651364E0B711D3FE433AE8842E3D660,
	grpcsharp_secure_channel_create_delegate_EndInvoke_mC099150EBC1250029853158A981B8DCE01837EEB,
	grpcsharp_channel_create_call_delegate__ctor_mE4B3C9E08103E3466F6BB443EB4E2B88E41B22B0,
	grpcsharp_channel_create_call_delegate_Invoke_m8D6F0DBF6D134FB1F0350679A72FF2DE8D2D68BF,
	grpcsharp_channel_create_call_delegate_BeginInvoke_m46A1D7938EFC5D42B2DAD19126456F2AF8034A60,
	grpcsharp_channel_create_call_delegate_EndInvoke_m04EDD90EE1B3ED8674D7CB949099FDA9B53050F6,
	grpcsharp_channel_check_connectivity_state_delegate__ctor_mF42E49C0DD935F165E620DDA0666384469193704,
	grpcsharp_channel_check_connectivity_state_delegate_Invoke_m8774E63EBD10A883B83CABC0D38B2F3F8486689E,
	grpcsharp_channel_check_connectivity_state_delegate_BeginInvoke_m42C78E0BE3FAB68FF66D1929216AC92888691B2C,
	grpcsharp_channel_check_connectivity_state_delegate_EndInvoke_mEEFB74C89303B95DCFECD29BBDD5BDB5E2582B5D,
	grpcsharp_channel_watch_connectivity_state_delegate__ctor_m1C721A50EC81908967E95FD340B901F5B7664ED0,
	grpcsharp_channel_watch_connectivity_state_delegate_Invoke_m13B047C205A5B235D2BF9F189A482B766E973964,
	grpcsharp_channel_watch_connectivity_state_delegate_BeginInvoke_m7701A808F711D65E84420BECA0F1CBA70E385108,
	grpcsharp_channel_watch_connectivity_state_delegate_EndInvoke_mCF98E6E3001EAC9D4FD14EF8F18771C904D9D475,
	grpcsharp_channel_get_target_delegate__ctor_m69E0EDBF233D285381F86340774EA517EC1A32AF,
	grpcsharp_channel_get_target_delegate_Invoke_m4F91F9D133A059A0E24DA9DAB87C60307EDB6FE0,
	grpcsharp_channel_get_target_delegate_BeginInvoke_m41FD9F8A3F9738FED121CA778D2F379536E421E6,
	grpcsharp_channel_get_target_delegate_EndInvoke_mF347845D42800C0D1A8899BA0F6D65375CC3294D,
	grpcsharp_channel_destroy_delegate__ctor_mCC90227F91850E872330AA38C87D60E29470324D,
	grpcsharp_channel_destroy_delegate_Invoke_m3A15110E5BB00879FDF6FEF68F018AE0E3312890,
	grpcsharp_channel_destroy_delegate_BeginInvoke_m67ADA9DADEBAE9D3FB419543D5B5B449E216EB11,
	grpcsharp_channel_destroy_delegate_EndInvoke_m13F3B6E4E6104C15780821E4CE48D77475715275,
	grpcsharp_sizeof_grpc_event_delegate__ctor_m655B25034BAA0C48555FE543C858EFF8D12A4823,
	grpcsharp_sizeof_grpc_event_delegate_Invoke_m9A9B5B83FAC1D2045E9F86377A7BD24E181FA7C2,
	grpcsharp_sizeof_grpc_event_delegate_BeginInvoke_m67BB982006897AD2852E620A43FBF26BBBA279A7,
	grpcsharp_sizeof_grpc_event_delegate_EndInvoke_m6791FEB839B91F5C15562A82BE47DF4B4F0487DA,
	grpcsharp_completion_queue_create_async_delegate__ctor_m68D5E92BEB2D2A5A03E6717ABE6A960D71DFB2BB,
	grpcsharp_completion_queue_create_async_delegate_Invoke_m33F8AED0850F8C5BA83FF2CA9E4DE495A03419B6,
	grpcsharp_completion_queue_create_async_delegate_BeginInvoke_m4FBAD9D3EFF0676FF4471CB4F8B78A75E327597A,
	grpcsharp_completion_queue_create_async_delegate_EndInvoke_m1310AB3A1C6FBE0B32B43D3BF690FF3D7D5BD6D2,
	grpcsharp_completion_queue_create_sync_delegate__ctor_m894E9688D7A7BF91EE7CFB734ECE1AD6D76BC9F1,
	grpcsharp_completion_queue_create_sync_delegate_Invoke_mF4BBA6944F5E3D6A13E0BDE8AAA61D7DF8B6F271,
	grpcsharp_completion_queue_create_sync_delegate_BeginInvoke_mD0AEDB4E7CD0B2ACA1554782E6F0F4C1EBA5F2FB,
	grpcsharp_completion_queue_create_sync_delegate_EndInvoke_mC1AB1A15B369B2F7FB31FD4BDE06F0728FA0EF2C,
	grpcsharp_completion_queue_shutdown_delegate__ctor_mF8C9F107D297284B54CBCA63A70E850CE896AF0F,
	grpcsharp_completion_queue_shutdown_delegate_Invoke_m2F2C331CC84F7BE806A156C71E43F0453E858977,
	grpcsharp_completion_queue_shutdown_delegate_BeginInvoke_mF114860209CBD70BBD1940360A9D32F51A6CAB5A,
	grpcsharp_completion_queue_shutdown_delegate_EndInvoke_mF126F6DEF24824BB85A39DFEBC36A375CBA247A8,
	grpcsharp_completion_queue_next_delegate__ctor_m7D455EF701175F00503842245EFCAD402ADEF449,
	grpcsharp_completion_queue_next_delegate_Invoke_mAA9DD405ED0710B9C07DEBCDE111DB034DDD1D6B,
	grpcsharp_completion_queue_next_delegate_BeginInvoke_mD1C1EF3E4E2E2B1C9543A82BE5FAE1C63CC751BD,
	grpcsharp_completion_queue_next_delegate_EndInvoke_m5D2021611AEA0D44D38C2FB1410685F70CAE0900,
	grpcsharp_completion_queue_pluck_delegate__ctor_mB6A3314E0F38D36042B5C3C065A5E8A6ADC5228F,
	grpcsharp_completion_queue_pluck_delegate_Invoke_mCDE97BC1758BEC5BE002460F0379D7E032CCA362,
	grpcsharp_completion_queue_pluck_delegate_BeginInvoke_mA77ADA64C9E72A0F26DBE9086DA263289DE0B60E,
	grpcsharp_completion_queue_pluck_delegate_EndInvoke_m218BD0AFB231FA90C3AC01C13B0637508CD7EB94,
	grpcsharp_completion_queue_destroy_delegate__ctor_m75E6B119A599AE94BD8A8A675AC6D4A911DF4019,
	grpcsharp_completion_queue_destroy_delegate_Invoke_mD66DF4BDAF9BFA844303DE4F19F13093A274E808,
	grpcsharp_completion_queue_destroy_delegate_BeginInvoke_m3CCC73D12845B15C6B01358510A9FCD88DCA3899,
	grpcsharp_completion_queue_destroy_delegate_EndInvoke_mF56D7B2FAC4212B796D5982BEC561504474D3798,
	gprsharp_free_delegate__ctor_mE59A2FAB200EE5E5F98A37335FE2B4008C65E41B,
	gprsharp_free_delegate_Invoke_mF57374375612BB38D9106975B736FB5595EE91F9,
	gprsharp_free_delegate_BeginInvoke_mA79C4A50C449BC082F049EB064F98FFEA06D711F,
	gprsharp_free_delegate_EndInvoke_m09FE6B055D4A6B02CB73DD0398A6F511B7611DF0,
	grpcsharp_metadata_array_create_delegate__ctor_m69B731AC924A0034255C249604CA2322BE48D424,
	grpcsharp_metadata_array_create_delegate_Invoke_mF0806264F8357AE9D15E87E56196CD74AB4953CD,
	grpcsharp_metadata_array_create_delegate_BeginInvoke_m040FE3CE054332C973D188CDE0E259384481EE3E,
	grpcsharp_metadata_array_create_delegate_EndInvoke_m327C9F36782784CC91CA6608D41DF7F9C9D23366,
	grpcsharp_metadata_array_add_delegate__ctor_m7837BA398F4B697C271D3A86C353924E5D82EB8C,
	grpcsharp_metadata_array_add_delegate_Invoke_mA1B5DF2E12F0A1DA0175C1356D5C2724816DE438,
	grpcsharp_metadata_array_add_delegate_BeginInvoke_m631DCCC98AD3127930DCC81C8B02E0BE1A32CCEA,
	grpcsharp_metadata_array_add_delegate_EndInvoke_m658DC39EBCA6E9A76739CBA8575CB918A3E745AA,
	grpcsharp_metadata_array_count_delegate__ctor_mE4CE5B74399C8A772C0B89C3EBACFDE216F123C4,
	grpcsharp_metadata_array_count_delegate_Invoke_m8C53F8C5E9407FBB62FBB92B32279E806043E1C3,
	grpcsharp_metadata_array_count_delegate_BeginInvoke_mAEAC3B02421ED4C964DEF3ECA103E01C58798A47,
	grpcsharp_metadata_array_count_delegate_EndInvoke_m1A00D6E2D618723ABDF7B4F3EC8FDAFD18376DCD,
	grpcsharp_metadata_array_get_key_delegate__ctor_m62D134E73C917006721338A19126391BC571FA67,
	grpcsharp_metadata_array_get_key_delegate_Invoke_m5A50E0C6F6FCE82E96A03CDE48EFE27499BF5035,
	grpcsharp_metadata_array_get_key_delegate_BeginInvoke_m9B44B758877AB1165CD95C0813DB745F3498B0EE,
	grpcsharp_metadata_array_get_key_delegate_EndInvoke_mF133D2D987A5D4EA195FB77BF2B9369D68650029,
	grpcsharp_metadata_array_get_value_delegate__ctor_mD743869A321EA666C4BCF8497973E3ED47F2DDC0,
	grpcsharp_metadata_array_get_value_delegate_Invoke_m491126E6D1C3EA93B6C5109FC465D2490371542A,
	grpcsharp_metadata_array_get_value_delegate_BeginInvoke_m8AE47C9A84FCB7C99D6A59A45C6DB427A1D29F76,
	grpcsharp_metadata_array_get_value_delegate_EndInvoke_m1BDC8179A12BF55F5BDA4A775EF553EDA1EAFAFD,
	grpcsharp_metadata_array_destroy_full_delegate__ctor_mA051E4F7036F4761D1D5565C7681FA5AC931165C,
	grpcsharp_metadata_array_destroy_full_delegate_Invoke_m46F154D5D580ACA4D33E2D4BF23D3437763ECD1C,
	grpcsharp_metadata_array_destroy_full_delegate_BeginInvoke_mB33454ED82F2F37F0CFC8449645AD46278ED9713,
	grpcsharp_metadata_array_destroy_full_delegate_EndInvoke_mEB24CD6DD31CDE1E951E649A234F722570DE05F9,
	grpcsharp_redirect_log_delegate__ctor_m6BBEAA32764841B4821AC089569E647D26E8A10B,
	grpcsharp_redirect_log_delegate_Invoke_m447207DED0EA6FC3C68355F82D5B02EBF685DAE2,
	grpcsharp_redirect_log_delegate_BeginInvoke_m51E37819512166D4A2FFE85FEF3583C8260CCA98,
	grpcsharp_redirect_log_delegate_EndInvoke_m8D3D8713C6CB384A1A3B90FDA50C8794A8469435,
	grpcsharp_native_callback_dispatcher_init_delegate__ctor_m2EADE727E608B1714AE9D1FFC35482A7F95999D5,
	grpcsharp_native_callback_dispatcher_init_delegate_Invoke_m5431A683670427B4AAF4A643DACB19061946F3D4,
	grpcsharp_native_callback_dispatcher_init_delegate_BeginInvoke_m7BF473D3142233666B59FE25E0ADE2F587DA16F3,
	grpcsharp_native_callback_dispatcher_init_delegate_EndInvoke_m0DDA8FBF09A406F0AF6A09D6F5B76E26BC67B8E1,
	grpcsharp_metadata_credentials_create_from_plugin_delegate__ctor_mD7BD5BB9A71D34AFEA2F839AAD9703EEBDFF75EA,
	grpcsharp_metadata_credentials_create_from_plugin_delegate_Invoke_mE1282FAE4D8479A090004BCCD1B673C9BB87B316,
	grpcsharp_metadata_credentials_create_from_plugin_delegate_BeginInvoke_m51C751B535870F618B7F656EBEBC66519E9766C6,
	grpcsharp_metadata_credentials_create_from_plugin_delegate_EndInvoke_m5212C0F7B38CDF21CF95A395A0D8719B3D90B1B6,
	grpcsharp_metadata_credentials_notify_from_plugin_delegate__ctor_mF99185F06466B4535950EB37224FE6D24FA72E2A,
	grpcsharp_metadata_credentials_notify_from_plugin_delegate_Invoke_m615655831538FB1245BA439BE600871440286E9B,
	grpcsharp_metadata_credentials_notify_from_plugin_delegate_BeginInvoke_m939DFC7424EB0D193E1F8C735C8C378F961FB81F,
	grpcsharp_metadata_credentials_notify_from_plugin_delegate_EndInvoke_m9AF334B86D293029399A2DCC18AF93B2DEDF6C17,
	grpcsharp_ssl_server_credentials_create_delegate__ctor_m197D6298D3F644FA6832A1D4EB4A60831C0338FD,
	grpcsharp_ssl_server_credentials_create_delegate_Invoke_m93140D6D549A75BF80F07F64A68E30AD4834212A,
	grpcsharp_ssl_server_credentials_create_delegate_BeginInvoke_mACA0063736719541DDAE60C12F8BD04B690E8CAE,
	grpcsharp_ssl_server_credentials_create_delegate_EndInvoke_mFAB9166110A2BEA9B4A07E86910D60FA1A8DA79F,
	grpcsharp_server_credentials_release_delegate__ctor_m545DB20D9AE17C6E4E143009A99351A916EDB82B,
	grpcsharp_server_credentials_release_delegate_Invoke_m0D9977F82B46751195AD0B63712FB917DB2213EA,
	grpcsharp_server_credentials_release_delegate_BeginInvoke_mF233C6FCC4E7E394E2238CEEE842073FF23DFAF5,
	grpcsharp_server_credentials_release_delegate_EndInvoke_m1E4EAF3119DD96F331FD002403A08F12F0679044,
	grpcsharp_server_create_delegate__ctor_m783A49B172F36AE10A422E4CB4B648F1C995521A,
	grpcsharp_server_create_delegate_Invoke_m3C07DAA69CBAE7EE33648CDFAFEABE7414BB1F5F,
	grpcsharp_server_create_delegate_BeginInvoke_mFBFAC5778B1ADDE4931BE115E9EFE8C7DF69773A,
	grpcsharp_server_create_delegate_EndInvoke_mDCADAB7362641B04B382E612FC1D77EC72B10EEE,
	grpcsharp_server_register_completion_queue_delegate__ctor_m3DA8B40BA2AC8D881490479D0C936D01F6FDE697,
	grpcsharp_server_register_completion_queue_delegate_Invoke_m48082D196C5E256783BD4D0E5DAC77BF1FECD56F,
	grpcsharp_server_register_completion_queue_delegate_BeginInvoke_m04615C5EF396407271F8D9FDCE9FBE4B766B5305,
	grpcsharp_server_register_completion_queue_delegate_EndInvoke_m12CC3B82FA0BB0378BA9EC1548CFDC52F87B6DEA,
	grpcsharp_server_add_insecure_http2_port_delegate__ctor_m5BE635FBEBB5537F2336F1911C30D0FF8045F40C,
	grpcsharp_server_add_insecure_http2_port_delegate_Invoke_m9F60A49C25B48904DF757273003256336F1E68F4,
	grpcsharp_server_add_insecure_http2_port_delegate_BeginInvoke_m453F74FC0A906FA2F181BC33D70171BF1D021743,
	grpcsharp_server_add_insecure_http2_port_delegate_EndInvoke_m85AAE75D5D7DBC34CAFE6E39EB7F65B2C6A705FA,
	grpcsharp_server_add_secure_http2_port_delegate__ctor_m68221C0DE3333CFA50EF2FD14A203A77331F6F4A,
	grpcsharp_server_add_secure_http2_port_delegate_Invoke_m1A99C4A2324DBDA967833A2EE4D4B7B1D2C17CAE,
	grpcsharp_server_add_secure_http2_port_delegate_BeginInvoke_mCFB0B55E1739C5BB842B706B4CEF2EE2D4A9E346,
	grpcsharp_server_add_secure_http2_port_delegate_EndInvoke_m1F8BFB503EC9298467AF070E7CF19E608CCD966A,
	grpcsharp_server_start_delegate__ctor_m73C6C5DD4FF6EE902DEE76F6FC4E230FFD45DC53,
	grpcsharp_server_start_delegate_Invoke_m7A3454C654E6FAA6D3F3EF38F590077CF9885F11,
	grpcsharp_server_start_delegate_BeginInvoke_m1DE66B1CF8E01FC11F5CAF9B5E8240A4C4CCAC56,
	grpcsharp_server_start_delegate_EndInvoke_m9D666BB9A7D3CD34A5DA9E9DCDD723DFD2ED880E,
	grpcsharp_server_request_call_delegate__ctor_mC213682D9C8F4001A6C2E6C34C68C9A8F158BE94,
	grpcsharp_server_request_call_delegate_Invoke_mD9CAA765B5818B59A3BFF53C5AF0275E2763A366,
	grpcsharp_server_request_call_delegate_BeginInvoke_m9BBAEBFD69FEC13D54F7D4B0C90BA6269211C93D,
	grpcsharp_server_request_call_delegate_EndInvoke_m9292539890507A5905E8DFA2FB7882FE97E9FBF3,
	grpcsharp_server_cancel_all_calls_delegate__ctor_mF1C48FD7B5C7307882F4C3898F674985EBD3314D,
	grpcsharp_server_cancel_all_calls_delegate_Invoke_m19A9BDEE2357678B8712E47AD32B74BC35820A0E,
	grpcsharp_server_cancel_all_calls_delegate_BeginInvoke_m1D727A3B3C59A3C8E4E5C8B96E913AE4192CB961,
	grpcsharp_server_cancel_all_calls_delegate_EndInvoke_mA4D73C0D2EA9FEAD5AF1FA148C266AAB2429986E,
	grpcsharp_server_shutdown_and_notify_callback_delegate__ctor_m71A08DC150DEF116B2E71AC0BCD494DDF2D570A1,
	grpcsharp_server_shutdown_and_notify_callback_delegate_Invoke_m4ACB56A6D0FD192711001B8CCA887FC677D34A8A,
	grpcsharp_server_shutdown_and_notify_callback_delegate_BeginInvoke_m252547855D82CDD1B4937039CF99EB729AAC86BE,
	grpcsharp_server_shutdown_and_notify_callback_delegate_EndInvoke_m389B44FD5C6AEFBF311E6A1F2E3EC3B5F10A8FEF,
	grpcsharp_server_destroy_delegate__ctor_m730E6EF04686CB6A20621C1635A60BBD0C6527FF,
	grpcsharp_server_destroy_delegate_Invoke_m72D7DB1FA99BB0A0F5C5B064C5830DB9C9B58011,
	grpcsharp_server_destroy_delegate_BeginInvoke_mC72FFBBA172BDB2556010052F81A42E9A20974AC,
	grpcsharp_server_destroy_delegate_EndInvoke_m0E47AB2358D17611B7A75A199AC17ECBF52C32E9,
	grpcsharp_call_auth_context_delegate__ctor_m7FB8CA5E19DD01B964216240A4A4B9134ED7480F,
	grpcsharp_call_auth_context_delegate_Invoke_mCFE15D90A7464F1DB7289A62AD2D8A8556AD92DE,
	grpcsharp_call_auth_context_delegate_BeginInvoke_mDCD1DE1649CE81E0086EE6D8B432875250DCC036,
	grpcsharp_call_auth_context_delegate_EndInvoke_m09A54D3B86B745E1C0907BD518AFDAB42E7FF4B6,
	grpcsharp_auth_context_peer_identity_property_name_delegate__ctor_m330A08C8041EAFF0FBA325BDC4DAA9EF48305D3F,
	grpcsharp_auth_context_peer_identity_property_name_delegate_Invoke_mF785304C38FBCDEC63B5CADD38F4EDF8E7F041D6,
	grpcsharp_auth_context_peer_identity_property_name_delegate_BeginInvoke_mACA41711C623E205E5B1EF02FF4C4EB63CBF8E91,
	grpcsharp_auth_context_peer_identity_property_name_delegate_EndInvoke_m5A9AA0EB33FBDFE26E1A5C2F2CF62BE34B1371EF,
	grpcsharp_auth_context_property_iterator_delegate__ctor_m92B9BEDF493F52A812975990A0329A78E83B3162,
	grpcsharp_auth_context_property_iterator_delegate_Invoke_m239265BA84B1E38049A298C7BEB2E03535118093,
	grpcsharp_auth_context_property_iterator_delegate_BeginInvoke_mE3E4D47BC70F3605C2D39BDE5728BC6C21E02488,
	grpcsharp_auth_context_property_iterator_delegate_EndInvoke_mD79347B919D1304F9240D7F30281BA1CACBE9360,
	grpcsharp_auth_property_iterator_next_delegate__ctor_m97CB1B8CD1A85102526689B3ADD5B49550793100,
	grpcsharp_auth_property_iterator_next_delegate_Invoke_mA4F3ACA820549431B25CE1A14B12598C98E2F5C7,
	grpcsharp_auth_property_iterator_next_delegate_BeginInvoke_mBF9BAD7B0DB94F3604011F6384A9413DF8999E6A,
	grpcsharp_auth_property_iterator_next_delegate_EndInvoke_m1AFB9170CCF61B9CE8A00BA97263865B7E767638,
	grpcsharp_auth_context_release_delegate__ctor_m94B16E7C720663BD24DC47CB62EA4C55FC9A2691,
	grpcsharp_auth_context_release_delegate_Invoke_mA39EE4DA38DC5783E5EA32C5408AFA52FF60DA77,
	grpcsharp_auth_context_release_delegate_BeginInvoke_m0C81127B3C3512A2774C555637F9A49B44A51853,
	grpcsharp_auth_context_release_delegate_EndInvoke_m978AB944BD9C7B4335BE4B5B9D2B995FA17A93AF,
	grpcsharp_slice_buffer_create_delegate__ctor_mEDDA4FBCA510654B2B485A15FF5F8B5E6A70D5E7,
	grpcsharp_slice_buffer_create_delegate_Invoke_m438BF2A4CA2F56DD63D08F78FF3CAFA7DCAFE719,
	grpcsharp_slice_buffer_create_delegate_BeginInvoke_mBA9BD6E3F48FE6D559F3AECB2DA76E46DE25E695,
	grpcsharp_slice_buffer_create_delegate_EndInvoke_m093CC980C104B4DB7E5F74435366C288046272CD,
	grpcsharp_slice_buffer_adjust_tail_space_delegate__ctor_m8BA67D64EF4C1A2C4879ADD1A1AB1EBD044B94A6,
	grpcsharp_slice_buffer_adjust_tail_space_delegate_Invoke_mA54976F469E0DDB382F99E61DC856E2DA88BAE9D,
	grpcsharp_slice_buffer_adjust_tail_space_delegate_BeginInvoke_m752FCEDAA93E8806845EE19D02101F78E027334B,
	grpcsharp_slice_buffer_adjust_tail_space_delegate_EndInvoke_m0EF375A88AD60DA6D5BD1B8CF4BD2CFC3FEF56F8,
	grpcsharp_slice_buffer_slice_count_delegate__ctor_m68F6B07EF2E201708E7C8DC79A9E94DCD5F7F976,
	grpcsharp_slice_buffer_slice_count_delegate_Invoke_m45FB7F1C9B9FEBCB02B04004FB1B5332B6F1B87C,
	grpcsharp_slice_buffer_slice_count_delegate_BeginInvoke_mE3472B68A11003CFAEFCB0A798A0717B6CD4DD79,
	grpcsharp_slice_buffer_slice_count_delegate_EndInvoke_m39368D07CC99F3D2ED8D17F1DF4C0D9A9C0F8336,
	grpcsharp_slice_buffer_slice_peek_delegate__ctor_mE5C13AEB0FB7756233B8A879AAC5FC2EFAA98565,
	grpcsharp_slice_buffer_slice_peek_delegate_Invoke_m5DB5875127C670B87BE3CF80C106728E57114329,
	grpcsharp_slice_buffer_slice_peek_delegate_BeginInvoke_m460D31907BA186865A347EE5565974DCF46288C0,
	grpcsharp_slice_buffer_slice_peek_delegate_EndInvoke_mD36B5F5234C7CCF6C67D35F2FBD179D3E32D1A68,
	grpcsharp_slice_buffer_reset_and_unref_delegate__ctor_mADE97CE07906CA7EB951AF48CB883F0F400F13F9,
	grpcsharp_slice_buffer_reset_and_unref_delegate_Invoke_m31B7F628F64EC09A4E4F1828CCB7ECB3E368496A,
	grpcsharp_slice_buffer_reset_and_unref_delegate_BeginInvoke_m4B767EC82FBFBB6FDC110F57E0F2F6F5C8A7A546,
	grpcsharp_slice_buffer_reset_and_unref_delegate_EndInvoke_m7878917B9017086042377355EDE10492260F958C,
	grpcsharp_slice_buffer_destroy_delegate__ctor_m3B7C7CD6245156639AF47E684DFCCDBBF4D6BD32,
	grpcsharp_slice_buffer_destroy_delegate_Invoke_m57095F9CF46499F78D6F0A03685E81C6C5EF0754,
	grpcsharp_slice_buffer_destroy_delegate_BeginInvoke_m4B20D64E8AC7AC4CA8CD08377608DEACE116A8D5,
	grpcsharp_slice_buffer_destroy_delegate_EndInvoke_m372D75CE4DAA64B6FE4CD2B9F53BA1E81CCCDE91,
	gprsharp_now_delegate__ctor_m3879E6298194FC24B77052FDAEC69A127821F87E,
	gprsharp_now_delegate_Invoke_m405142383BF968F955BE1796C7612D86E02A3504,
	gprsharp_now_delegate_BeginInvoke_mC589638EC38C2E574B6893CFED7F3C9D40F65A6D,
	gprsharp_now_delegate_EndInvoke_m0D165A76B57B2D7AD036A1154784896FE2BEF5D2,
	gprsharp_inf_future_delegate__ctor_mEF086DBAD8DA00B4D9002FEEC803AAD1F15F77B0,
	gprsharp_inf_future_delegate_Invoke_m91E1550D9F31CB073E5D30CF70742DC4AB991B5E,
	gprsharp_inf_future_delegate_BeginInvoke_m3DED992B2D45E353AEA40ED4686CB5576AF339A6,
	gprsharp_inf_future_delegate_EndInvoke_mA2F11EDE903BA3C43BD2AC197DF60B3E56683239,
	gprsharp_inf_past_delegate__ctor_mCD3EC5B870E9EF002902827BDE5C19FD95690FFE,
	gprsharp_inf_past_delegate_Invoke_mC054A4E6E158EE6464BAF2B16316931EDAE610DC,
	gprsharp_inf_past_delegate_BeginInvoke_m737D0FB767DE4C6CAEC9C0911023C6EA523E9E21,
	gprsharp_inf_past_delegate_EndInvoke_m771282F17C9E243E029EE3F2C581DE392D48B198,
	gprsharp_convert_clock_type_delegate__ctor_m8E1039A12A3E0E22473A8C86476BC961C5BEF6FE,
	gprsharp_convert_clock_type_delegate_Invoke_m43584D2805AF7159C25D8BFBF0AC2F57936BA65F,
	gprsharp_convert_clock_type_delegate_BeginInvoke_m034ED63C52A33889597A69108DE4477C9581B942,
	gprsharp_convert_clock_type_delegate_EndInvoke_m1456772E71AC2B1BD0E511DE92555FC042102A6E,
	gprsharp_sizeof_timespec_delegate__ctor_m8C56A726F691FC3E547FF30BA724BEFA41CD73EA,
	gprsharp_sizeof_timespec_delegate_Invoke_m9824EC4BDC9E98302E8A4004CBCF8AE43F7BC468,
	gprsharp_sizeof_timespec_delegate_BeginInvoke_m65EB6624992C244525F28F2E8DF304A47D63289B,
	gprsharp_sizeof_timespec_delegate_EndInvoke_mB1CF3E6E20C76F4EAD8E9D497D92F0DEACCE0A0C,
	grpcsharp_test_callback_delegate__ctor_mF23FFB0CB95AB3E1E60B9DFBDB3C89437BAF4AE0,
	grpcsharp_test_callback_delegate_Invoke_mE46231A5CA8DF28AD96ECC6A3697050880A3821B,
	grpcsharp_test_callback_delegate_BeginInvoke_m2CD4E0D8CE30C7408A5FA22B410CACA04A46EE91,
	grpcsharp_test_callback_delegate_EndInvoke_mA69A9CBD0F265F9D3B49EE4F3EA8F8FF83E0F810,
	grpcsharp_test_nop_delegate__ctor_mB58E188466D843D12AE239C2479EB6FA8578A3D5,
	grpcsharp_test_nop_delegate_Invoke_m9804DFAF31E78C0DF88F627931F686B8FFFF0521,
	grpcsharp_test_nop_delegate_BeginInvoke_m2B1D66DDD34F452DE6071F2AF78A7DE24878682B,
	grpcsharp_test_nop_delegate_EndInvoke_mF6DA3BD7AFF27A1EBD4A8A30CBDCA73178F09B81,
	grpcsharp_test_override_method_delegate__ctor_m9A1B4A7CBD02159F48A187351CA3CA623A8481C0,
	grpcsharp_test_override_method_delegate_Invoke_mE4A25BB843EA31476F9C43FE53FAC2856C2E07AA,
	grpcsharp_test_override_method_delegate_BeginInvoke_mCD3415011E6D9BEDE14B871E7994F51BBBB1C7D0,
	grpcsharp_test_override_method_delegate_EndInvoke_m1BD71C7D2B9B65AD8831E3CD448C213C2A67EA05,
	grpcsharp_test_call_start_unary_echo_delegate__ctor_mB6B7CA9593F4A98C6A17353A3734761263B9D187,
	grpcsharp_test_call_start_unary_echo_delegate_Invoke_m34AC91406570708BE73CA09AE2E03C73E3C03689,
	grpcsharp_test_call_start_unary_echo_delegate_BeginInvoke_mC90B001F8993CFACFA626DF2089C588187B9FBF1,
	grpcsharp_test_call_start_unary_echo_delegate_EndInvoke_m35A7C274DCE269750245C2A3D2624F1F5ED3DD41,
	DllImportsFromStaticLib_grpcsharp_init_m8206CF5586DF5190DEAE25BB6ACAAD8CB1391E21,
	DllImportsFromStaticLib_grpcsharp_shutdown_m9314914E46F97AB4B8C059A27452DCC9A867A0E9,
	DllImportsFromStaticLib_grpcsharp_version_string_mEC8D236EB8B035D9A640E783F8BF56245D51D178,
	DllImportsFromStaticLib_grpcsharp_batch_context_create_m7F9EFF37B246FAF9CFFE9D8051B5D420EC0D0DFD,
	DllImportsFromStaticLib_grpcsharp_batch_context_recv_initial_metadata_mA5B0603A6FC47E919B6DD6874754125D06D47FE5,
	DllImportsFromStaticLib_grpcsharp_batch_context_recv_message_length_m7895F9C131B8A55AE0C3E71E9EBBEEBB17BC6A6B,
	DllImportsFromStaticLib_grpcsharp_batch_context_recv_message_next_slice_peek_mE19DEC2B2473B9EA0F06C4B7678C6FC4B611ED27,
	DllImportsFromStaticLib_grpcsharp_batch_context_recv_status_on_client_status_m513FEC9D4128E37D5E72EE45FED437B23B44D6D9,
	DllImportsFromStaticLib_grpcsharp_batch_context_recv_status_on_client_details_mB6F94AC19102E151025E92FA5662046C276B5CF1,
	DllImportsFromStaticLib_grpcsharp_batch_context_recv_status_on_client_error_string_m9982E92F1DCECFE6BDBD0DAC132EA287D19EDCDB,
	DllImportsFromStaticLib_grpcsharp_batch_context_recv_status_on_client_trailing_metadata_m95D45CB0BEA88755638E9634F44FF4236CC5AB1E,
	DllImportsFromStaticLib_grpcsharp_batch_context_recv_close_on_server_cancelled_m3BDEF62C162DCA25552BE41C8F2E68B07942A865,
	DllImportsFromStaticLib_grpcsharp_batch_context_reset_mABDF6DAE8F874A479F4D53080A7956BF5325331E,
	DllImportsFromStaticLib_grpcsharp_batch_context_destroy_m0D8DB39C3FD496329AD5E593AF2963F8B998FC8F,
	DllImportsFromStaticLib_grpcsharp_request_call_context_create_m92300F4722E9427DDC01AFCAB2E004CA2E700E7C,
	DllImportsFromStaticLib_grpcsharp_request_call_context_call_mE92CAD2B71CAC46A928A5E94B0E8AAFD9E4E88F3,
	DllImportsFromStaticLib_grpcsharp_request_call_context_method_m95933990E4FDE2F2E853BB7074F1EB54DA7B91EC,
	DllImportsFromStaticLib_grpcsharp_request_call_context_host_m35C310B9670D1E20AD8B2B0507EFB8D6C880FCDC,
	DllImportsFromStaticLib_grpcsharp_request_call_context_deadline_mE250533838C8D4D97F5211047706D7BBA1D72D89,
	DllImportsFromStaticLib_grpcsharp_request_call_context_request_metadata_m5258746C265DF0CE63A21B3C327F4DB8D96646AA,
	DllImportsFromStaticLib_grpcsharp_request_call_context_reset_mA04E2F4102020AF03DE89EE1047FA122AA616C91,
	DllImportsFromStaticLib_grpcsharp_request_call_context_destroy_m23B43B48E297216E349013349A9E5DF86449E984,
	DllImportsFromStaticLib_grpcsharp_composite_call_credentials_create_m2FDB5B8E1674CC3A502AD164247E15F382C43ACA,
	DllImportsFromStaticLib_grpcsharp_call_credentials_release_m3B859FC3CBFC65B20E65D604C51C655720382E3E,
	DllImportsFromStaticLib_grpcsharp_call_cancel_m2B045949B0A7F9988CED13F85727058D6F8DAA8F,
	DllImportsFromStaticLib_grpcsharp_call_cancel_with_status_m704BC392BACFF922492FD58FF675EA476091CC11,
	DllImportsFromStaticLib_grpcsharp_call_start_unary_m77AE8349799141713EE2AAC026BFEB0EE52A94F4,
	DllImportsFromStaticLib_grpcsharp_call_start_client_streaming_m61381229AF07ACCE3490937754FA291E16B6E180,
	DllImportsFromStaticLib_grpcsharp_call_start_server_streaming_m0889BC919ACAE5B63A6F5E3D66D65DDB8A939E88,
	DllImportsFromStaticLib_grpcsharp_call_start_duplex_streaming_m7BA2E05190F6C0686F04A6DC7AEE47F78F68164D,
	DllImportsFromStaticLib_grpcsharp_call_send_message_m21E5E439AE7825276516A2C8527E31796B7B665B,
	DllImportsFromStaticLib_grpcsharp_call_send_close_from_client_m1079E22BF1A2FE2A7D4B3F9AFCC62304827A58B7,
	DllImportsFromStaticLib_grpcsharp_call_send_status_from_server_m74096CB8AC61E17B2D1AF1BC9CF74F62022A1DB3,
	DllImportsFromStaticLib_grpcsharp_call_recv_message_m958C51D93B81861608DF58452216B550E07E79CE,
	DllImportsFromStaticLib_grpcsharp_call_recv_initial_metadata_m4A99C72864A6E8C6AD7CFBC40575C36977B0269F,
	DllImportsFromStaticLib_grpcsharp_call_start_serverside_m63D8C38B87E9988864D7C27CCD2C4E2D5A424219,
	DllImportsFromStaticLib_grpcsharp_call_send_initial_metadata_mDB5031483A959226AFAC2B4928770A7C94203550,
	DllImportsFromStaticLib_grpcsharp_call_set_credentials_m0301BAAD237A9E2A0991F06A965B4EEA11E2AE6A,
	DllImportsFromStaticLib_grpcsharp_call_get_peer_mC1A0C914BE60BB8BD90FB2E753E2DF62861230F5,
	DllImportsFromStaticLib_grpcsharp_call_destroy_mD6634D7E8C5014A0DC5D859FD1E94CB1F68FD7E6,
	DllImportsFromStaticLib_grpcsharp_channel_args_create_mB3A85BAB324B9DA8B5E2959F61CFDB30A177AC25,
	DllImportsFromStaticLib_grpcsharp_channel_args_set_string_m943F2D1263C7E757D99CD216A9D85BE9C02636D8,
	DllImportsFromStaticLib_grpcsharp_channel_args_set_integer_m5575CFD676AC4F623D9506DF519E626D3FF75951,
	DllImportsFromStaticLib_grpcsharp_channel_args_destroy_m1410AA2346E54C5C32F38B42264F09C46D9954BD,
	DllImportsFromStaticLib_grpcsharp_override_default_ssl_roots_mA60708CC494BE1FF552F6A72EECF8C7EC701C8CF,
	DllImportsFromStaticLib_grpcsharp_ssl_credentials_create_m9FE934DBFDAAA29995A5188E277236CECCFD0FD3,
	DllImportsFromStaticLib_grpcsharp_composite_channel_credentials_create_m89A8C48A2536BD80651957D658B2907A6E5AB15B,
	DllImportsFromStaticLib_grpcsharp_channel_credentials_release_m1AC2EA299A7DA7319E0FAF2E0732E16F8EF52D7B,
	DllImportsFromStaticLib_grpcsharp_insecure_channel_create_m4EEAAC80E98ACDA5B404F3EDA8BC1F664A861788,
	DllImportsFromStaticLib_grpcsharp_secure_channel_create_m85E57DDDEEDB5066C422410976B8E8972175DF94,
	DllImportsFromStaticLib_grpcsharp_channel_create_call_m430290BF7EC7E3E047621748A754CAE15CD6EF83,
	DllImportsFromStaticLib_grpcsharp_channel_check_connectivity_state_m9D33D1C479C81A9115BD0755B25C70811EE33CE0,
	DllImportsFromStaticLib_grpcsharp_channel_watch_connectivity_state_m1CB523A79A47EC50FBD9F028A85EDB99342F77C3,
	DllImportsFromStaticLib_grpcsharp_channel_get_target_m505BD5E2EBBC3E04BC35436E069340B12531DA73,
	DllImportsFromStaticLib_grpcsharp_channel_destroy_m9405FCE1D3C5D3AED159E3F7E8856A0A9A5CFBBC,
	DllImportsFromStaticLib_grpcsharp_sizeof_grpc_event_mFFC8E9FB66333C913C442451CF46B89ADBC1107E,
	DllImportsFromStaticLib_grpcsharp_completion_queue_create_async_m9EE4312FB688DC262430A47225F59E4CBF76DE4B,
	DllImportsFromStaticLib_grpcsharp_completion_queue_create_sync_m49851C795FB0DB561567BDFFF90ACB27AB9B46A2,
	DllImportsFromStaticLib_grpcsharp_completion_queue_shutdown_m68D2897D4C034B71403CC4E0CBE93C90FB77DB82,
	DllImportsFromStaticLib_grpcsharp_completion_queue_next_mE5E568B72C2147F5F5069A683D3D4D2892163B9D,
	DllImportsFromStaticLib_grpcsharp_completion_queue_pluck_m8871B7C4C160E0A76C03494762DE13B3C4128FBF,
	DllImportsFromStaticLib_grpcsharp_completion_queue_destroy_m45BC8EFF447EB73C6D1D240281A5B0FA4CF955FD,
	DllImportsFromStaticLib_gprsharp_free_m23BE6FB3B7A0E27CC8C065E1B677B98EC7908DB6,
	DllImportsFromStaticLib_grpcsharp_metadata_array_create_m6709B285C1F38638C48B9AB4A4846A729D97E090,
	DllImportsFromStaticLib_grpcsharp_metadata_array_add_m2EE7A0191CFD8A4308E3B909FD771F510E4ED6F1,
	DllImportsFromStaticLib_grpcsharp_metadata_array_count_mC0D06A0C931B69CC470CC5859947A4E6B4513EFC,
	DllImportsFromStaticLib_grpcsharp_metadata_array_get_key_m28AF46E50E3024078DC39EAF8D993B78386FD834,
	DllImportsFromStaticLib_grpcsharp_metadata_array_get_value_mB0BAC0E1D0C5E22AF839D77CDD2813F138DC579D,
	DllImportsFromStaticLib_grpcsharp_metadata_array_destroy_full_m264720EFD0990FD5726AFA09E1474DC278C327AD,
	DllImportsFromStaticLib_grpcsharp_redirect_log_mDC0D873C9074BE2CD1146847F7E427C6E0273990,
	DllImportsFromStaticLib_grpcsharp_native_callback_dispatcher_init_mEC1B959F3331551AEF814DB966C11516AB729FC2,
	DllImportsFromStaticLib_grpcsharp_metadata_credentials_create_from_plugin_mCF104FF9E088F7291E451097BBB59D5998CFA79E,
	DllImportsFromStaticLib_grpcsharp_metadata_credentials_notify_from_plugin_m267983DB31BF4DCD3DDFE0D7C5DE6C336CB859F7,
	DllImportsFromStaticLib_grpcsharp_ssl_server_credentials_create_mA9403B27FA540BCEFFB1602D125174A1FCC8F6F2,
	DllImportsFromStaticLib_grpcsharp_server_credentials_release_mCF4AC621BC77A884E024058801F91FE1C8200764,
	DllImportsFromStaticLib_grpcsharp_server_create_m6F782C16FF7792187BB33FAB9BAB1F5AE1E1B060,
	DllImportsFromStaticLib_grpcsharp_server_register_completion_queue_m7F0B0B46942ADD7EBD832201FE00CF595E977B22,
	DllImportsFromStaticLib_grpcsharp_server_add_insecure_http2_port_mE20693EFE018DBA49D671E1982391D9ECA13CF09,
	DllImportsFromStaticLib_grpcsharp_server_add_secure_http2_port_mBB92ECFB4D90C543A914BDE1E5A6607BC1B235F1,
	DllImportsFromStaticLib_grpcsharp_server_start_m883CE2C7B3A05F5A2DA19F067567E893710CBBB3,
	DllImportsFromStaticLib_grpcsharp_server_request_call_mF0018653E03CE2C0F04A2E29AA0606AB6B73132B,
	DllImportsFromStaticLib_grpcsharp_server_cancel_all_calls_m0B8BDDA263D96FA596DBB0AF0FEF5B8F9B61EB1A,
	DllImportsFromStaticLib_grpcsharp_server_shutdown_and_notify_callback_mE8D64D81CB9A024CC1DC70C17C4E7FA21DF4606C,
	DllImportsFromStaticLib_grpcsharp_server_destroy_mF96214E8C4054E119896147B0BDE26A864EB85DD,
	DllImportsFromStaticLib_grpcsharp_call_auth_context_m99583632C88149DCEA714478F0E1444C71DB9D5D,
	DllImportsFromStaticLib_grpcsharp_auth_context_peer_identity_property_name_m3B928E4CABCC8501272254D86658302EDE569150,
	DllImportsFromStaticLib_grpcsharp_auth_context_property_iterator_mFB201E26B57CF42F2993C1DE925E01F7AEE1D1FE,
	DllImportsFromStaticLib_grpcsharp_auth_property_iterator_next_m7844E255103A4993E9A8A1F711F9C113F296A6D9,
	DllImportsFromStaticLib_grpcsharp_auth_context_release_m139750A9D5E221B1223ECEC1224F9CE5A69BBE16,
	DllImportsFromStaticLib_grpcsharp_slice_buffer_create_mA37F738178525E0148975A365996B703CBC4A3C1,
	DllImportsFromStaticLib_grpcsharp_slice_buffer_adjust_tail_space_m5D9571ADCDA1609C725F08C775F41CC5F509A55C,
	DllImportsFromStaticLib_grpcsharp_slice_buffer_slice_count_mC8C0A5E5BF1D2A06DAD978DC8BE2FF6E40CEB7CA,
	DllImportsFromStaticLib_grpcsharp_slice_buffer_slice_peek_m31B1C281CEB628C30A1B3FC5240A9EC223944BE3,
	DllImportsFromStaticLib_grpcsharp_slice_buffer_reset_and_unref_m5929DB0A4E105B4764DDDE00285CA97E6F6D2C80,
	DllImportsFromStaticLib_grpcsharp_slice_buffer_destroy_mB3363783415B4F3DDAA97BAF6E56C260FD57EEEE,
	DllImportsFromStaticLib_gprsharp_now_mB3F87344C298722B3099E0F88F39C3930AA9C9E4,
	DllImportsFromStaticLib_gprsharp_inf_future_mE446851BA362783E4C7B6A25C1ED02F98091747B,
	DllImportsFromStaticLib_gprsharp_inf_past_m9F147A05DF8E7CD9AF391419745444ADEA871F61,
	DllImportsFromStaticLib_gprsharp_convert_clock_type_m075398857E3AFE2AF9CECF8BF034092680257554,
	DllImportsFromStaticLib_gprsharp_sizeof_timespec_m83FB072CAA683B2FCF6A4656F343F7CEB6794ED8,
	DllImportsFromStaticLib_grpcsharp_test_callback_m917EECD3241B1B1B940D5272ED49D3742A8F2579,
	DllImportsFromStaticLib_grpcsharp_test_nop_mC44AFCD74552FD8885D90413EBB8A256D809E714,
	DllImportsFromStaticLib_grpcsharp_test_override_method_mC20E93DE58A768CD5EE9FF0F1E9644A27AEA11EC,
	DllImportsFromStaticLib_grpcsharp_test_call_start_unary_echo_m2A1056D71EF7305A0B8322B2C6D14283BD62A51C,
	DllImportsFromStaticLib__ctor_mDBFB69E002213875CDED8AD6E6717DC848F359FF,
	DllImportsFromSharedLib_grpcsharp_init_m341FFE573469D8D321E50582D91B11E562072540,
	DllImportsFromSharedLib_grpcsharp_shutdown_m1AFB3A9EBAB48AD44BC9170B6A455E8E25DBC7FA,
	DllImportsFromSharedLib_grpcsharp_version_string_mEF1B90870A0798D966416DC23FA5B7E85338F56C,
	DllImportsFromSharedLib_grpcsharp_batch_context_create_m35E51F9481321C3706183071FEF4B8FE72FA5AB1,
	DllImportsFromSharedLib_grpcsharp_batch_context_recv_initial_metadata_mE9615ACB8D37E7A7845C5D32470106777381C228,
	DllImportsFromSharedLib_grpcsharp_batch_context_recv_message_length_m3DC4345D3E4991FC0DD7675835258CF70585E4CB,
	DllImportsFromSharedLib_grpcsharp_batch_context_recv_message_next_slice_peek_mCDCC86482DEB9EE5A35897C7E916056662FAABE6,
	DllImportsFromSharedLib_grpcsharp_batch_context_recv_status_on_client_status_m4B0CEFABC203D2551CA393D6C1BBB16B92D07361,
	DllImportsFromSharedLib_grpcsharp_batch_context_recv_status_on_client_details_m6436C28021E8419AAD5FBBF2C1D5852685EE67C7,
	DllImportsFromSharedLib_grpcsharp_batch_context_recv_status_on_client_error_string_mD86AC26B9134C103A5720881EAC62BC7E97B7DAB,
	DllImportsFromSharedLib_grpcsharp_batch_context_recv_status_on_client_trailing_metadata_m52B5266F3340F37398F3CE222DC74A1D2030698A,
	DllImportsFromSharedLib_grpcsharp_batch_context_recv_close_on_server_cancelled_m93778A089770E9A96AA9F86345D746E132B8EE8D,
	DllImportsFromSharedLib_grpcsharp_batch_context_reset_m90F6ECC71771831069EC0D01622A93D06440E862,
	DllImportsFromSharedLib_grpcsharp_batch_context_destroy_m1A7E46B24C24921854F9D878833509A4942C961C,
	DllImportsFromSharedLib_grpcsharp_request_call_context_create_m79AE4549674326371047ACECE38F592E90049F9B,
	DllImportsFromSharedLib_grpcsharp_request_call_context_call_m1559544F560C17292C32281D815FEA42522C2F5A,
	DllImportsFromSharedLib_grpcsharp_request_call_context_method_mA8698AAE4034ED5FF36D6F7BFD4BF31865188200,
	DllImportsFromSharedLib_grpcsharp_request_call_context_host_mB9ABDD9C9B10C8155B25F9A6A754F033ED62004B,
	DllImportsFromSharedLib_grpcsharp_request_call_context_deadline_m715D7CF87DBE336C519A113804C8EBCB81780310,
	DllImportsFromSharedLib_grpcsharp_request_call_context_request_metadata_mC7D0E279B904378E600354F068E22BD1BE13ECD2,
	DllImportsFromSharedLib_grpcsharp_request_call_context_reset_m92C560CD8DD879B95E80C42B99106474B65E7990,
	DllImportsFromSharedLib_grpcsharp_request_call_context_destroy_m3793373A730A377834DFFBC7ECCB6A8DDE733A78,
	DllImportsFromSharedLib_grpcsharp_composite_call_credentials_create_mAA036E448C84740D98C1615B93F87A57A11C496D,
	DllImportsFromSharedLib_grpcsharp_call_credentials_release_mF6DAF6901EA5C0C58F6FED7D6BC6845E8F614777,
	DllImportsFromSharedLib_grpcsharp_call_cancel_m3A319400AABF304D835A730E4480B0C6BB8D59CB,
	DllImportsFromSharedLib_grpcsharp_call_cancel_with_status_m1FB4C52EAAC64397693A3937888283605F5E3C8A,
	DllImportsFromSharedLib_grpcsharp_call_start_unary_m2AD4EBB3D00627CC17AFEAFDB41CD6F15FF2C435,
	DllImportsFromSharedLib_grpcsharp_call_start_client_streaming_m503F937BF7F29FA255BB5D856608741539667C6C,
	DllImportsFromSharedLib_grpcsharp_call_start_server_streaming_m09FB17B404EFE801E7E372A6A22E6CDD35956122,
	DllImportsFromSharedLib_grpcsharp_call_start_duplex_streaming_mE2832FACD2267674837B907E2DE87FF3421FCB6C,
	DllImportsFromSharedLib_grpcsharp_call_send_message_mBF1295946B169D8FBAA57A6F2C6F8D17DDBC3F34,
	DllImportsFromSharedLib_grpcsharp_call_send_close_from_client_m7ABF17D0DEB60F26720321A809A863188CA53B5F,
	DllImportsFromSharedLib_grpcsharp_call_send_status_from_server_mD6178794D83EF0353095AC8553872B6E7C039200,
	DllImportsFromSharedLib_grpcsharp_call_recv_message_mAF651B7E07DF859A97944558FEF47A28C95EC8D5,
	DllImportsFromSharedLib_grpcsharp_call_recv_initial_metadata_m4147731DD670A670611BD0045FA65F29A08E44BC,
	DllImportsFromSharedLib_grpcsharp_call_start_serverside_m7056FEFCCD56F911BC49DEF6C2692ED857C8C5FF,
	DllImportsFromSharedLib_grpcsharp_call_send_initial_metadata_m3318711C01725F79C3D18B68536DADD10311972D,
	DllImportsFromSharedLib_grpcsharp_call_set_credentials_m12BF3CE001F8721F920201A7744F5AF314C7EAAA,
	DllImportsFromSharedLib_grpcsharp_call_get_peer_m31A7FBCC732D4BB33A6EB487783931721D76CA09,
	DllImportsFromSharedLib_grpcsharp_call_destroy_m315BB72F3703105D72CA0429F5E1039EF424C0CF,
	DllImportsFromSharedLib_grpcsharp_channel_args_create_m6BDAECDD486B7AEC59071AD24B70FA2653824F64,
	DllImportsFromSharedLib_grpcsharp_channel_args_set_string_mE7EC162D43A8915ADC762DA3246722C42F4AA893,
	DllImportsFromSharedLib_grpcsharp_channel_args_set_integer_mB9AD05FCB5C3F684480AAFAFF4477DDD7D5D5E9B,
	DllImportsFromSharedLib_grpcsharp_channel_args_destroy_mDA0C99D7A4EF7725AFABC5234D2DE09054B51D26,
	DllImportsFromSharedLib_grpcsharp_override_default_ssl_roots_m948E44F696EAE6E45A73BA914534D0371AD96FD8,
	DllImportsFromSharedLib_grpcsharp_ssl_credentials_create_m75147197009C2421EB71A7294E4AA8A849B2D353,
	DllImportsFromSharedLib_grpcsharp_composite_channel_credentials_create_m946E6E4CC17228C26421E3441CCACB5565DB9A6F,
	DllImportsFromSharedLib_grpcsharp_channel_credentials_release_m5A1ED07B83B83419767AFDA31E1B7FBFBE364645,
	DllImportsFromSharedLib_grpcsharp_insecure_channel_create_m13995F7ACE0FD04E1BB69B81B34CC8758318B23E,
	DllImportsFromSharedLib_grpcsharp_secure_channel_create_mA104F11A4B655353F5E00FAE913F563AFCE58D08,
	DllImportsFromSharedLib_grpcsharp_channel_create_call_m8827B7884B2A1B67F041421D2B95D485B9699AF8,
	DllImportsFromSharedLib_grpcsharp_channel_check_connectivity_state_m42CCF8201F0FEA9F50429378685EDEACFABE6E9B,
	DllImportsFromSharedLib_grpcsharp_channel_watch_connectivity_state_mC491DBC49D0D46F5E22A29D294F3ACF57896220E,
	DllImportsFromSharedLib_grpcsharp_channel_get_target_mB272780230D7CFC4253672841571F03C0DC00B57,
	DllImportsFromSharedLib_grpcsharp_channel_destroy_m26B7F399EFF310BF0B7F000D86662BDBCF6C90F8,
	DllImportsFromSharedLib_grpcsharp_sizeof_grpc_event_m9D0E1243128BE6C39B62AB10B2F47AD7E914A721,
	DllImportsFromSharedLib_grpcsharp_completion_queue_create_async_mD84CABB65977E3D00E003EFF379CF1345F0A92CA,
	DllImportsFromSharedLib_grpcsharp_completion_queue_create_sync_m5BF94C3D27081632FE7CD9F07175687D308A1A0B,
	DllImportsFromSharedLib_grpcsharp_completion_queue_shutdown_m7A30038FA25F627C4857F7B393D2CD41E4003159,
	DllImportsFromSharedLib_grpcsharp_completion_queue_next_mFFBE7D6196AAD5503D63F6C9C7CB60998D8DA8E1,
	DllImportsFromSharedLib_grpcsharp_completion_queue_pluck_m68850D60FE35F63F4790BB61CF14FFE9C6E34E49,
	DllImportsFromSharedLib_grpcsharp_completion_queue_destroy_mF15009B9B43850543A17CA62E0BD2243D3E89C7F,
	DllImportsFromSharedLib_gprsharp_free_m73D2083F7796DF9D177E5B31A23357C8DD7E4CF3,
	DllImportsFromSharedLib_grpcsharp_metadata_array_create_m285699BAD578155484B6EF82E45F8E061C09FEE9,
	DllImportsFromSharedLib_grpcsharp_metadata_array_add_m452B7FF052E871A422D035D5609BA205CF5182CC,
	DllImportsFromSharedLib_grpcsharp_metadata_array_count_m731CEB060CC812FB545555EB53E8FD249A784DF7,
	DllImportsFromSharedLib_grpcsharp_metadata_array_get_key_mFEEA962D91DD29110CED5C4545E9CB1F14DBA1BC,
	DllImportsFromSharedLib_grpcsharp_metadata_array_get_value_m703CF748E00CC762B7CE04A5B9C1D928482287EA,
	DllImportsFromSharedLib_grpcsharp_metadata_array_destroy_full_mDC086DF7C3F97AE69F0A87282909E6A8BC03FE7B,
	DllImportsFromSharedLib_grpcsharp_redirect_log_m7FEAC17113FB1A722DCB17A9922E2F2BC1C5B424,
	DllImportsFromSharedLib_grpcsharp_native_callback_dispatcher_init_mE4649BE3C37CC305389F929C8C5E60BA7EE5C892,
	DllImportsFromSharedLib_grpcsharp_metadata_credentials_create_from_plugin_m0BFAA42B1D8954DB3BE7E4D2DDF8324F6B1F031C,
	DllImportsFromSharedLib_grpcsharp_metadata_credentials_notify_from_plugin_mA7502EA3D88F74B024807E33DFCD934CB6FE04D3,
	DllImportsFromSharedLib_grpcsharp_ssl_server_credentials_create_mD01F08FF83D28FF27D9C45F8E1E63A26EA76C684,
	DllImportsFromSharedLib_grpcsharp_server_credentials_release_mA287BD769C0E12A996ED6AEDFC7E08701D2C22EF,
	DllImportsFromSharedLib_grpcsharp_server_create_m1F890F97F8C2DCE0A782706AFE3B3C0CE2972DF5,
	DllImportsFromSharedLib_grpcsharp_server_register_completion_queue_m409287E89693A01DEA0DDF69E46849FB58BF6E6E,
	DllImportsFromSharedLib_grpcsharp_server_add_insecure_http2_port_m7596DCFA6E8507E17E61924D264A72B1ECC4457C,
	DllImportsFromSharedLib_grpcsharp_server_add_secure_http2_port_mE47C5F45D7256FDFE41595B1908D53C6F47A22AE,
	DllImportsFromSharedLib_grpcsharp_server_start_m069D28A8E5E1A896752ACE3AB6AC0643CD57973A,
	DllImportsFromSharedLib_grpcsharp_server_request_call_m55C754E3EC63C6A94F17E39B7A66E0C7A707C6B6,
	DllImportsFromSharedLib_grpcsharp_server_cancel_all_calls_m753AAA7893D7A883940F97CFFAB9D90E771E18CA,
	DllImportsFromSharedLib_grpcsharp_server_shutdown_and_notify_callback_mC367E0EA7C89EF0D4D01A4DC46014A0C564ECA16,
	DllImportsFromSharedLib_grpcsharp_server_destroy_m586B731A3ADEAB55DB3643E3BD25EE1C385AF0F0,
	DllImportsFromSharedLib_grpcsharp_call_auth_context_mE6983AE2F64AE1B98E0A49F5F5E504BA4C30E886,
	DllImportsFromSharedLib_grpcsharp_auth_context_peer_identity_property_name_m605B5C7A8CAA8C0B181DDE3732C758ECBF8741E1,
	DllImportsFromSharedLib_grpcsharp_auth_context_property_iterator_m3B64328F618A0EC32BD4D09B8376BFB72E552377,
	DllImportsFromSharedLib_grpcsharp_auth_property_iterator_next_m4FBAE7E2243059A71B8D211BC2C79E7A3D614A98,
	DllImportsFromSharedLib_grpcsharp_auth_context_release_m3B72992C82B3911F4F19C1AFD2883192788DF2F3,
	DllImportsFromSharedLib_grpcsharp_slice_buffer_create_m60AA3F5045DC08B852F15A838F24D1B91FFC87B7,
	DllImportsFromSharedLib_grpcsharp_slice_buffer_adjust_tail_space_m669CD54CEDF4769DC6B15E1EE842F8D8749A16B4,
	DllImportsFromSharedLib_grpcsharp_slice_buffer_slice_count_m8A8566A3AE45798A7BAED908DD6AFFE992F00AF3,
	DllImportsFromSharedLib_grpcsharp_slice_buffer_slice_peek_mB7F167C2943C66BE93A4013670032F113FF21E50,
	DllImportsFromSharedLib_grpcsharp_slice_buffer_reset_and_unref_m03F94F30F3CECEC43BDD318A319739C2416607A2,
	DllImportsFromSharedLib_grpcsharp_slice_buffer_destroy_mB2F8B97415115343547FB9081B0EF7A14FC798D5,
	DllImportsFromSharedLib_gprsharp_now_m7618C0C36F4177D5CDE9BDB8673C771C0E8804D2,
	DllImportsFromSharedLib_gprsharp_inf_future_mCF536F9E8247A179754A896053859E0BBBA953AE,
	DllImportsFromSharedLib_gprsharp_inf_past_m8EEAD4758DA7F3EE95B6D97848C6A3AAF01FFC04,
	DllImportsFromSharedLib_gprsharp_convert_clock_type_mEACC6C58D04179D6C381B477752E62E23A20BEDA,
	DllImportsFromSharedLib_gprsharp_sizeof_timespec_m8DE6D8724129CE481ADC104C9D9BF628050858E4,
	DllImportsFromSharedLib_grpcsharp_test_callback_m0D7876F134ABB10B22F4DDF0097CBCC7F196724F,
	DllImportsFromSharedLib_grpcsharp_test_nop_mFE1FB5527D1BD6CE1D97291F8D3004EE8CEEE0DF,
	DllImportsFromSharedLib_grpcsharp_test_override_method_mA625FFE899155925468B6BEBA3872F49AEE8A081,
	DllImportsFromSharedLib_grpcsharp_test_call_start_unary_echo_m388744B9408A44F2C3A4891E522ADB22BC6FE838,
	DllImportsFromSharedLib__ctor_mF6A20118B4EDD7EDEF37BD83237210110E1B0F7D,
	DllImportsFromSharedLib_x86_grpcsharp_init_m33E12F2438DD7FD802925C06DC1DABEE0E184E9E,
	DllImportsFromSharedLib_x86_grpcsharp_shutdown_mAD1D10D5C1D266A2EC75976F2F435835CF8791FC,
	DllImportsFromSharedLib_x86_grpcsharp_version_string_m54782C5A168DF98510C669523E5791F2C73C50E9,
	DllImportsFromSharedLib_x86_grpcsharp_batch_context_create_m273F85C8F853AC2D799194F7525D864FC3ADAD0A,
	DllImportsFromSharedLib_x86_grpcsharp_batch_context_recv_initial_metadata_m5E6B620223E2A0C6FD70925C5E342F1A821E559F,
	DllImportsFromSharedLib_x86_grpcsharp_batch_context_recv_message_length_m00083C95FC980F326FC58DB1E131E6F368F67655,
	DllImportsFromSharedLib_x86_grpcsharp_batch_context_recv_message_next_slice_peek_mF7BD2815051CBC2D03683F21540FCF2ACCB7BF93,
	DllImportsFromSharedLib_x86_grpcsharp_batch_context_recv_status_on_client_status_m16AD7B01B22EEE3E9989E3CF14DC242DDEFC9FA7,
	DllImportsFromSharedLib_x86_grpcsharp_batch_context_recv_status_on_client_details_mD09574F766CB6AD4A341B3FD3BCF66C5BF62A160,
	DllImportsFromSharedLib_x86_grpcsharp_batch_context_recv_status_on_client_error_string_m85A228E173057E5261454E5F02CAD5D6D7105195,
	DllImportsFromSharedLib_x86_grpcsharp_batch_context_recv_status_on_client_trailing_metadata_m81AD7BB37BE3B7B8AF921DC8AD13BDA4EE3E07C4,
	DllImportsFromSharedLib_x86_grpcsharp_batch_context_recv_close_on_server_cancelled_m64F45B3AEE109C85684FB41CA3E3BBB39D65A37F,
	DllImportsFromSharedLib_x86_grpcsharp_batch_context_reset_m3D5AE07C53E65D4B90D345242727E2FDF8DD97F1,
	DllImportsFromSharedLib_x86_grpcsharp_batch_context_destroy_m138C207A3B5CBDE3D2131D3C89519710AD8AE0A7,
	DllImportsFromSharedLib_x86_grpcsharp_request_call_context_create_m511B7BDCE2D4B55F2BAD1A65C70EB3ABDF2B663A,
	DllImportsFromSharedLib_x86_grpcsharp_request_call_context_call_mB01D0AB5E26A9934AE12A480AFFD20CBCF343BFF,
	DllImportsFromSharedLib_x86_grpcsharp_request_call_context_method_m62D3F4AF9BCA4BAA406EBCF1F2E75529EA1D8655,
	DllImportsFromSharedLib_x86_grpcsharp_request_call_context_host_m7D302278B2A22E5CE29BC3C469315A929772352E,
	DllImportsFromSharedLib_x86_grpcsharp_request_call_context_deadline_mD6A27DF349934EB84D16CA83E8EFA382E6DBE09B,
	DllImportsFromSharedLib_x86_grpcsharp_request_call_context_request_metadata_mB2BF0C8DFCFBC74EA8C46933B16C3C5D28B6836F,
	DllImportsFromSharedLib_x86_grpcsharp_request_call_context_reset_m093F4306933F4F1AFA0AC31F9A944997AD60A912,
	DllImportsFromSharedLib_x86_grpcsharp_request_call_context_destroy_m2C6ED0B8A8A53FC14D6A1FD71F562C454C02E79B,
	DllImportsFromSharedLib_x86_grpcsharp_composite_call_credentials_create_m65239C13637D2183605D8C8E254F43284BF0FF75,
	DllImportsFromSharedLib_x86_grpcsharp_call_credentials_release_m5C3A6F4B21F701913FE3734E6F22805AB4C02675,
	DllImportsFromSharedLib_x86_grpcsharp_call_cancel_m5FF8DFBFBD4F490171D629A200F0BCE5C19107DB,
	DllImportsFromSharedLib_x86_grpcsharp_call_cancel_with_status_m474E2374949FA69B096327C51C1EE7C0896E5FB1,
	DllImportsFromSharedLib_x86_grpcsharp_call_start_unary_mF8293D5620088D0ACE01631F57DDD647DBE0F48E,
	DllImportsFromSharedLib_x86_grpcsharp_call_start_client_streaming_mE4FE5B4ED5DEDDE9A1081A4D9BE7A0A48A6330DD,
	DllImportsFromSharedLib_x86_grpcsharp_call_start_server_streaming_m9C3A3AA2F2372426487F1F1F1F78F0DD537E780F,
	DllImportsFromSharedLib_x86_grpcsharp_call_start_duplex_streaming_m8E1C95D3D8B609577970F8B11FDB37AD8A371ACB,
	DllImportsFromSharedLib_x86_grpcsharp_call_send_message_mC9EB90E2F49729A345EF4C760E64911B96819E02,
	DllImportsFromSharedLib_x86_grpcsharp_call_send_close_from_client_mD709C2723023FE2188BE6F3C4395A2FD5F8E6201,
	DllImportsFromSharedLib_x86_grpcsharp_call_send_status_from_server_m63254E111B333FC932C0CC0BAE7E4169DE0D22D7,
	DllImportsFromSharedLib_x86_grpcsharp_call_recv_message_mC83F6C653BCAF98B8D54E405F9C70D6F93BE5924,
	DllImportsFromSharedLib_x86_grpcsharp_call_recv_initial_metadata_m92F71199DCCD0326BA0F68D149D9F0AFF9950FE3,
	DllImportsFromSharedLib_x86_grpcsharp_call_start_serverside_m49680296193D388C53F3FBB3B53DEA935592F1FA,
	DllImportsFromSharedLib_x86_grpcsharp_call_send_initial_metadata_m42753FE29B9F214876316160C5154ECC4A7C3232,
	DllImportsFromSharedLib_x86_grpcsharp_call_set_credentials_m3ACBF9C85A24FB290A009CA1B320F10A3448BD2F,
	DllImportsFromSharedLib_x86_grpcsharp_call_get_peer_m18DCEF1119E86A92CE8884E5F9EF9275BCFB5DB7,
	DllImportsFromSharedLib_x86_grpcsharp_call_destroy_mC406C30D61A772FC68F24ED2E96579042DDC6AED,
	DllImportsFromSharedLib_x86_grpcsharp_channel_args_create_mEDF1A256997EA165CF7185C18C48D65DEEEEDC0F,
	DllImportsFromSharedLib_x86_grpcsharp_channel_args_set_string_m7F7A2436EFED1C0205CD87DE9ECCDDBBD7562AE2,
	DllImportsFromSharedLib_x86_grpcsharp_channel_args_set_integer_m0E7420967637B3671AC6895FF10CDD5D48AF4E75,
	DllImportsFromSharedLib_x86_grpcsharp_channel_args_destroy_mF8A441AC87E15FDB4F4F6A0CB5FAC5DB98FF2507,
	DllImportsFromSharedLib_x86_grpcsharp_override_default_ssl_roots_m74F483F5E476157B84725204EC208E412FCABD4F,
	DllImportsFromSharedLib_x86_grpcsharp_ssl_credentials_create_m793384399663A093D60A5DE6FED315C3C411CCC8,
	DllImportsFromSharedLib_x86_grpcsharp_composite_channel_credentials_create_m8D8724496758831FFF3363A4AD9B6FA83F75E96F,
	DllImportsFromSharedLib_x86_grpcsharp_channel_credentials_release_mEA8CDEA170D1BF1294E08597088A62B680346530,
	DllImportsFromSharedLib_x86_grpcsharp_insecure_channel_create_m675A6E8BE4F493B44D2D5CD2A147E7A7D02C2B45,
	DllImportsFromSharedLib_x86_grpcsharp_secure_channel_create_m077CD7927B3BF585D60AF6B1DD40172230350159,
	DllImportsFromSharedLib_x86_grpcsharp_channel_create_call_mBE7EB427FD3FED6FD61ABA3F90F264A98E3D720F,
	DllImportsFromSharedLib_x86_grpcsharp_channel_check_connectivity_state_m7840340D70B8238356CB62D641A13C67A3756B9F,
	DllImportsFromSharedLib_x86_grpcsharp_channel_watch_connectivity_state_m678BBC1FAEF71A609B0CF027C9AB98C96D393495,
	DllImportsFromSharedLib_x86_grpcsharp_channel_get_target_m73415A6DBCC1A72F0CED8C5D09E91CF81749DCEF,
	DllImportsFromSharedLib_x86_grpcsharp_channel_destroy_m1446504EFF1FED970D5D61A0603E529F6FDFA2FA,
	DllImportsFromSharedLib_x86_grpcsharp_sizeof_grpc_event_m7BB9FB3CDC67E86C69D3CFF8B1F87B02114BAEF1,
	DllImportsFromSharedLib_x86_grpcsharp_completion_queue_create_async_mB680BDCA668EEE32CB08E2ADEF961C56B9F82572,
	DllImportsFromSharedLib_x86_grpcsharp_completion_queue_create_sync_mDB12D809D1C175CED23B077EBB75E52119A8FD6A,
	DllImportsFromSharedLib_x86_grpcsharp_completion_queue_shutdown_mBA033897D5F66A79B290F736EF8F2CEF621CF9FF,
	DllImportsFromSharedLib_x86_grpcsharp_completion_queue_next_mC1FC3285FEE2F5D57631DF3E2BC08F41D2A58FC1,
	DllImportsFromSharedLib_x86_grpcsharp_completion_queue_pluck_mC14DA99F17FDA5EA2C64A8DECDA4269F7AF503D8,
	DllImportsFromSharedLib_x86_grpcsharp_completion_queue_destroy_mEF4A6755E0F142A5BC9618BAC8FE0A645941175B,
	DllImportsFromSharedLib_x86_gprsharp_free_mAD8E9809722D2115206E66F1D2DEABBD57B6B9DE,
	DllImportsFromSharedLib_x86_grpcsharp_metadata_array_create_m0A24D077690D3E31CA45BBBD474E51963065C930,
	DllImportsFromSharedLib_x86_grpcsharp_metadata_array_add_m02AD694431EB14E36F7E5DA6171E3736C172AB8F,
	DllImportsFromSharedLib_x86_grpcsharp_metadata_array_count_m47E800DD00C3AC2C14F911846381BC556E2A2834,
	DllImportsFromSharedLib_x86_grpcsharp_metadata_array_get_key_m2E1C4CC5EDEE51855F7D5652B4A5E0CB0A5DE1F6,
	DllImportsFromSharedLib_x86_grpcsharp_metadata_array_get_value_m7DFEC48E6BB3552004C22D77AEC133AA2F25E6F6,
	DllImportsFromSharedLib_x86_grpcsharp_metadata_array_destroy_full_mA1761718BEA498433F426943B842BE81BE77C72A,
	DllImportsFromSharedLib_x86_grpcsharp_redirect_log_mFC5DAB9387F180C4E16784931B1C03B831772CC0,
	DllImportsFromSharedLib_x86_grpcsharp_native_callback_dispatcher_init_mE1746BFFD492F1D7045AFAE5D626F49834BEEF55,
	DllImportsFromSharedLib_x86_grpcsharp_metadata_credentials_create_from_plugin_m9249C6913F863F712E3A9E67691517F42C28A2B1,
	DllImportsFromSharedLib_x86_grpcsharp_metadata_credentials_notify_from_plugin_m99DC3D07EA5FB50F00EBA3D70549A6B8B3647EC9,
	DllImportsFromSharedLib_x86_grpcsharp_ssl_server_credentials_create_mEAB1FE56D13D41DF7AC0E81BBE4AC7CD99DC04CB,
	DllImportsFromSharedLib_x86_grpcsharp_server_credentials_release_m72AEFD30E2885FDA4F2CD29B5CA2944CCE7010B2,
	DllImportsFromSharedLib_x86_grpcsharp_server_create_m7DFB46D93B73DD41FCB80F95C9C8DFC237A2754E,
	DllImportsFromSharedLib_x86_grpcsharp_server_register_completion_queue_m7E75DDFB48FE0F0D779DE458C549AB0F0E9150EB,
	DllImportsFromSharedLib_x86_grpcsharp_server_add_insecure_http2_port_m68FCCF178877BA0BFA4856F348209DD8CEC50A46,
	DllImportsFromSharedLib_x86_grpcsharp_server_add_secure_http2_port_mB8B74D31F6868257201423E4A7FB6D7E7C4F1D45,
	DllImportsFromSharedLib_x86_grpcsharp_server_start_m67EA396467B695E88F6730ECC19E32639045D138,
	DllImportsFromSharedLib_x86_grpcsharp_server_request_call_m07185B865D45245AF884E11C1650E1DBBA47E3E6,
	DllImportsFromSharedLib_x86_grpcsharp_server_cancel_all_calls_m4546C82061495C9BC6F5C42A3E89496F3E8D0FD6,
	DllImportsFromSharedLib_x86_grpcsharp_server_shutdown_and_notify_callback_m6DCD6CC4C44E628C584EC26DFEC46683F17C1029,
	DllImportsFromSharedLib_x86_grpcsharp_server_destroy_mC532545F7176B1E3E625B96A691C759DA7E34106,
	DllImportsFromSharedLib_x86_grpcsharp_call_auth_context_m3CDA79FC162567B64E924E2645F5AD4BEC854596,
	DllImportsFromSharedLib_x86_grpcsharp_auth_context_peer_identity_property_name_mC8A67BB5184B0981B61EFE325770A08D6EFC1049,
	DllImportsFromSharedLib_x86_grpcsharp_auth_context_property_iterator_m8B9AD60711D1F76EACA8326331409C5EC4EE75ED,
	DllImportsFromSharedLib_x86_grpcsharp_auth_property_iterator_next_m92CC03085A2D1D82A2ED2D17D50C4D1D77FE6ADC,
	DllImportsFromSharedLib_x86_grpcsharp_auth_context_release_mADA973A198590428FB11D6E3A7E0B5E8D1859D09,
	DllImportsFromSharedLib_x86_grpcsharp_slice_buffer_create_m867FFA0D67D95A7F091F329236EBBFDFDCB6FA6D,
	DllImportsFromSharedLib_x86_grpcsharp_slice_buffer_adjust_tail_space_m5420D9CD609BD12427E1D5D48B4B9382D326E342,
	DllImportsFromSharedLib_x86_grpcsharp_slice_buffer_slice_count_m3FD7F3CD0CC37B01B91BAF6C7FB76DD3868F3E5C,
	DllImportsFromSharedLib_x86_grpcsharp_slice_buffer_slice_peek_m1A7060F77ED6089CF9EDB19F50E8220C0688D016,
	DllImportsFromSharedLib_x86_grpcsharp_slice_buffer_reset_and_unref_m6769F713E458C3E9C4D1295F0EECEB3DD3110A0A,
	DllImportsFromSharedLib_x86_grpcsharp_slice_buffer_destroy_m331973FA6F65B6DFB61441B9DCBEC41444C47F4E,
	DllImportsFromSharedLib_x86_gprsharp_now_mE6565C81B3C5AB05D34DF50E1F4B8E5DF959C612,
	DllImportsFromSharedLib_x86_gprsharp_inf_future_m9D35A2351E7579061C79322D9E3C5A39934473BB,
	DllImportsFromSharedLib_x86_gprsharp_inf_past_mF1E55F142F6B82DDE2EC3037CC5FB4AD3AC732D9,
	DllImportsFromSharedLib_x86_gprsharp_convert_clock_type_mB9D51065593E7FF0622C1BBE941A96B3D7849CE1,
	DllImportsFromSharedLib_x86_gprsharp_sizeof_timespec_m568DB7853FE17846BE459ABA3E9134F400FDB5BB,
	DllImportsFromSharedLib_x86_grpcsharp_test_callback_m3CA16345B98543434012E2202D06840893D2C464,
	DllImportsFromSharedLib_x86_grpcsharp_test_nop_m2E185F8A86524ACCEDCD9F6A9D99A6D0CCBCCFCC,
	DllImportsFromSharedLib_x86_grpcsharp_test_override_method_m75E7F9D99AE24AF462202AE50F0116375E6DAF47,
	DllImportsFromSharedLib_x86_grpcsharp_test_call_start_unary_echo_m5623028A829C53EBEEE5CB1F1DC5CB9DF6BBC13A,
	DllImportsFromSharedLib_x86__ctor_m670F3E637C563D0913F4DDA9B558D552191F74BF,
	DllImportsFromSharedLib_x64_grpcsharp_init_m405288B13EA9DF25D312C98B7800AE41A7443BDC,
	DllImportsFromSharedLib_x64_grpcsharp_shutdown_mA5966F3088EF7D55C25D51014FDB9D4C05A2BF36,
	DllImportsFromSharedLib_x64_grpcsharp_version_string_m565070FB2240FDF90D77C1AE781586D6536FC6E0,
	DllImportsFromSharedLib_x64_grpcsharp_batch_context_create_m42B76D6EDF19A7E76F11F0275D7D6CFDE3C5CC23,
	DllImportsFromSharedLib_x64_grpcsharp_batch_context_recv_initial_metadata_m6DB9D4ED2BD766D72F564E903C3861888906E0C6,
	DllImportsFromSharedLib_x64_grpcsharp_batch_context_recv_message_length_mDFA448702A5093796B6946C9898FBA5B20B9A33F,
	DllImportsFromSharedLib_x64_grpcsharp_batch_context_recv_message_next_slice_peek_m890C16E37C5B68C49D48170C34A965E848146CBE,
	DllImportsFromSharedLib_x64_grpcsharp_batch_context_recv_status_on_client_status_m327B3DEE00F5E0AD8B2B440252481D3FC25FF3E8,
	DllImportsFromSharedLib_x64_grpcsharp_batch_context_recv_status_on_client_details_mFE5A073F6A34606C7D982FED2DF61C7860344FF2,
	DllImportsFromSharedLib_x64_grpcsharp_batch_context_recv_status_on_client_error_string_m0FCDC59F25B2A764E6E93DD9536E4D377143A184,
	DllImportsFromSharedLib_x64_grpcsharp_batch_context_recv_status_on_client_trailing_metadata_m1A4A5B2AFCEC7AFF4F92738069A0365E4EE1D6C0,
	DllImportsFromSharedLib_x64_grpcsharp_batch_context_recv_close_on_server_cancelled_m15E7565774FA0929052B53CB1622DC218659DA75,
	DllImportsFromSharedLib_x64_grpcsharp_batch_context_reset_m684777FFC5763828997FE4A052B594FF5B66DB87,
	DllImportsFromSharedLib_x64_grpcsharp_batch_context_destroy_mA30B770FA2E1FDB9D749FC932D104F2F3B34C5EC,
	DllImportsFromSharedLib_x64_grpcsharp_request_call_context_create_mA3B3C90B38FD3B7A064D2C9077FDFC5FDB4C1E5D,
	DllImportsFromSharedLib_x64_grpcsharp_request_call_context_call_m071C3AFED4902BDC324873D088643FAA35F39537,
	DllImportsFromSharedLib_x64_grpcsharp_request_call_context_method_mC9756E31C16C9AB68AA5CD881C5A8FF27EE98D20,
	DllImportsFromSharedLib_x64_grpcsharp_request_call_context_host_mDB4CCE50127E755A188661AF1B24A4ADB464196B,
	DllImportsFromSharedLib_x64_grpcsharp_request_call_context_deadline_mE6374B4EA20E3FE50B0A2194EE84EC3F8B0124DC,
	DllImportsFromSharedLib_x64_grpcsharp_request_call_context_request_metadata_m76F5144E312F98B3BA2367F457916159189748F0,
	DllImportsFromSharedLib_x64_grpcsharp_request_call_context_reset_m31A43C3947EF0BA0CF6DEB4233C6F5196432D001,
	DllImportsFromSharedLib_x64_grpcsharp_request_call_context_destroy_m122B4D439014F185E7EB3310378CDD46571FA970,
	DllImportsFromSharedLib_x64_grpcsharp_composite_call_credentials_create_mA55BE8F46B2C6525575832A7CE799A9A86A2E8F7,
	DllImportsFromSharedLib_x64_grpcsharp_call_credentials_release_m66E57A8F440CDD708BDEEF74336FA3F3BB28D977,
	DllImportsFromSharedLib_x64_grpcsharp_call_cancel_m512DF11BC0FB0137F4A1E52B6F5D8D802200BA22,
	DllImportsFromSharedLib_x64_grpcsharp_call_cancel_with_status_m1D8CBB2CAFF1E1895897C46FDD756D29249AB14B,
	DllImportsFromSharedLib_x64_grpcsharp_call_start_unary_mC86AFDAD4C968A83D2DD450AC4F4AAC9C7A978DD,
	DllImportsFromSharedLib_x64_grpcsharp_call_start_client_streaming_m9B2CD0254220B3E3F5461F2D1C6337598E775BE8,
	DllImportsFromSharedLib_x64_grpcsharp_call_start_server_streaming_mEF3B680CD0046244D00FA26FF2A762392615BA1B,
	DllImportsFromSharedLib_x64_grpcsharp_call_start_duplex_streaming_mDD6157A4A07CE8E7A2C53C4B5CED5F72C3217695,
	DllImportsFromSharedLib_x64_grpcsharp_call_send_message_mD5CE20279EA2E59E21E4D28FD53EE2614CE74D4C,
	DllImportsFromSharedLib_x64_grpcsharp_call_send_close_from_client_m4EE86DA8810A0DC4EDD1EB0775591A6118BD0E67,
	DllImportsFromSharedLib_x64_grpcsharp_call_send_status_from_server_m35286CA3CE0B4C5308A43F487BBB1BDC7F90C261,
	DllImportsFromSharedLib_x64_grpcsharp_call_recv_message_m7EF7FBE09606BADFF17AAD75A362EB829F1F67A5,
	DllImportsFromSharedLib_x64_grpcsharp_call_recv_initial_metadata_mF7A00D1913674EE3AD3F3A7DBF00A884377307E0,
	DllImportsFromSharedLib_x64_grpcsharp_call_start_serverside_mBEA36EC5A0252B09B3785F6A2DD7909D8E30CFF5,
	DllImportsFromSharedLib_x64_grpcsharp_call_send_initial_metadata_m27EF55F76313339C142DF716E20BC704D21AFCAD,
	DllImportsFromSharedLib_x64_grpcsharp_call_set_credentials_mC0E19B973025090546BBCB55A2EB8A029CFC60C3,
	DllImportsFromSharedLib_x64_grpcsharp_call_get_peer_m835A51262F91CD7C1E263720BDAA01DE2FC84A31,
	DllImportsFromSharedLib_x64_grpcsharp_call_destroy_mFF873FBB4E8D5710656582703A3BD046F1857381,
	DllImportsFromSharedLib_x64_grpcsharp_channel_args_create_m9F8EBE475F3672F140236A2DB3AE81C17C5B3D4D,
	DllImportsFromSharedLib_x64_grpcsharp_channel_args_set_string_mB3D6E42C4E4EB3929664CA3F52537652A8F2BCF7,
	DllImportsFromSharedLib_x64_grpcsharp_channel_args_set_integer_mE6835BE27E1BBB5257054FD12E5BE2DBF368EEF2,
	DllImportsFromSharedLib_x64_grpcsharp_channel_args_destroy_m226F32E0E72F4180B93A8949CDD38A6754B962C4,
	DllImportsFromSharedLib_x64_grpcsharp_override_default_ssl_roots_m18DBD45D560286D7B09CA9F04670FBA1E76E8345,
	DllImportsFromSharedLib_x64_grpcsharp_ssl_credentials_create_mACB2DB0728B8E4F0C717217B43F9CE2AE3BC950A,
	DllImportsFromSharedLib_x64_grpcsharp_composite_channel_credentials_create_m7E11D7254C67B5750775D19EB428FE5492A667DB,
	DllImportsFromSharedLib_x64_grpcsharp_channel_credentials_release_m0929ADBE2291098831A11D55973CB5643D4DE59B,
	DllImportsFromSharedLib_x64_grpcsharp_insecure_channel_create_m3D5AA32704E0C96C887BE6C76FC866176AD15E8A,
	DllImportsFromSharedLib_x64_grpcsharp_secure_channel_create_m11F7DA7E44FDE2634F49006B80E699C13256C84A,
	DllImportsFromSharedLib_x64_grpcsharp_channel_create_call_m7DF9304AEC29E43B614F553A2C0ECB5534311FC8,
	DllImportsFromSharedLib_x64_grpcsharp_channel_check_connectivity_state_m49855B7D7C3D5082D6E3B0401F269332F7028860,
	DllImportsFromSharedLib_x64_grpcsharp_channel_watch_connectivity_state_m412B53A9BF5EBEF2197446A7466118140DC8542E,
	DllImportsFromSharedLib_x64_grpcsharp_channel_get_target_mDBD933D3F8A457DC8EE68C72EF7F70A274D67668,
	DllImportsFromSharedLib_x64_grpcsharp_channel_destroy_m1F57186E2C5AF94DA6AF0475D15984FE9C52C31C,
	DllImportsFromSharedLib_x64_grpcsharp_sizeof_grpc_event_mCE1B599F6995576F970E01DA52578963503A3E95,
	DllImportsFromSharedLib_x64_grpcsharp_completion_queue_create_async_m0545BB3F2194B5165DF26330A94C689C4212650D,
	DllImportsFromSharedLib_x64_grpcsharp_completion_queue_create_sync_mC32F189438C2C78955E7079A621FCADAF069362E,
	DllImportsFromSharedLib_x64_grpcsharp_completion_queue_shutdown_m91C7D97DF85A3DDBEFBC13425CD8DDFF9AA9496D,
	DllImportsFromSharedLib_x64_grpcsharp_completion_queue_next_mA0B0773DE7207878526749881238FA2E2A448A8C,
	DllImportsFromSharedLib_x64_grpcsharp_completion_queue_pluck_m7FA9BCD09E33F153793B40A0AB3EB5AE777B92FE,
	DllImportsFromSharedLib_x64_grpcsharp_completion_queue_destroy_m963180EABC2C5089CD078AFCB9AA90A6A2FFE1B6,
	DllImportsFromSharedLib_x64_gprsharp_free_m739A1F91589285624E2663FDC7203399D139DB56,
	DllImportsFromSharedLib_x64_grpcsharp_metadata_array_create_m018278B9DEAFF6DA516E283E2799F1D275C1CC60,
	DllImportsFromSharedLib_x64_grpcsharp_metadata_array_add_m72411330B96EC3B1F49FC8C906FBBA94D296A1FE,
	DllImportsFromSharedLib_x64_grpcsharp_metadata_array_count_m8277E14D18D919FA96C9BA0E565195EC1CC05771,
	DllImportsFromSharedLib_x64_grpcsharp_metadata_array_get_key_m3CD494DCCA4F22051DF45197E82509210B5D413D,
	DllImportsFromSharedLib_x64_grpcsharp_metadata_array_get_value_m2DFCB7C2AEA9979B4FF2C27DEEDAF867BBF290C0,
	DllImportsFromSharedLib_x64_grpcsharp_metadata_array_destroy_full_m4A25945314405B5FAA4679B79A5DDEF5994B9252,
	DllImportsFromSharedLib_x64_grpcsharp_redirect_log_mAB321B86CE5ABA8624959DE4CA0EBBB47E276F04,
	DllImportsFromSharedLib_x64_grpcsharp_native_callback_dispatcher_init_m45C3FC5F0E2B18D35B4C47E9AD612D5B6BE3296C,
	DllImportsFromSharedLib_x64_grpcsharp_metadata_credentials_create_from_plugin_m70FD5A755E4E134747FFE4D13D287659BA5DAD93,
	DllImportsFromSharedLib_x64_grpcsharp_metadata_credentials_notify_from_plugin_mA06303798AB4A5D1F8CB4E30A3155C69D3F9C826,
	DllImportsFromSharedLib_x64_grpcsharp_ssl_server_credentials_create_m1782455FFE4ACCF49FF1324521DD110984CACDC2,
	DllImportsFromSharedLib_x64_grpcsharp_server_credentials_release_m38F7FAFEAC00E33766DE7B4422AB1560DDC6FE89,
	DllImportsFromSharedLib_x64_grpcsharp_server_create_m6DD7CCD2486A0681488B99D350AAE7DB9761D82B,
	DllImportsFromSharedLib_x64_grpcsharp_server_register_completion_queue_m1464CBF41D89F6F21E1DCF124939F93ACDE500BD,
	DllImportsFromSharedLib_x64_grpcsharp_server_add_insecure_http2_port_mD87928932760A2CA94C9D84957FAE63967AEAC51,
	DllImportsFromSharedLib_x64_grpcsharp_server_add_secure_http2_port_m5630E0CDDBC6537A419B193B50380EE91C24E73E,
	DllImportsFromSharedLib_x64_grpcsharp_server_start_mB654BB3514A071C121A2C4D20DE39BCC3FAFD1AC,
	DllImportsFromSharedLib_x64_grpcsharp_server_request_call_m2FBA6402963FDD81819A5BDE151CD3865251CE37,
	DllImportsFromSharedLib_x64_grpcsharp_server_cancel_all_calls_m53731F5F7361606408F9BE8876BA62C6DDE3A975,
	DllImportsFromSharedLib_x64_grpcsharp_server_shutdown_and_notify_callback_m0F66A22FB695F5ECC473D8B4BBB627499736B6DD,
	DllImportsFromSharedLib_x64_grpcsharp_server_destroy_m23C0D8D1A1F859CB0BD7A46E2099217A75EC41BF,
	DllImportsFromSharedLib_x64_grpcsharp_call_auth_context_m9D5FFE62B109EF9804BA443A5FFB0F3122139FB1,
	DllImportsFromSharedLib_x64_grpcsharp_auth_context_peer_identity_property_name_m0A2A1427A06AC651459C1625CC1F4D8095077DE0,
	DllImportsFromSharedLib_x64_grpcsharp_auth_context_property_iterator_mE60935A3A750074B1238E3C39A5B3C6087879EA6,
	DllImportsFromSharedLib_x64_grpcsharp_auth_property_iterator_next_m6ACE12D3905CF0A7DE1A0BDE5327D40CDD651CE2,
	DllImportsFromSharedLib_x64_grpcsharp_auth_context_release_mFA85C800444C1D0D15938FFD144BB32E110A6332,
	DllImportsFromSharedLib_x64_grpcsharp_slice_buffer_create_mC9E9EC2419B3159A99432ECAD30809B973F10CAA,
	DllImportsFromSharedLib_x64_grpcsharp_slice_buffer_adjust_tail_space_m4012C2D4DDF7F86AFCEB30E0DD3B5481C981D1A5,
	DllImportsFromSharedLib_x64_grpcsharp_slice_buffer_slice_count_mA5C38FD6BB47D454B7320F717F43952E515AF9A0,
	DllImportsFromSharedLib_x64_grpcsharp_slice_buffer_slice_peek_m6A0EBEBA6D0F9C02745E2A42CB2C4F2429DEA52B,
	DllImportsFromSharedLib_x64_grpcsharp_slice_buffer_reset_and_unref_mCCB85FC68351E9434E32E8631C408444079D0F5F,
	DllImportsFromSharedLib_x64_grpcsharp_slice_buffer_destroy_m5C4155D4794AF640C834500DFDDB54D629290B09,
	DllImportsFromSharedLib_x64_gprsharp_now_m45CA6166E7433BB8D1CD5C9EC66677E633D1FF1E,
	DllImportsFromSharedLib_x64_gprsharp_inf_future_m3724F5EF4A4E2F7BBCB90032ECE80093349FF2E1,
	DllImportsFromSharedLib_x64_gprsharp_inf_past_mB125A51733B098CD12DEACD8B0C1682BE0DAFCB5,
	DllImportsFromSharedLib_x64_gprsharp_convert_clock_type_mD3A1EF02C4422E24A79DB6431904306EA3DF8FCD,
	DllImportsFromSharedLib_x64_gprsharp_sizeof_timespec_mAA75ACD68E4E0EFA1E2DFAD991A25D3BC930129A,
	DllImportsFromSharedLib_x64_grpcsharp_test_callback_m907CF728E3D1C99848559D4EF7E341787341EB19,
	DllImportsFromSharedLib_x64_grpcsharp_test_nop_m02B09D4484BB430DC23E1E4C830DABE00FCCB643,
	DllImportsFromSharedLib_x64_grpcsharp_test_override_method_m74B47A61256EBCEA90EDFB77BC8D25325EAAD066,
	DllImportsFromSharedLib_x64_grpcsharp_test_call_start_unary_echo_m66BCD70AB6259047DBC0ED02897645A868F2A764,
	DllImportsFromSharedLib_x64__ctor_m80449530F50FFD329C15D1A010D6A75211B4F1D7,
	DllImportsFromSharedLib_arm64_grpcsharp_init_mD7F778570FB89FDDD6B7A3768B69ABEDA6D6B1A2,
	DllImportsFromSharedLib_arm64_grpcsharp_shutdown_m610C0A84D1876F6E0A13C7BB2510623E3FCDC617,
	DllImportsFromSharedLib_arm64_grpcsharp_version_string_m69C05C3656B7CCC4691918D07459184C1B0B2D39,
	DllImportsFromSharedLib_arm64_grpcsharp_batch_context_create_m285BB7110EF0152D7D109740C15708883A429D0C,
	DllImportsFromSharedLib_arm64_grpcsharp_batch_context_recv_initial_metadata_m2F0BC587D3271242FA5290F52051FEF34E0B4DC1,
	DllImportsFromSharedLib_arm64_grpcsharp_batch_context_recv_message_length_m51443BED7803EAB8D1D30988FFBAC7F1DCE71C45,
	DllImportsFromSharedLib_arm64_grpcsharp_batch_context_recv_message_next_slice_peek_m3822BF4C845A3F27A11FD63F650A25AAC52D9EE5,
	DllImportsFromSharedLib_arm64_grpcsharp_batch_context_recv_status_on_client_status_m8E40E5A63C937E54962D0C45DA0569C5FE623378,
	DllImportsFromSharedLib_arm64_grpcsharp_batch_context_recv_status_on_client_details_m2C675BDA28EB22DFE8A5E98C39DB54D73D6C5248,
	DllImportsFromSharedLib_arm64_grpcsharp_batch_context_recv_status_on_client_error_string_m8390982DAE68E18DADE3A5245AD9DDF483BCF000,
	DllImportsFromSharedLib_arm64_grpcsharp_batch_context_recv_status_on_client_trailing_metadata_m2864526B13B1FAD6E56DB8062D66BE2C0A4A73D8,
	DllImportsFromSharedLib_arm64_grpcsharp_batch_context_recv_close_on_server_cancelled_m15E21B60FEFFDA4F5DE80961E1D4B16547ECAF54,
	DllImportsFromSharedLib_arm64_grpcsharp_batch_context_reset_m2E429449D42E7815418369F9BFABD8FB460F327B,
	DllImportsFromSharedLib_arm64_grpcsharp_batch_context_destroy_m1E582B668EE40D3006D03F4D0849D831E0B6C77A,
	DllImportsFromSharedLib_arm64_grpcsharp_request_call_context_create_m0373A2474E474D506ED3C4915B5039E557FDA76A,
	DllImportsFromSharedLib_arm64_grpcsharp_request_call_context_call_m73641D364C72A2CBFDAD76B727DCA23B665583B9,
	DllImportsFromSharedLib_arm64_grpcsharp_request_call_context_method_mC27F083018209225F6B0AE23124B6FA208C3C832,
	DllImportsFromSharedLib_arm64_grpcsharp_request_call_context_host_m76D5F68860E940608FD773D6DD08D674B37754D9,
	DllImportsFromSharedLib_arm64_grpcsharp_request_call_context_deadline_mE565C81DC7B838140B690B0185BF2A064D96A999,
	DllImportsFromSharedLib_arm64_grpcsharp_request_call_context_request_metadata_m3C2C38D4F3AA018949B536EC2F42AA6D8D1426D5,
	DllImportsFromSharedLib_arm64_grpcsharp_request_call_context_reset_m5757794ED0747C230BB9CDC7349D765D4019BF30,
	DllImportsFromSharedLib_arm64_grpcsharp_request_call_context_destroy_m3F569A85546445F516D732B9B647FA55F236035F,
	DllImportsFromSharedLib_arm64_grpcsharp_composite_call_credentials_create_mA7EF012C53EB8C15DF5630B1DD05770AE936AA3D,
	DllImportsFromSharedLib_arm64_grpcsharp_call_credentials_release_m5CFDD356043C21B684598E1BC533F1C365EB608F,
	DllImportsFromSharedLib_arm64_grpcsharp_call_cancel_mB5B4C46E83DC4663A52F001A686C1B11CE05E428,
	DllImportsFromSharedLib_arm64_grpcsharp_call_cancel_with_status_m8708087F72216EA78867B443F78526AFB15FF3E6,
	DllImportsFromSharedLib_arm64_grpcsharp_call_start_unary_m48B388433707375C1FE2F63EE4AE6D2AA48E3CB7,
	DllImportsFromSharedLib_arm64_grpcsharp_call_start_client_streaming_mA1EE81AADDEA2EB6373CA2DC14C7AADE6F4273B0,
	DllImportsFromSharedLib_arm64_grpcsharp_call_start_server_streaming_mB63F6037386AE3096D54D5DFB1D72F5C2AF85F32,
	DllImportsFromSharedLib_arm64_grpcsharp_call_start_duplex_streaming_m5DE73531243AE400026AEDADFE779817504F463C,
	DllImportsFromSharedLib_arm64_grpcsharp_call_send_message_mC8CF5CE7690E6FF04A061BFE49BE279C7F1CF6DD,
	DllImportsFromSharedLib_arm64_grpcsharp_call_send_close_from_client_m86291BCE5E268A4A8A3B89E8654D03E46F7A94DE,
	DllImportsFromSharedLib_arm64_grpcsharp_call_send_status_from_server_m168AB74B8BD82A71B70E48A3071912BD3871E5AC,
	DllImportsFromSharedLib_arm64_grpcsharp_call_recv_message_m7D1C44E635FA6597798FB5E01F28D4E0F074DADC,
	DllImportsFromSharedLib_arm64_grpcsharp_call_recv_initial_metadata_m06626703D87541495F3B191E97458B966051CF81,
	DllImportsFromSharedLib_arm64_grpcsharp_call_start_serverside_m5441CC2212A60F22E393165665D3342214FC31E3,
	DllImportsFromSharedLib_arm64_grpcsharp_call_send_initial_metadata_m4DBC8F95FC4B62C0B4EF9C11F12BC17C01184796,
	DllImportsFromSharedLib_arm64_grpcsharp_call_set_credentials_mA3FB65EEBAAD04BD9EDB6C4EBBFD8565BB796321,
	DllImportsFromSharedLib_arm64_grpcsharp_call_get_peer_m6BECDC5BCFFE58E008506786B768A566C17B79A0,
	DllImportsFromSharedLib_arm64_grpcsharp_call_destroy_m6B8553E8EAF5F2C1C07AB9A92C9E5AE6DD7FC220,
	DllImportsFromSharedLib_arm64_grpcsharp_channel_args_create_m604AA89AA50AE388EF59877BB85D7B36A4B577C9,
	DllImportsFromSharedLib_arm64_grpcsharp_channel_args_set_string_m5A43F66F58CBF122716D432ECC15CDCB6CB058F3,
	DllImportsFromSharedLib_arm64_grpcsharp_channel_args_set_integer_m928BE0473CF0BB9E50B90B2502EE40B3C13E3C91,
	DllImportsFromSharedLib_arm64_grpcsharp_channel_args_destroy_m0404E289380156B02626D932BFA6A19F6158B4D9,
	DllImportsFromSharedLib_arm64_grpcsharp_override_default_ssl_roots_m2F59D5519DA54A79076194484DC67FC8E5600E35,
	DllImportsFromSharedLib_arm64_grpcsharp_ssl_credentials_create_m8274F7236F1E9064F0A19CF595016F67E7268F3D,
	DllImportsFromSharedLib_arm64_grpcsharp_composite_channel_credentials_create_m4D37EE2DF35B7C7F1B29C9C30E3FA9931A5CD361,
	DllImportsFromSharedLib_arm64_grpcsharp_channel_credentials_release_mFA5A0F0D7E80BDA6C542EA73DEF83030F15F9AEE,
	DllImportsFromSharedLib_arm64_grpcsharp_insecure_channel_create_m1DBE7393D66BE66875A4C775368EDDDA295AA9DB,
	DllImportsFromSharedLib_arm64_grpcsharp_secure_channel_create_mEC0BAB56264890E92B04D3F7486596AB60536C2F,
	DllImportsFromSharedLib_arm64_grpcsharp_channel_create_call_mC59E1F352929186679470825740AB1335BE3DA39,
	DllImportsFromSharedLib_arm64_grpcsharp_channel_check_connectivity_state_m6BAD152582180B150A41E3871CA689486668B895,
	DllImportsFromSharedLib_arm64_grpcsharp_channel_watch_connectivity_state_m9A5A5A4A3A8783EA1067ACE407BA1E1AFFAEEDFD,
	DllImportsFromSharedLib_arm64_grpcsharp_channel_get_target_mC73099A189FE6C24B7758D81D0C80CC7D4AFFFB2,
	DllImportsFromSharedLib_arm64_grpcsharp_channel_destroy_m5DBC44FD93A4727089D3D92122160B48FDCB0659,
	DllImportsFromSharedLib_arm64_grpcsharp_sizeof_grpc_event_mFD476EBA5F17F11077951D79B96324A8C8782E93,
	DllImportsFromSharedLib_arm64_grpcsharp_completion_queue_create_async_m42E554834847FDF27740E1906E25A9FDC4C76E93,
	DllImportsFromSharedLib_arm64_grpcsharp_completion_queue_create_sync_m019C832FF4833C4D41822B1663A5D94F2080205E,
	DllImportsFromSharedLib_arm64_grpcsharp_completion_queue_shutdown_mD750A767801C63A63C54FAD4FF8A73434CFF921B,
	DllImportsFromSharedLib_arm64_grpcsharp_completion_queue_next_mB005C507DDBDE5A401C6C11C138FC11EA8062A1B,
	DllImportsFromSharedLib_arm64_grpcsharp_completion_queue_pluck_m0D0D564FF3EE80826449955B59BDAB70BB545EBD,
	DllImportsFromSharedLib_arm64_grpcsharp_completion_queue_destroy_m9F660E8E2CB031AB0223BAB2B3098903FA7216A8,
	DllImportsFromSharedLib_arm64_gprsharp_free_m0049F3353E1DB96F026E5C3B5AF612574726FBBE,
	DllImportsFromSharedLib_arm64_grpcsharp_metadata_array_create_m1C67746C1F066E957F04D0106BD3305702CDE02B,
	DllImportsFromSharedLib_arm64_grpcsharp_metadata_array_add_m74370630405A7DC94B95AFCFB71F12519D4D0390,
	DllImportsFromSharedLib_arm64_grpcsharp_metadata_array_count_m0B3FC5F269C2748FA38AE3E51962B1EBF5EF9960,
	DllImportsFromSharedLib_arm64_grpcsharp_metadata_array_get_key_mDFF006BBFC9A204AD001F137E580AEC059D0FF87,
	DllImportsFromSharedLib_arm64_grpcsharp_metadata_array_get_value_m9A7EAA6F1E030902E4FE40180A822C6B293E3F61,
	DllImportsFromSharedLib_arm64_grpcsharp_metadata_array_destroy_full_m70D35AAD537C317C8BE5E028492079D2FBF32288,
	DllImportsFromSharedLib_arm64_grpcsharp_redirect_log_m4988CE0314588AF5F7CF7CBB59BB64094F59E91D,
	DllImportsFromSharedLib_arm64_grpcsharp_native_callback_dispatcher_init_m48415A010E3D12AD950A81DCF80BA8F043EF1B5B,
	DllImportsFromSharedLib_arm64_grpcsharp_metadata_credentials_create_from_plugin_m4B1D61A8B8B69474156012ADAFA6570CEE3526DD,
	DllImportsFromSharedLib_arm64_grpcsharp_metadata_credentials_notify_from_plugin_mD9B37A65971927E566524D41528FA902D821126E,
	DllImportsFromSharedLib_arm64_grpcsharp_ssl_server_credentials_create_mEB5BFF8A608CFFA116C23BFB30744A380A90B029,
	DllImportsFromSharedLib_arm64_grpcsharp_server_credentials_release_m09B7C357FDEE922C293A04E8145349F458C43E2E,
	DllImportsFromSharedLib_arm64_grpcsharp_server_create_m21F6662F83C8C5DED1026E3F7CF26DBA82E73CB2,
	DllImportsFromSharedLib_arm64_grpcsharp_server_register_completion_queue_m0F3BF18D3BCD0C3C8D357683A14DA1F96BABFBEB,
	DllImportsFromSharedLib_arm64_grpcsharp_server_add_insecure_http2_port_m967F4648932C3A7AFA0FDD8C73E4FDF2442AD4C2,
	DllImportsFromSharedLib_arm64_grpcsharp_server_add_secure_http2_port_m28B53CDA15CC5415E83C021C4226EC455C71E242,
	DllImportsFromSharedLib_arm64_grpcsharp_server_start_mF29D627AD677EA43F5088B357E243A9763D0A4CA,
	DllImportsFromSharedLib_arm64_grpcsharp_server_request_call_m25E709EAB34F2D14ACD58D80E535914EDF11D420,
	DllImportsFromSharedLib_arm64_grpcsharp_server_cancel_all_calls_mD3DFB2672798809ADB3CD6D81BD3B238DDF3DFBE,
	DllImportsFromSharedLib_arm64_grpcsharp_server_shutdown_and_notify_callback_m39BA4FD6CD283428041AB3BFFE0ADD966088646E,
	DllImportsFromSharedLib_arm64_grpcsharp_server_destroy_m9145AD7383CB2BC627AC1565224D01EC5EC5C8E6,
	DllImportsFromSharedLib_arm64_grpcsharp_call_auth_context_m4FC3E77871270769E7101CE5B34C0CE2B27C4AB0,
	DllImportsFromSharedLib_arm64_grpcsharp_auth_context_peer_identity_property_name_mDBB00FD312A48C2BAB01CF9B9362B4FB430A73B1,
	DllImportsFromSharedLib_arm64_grpcsharp_auth_context_property_iterator_m65BB43CBA62D4606581F139C0023CF98F840E477,
	DllImportsFromSharedLib_arm64_grpcsharp_auth_property_iterator_next_mD037D88F4C101E414D589224EF9CD5B53526619B,
	DllImportsFromSharedLib_arm64_grpcsharp_auth_context_release_m2845736A492AF9E90DD2476302EC66A916FD6C4E,
	DllImportsFromSharedLib_arm64_grpcsharp_slice_buffer_create_m0361D8342CA65D88E06AEA904B006278AFA5B302,
	DllImportsFromSharedLib_arm64_grpcsharp_slice_buffer_adjust_tail_space_mE6BABDD79BD7FC267B46D0EB7DE1451649A6EB83,
	DllImportsFromSharedLib_arm64_grpcsharp_slice_buffer_slice_count_m8C7328B27CB2C3A3D47A7527255D73AA81FC8C0F,
	DllImportsFromSharedLib_arm64_grpcsharp_slice_buffer_slice_peek_m38D1036242BB991B4488568B46844BA88D5F9F3E,
	DllImportsFromSharedLib_arm64_grpcsharp_slice_buffer_reset_and_unref_m8E28CD72ABE6BA3373C100ECC7E161E8A5EC2505,
	DllImportsFromSharedLib_arm64_grpcsharp_slice_buffer_destroy_m23B2DE31AEC8A8FA14006DB3F91776D6513579B9,
	DllImportsFromSharedLib_arm64_gprsharp_now_m02D0D362BFBA0A376C64448F261FA3CD8B22D8B6,
	DllImportsFromSharedLib_arm64_gprsharp_inf_future_mC01AB77CD63DD1A6DF6749419BE5EA57940ABB75,
	DllImportsFromSharedLib_arm64_gprsharp_inf_past_m0A21A7FECC34EFC39C9DB791A39D3630585EC3DD,
	DllImportsFromSharedLib_arm64_gprsharp_convert_clock_type_m18BC8E65488BEC448824198AA68EBFE82E3F1221,
	DllImportsFromSharedLib_arm64_gprsharp_sizeof_timespec_m9E33D3860AD9B7FFA9C04E12FCA0209BD138C75C,
	DllImportsFromSharedLib_arm64_grpcsharp_test_callback_m9C9466C8BDC31E7A9EB7DD0D61DB603EF228909A,
	DllImportsFromSharedLib_arm64_grpcsharp_test_nop_mD29BA6118EEDACF341423B3373A807634BE344B8,
	DllImportsFromSharedLib_arm64_grpcsharp_test_override_method_m7D26F5AA3657FB0E6AF20B1430E161C068A48E87,
	DllImportsFromSharedLib_arm64_grpcsharp_test_call_start_unary_echo_m313F2B5DE5F467CB4721833DE55C0A7A099776F8,
	DllImportsFromSharedLib_arm64__ctor_m0FFFF043E76E1C076931F8253EADD5C486766B30,
	DllImportsFromSharedLib_x86_dll_grpcsharp_init_m5BCCAC7D8215B79834D55EC34DD27F962C4CBEB1,
	DllImportsFromSharedLib_x86_dll_grpcsharp_shutdown_m47883A88FC6D2FF3E338217DEB7C0DA9972D043A,
	DllImportsFromSharedLib_x86_dll_grpcsharp_version_string_mBA2AD17CAF71AF7794E40F546F061EF127171943,
	DllImportsFromSharedLib_x86_dll_grpcsharp_batch_context_create_m4D9BC88A478B713C8B896E48B510589539FA830D,
	DllImportsFromSharedLib_x86_dll_grpcsharp_batch_context_recv_initial_metadata_m2C01F9CFBCD6503B53E2C5B31AB7A99EC99EE457,
	DllImportsFromSharedLib_x86_dll_grpcsharp_batch_context_recv_message_length_m18BAB0C83D67D54C6EFC66D4CB058CAB781F9CDB,
	DllImportsFromSharedLib_x86_dll_grpcsharp_batch_context_recv_message_next_slice_peek_m6049B19936DBF714FDABEF007E802FC88BE5C5D8,
	DllImportsFromSharedLib_x86_dll_grpcsharp_batch_context_recv_status_on_client_status_mA97F7F4DCD4E0EACBF0772CF9EA8898E622DD1D9,
	DllImportsFromSharedLib_x86_dll_grpcsharp_batch_context_recv_status_on_client_details_m9E9899843D92F23852B1D654E4BA270D161D8B58,
	DllImportsFromSharedLib_x86_dll_grpcsharp_batch_context_recv_status_on_client_error_string_m1CA5E889A90B8296C6132B1B5CDCFB0E77B7EAA3,
	DllImportsFromSharedLib_x86_dll_grpcsharp_batch_context_recv_status_on_client_trailing_metadata_m5503D8E91BFAA3E30554DE29AB54877CC92A3D2F,
	DllImportsFromSharedLib_x86_dll_grpcsharp_batch_context_recv_close_on_server_cancelled_m8DB3AEC10D7BDCD47DB7F9A38D2BC177AA3520C5,
	DllImportsFromSharedLib_x86_dll_grpcsharp_batch_context_reset_mFA4BF88F8A05DE604EB0DABCFB58D16662480989,
	DllImportsFromSharedLib_x86_dll_grpcsharp_batch_context_destroy_mE71F503CBC1FABFB7440BAC3A25AC908AB077F0A,
	DllImportsFromSharedLib_x86_dll_grpcsharp_request_call_context_create_m9B8C2F751F85002B170DB85583EE7E347D5FE885,
	DllImportsFromSharedLib_x86_dll_grpcsharp_request_call_context_call_mD99D3277877A411CCE6DFF9ADA0C5C1B4AFFE021,
	DllImportsFromSharedLib_x86_dll_grpcsharp_request_call_context_method_m003CA105298D9651AEB03FCAD238ACA97AA81E65,
	DllImportsFromSharedLib_x86_dll_grpcsharp_request_call_context_host_mDE33D0A82FDC57689B8FBB11BD9E2F4DFDF319A9,
	DllImportsFromSharedLib_x86_dll_grpcsharp_request_call_context_deadline_m2A5E7FBD379E4436890A8A00C2B98D22BE77E88A,
	DllImportsFromSharedLib_x86_dll_grpcsharp_request_call_context_request_metadata_m55CF27A83E870917AA96167A5B838A746D884C19,
	DllImportsFromSharedLib_x86_dll_grpcsharp_request_call_context_reset_mADD3AA68D9FA85C9D4166BE286E9BF0CBF14F752,
	DllImportsFromSharedLib_x86_dll_grpcsharp_request_call_context_destroy_m17C496C6765CEE45CDFDA03E3F583EDDF274023D,
	DllImportsFromSharedLib_x86_dll_grpcsharp_composite_call_credentials_create_mD9AC8C943A6B04B6395E47CED9152D9CFF48FBFF,
	DllImportsFromSharedLib_x86_dll_grpcsharp_call_credentials_release_mA4288762F6F60E7EC29465FA803A6436C4C4E19F,
	DllImportsFromSharedLib_x86_dll_grpcsharp_call_cancel_m57AD4B06930A78C03F646FDBCB2F438255969711,
	DllImportsFromSharedLib_x86_dll_grpcsharp_call_cancel_with_status_m57FA769B394CDF7DE2895680ACAD27AE00FD46A6,
	DllImportsFromSharedLib_x86_dll_grpcsharp_call_start_unary_m71C39BCD49FC81B0B97BCB8522E4B2A0AEC6B065,
	DllImportsFromSharedLib_x86_dll_grpcsharp_call_start_client_streaming_mE0D3300B476DE276966968ED724BE59577060D65,
	DllImportsFromSharedLib_x86_dll_grpcsharp_call_start_server_streaming_mF1353864FD7CF97EA507A05368F0F4421179C1AD,
	DllImportsFromSharedLib_x86_dll_grpcsharp_call_start_duplex_streaming_m4CB925896D8B56A1029D841815E204CF79B85205,
	DllImportsFromSharedLib_x86_dll_grpcsharp_call_send_message_mF042730792ACC314716A2FAFDFD73CA865A71648,
	DllImportsFromSharedLib_x86_dll_grpcsharp_call_send_close_from_client_m07B279BF3340E952820CAC6A32AD9C559BCA48D8,
	DllImportsFromSharedLib_x86_dll_grpcsharp_call_send_status_from_server_m479327C300D433FCE22E47689631A76F7E43F325,
	DllImportsFromSharedLib_x86_dll_grpcsharp_call_recv_message_mB9FF6E6AAC3F24936D845316294A594D978ACB22,
	DllImportsFromSharedLib_x86_dll_grpcsharp_call_recv_initial_metadata_mF1DA8B622447887156A360A507A7075ECC1502BD,
	DllImportsFromSharedLib_x86_dll_grpcsharp_call_start_serverside_mF373AE763AC88A06E71B0A7783BEAFFCAC9ACD2E,
	DllImportsFromSharedLib_x86_dll_grpcsharp_call_send_initial_metadata_mDC41A339DA089F2B5BA904CCE3D7D01D2B9577E4,
	DllImportsFromSharedLib_x86_dll_grpcsharp_call_set_credentials_m79C852996C1AB1116CB60CC85A3C3883F2FC5830,
	DllImportsFromSharedLib_x86_dll_grpcsharp_call_get_peer_m9512D14D58C0737AAC44993E1EEEAD370FBC9CDB,
	DllImportsFromSharedLib_x86_dll_grpcsharp_call_destroy_m141583064C67BCD536215B09ADEF71AAC2E7D2B2,
	DllImportsFromSharedLib_x86_dll_grpcsharp_channel_args_create_mE044A926A954F448F44464ABCDFED03110F77DEE,
	DllImportsFromSharedLib_x86_dll_grpcsharp_channel_args_set_string_m7C2B8B7F9CD389F7BF078A78C9D42FD1761F92E5,
	DllImportsFromSharedLib_x86_dll_grpcsharp_channel_args_set_integer_mC67E1CEFA29083951C285EE00E18A17158543BB1,
	DllImportsFromSharedLib_x86_dll_grpcsharp_channel_args_destroy_m193E9497ADBD761A9FE4B9D68ABBC6C2013A65A1,
	DllImportsFromSharedLib_x86_dll_grpcsharp_override_default_ssl_roots_m3F90A3A0EABB2D04D3A7802A968FC5A3916BD275,
	DllImportsFromSharedLib_x86_dll_grpcsharp_ssl_credentials_create_mC27A3168A86C46C8C50BD95CF3415CD46032C7F7,
	DllImportsFromSharedLib_x86_dll_grpcsharp_composite_channel_credentials_create_m3F9B81D387E8A3274660DFD8E8011A470BCBF7B4,
	DllImportsFromSharedLib_x86_dll_grpcsharp_channel_credentials_release_m1C171480C84CC4298ACF550D3CE1887436B5A51A,
	DllImportsFromSharedLib_x86_dll_grpcsharp_insecure_channel_create_mDD65E12ADB166F704848C2CBA0547DFEEC732877,
	DllImportsFromSharedLib_x86_dll_grpcsharp_secure_channel_create_m3E86FC6026220D856046D45AB4CA903A43BD636E,
	DllImportsFromSharedLib_x86_dll_grpcsharp_channel_create_call_m15C92CD5B9D9AA3102F85266B5430CB72550CA2B,
	DllImportsFromSharedLib_x86_dll_grpcsharp_channel_check_connectivity_state_mF3E996E362DEA432556A110C986144B2D3D55138,
	DllImportsFromSharedLib_x86_dll_grpcsharp_channel_watch_connectivity_state_m10328848A4352397970FCE8081C0280A5C9CE0B8,
	DllImportsFromSharedLib_x86_dll_grpcsharp_channel_get_target_m958B4436F520F2A5E48E0D3F62083997D208184B,
	DllImportsFromSharedLib_x86_dll_grpcsharp_channel_destroy_m3EF6FE0A3CD21A9BC960FB92D0A2C5ECE19884A8,
	DllImportsFromSharedLib_x86_dll_grpcsharp_sizeof_grpc_event_m8F9B540308E0A7715A9A3AD99261F9279C31559E,
	DllImportsFromSharedLib_x86_dll_grpcsharp_completion_queue_create_async_m4C34A42663FF97A0A986ABCB303B526B18A60149,
	DllImportsFromSharedLib_x86_dll_grpcsharp_completion_queue_create_sync_m76FECF3C643DA6FFB52A060CF85C21B7BEFF3D84,
	DllImportsFromSharedLib_x86_dll_grpcsharp_completion_queue_shutdown_m760BE31E8A367A4D3EC48D8E0A7B422414C0A222,
	DllImportsFromSharedLib_x86_dll_grpcsharp_completion_queue_next_m5E1B15064ECBD39E252DE8B13B0F792A2D09DA1E,
	DllImportsFromSharedLib_x86_dll_grpcsharp_completion_queue_pluck_mB2BFA556522E44ED0FDEED56DC361CD62233847B,
	DllImportsFromSharedLib_x86_dll_grpcsharp_completion_queue_destroy_m33182FDA921D04F3FD4368C64259F7AC769C7A36,
	DllImportsFromSharedLib_x86_dll_gprsharp_free_m7F05F076A6E40E2221F4EABBEA76A720CB85ECA3,
	DllImportsFromSharedLib_x86_dll_grpcsharp_metadata_array_create_mA4DEBDDA38D071B04C18CB42667A41A4DD5093CE,
	DllImportsFromSharedLib_x86_dll_grpcsharp_metadata_array_add_mED0E56CE26407CBF5D3E8B0D0FF58910596C4A5F,
	DllImportsFromSharedLib_x86_dll_grpcsharp_metadata_array_count_mAAF799A0F395994C5501F077E89558F11B75C912,
	DllImportsFromSharedLib_x86_dll_grpcsharp_metadata_array_get_key_mDC46A425838BBDB1B655C23437906AAE9062FA8A,
	DllImportsFromSharedLib_x86_dll_grpcsharp_metadata_array_get_value_m31ECB56B086AB6D55B346398F33F3402F370556B,
	DllImportsFromSharedLib_x86_dll_grpcsharp_metadata_array_destroy_full_m508DD128683A9769253F9E04E2D527DD62B8CF78,
	DllImportsFromSharedLib_x86_dll_grpcsharp_redirect_log_m77740B14447BBB456E3C002CF69BD4EB429FE7EC,
	DllImportsFromSharedLib_x86_dll_grpcsharp_native_callback_dispatcher_init_m6BA900FEBEB609C1624628185413FA7E2DEED386,
	DllImportsFromSharedLib_x86_dll_grpcsharp_metadata_credentials_create_from_plugin_m89C964C5FB971724A38AC1D58BA5201E669F36E9,
	DllImportsFromSharedLib_x86_dll_grpcsharp_metadata_credentials_notify_from_plugin_m67A713C5EE1FC64B76400C2DA0AAE77CCBF1A979,
	DllImportsFromSharedLib_x86_dll_grpcsharp_ssl_server_credentials_create_mABFEE54ACE089E8D71651CB42C80256CE1E3FDD9,
	DllImportsFromSharedLib_x86_dll_grpcsharp_server_credentials_release_m33AB13B4E61232CFA395027FF91548AEB7B50534,
	DllImportsFromSharedLib_x86_dll_grpcsharp_server_create_m86727519BC8524C909A3E8E45C90F2839BF76A1D,
	DllImportsFromSharedLib_x86_dll_grpcsharp_server_register_completion_queue_m7274DB062DE07275C2C4560DCBBDA74C379F3C41,
	DllImportsFromSharedLib_x86_dll_grpcsharp_server_add_insecure_http2_port_mE0BCDE3A0621ACF472FAD493CFAFD37F3A21A0F4,
	DllImportsFromSharedLib_x86_dll_grpcsharp_server_add_secure_http2_port_m5D0ADD83E7A93E3F268BB5BC24F1B3676AEF3911,
	DllImportsFromSharedLib_x86_dll_grpcsharp_server_start_mEC2526471522756C43A5A11084A4BCF8B1A0CCD2,
	DllImportsFromSharedLib_x86_dll_grpcsharp_server_request_call_m90F4F51C2A1255211F17B2DF7320488BA3A4156D,
	DllImportsFromSharedLib_x86_dll_grpcsharp_server_cancel_all_calls_m8243A4B45A51AF5494FB83915DBFC7F34459DFD2,
	DllImportsFromSharedLib_x86_dll_grpcsharp_server_shutdown_and_notify_callback_mAB258800D5154D7CAB0A05DA7779E2FB0E4677D7,
	DllImportsFromSharedLib_x86_dll_grpcsharp_server_destroy_mD0E811B8A28C6509B7D136CDDA917063250EAEE1,
	DllImportsFromSharedLib_x86_dll_grpcsharp_call_auth_context_m522CB9F4D84B53BC958F5D543438C18F7BCC5D56,
	DllImportsFromSharedLib_x86_dll_grpcsharp_auth_context_peer_identity_property_name_mABB0833D53B1BB2562966FE71DB027247FA2E10D,
	DllImportsFromSharedLib_x86_dll_grpcsharp_auth_context_property_iterator_mA3D9671B35E8CD5BAA79ABBB1AF0C26736D094B7,
	DllImportsFromSharedLib_x86_dll_grpcsharp_auth_property_iterator_next_m8DE1B296F0DD3E2BF33D5F4EF0BD96C69F79D6DC,
	DllImportsFromSharedLib_x86_dll_grpcsharp_auth_context_release_m6B9B99837D1C22A62D86FA6D95A16A9D3E4AE590,
	DllImportsFromSharedLib_x86_dll_grpcsharp_slice_buffer_create_m617F3414FF6C40DD73FA9F77246DBD4F9D25741E,
	DllImportsFromSharedLib_x86_dll_grpcsharp_slice_buffer_adjust_tail_space_m68CB772A542CD45F479867AB54834B0B9AD12E60,
	DllImportsFromSharedLib_x86_dll_grpcsharp_slice_buffer_slice_count_m08BC97FBEC8D3C032C8FE745859B3DCDDC7E0364,
	DllImportsFromSharedLib_x86_dll_grpcsharp_slice_buffer_slice_peek_m944090CE91F025B1E7C841EB956964D845505FF2,
	DllImportsFromSharedLib_x86_dll_grpcsharp_slice_buffer_reset_and_unref_m8C3D95F428AFCDE7FA1095ADC4C390B6AD33CDD8,
	DllImportsFromSharedLib_x86_dll_grpcsharp_slice_buffer_destroy_m15BBA2676EF8840787B419BAE58A87DD610370CE,
	DllImportsFromSharedLib_x86_dll_gprsharp_now_m0D69E87CAB075F1D345882F6950189855D592C78,
	DllImportsFromSharedLib_x86_dll_gprsharp_inf_future_m7973B3A6E1C9A168ED6B36254A0C6CD6B0927E2D,
	DllImportsFromSharedLib_x86_dll_gprsharp_inf_past_mE7EB1FC44EFCECA917204B47E70EE42CDAED1F04,
	DllImportsFromSharedLib_x86_dll_gprsharp_convert_clock_type_m4CB1CB5EAF4D5459CF88F8CB7B9AD5471041BE40,
	DllImportsFromSharedLib_x86_dll_gprsharp_sizeof_timespec_mE866F753D62B6866CA532638F9A17701E56D2D4B,
	DllImportsFromSharedLib_x86_dll_grpcsharp_test_callback_m59DABA90E5A7C3C9EC18935C1465902BB8E7D141,
	DllImportsFromSharedLib_x86_dll_grpcsharp_test_nop_mB16D5B0EA27E0C34AEB84A972E39607B4B24E8B8,
	DllImportsFromSharedLib_x86_dll_grpcsharp_test_override_method_m9D7D646D8FF3CC9C81F68867144A9C1ADF6EBE27,
	DllImportsFromSharedLib_x86_dll_grpcsharp_test_call_start_unary_echo_mB24481D3A3BC1C0C14CEFBA711EC8DCC61746155,
	DllImportsFromSharedLib_x86_dll__ctor_m94179D91304EA8DCF1252FF97EC7A9E753DEC896,
	DllImportsFromSharedLib_x64_dll_grpcsharp_init_m9E7BD00CD45B6AFBF881D7A7E521CEDFAF11E05F,
	DllImportsFromSharedLib_x64_dll_grpcsharp_shutdown_m1F9334F53B45F49832A223C3DE99A2C864F779EA,
	DllImportsFromSharedLib_x64_dll_grpcsharp_version_string_m821A31CF4A10846A42813564489826097D905470,
	DllImportsFromSharedLib_x64_dll_grpcsharp_batch_context_create_mA9E08BC14A67BD6DDC17765F260F6B3825F3CAF7,
	DllImportsFromSharedLib_x64_dll_grpcsharp_batch_context_recv_initial_metadata_m4375213A79E8ED4F948829E9A8033E7380BDD897,
	DllImportsFromSharedLib_x64_dll_grpcsharp_batch_context_recv_message_length_m3095201E46DA6AD3585CF7B2654201D1FE955C6E,
	DllImportsFromSharedLib_x64_dll_grpcsharp_batch_context_recv_message_next_slice_peek_m27FED1B7A39340168366F75EF489F7F59934D7DE,
	DllImportsFromSharedLib_x64_dll_grpcsharp_batch_context_recv_status_on_client_status_m09A3C13CBAD9BEE2B755F95933B21A2DD1D817BA,
	DllImportsFromSharedLib_x64_dll_grpcsharp_batch_context_recv_status_on_client_details_mE56FC9B504C6B0B4DDAECB0FAFC575F25AF60EDE,
	DllImportsFromSharedLib_x64_dll_grpcsharp_batch_context_recv_status_on_client_error_string_m6513122D2863A9775B59B582B9F0C912E7D5B11B,
	DllImportsFromSharedLib_x64_dll_grpcsharp_batch_context_recv_status_on_client_trailing_metadata_m6F70853CF3A27ED82D9E6916D9FBCDCCA6532FC5,
	DllImportsFromSharedLib_x64_dll_grpcsharp_batch_context_recv_close_on_server_cancelled_m5622C90C5FC90EC70E76A41DA417206FD7D2EA28,
	DllImportsFromSharedLib_x64_dll_grpcsharp_batch_context_reset_m4052068B01815F6ED8C8084E3C647F9D62E920FD,
	DllImportsFromSharedLib_x64_dll_grpcsharp_batch_context_destroy_m9FB80B64B7AD1110F73B57AFA1DA1F54A60BEE11,
	DllImportsFromSharedLib_x64_dll_grpcsharp_request_call_context_create_m310BDAD9B71F80AEBEF088D3C06F640F08987649,
	DllImportsFromSharedLib_x64_dll_grpcsharp_request_call_context_call_m8370F4B57D28563A1FE479C3CC57A342B5351745,
	DllImportsFromSharedLib_x64_dll_grpcsharp_request_call_context_method_m019DE909A511B5A1B31970A067C576740AB15307,
	DllImportsFromSharedLib_x64_dll_grpcsharp_request_call_context_host_mF95124E6016F60759C3722E3D6A1BC5B67B8F045,
	DllImportsFromSharedLib_x64_dll_grpcsharp_request_call_context_deadline_m13B7681C6960F71B8221900A9D96270D9D319A00,
	DllImportsFromSharedLib_x64_dll_grpcsharp_request_call_context_request_metadata_mE7DBD489B81976EAB7962744CC36FB2ADFD6C565,
	DllImportsFromSharedLib_x64_dll_grpcsharp_request_call_context_reset_m81ADE5C4F2DE4B8786E802BE20C01CE7CA83524C,
	DllImportsFromSharedLib_x64_dll_grpcsharp_request_call_context_destroy_m2412A95DB92D43F029D160B72EC8057F941B7B75,
	DllImportsFromSharedLib_x64_dll_grpcsharp_composite_call_credentials_create_mC41043329525CBA9D330D264143A4983F3DCAEC1,
	DllImportsFromSharedLib_x64_dll_grpcsharp_call_credentials_release_m1020EB6119539210205180251AF3FA4613D0DE14,
	DllImportsFromSharedLib_x64_dll_grpcsharp_call_cancel_m2142368527A43F7A4A878635FF24731F1C53A3F6,
	DllImportsFromSharedLib_x64_dll_grpcsharp_call_cancel_with_status_m7C937427F00448205AB7BA82A280518C5B16A711,
	DllImportsFromSharedLib_x64_dll_grpcsharp_call_start_unary_mA7737E75BFEDABF1EC3F0DE03AE4F2D4334A9E99,
	DllImportsFromSharedLib_x64_dll_grpcsharp_call_start_client_streaming_m5558F5A84B8A7EC47D3F14C407C7CEFE1686A7F4,
	DllImportsFromSharedLib_x64_dll_grpcsharp_call_start_server_streaming_mB20B225DF37106869C9A67A861A29164E4DC0F02,
	DllImportsFromSharedLib_x64_dll_grpcsharp_call_start_duplex_streaming_m80AACD9EF12F0DCE762B55426F938AD22CB0D5FE,
	DllImportsFromSharedLib_x64_dll_grpcsharp_call_send_message_mF377877ECFFC180A897791F37A627B25E5898A98,
	DllImportsFromSharedLib_x64_dll_grpcsharp_call_send_close_from_client_mED3F53AAEB505797588FBDE77106A174A90CC8F5,
	DllImportsFromSharedLib_x64_dll_grpcsharp_call_send_status_from_server_mF8039F6ED832CBFB236FF4CE61CB4E06D9BDECE0,
	DllImportsFromSharedLib_x64_dll_grpcsharp_call_recv_message_m05E73263B26520BE6FDC6331B55DA564CFC59262,
	DllImportsFromSharedLib_x64_dll_grpcsharp_call_recv_initial_metadata_m253F9E6399576613EB9888947DF92965738B6E03,
	DllImportsFromSharedLib_x64_dll_grpcsharp_call_start_serverside_mE8485A31644401DA02431B70F5FF2FCC1EF89142,
	DllImportsFromSharedLib_x64_dll_grpcsharp_call_send_initial_metadata_m323576B74085D1EE75873EDBA84F7BD60233E5D1,
	DllImportsFromSharedLib_x64_dll_grpcsharp_call_set_credentials_m3DCCDA8063A75B1954B9E9B6E0B20760E1BB63E9,
	DllImportsFromSharedLib_x64_dll_grpcsharp_call_get_peer_m5AC6D6279D8D896BDE47AD5196DB150A0CD76718,
	DllImportsFromSharedLib_x64_dll_grpcsharp_call_destroy_mB25B3FAEE38D9357B9FA533F1E4CECB28CB95C35,
	DllImportsFromSharedLib_x64_dll_grpcsharp_channel_args_create_mAC2CD79DAF4B03C74C44450D2D5D3FD53C12FDEA,
	DllImportsFromSharedLib_x64_dll_grpcsharp_channel_args_set_string_m0E4B18E081AFFB304E6C1EE02E5EAD5E2F72E977,
	DllImportsFromSharedLib_x64_dll_grpcsharp_channel_args_set_integer_mE362DA8AB170B8A9C0CE65B9D076B314AD69DB23,
	DllImportsFromSharedLib_x64_dll_grpcsharp_channel_args_destroy_mA375053C52A52502A5B47C66B3AA559F9F631A9D,
	DllImportsFromSharedLib_x64_dll_grpcsharp_override_default_ssl_roots_mB264F182DB0D62348C9D8EF0CEEFF1A0ABE24F2E,
	DllImportsFromSharedLib_x64_dll_grpcsharp_ssl_credentials_create_m2C266BCB36A3D562B0D7D5A45BCEC8F20843D2FD,
	DllImportsFromSharedLib_x64_dll_grpcsharp_composite_channel_credentials_create_mA7E31B68CBEC825781C868228B3FCDB48689E7EC,
	DllImportsFromSharedLib_x64_dll_grpcsharp_channel_credentials_release_mB1B9B0D3A3A8ABBEA451896A7279BA8ED9BF2128,
	DllImportsFromSharedLib_x64_dll_grpcsharp_insecure_channel_create_mF7B5D435BC1A609875AA3C3ABFC014E1E3DB4684,
	DllImportsFromSharedLib_x64_dll_grpcsharp_secure_channel_create_mC28E8239B22F460F23D4B22B64B271DE6208C574,
	DllImportsFromSharedLib_x64_dll_grpcsharp_channel_create_call_m579C7697572BA30B57EBC39E373F2EE98CB59ED8,
	DllImportsFromSharedLib_x64_dll_grpcsharp_channel_check_connectivity_state_mA502B2A047A936C1E90F9791F03ABDC59F4860C1,
	DllImportsFromSharedLib_x64_dll_grpcsharp_channel_watch_connectivity_state_mBB42EEF24F9956D50B6467285296268B8F04D5D8,
	DllImportsFromSharedLib_x64_dll_grpcsharp_channel_get_target_m5D826967D55161AE4FC3E0BCD058CBA03CF9035E,
	DllImportsFromSharedLib_x64_dll_grpcsharp_channel_destroy_m67274E43E5B77BE53BC4E282B8F85B683E90CF19,
	DllImportsFromSharedLib_x64_dll_grpcsharp_sizeof_grpc_event_m2FEA488FF91FF616F74687C453246BB742E60388,
	DllImportsFromSharedLib_x64_dll_grpcsharp_completion_queue_create_async_m79B24E5DAE70387751169166465CE3C65AC7A0F3,
	DllImportsFromSharedLib_x64_dll_grpcsharp_completion_queue_create_sync_m8533785745285E3C00457593FFC09143D08EF470,
	DllImportsFromSharedLib_x64_dll_grpcsharp_completion_queue_shutdown_m52EAAEF6E2D0E8D4B189184E3E828F7F16A5F7D8,
	DllImportsFromSharedLib_x64_dll_grpcsharp_completion_queue_next_mD636827A9BAC3C58DC94B600E17E023A3B653D62,
	DllImportsFromSharedLib_x64_dll_grpcsharp_completion_queue_pluck_mDBA24A5993338E2E66C48FB886E375433FFB27DE,
	DllImportsFromSharedLib_x64_dll_grpcsharp_completion_queue_destroy_m179670BC0B71B258B938C3DD8F75D35E92A7718D,
	DllImportsFromSharedLib_x64_dll_gprsharp_free_m158891F786C4FAC87DA7098912ED774980319BEA,
	DllImportsFromSharedLib_x64_dll_grpcsharp_metadata_array_create_mC7B98F133442140335BBF50977C151CC237FC7D9,
	DllImportsFromSharedLib_x64_dll_grpcsharp_metadata_array_add_m440F9ECCB2C277EAEBA6DDFF9CBA738890EBFEC7,
	DllImportsFromSharedLib_x64_dll_grpcsharp_metadata_array_count_mBB017C450D5A84A9CF69CE7FBD6A9373796FF08D,
	DllImportsFromSharedLib_x64_dll_grpcsharp_metadata_array_get_key_m39B98ACECFA0BE3E7F25D8750A8B30E4EEF65700,
	DllImportsFromSharedLib_x64_dll_grpcsharp_metadata_array_get_value_m94287A554EF15ED78FAF556ECF60FEE46503F2AF,
	DllImportsFromSharedLib_x64_dll_grpcsharp_metadata_array_destroy_full_mD9D6C1F2FDF5029E4DCCC438550F2832A7AA8E4E,
	DllImportsFromSharedLib_x64_dll_grpcsharp_redirect_log_mABF8DF8A36B5B21291E8DDAE363B660D32D8AFD3,
	DllImportsFromSharedLib_x64_dll_grpcsharp_native_callback_dispatcher_init_m730EDE1A06B0C31F29885376C61D72D4B1049246,
	DllImportsFromSharedLib_x64_dll_grpcsharp_metadata_credentials_create_from_plugin_m53D50E327FB400261DA098BC5DEECD65013F70C5,
	DllImportsFromSharedLib_x64_dll_grpcsharp_metadata_credentials_notify_from_plugin_m23916BBBB2B5132A452B2A8EC311B08AF52EDC3E,
	DllImportsFromSharedLib_x64_dll_grpcsharp_ssl_server_credentials_create_mFE1EAD747A9E90D26238815F5C7656CC4FF11C46,
	DllImportsFromSharedLib_x64_dll_grpcsharp_server_credentials_release_m820FDEA1343EDA01F8E75DCFD73F781D0F68939B,
	DllImportsFromSharedLib_x64_dll_grpcsharp_server_create_mEF6122E124ACAE9C82B54E1722F7504EBC594DA5,
	DllImportsFromSharedLib_x64_dll_grpcsharp_server_register_completion_queue_mFE58AD7B8420F3EA23D3B1ED15C21B02219F03D5,
	DllImportsFromSharedLib_x64_dll_grpcsharp_server_add_insecure_http2_port_m102BB17709F1095B1ACF2D1D39C1F4C32FA633C5,
	DllImportsFromSharedLib_x64_dll_grpcsharp_server_add_secure_http2_port_mDAA1E3C7C7241B48A50CC54068B03ED35CA849A3,
	DllImportsFromSharedLib_x64_dll_grpcsharp_server_start_m01193F30EA133B83B48FAD4032845A65BE2F2B03,
	DllImportsFromSharedLib_x64_dll_grpcsharp_server_request_call_m32BFF84E480466BA217FF34C05B167FFD562237B,
	DllImportsFromSharedLib_x64_dll_grpcsharp_server_cancel_all_calls_m924FC9DACA8C8E314E098C2B998485B4958EF5E8,
	DllImportsFromSharedLib_x64_dll_grpcsharp_server_shutdown_and_notify_callback_mEFF582C5AB207465DA26EC1C7339CE9008E6C33E,
	DllImportsFromSharedLib_x64_dll_grpcsharp_server_destroy_m5719CBAEC6D805718B2864B35F675A1301022C6A,
	DllImportsFromSharedLib_x64_dll_grpcsharp_call_auth_context_m348093E4DC22443586F167B39D73EB1E0B8FE3D7,
	DllImportsFromSharedLib_x64_dll_grpcsharp_auth_context_peer_identity_property_name_m982D085F54D6F69BD73CFA6352809408EE3492D4,
	DllImportsFromSharedLib_x64_dll_grpcsharp_auth_context_property_iterator_m501CC40A9BFE0799A68836D68A1ED0D8C1EB7731,
	DllImportsFromSharedLib_x64_dll_grpcsharp_auth_property_iterator_next_mBB1043B43012072F7A7E8A9B7C6412ECBACCB95A,
	DllImportsFromSharedLib_x64_dll_grpcsharp_auth_context_release_m54DE8946E5134E6474E9E370C53CBBD510396F28,
	DllImportsFromSharedLib_x64_dll_grpcsharp_slice_buffer_create_mDC2BD72C89453EFE28C421C4E8C95159825CE210,
	DllImportsFromSharedLib_x64_dll_grpcsharp_slice_buffer_adjust_tail_space_mF1D1A4D1633F82F9FB369C238CE37C8B0E2B9F8F,
	DllImportsFromSharedLib_x64_dll_grpcsharp_slice_buffer_slice_count_m5BC3C6B5D2A3451677F02CEE5A9E26E88872ED8D,
	DllImportsFromSharedLib_x64_dll_grpcsharp_slice_buffer_slice_peek_mE4F2456871446323C8AA54C5546F7326564DA6C0,
	DllImportsFromSharedLib_x64_dll_grpcsharp_slice_buffer_reset_and_unref_mBD1414BD4693207D1BAFCFCE17E1E61FE10082D2,
	DllImportsFromSharedLib_x64_dll_grpcsharp_slice_buffer_destroy_mD34F9223CA157E8CA55F94A407053E8E4EFDCBF3,
	DllImportsFromSharedLib_x64_dll_gprsharp_now_mAE14E2859AA4147EEA1635EDB4A85AF3DC452917,
	DllImportsFromSharedLib_x64_dll_gprsharp_inf_future_mC7C6B21F05511C238A15E00268EF3EC315E2FCCA,
	DllImportsFromSharedLib_x64_dll_gprsharp_inf_past_mDE4A281A304626DEA5FA7EE2775766704431EA07,
	DllImportsFromSharedLib_x64_dll_gprsharp_convert_clock_type_mC0C18DF0195010105AA54F1F368B49FACA5F88DF,
	DllImportsFromSharedLib_x64_dll_gprsharp_sizeof_timespec_mE55F35BB918905D365D0457808796DE4B7CB6A6D,
	DllImportsFromSharedLib_x64_dll_grpcsharp_test_callback_m1C444F7D292CFF3D24CFBCDC90F5CE85B2AF0DCA,
	DllImportsFromSharedLib_x64_dll_grpcsharp_test_nop_mE33FBB89FA3CADA0200EFA7E4BCAF1555AEDE03E,
	DllImportsFromSharedLib_x64_dll_grpcsharp_test_override_method_mA43D09C38AFC5462DDBE83DB2D7C67B4AA31DD49,
	DllImportsFromSharedLib_x64_dll_grpcsharp_test_call_start_unary_echo_m78D199D8557EB71083C44C8B279DF87583CC13ED,
	DllImportsFromSharedLib_x64_dll__ctor_m5A9FF23CA4935343E7E14F63D4B264CBA4F6FAAB,
	PlatformApis__cctor_mD6524D4E0ADE7F971F0C6E7E724DD1D649C257A4,
	PlatformApis_get_IsLinux_m3A31E3845BB05443A04A9EFCEA9A7053FC7ECE24,
	PlatformApis_get_IsMacOSX_mEBCEB9C394146D47A17D74DE056E30DDB69C2631,
	PlatformApis_get_IsWindows_mFF7F998678839E7FBB82025A2C6E104D8ADC40EB,
	PlatformApis_get_IsMono_m1894BBD7E5C32AA03503871687A95B82F1359336,
	PlatformApis_get_IsUnity_m876B45221B880B8562FC4C684D7F804DBCE136E6,
	PlatformApis_get_IsUnityIOS_mE3D59C90E10D7FE81A053692445BEE1AB3ACB01B,
	PlatformApis_get_IsXamarin_m5ECD1C2D4DF50946C5DE891A2C2AAB3688F08B19,
	PlatformApis_get_IsXamarinIOS_mE0BA829DA458617818B4389997AF9F3EE72C74DD,
	PlatformApis_get_IsXamarinAndroid_mCD1C341C257220058F1C6E9197B5DE9E7D350CDB,
	PlatformApis_get_IsNet5OrHigher_mA7E90DBA8E889041AA657F81936A7992A7F1D074,
	PlatformApis_get_FrameworkDescription_m4437076C55FFA76649EC64FF8B24EB5DBE19ECD2,
	PlatformApis_get_ClrVersion_m5CB5C21478084799BDEA1D15B49A0EFAE097B893,
	PlatformApis_get_IsNetCore_m7654B396FB51F16560E1A39A443793D14A334A9A,
	PlatformApis_get_Is64Bit_m0D37A031F72E4F83EB8D961BF476BBEDCE5B6C49,
	PlatformApis_get_ProcessArchitecture_m26CE3A2B1586C968242D7BD8FA459A41C4FF4073,
	PlatformApis_GetUnityApplicationPlatform_m612371BF8673ACE270892C0EC0548FADD926B302,
	PlatformApis_TryGetUnityApplicationPlatform_m33C92D187F55DC12DC1A3D8B757EC54AB3241B3D,
	PlatformApis_TryGetFrameworkDescription_m1904D5F1887BD1A550C8C7F41594306D06FD6244,
	PlatformApis_TryGetClrVersion_m5218643092474932574A48CE76FA50E744DC81D2,
	PlatformApis_GetGrpcCoreTargetFrameworkMoniker_mBAD02225ED96B1F334B7154E8924B38D1BEFE19C,
	U3CU3Ec__cctor_m9272DB7730E903CB5CFBA19C14188C25C87ADCB5,
	U3CU3Ec__ctor_m2623EB539914F957C5ABA33476C6E812F4A32410,
	U3CU3Ec_U3CTryGetUnityApplicationPlatformU3Eb__49_0_mBE35EE19B0610811A96F8DF6C8529911590AC854,
	RequestCallContextSafeHandle__ctor_m2813E35A100074528BEF3874183DD7CB8043C7AD,
	RequestCallContextSafeHandle_Create_m33160BD033CECA4B9895A15CB0B83DE3DE75DB9C,
	RequestCallContextSafeHandle_get_Handle_m798D47A8CD387461EF6D8F5E0BE7BED248FAB0D3,
	RequestCallContextSafeHandle_SetReturnToPoolAction_mB61CB73828F2554248A1B83D33DF25DE285E31B2,
	RequestCallContextSafeHandle_get_CompletionCallback_mDBE9925BCE73FF75318A634547E0C0BC137BCA2B,
	RequestCallContextSafeHandle_set_CompletionCallback_m5E3B89F62926D9C236BD2EFED184A435AFC40C37,
	RequestCallContextSafeHandle_GetServerRpcNew_m3B60DAC9938765C45D3F8597A9CEDA9C56E0682F,
	RequestCallContextSafeHandle_Recycle_m8AF1E4C3A3FD2917F76346F188A11BE9993C378F,
	RequestCallContextSafeHandle_ReleaseHandle_m2A4BDBCBE02CEF467BBE6098D22D5BB63794C01D,
	RequestCallContextSafeHandle_Grpc_Core_Internal_IOpCompletionCallback_OnComplete_mA37E78584954AE9EF76F07873FB2C60CE369D92A,
	RequestCallContextSafeHandle__cctor_m0DFF4B0B7B4A21EBD110E105FC9D78D4ED78DFCB,
	ReusableSliceBuffer_PopulateFrom_m529DA56A9D54ED916BF1727AD28A37CB6E68279F,
	ReusableSliceBuffer_Invalidate_m2F524DE51964D4C14C21E9FB16533C501D3DC32F,
	ReusableSliceBuffer__ctor_mEBA6F0C0EDB21ACCE6CD798B82042308FD6B1401,
	SliceSegment_Reset_m5CF4C4F5164E07D4980C88B197E65C78BBE30049,
	SliceSegment_SetNext_m59332BBC6ACE52AF771B6B179A3F6A7735C105B4,
	SliceSegment__ctor_m4C58697EDD443F87D76FCC6FA3E72E1C4FF54090,
	SafeHandleZeroIsInvalid__ctor_m7437699C7878B2D5B2CC415C4AD081A2B7C9EE00,
	SafeHandleZeroIsInvalid_get_IsInvalid_m2261B4C6D2B8220BE4FD449C270A2C5688CD6EE3,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	UnimplementedMethodCallHandler__ctor_mF07EACD670EC51C4B38EFC657D5A5583FC29D766,
	UnimplementedMethodCallHandler_UnimplementedMethod_mF1A52C8038A2B461ACF14090B319894809842DFD,
	UnimplementedMethodCallHandler_HandleCall_mF31E27B1869DF9DF404B7965C2DBBFBC88DBBA9B,
	UnimplementedMethodCallHandler__cctor_m1D4083830E8A8A5F5CDF3813670397E31784483B,
	U3CU3Ec__cctor_mE9201783B4CF8D6B60F54E004B24999E785293CF,
	U3CU3Ec__ctor_mFE8CC528DE9A7DDA58C9A68AAF82B59C08695FB1,
	U3CU3Ec_U3C_ctorU3Eb__2_0_mF5311EF89104817350C43D0BC306CE2EC2B216DA,
	U3CU3Ec_U3C_ctorU3Eb__2_1_m4A30CD80A886435C304958DCADAA254A80FF1EDC,
	HandlerUtils_GetStatusFromExceptionAndMergeTrailers_mECA714134D8DE4D8B872A8D2EB607CD29D025737,
	HandlerUtils_GetWriteFlags_m1E7FE467A3A0E44CFC2F6E73E10F44223F14DF0F,
	HandlerUtils_NewContext_m0FC85DA17A9121431BAF1C5BDAC94C6C72D46E32,
	NULL,
	NULL,
	NULL,
	NULL,
	ServerCredentialsSafeHandle__ctor_m0159E5A320A90D9EAC68C38105BA89AE37C7F1C5,
	ServerCredentialsSafeHandle_CreateSslCredentials_mD07B8B6318F397595D6B85090A8C037E56AF8A54,
	ServerCredentialsSafeHandle_ReleaseHandle_mC7FA15834B2F9EE12F57B7A592BE39627791A00F,
	ServerCredentialsSafeHandle__cctor_mA0F48F62B325B1E64E1EE49FF095F141CA4987D1,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	ServerRpcNew__ctor_m812399CDF08C8EBDA8E534F0101627886658BDD6,
	ServerRpcNew_get_Server_m87B680FC40D0D915644F02EC34EB1C6AC07AD14B,
	ServerRpcNew_get_Call_m763D4B9EDCE95FD3BDF6CBC2E45D093B67415B02,
	ServerRpcNew_get_Method_m4828D959C47D085F8AC61EA81C2F93F7E19073E2,
	ServerRpcNew_get_Host_mB9402BAD4EEE97C1B2B0936C08FDC4D99209891C,
	ServerRpcNew_get_Deadline_mB68D819B1743D463CE36E274F07D36922065016B,
	ServerRpcNew_get_RequestMetadata_m9B06EBC35F9F64F34C7BA9FC7D9B2268BF2A1777,
	ServerSafeHandle__ctor_m26ABD7F4CD998FC49F017035D87252D8BC0700B6,
	ServerSafeHandle_NewServer_mBAECCA1802E39E185C5517975ABA4BDCD4F6E905,
	ServerSafeHandle_RegisterCompletionQueue_m2C56BC611B55732F13182D35834EA77C91BD0045,
	ServerSafeHandle_AddInsecurePort_m6221E47E2611B89683699AA3B13EE817C5A6D34B,
	ServerSafeHandle_AddSecurePort_mB5817D42ABC318A20ACCCD6B22A70DFDDAF4D177,
	ServerSafeHandle_Start_mFA5BA67499892A8FCAD71E230C195E1BA4DC3D93,
	ServerSafeHandle_ShutdownAndNotify_m18CB916A7D419F85E97F75BD61A1E37CBA4FA55D,
	ServerSafeHandle_RequestCall_mF45B53E2A868874FEA4E46EC5DAA4B947784AC38,
	ServerSafeHandle_ReleaseHandle_m4FB39CA9E7FDCEE3CCFC26EF890071AA0876D289,
	ServerSafeHandle_CancelAllCalls_mC579F18BB3CF29C4CBFF6B2885846F026F850AE0,
	ServerSafeHandle__cctor_m1AF9A3AA8E5E80EAC548AE79E2A790148DD9267E,
	ServerServiceDefinitionExtensions_GetCallHandlers_m6C4B06DBD0F5B9E0F8ACDBE13E9EB8247FAD415D,
	DefaultServiceBinder_GetCallHandlers_m25A1DD407ED0E325D533DC0BC744E1B814E170C8,
	NULL,
	NULL,
	NULL,
	NULL,
	DefaultServiceBinder__ctor_m0B873479C3E8BAA34573DC67948ED653FDA04E1D,
	Slice__ctor_m215A4A67A3804109D17E135DB6FE31AF1C150BFD,
	Slice_get_Length_m9EF58B298772325ADE2185E64636F450541A9879,
	Slice_ToSpanUnsafe_m204F2CA57F323C0375206B0A39B7CC1D8DDA67E4,
	Slice_ToString_m6813024B28CAFDE3C72F7B0B8BA48F729E2C88E2,
	SliceBufferSafeHandle__ctor_mB497B342160E2FECFDAB11C561DFD0FBA03AF97C,
	SliceBufferSafeHandle_Create_mD6126885827B07FFFFE1B34E32A0068422F19142,
	SliceBufferSafeHandle_get_Handle_m56E5D00C4588B1EB6E4BBF58BF265F90F391AFA7,
	SliceBufferSafeHandle_Advance_m6E40E5CDB0770AE933E1A112BCA1B3D63595F676,
	SliceBufferSafeHandle_GetMemory_mC2CB1DC320382508A7BE5EDEE7E95684F2194DCF,
	SliceBufferSafeHandle_GetSpan_m8E7454F669EBC3ADE73E6B43D373BD400D77E32F,
	SliceBufferSafeHandle_Complete_mB2B79B60B1A66806F22503E8BDB0B741387E5B3C,
	SliceBufferSafeHandle_Reset_m3D6A9CE926B84EB676032CADD19CAEF8AEAF848E,
	SliceBufferSafeHandle_ToByteArray_mDC0703A891077F68DBD74C0DDD6EA99E076E07FB,
	SliceBufferSafeHandle_EnsureBufferSpace_m7A07C77926A5BC2D83A3FF784E9EB0F0A88548ED,
	SliceBufferSafeHandle_AdjustTailSpace_m6C16C8AB7E1C3FC85B1632806FF33E4710667A6C,
	SliceBufferSafeHandle_ReleaseHandle_mD2744F7EEF68DF570923489F6212CD36C860430C,
	SliceBufferSafeHandle__cctor_mE95C4EA2FA3DDDE2A3F1BF8ECF736A67A7472F97,
	SliceMemoryManager_Reset_m7A385F5AAECDFDEBBAF901DB399D25A6A395AE10,
	SliceMemoryManager_Reset_m79EC26F4DD58D9D1B8D6AD661D4B28B96D856001,
	SliceMemoryManager_GetSpan_m57AFE739737ADFD4E4E7920B26FC70200B21B047,
	SliceMemoryManager_Pin_mE0C2942A17DC007CF6F7CF22DA36D00559477C5B,
	SliceMemoryManager_Unpin_m5BC909D171B9DBCDB28324D27532D4D9F80143A8,
	SliceMemoryManager_Dispose_mAAD896D53252A7E46E00374F7608E24A49859D83,
	SliceMemoryManager__ctor_m2543DF8914F62B18FCB43A93AA54BFDE3613A20F,
	Timespec_Equals_m424E3C360D432E90A3A6C43ECD9843DE74DA4967,
	Timespec_GetHashCode_mB18E5C6167F4A6CEAD178D009D2AA80DF54FD1F8,
	Timespec_ToString_m4C5C0DFFE4377ED54A87A05216730EAE94B20B50,
	Timespec_Equals_m5E505EC54B0B0460601ABB54F190E462F987EA67,
	Timespec__ctor_m6ED659F8011A6D43892EF69CE7A99C3B78E12733,
	Timespec__ctor_m6A0D2BB6975E9FA6E3B10689801A863BEBEDB04E,
	Timespec_get_InfFuture_mF824F501FC6D5F4771B3DABAC8694FDB0A04D4C5,
	Timespec_get_InfPast_mB31180C41D7A6AE239D1E5A8B2A8AFC710E6C99A,
	Timespec_get_Now_m563DD2734F7B4AB38FD840478D8C15B67E23C43D,
	Timespec_get_TimevalSeconds_mD94F6B602DDF2E8AFEA00799637D3848C690FA25,
	Timespec_get_TimevalNanos_mA7DA2C0EBBE0AE1B19275519C44B35FA0179567D,
	Timespec_ToClockType_m70E832C1EFB1E0F7902F2D7F81A50815EFC3AC4C,
	Timespec_ToDateTime_m96FC97988DA91C21E7068F123966B3DE3DF491FA,
	Timespec_FromDateTime_mB8DC88C6B016A3A08E234F737FB1CFA07C0B543B,
	Timespec_get_PreciseNow_m99C6F3D8B7191B18BBC44E6F1C4FFD9CF900CC2F,
	Timespec_get_NativeSize_mCB6272F9596FAF648C9FB372338D5FD3D7A900EB,
	Timespec_get_NativeInfFuture_mEEAF4C5B91D4D8C869BE9A24D46062E4F660557D,
	Timespec_get_NativeInfPast_m48ADE2ABC2291249A02CF8D6685412072011D98E,
	Timespec__cctor_m9CA01C6828F45E3B33170A0E45D4D4E69071276D,
	UnimplementedCallInvoker__ctor_m37084568D0F765B943C69CE5523B481719B916B7,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	UnmanagedLibrary__ctor_mABDF514DB467C94F585E386574C08817412E118A,
	UnmanagedLibrary_LoadSymbol_m43EDA46797A156DAEA9FAB7139DE472332DF2FE6,
	NULL,
	UnmanagedLibrary_PlatformSpecificLoadLibrary_m83449C5406B9EFDE2BC2BC3D0B05620020405159,
	UnmanagedLibrary_LoadLibraryPosix_m673FF31B498057327E5C718D6331D6FFCB988665,
	UnmanagedLibrary_FirstValidLibraryPath_mFCB962ACCE3DEAF84CF06F54A8803CAD31830C87,
	UnmanagedLibrary__cctor_mFF702D54966C7FC5AB704A0FD3C00ECF1D83F822,
	Windows_LoadLibrary_mADA497BF6FF6B4D56974CB4B090417B7B6B23352,
	Windows_GetProcAddress_mDE3A5D086D09CECAD0C5338318F41246C014ACDD,
	Linux_dlopen_m294285A8DBB5D2CEE0F29DD0BA8E8D8355EB1718,
	Linux_dlerror_m178FB5EB1D76CD0AF2C420B5A74AAF6007EA2507,
	Linux_dlsym_mFB9A1F6F693B31AEEC408A5100FA67B7E7D1F52B,
	MacOSX_dlopen_m225A5CB7296C7BBBC8B3ABF5AB8DBEBE7AFD09D0,
	MacOSX_dlerror_m83AD193EF1A4A0F8D228F7DA9899A2F26C48D664,
	MacOSX_dlsym_m97302520FAEC533EB08C02EAC66788598F661EF6,
	Mono_dlopen_mDF9BF224A65852EDD273193157AA66A4DDF77764,
	Mono_dlerror_m49BC764553C0B9B7CA0950F28E448A0236E432E8,
	Mono_dlsym_m055B22ADF70CEC1500B8F6A4B089C5B7CCAE00DC,
	CoreCLR_dlopen_m66F8159A6DF01DB733607A585A718B44A7D16DB1,
	CoreCLR_dlerror_mFB065CA506D371BA949EA456FABA5621E29C94CC,
	CoreCLR_dlsym_mC9C9F466B57771325757EF1038363D1AE7E8BCB1,
	UserAgentStringProvider__cctor_m2ADC866269FC2470FCE0D6F025C3B77564570DA8,
	UserAgentStringProvider_get_DefaultInstance_mC8CF0AF9F6F02DC7359EE014F18A4991E181FB2A,
	UserAgentStringProvider_get_GrpcCsharpUserAgentString_m93644E1C5BED2C50F218DFD684B1D0D1A94BDA03,
	UserAgentStringProvider__ctor_m06211232854B0F724950C1A66E960DCF69EB76C1,
	UserAgentStringProvider_TryGetArchitectureString_mD7CC281B99428BBF457920F42D1FF4BC5B893C63,
	UserAgentStringProvider_SanitizeFrameworkDescription_mCF7FCF3A14A3F9C6EDC370AD83D7ACD9221D7C43,
	WellKnownStrings_Coerce64_m71B5D6229DCB09F6CFC2D79A41D8500C1180B9D0,
	WellKnownStrings_Coerce32_m5A2C524C0D683EBD59ED31613DC3160F75634039,
	WellKnownStrings_Coerce16_mF65025003F00395C2C095D97EB4C34C5171F3343,
	WellKnownStrings_TryIdentify_m7D73F9733BAE186E0298F8670B5342D0F25A36A8,
	WellKnownStrings_TryIdentify_mF98950731F7321A2FFC068709607C759972DE1C3,
	ServerServiceDefinitionExtensions_Intercept_mBA2FFD9D927D17B326907EA51D40C2DF8F20B13D,
	ServerServiceDefinitionExtensions_Intercept_m13846586BF84E4693790C29AE52983BEA9F8A64D,
	InterceptingServiceBinder__ctor_mF331115BBF62BCB7237ACBF5FF4E0B56595225F7,
	InterceptingServiceBinder_GetInterceptedServerServiceDefinition_mEAA52B2757800B324A215DD7F1A9E5D3232B3BBB,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
extern void U3CWaitForStateChangedAsyncU3Ed__16_MoveNext_mF00F397FFA104DB181B755041BC37DAFA2358330_AdjustorThunk (void);
extern void U3CWaitForStateChangedAsyncU3Ed__16_SetStateMachine_m9110AFDE96D1F0DCF0E6ADDB0005969C223B38D0_AdjustorThunk (void);
extern void U3CConnectAsyncU3Ed__22_MoveNext_mDD715A24E28F3AA27AECA6D91B2B0F86AB0DD138_AdjustorThunk (void);
extern void U3CConnectAsyncU3Ed__22_SetStateMachine_mC4BF8110336827B874EFF405D4017E981B1106A0_AdjustorThunk (void);
extern void U3CShutdownAsyncCoreU3Ed__23_MoveNext_m25FA2E734465BCB440892B6D4B04F84D44CDE339_AdjustorThunk (void);
extern void U3CShutdownAsyncCoreU3Ed__23_SetStateMachine_m1F163AFDFA378EB1AF311DC50F723CF3A84C47DD_AdjustorThunk (void);
extern void U3CReleaseAsyncU3Ed__26_MoveNext_mB114E8F17DC7C8F74FFE4D55BA40C92DBFB2559E_AdjustorThunk (void);
extern void U3CReleaseAsyncU3Ed__26_SetStateMachine_mB59786286F81367206DEE3E3C06E63C4F3A282D1_AdjustorThunk (void);
extern void U3CShutdownAsyncU3Ed__60_MoveNext_m102E73DF46E0FDF83282D29CBEC96AC3586C4273_AdjustorThunk (void);
extern void U3CShutdownAsyncU3Ed__60_SetStateMachine_m23B96629FBAA36989334E7997B14C41B175386F5_AdjustorThunk (void);
extern void U3CShutdownInternalAsyncU3Ed__32_MoveNext_m6BA0A69B255BF9F5090F8BED5D48B578BFA4B179_AdjustorThunk (void);
extern void U3CShutdownInternalAsyncU3Ed__32_SetStateMachine_mB9A057AF8A48659278D0AD3C71F3503993F41B4C_AdjustorThunk (void);
extern void U3CShutdownCompleteOrEnvironmentDeadAsyncU3Ed__33_MoveNext_m805F395E5A0D26981215B281646B7C10014AB6FF_AdjustorThunk (void);
extern void U3CShutdownCompleteOrEnvironmentDeadAsyncU3Ed__33_SetStateMachine_mF93B0F6537FE52E673DA4B46487A3CC5A7231CF6_AdjustorThunk (void);
extern void U3CHandleCallAsyncU3Ed__39_MoveNext_m12FE72CB0D5A2ED66D995B5BD840E7111EA97C69_AdjustorThunk (void);
extern void U3CHandleCallAsyncU3Ed__39_SetStateMachine_m86E7C92172C88BEB0C2F393560F9B9033CD9AE68_AdjustorThunk (void);
extern void ProfilerEntry__ctor_mAEC39D440D3500DC3180118C7FF2AE81733864BD_AdjustorThunk (void);
extern void ProfilerEntry_ToString_m25BB14397EF63D941AD2FB315D89691D3E43556F_AdjustorThunk (void);
extern void ProfilerScope__ctor_m9A49CE3EE8C0BCFE524FF47A70EE79FFAE407E2D_AdjustorThunk (void);
extern void ProfilerScope_Dispose_m37368A8F282FD7454A5DBB661ADD901D5BFB9475_AdjustorThunk (void);
extern void CompletionCallbackData__ctor_mF1FBC5A0FB0D1375997220DA2577D1685997ED10_AdjustorThunk (void);
extern void CompletionCallbackData_get_Callback_mE9D1D850F417C74757E750ABE4397CF353457368_AdjustorThunk (void);
extern void CompletionCallbackData_get_State_m7847C8FEC9A38CB7D0D84F79770A94840EAB2C63_AdjustorThunk (void);
extern void ClientSideStatus__ctor_mD3D8F5CD8EEBC7778D9296EA098F9055799B7277_AdjustorThunk (void);
extern void ClientSideStatus_get_Status_m3B8B7A5695BEC97FFE287DE9ECA81DB6FD198D05_AdjustorThunk (void);
extern void ClientSideStatus_get_Trailers_m6F448A155F2D82A4F35E4DBF65DE0164A597EDA6_AdjustorThunk (void);
extern void UsageScope__ctor_m3CFA62BE60021B45B003A1E1CA8A678DF55E06F3_AdjustorThunk (void);
extern void UsageScope_Dispose_m349ED08E2339F12E8C2B5003E08F5F0BE2E9BE0D_AdjustorThunk (void);
extern void UsageScope__ctor_m3C3C70BDF1E60BC791D77FADA1BFE5B879C9E468_AdjustorThunk (void);
extern void UsageScope_get_Context_m1FA6D8F23AC55A9DDC3186829249DE8858E53977_AdjustorThunk (void);
extern void UsageScope_Dispose_m259E60CEC25C31A8EF43A511890B07B427547DDC_AdjustorThunk (void);
extern void U3CU3CNativeMetadataInterceptorHandlerU3Eb__0U3Ed_MoveNext_m128CD090C01DA7F3F84A5E98AD3058CD8BDA99C5_AdjustorThunk (void);
extern void U3CU3CNativeMetadataInterceptorHandlerU3Eb__0U3Ed_SetStateMachine_m34553CA5709B0917286E53A524EB1D58E8F633E0_AdjustorThunk (void);
extern void U3CGetMetadataAsyncU3Ed__12_MoveNext_mFB5D53C73AC5AD8518488967C9DB7B65A2A4FD32_AdjustorThunk (void);
extern void U3CGetMetadataAsyncU3Ed__12_SetStateMachine_mBB81F11716F31F15A11D1F0051392F6E5CEAB0FE_AdjustorThunk (void);
extern void ServerRpcNew__ctor_m812399CDF08C8EBDA8E534F0101627886658BDD6_AdjustorThunk (void);
extern void ServerRpcNew_get_Server_m87B680FC40D0D915644F02EC34EB1C6AC07AD14B_AdjustorThunk (void);
extern void ServerRpcNew_get_Call_m763D4B9EDCE95FD3BDF6CBC2E45D093B67415B02_AdjustorThunk (void);
extern void ServerRpcNew_get_Method_m4828D959C47D085F8AC61EA81C2F93F7E19073E2_AdjustorThunk (void);
extern void ServerRpcNew_get_Host_mB9402BAD4EEE97C1B2B0936C08FDC4D99209891C_AdjustorThunk (void);
extern void ServerRpcNew_get_Deadline_mB68D819B1743D463CE36E274F07D36922065016B_AdjustorThunk (void);
extern void ServerRpcNew_get_RequestMetadata_m9B06EBC35F9F64F34C7BA9FC7D9B2268BF2A1777_AdjustorThunk (void);
extern void Slice__ctor_m215A4A67A3804109D17E135DB6FE31AF1C150BFD_AdjustorThunk (void);
extern void Slice_get_Length_m9EF58B298772325ADE2185E64636F450541A9879_AdjustorThunk (void);
extern void Slice_ToSpanUnsafe_m204F2CA57F323C0375206B0A39B7CC1D8DDA67E4_AdjustorThunk (void);
extern void Slice_ToString_m6813024B28CAFDE3C72F7B0B8BA48F729E2C88E2_AdjustorThunk (void);
extern void Timespec_Equals_m424E3C360D432E90A3A6C43ECD9843DE74DA4967_AdjustorThunk (void);
extern void Timespec_GetHashCode_mB18E5C6167F4A6CEAD178D009D2AA80DF54FD1F8_AdjustorThunk (void);
extern void Timespec_ToString_m4C5C0DFFE4377ED54A87A05216730EAE94B20B50_AdjustorThunk (void);
extern void Timespec_Equals_m5E505EC54B0B0460601ABB54F190E462F987EA67_AdjustorThunk (void);
extern void Timespec__ctor_m6ED659F8011A6D43892EF69CE7A99C3B78E12733_AdjustorThunk (void);
extern void Timespec__ctor_m6A0D2BB6975E9FA6E3B10689801A863BEBEDB04E_AdjustorThunk (void);
extern void Timespec_get_TimevalSeconds_mD94F6B602DDF2E8AFEA00799637D3848C690FA25_AdjustorThunk (void);
extern void Timespec_get_TimevalNanos_mA7DA2C0EBBE0AE1B19275519C44B35FA0179567D_AdjustorThunk (void);
extern void Timespec_ToClockType_m70E832C1EFB1E0F7902F2D7F81A50815EFC3AC4C_AdjustorThunk (void);
extern void Timespec_ToDateTime_m96FC97988DA91C21E7068F123966B3DE3DF491FA_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[56] = 
{
	{ 0x0600002D, U3CWaitForStateChangedAsyncU3Ed__16_MoveNext_mF00F397FFA104DB181B755041BC37DAFA2358330_AdjustorThunk },
	{ 0x0600002E, U3CWaitForStateChangedAsyncU3Ed__16_SetStateMachine_m9110AFDE96D1F0DCF0E6ADDB0005969C223B38D0_AdjustorThunk },
	{ 0x0600002F, U3CConnectAsyncU3Ed__22_MoveNext_mDD715A24E28F3AA27AECA6D91B2B0F86AB0DD138_AdjustorThunk },
	{ 0x06000030, U3CConnectAsyncU3Ed__22_SetStateMachine_mC4BF8110336827B874EFF405D4017E981B1106A0_AdjustorThunk },
	{ 0x06000031, U3CShutdownAsyncCoreU3Ed__23_MoveNext_m25FA2E734465BCB440892B6D4B04F84D44CDE339_AdjustorThunk },
	{ 0x06000032, U3CShutdownAsyncCoreU3Ed__23_SetStateMachine_m1F163AFDFA378EB1AF311DC50F723CF3A84C47DD_AdjustorThunk },
	{ 0x06000072, U3CReleaseAsyncU3Ed__26_MoveNext_mB114E8F17DC7C8F74FFE4D55BA40C92DBFB2559E_AdjustorThunk },
	{ 0x06000073, U3CReleaseAsyncU3Ed__26_SetStateMachine_mB59786286F81367206DEE3E3C06E63C4F3A282D1_AdjustorThunk },
	{ 0x0600007A, U3CShutdownAsyncU3Ed__60_MoveNext_m102E73DF46E0FDF83282D29CBEC96AC3586C4273_AdjustorThunk },
	{ 0x0600007B, U3CShutdownAsyncU3Ed__60_SetStateMachine_m23B96629FBAA36989334E7997B14C41B175386F5_AdjustorThunk },
	{ 0x060000AC, U3CShutdownInternalAsyncU3Ed__32_MoveNext_m6BA0A69B255BF9F5090F8BED5D48B578BFA4B179_AdjustorThunk },
	{ 0x060000AD, U3CShutdownInternalAsyncU3Ed__32_SetStateMachine_mB9A057AF8A48659278D0AD3C71F3503993F41B4C_AdjustorThunk },
	{ 0x060000AE, U3CShutdownCompleteOrEnvironmentDeadAsyncU3Ed__33_MoveNext_m805F395E5A0D26981215B281646B7C10014AB6FF_AdjustorThunk },
	{ 0x060000AF, U3CShutdownCompleteOrEnvironmentDeadAsyncU3Ed__33_SetStateMachine_mF93B0F6537FE52E673DA4B46487A3CC5A7231CF6_AdjustorThunk },
	{ 0x060000B6, U3CHandleCallAsyncU3Ed__39_MoveNext_m12FE72CB0D5A2ED66D995B5BD840E7111EA97C69_AdjustorThunk },
	{ 0x060000B7, U3CHandleCallAsyncU3Ed__39_SetStateMachine_m86E7C92172C88BEB0C2F393560F9B9033CD9AE68_AdjustorThunk },
	{ 0x060000DD, ProfilerEntry__ctor_mAEC39D440D3500DC3180118C7FF2AE81733864BD_AdjustorThunk },
	{ 0x060000DE, ProfilerEntry_ToString_m25BB14397EF63D941AD2FB315D89691D3E43556F_AdjustorThunk },
	{ 0x060000F1, ProfilerScope__ctor_m9A49CE3EE8C0BCFE524FF47A70EE79FFAE407E2D_AdjustorThunk },
	{ 0x060000F2, ProfilerScope_Dispose_m37368A8F282FD7454A5DBB661ADD901D5BFB9475_AdjustorThunk },
	{ 0x060001A2, CompletionCallbackData__ctor_mF1FBC5A0FB0D1375997220DA2577D1685997ED10_AdjustorThunk },
	{ 0x060001A3, CompletionCallbackData_get_Callback_mE9D1D850F417C74757E750ABE4397CF353457368_AdjustorThunk },
	{ 0x060001A4, CompletionCallbackData_get_State_m7847C8FEC9A38CB7D0D84F79770A94840EAB2C63_AdjustorThunk },
	{ 0x060001ED, ClientSideStatus__ctor_mD3D8F5CD8EEBC7778D9296EA098F9055799B7277_AdjustorThunk },
	{ 0x060001EE, ClientSideStatus_get_Status_m3B8B7A5695BEC97FFE287DE9ECA81DB6FD198D05_AdjustorThunk },
	{ 0x060001EF, ClientSideStatus_get_Trailers_m6F448A155F2D82A4F35E4DBF65DE0164A597EDA6_AdjustorThunk },
	{ 0x06000203, UsageScope__ctor_m3CFA62BE60021B45B003A1E1CA8A678DF55E06F3_AdjustorThunk },
	{ 0x06000204, UsageScope_Dispose_m349ED08E2339F12E8C2B5003E08F5F0BE2E9BE0D_AdjustorThunk },
	{ 0x0600025E, UsageScope__ctor_m3C3C70BDF1E60BC791D77FADA1BFE5B879C9E468_AdjustorThunk },
	{ 0x0600025F, UsageScope_get_Context_m1FA6D8F23AC55A9DDC3186829249DE8858E53977_AdjustorThunk },
	{ 0x06000260, UsageScope_Dispose_m259E60CEC25C31A8EF43A511890B07B427547DDC_AdjustorThunk },
	{ 0x060002D3, U3CU3CNativeMetadataInterceptorHandlerU3Eb__0U3Ed_MoveNext_m128CD090C01DA7F3F84A5E98AD3058CD8BDA99C5_AdjustorThunk },
	{ 0x060002D4, U3CU3CNativeMetadataInterceptorHandlerU3Eb__0U3Ed_SetStateMachine_m34553CA5709B0917286E53A524EB1D58E8F633E0_AdjustorThunk },
	{ 0x060002D5, U3CGetMetadataAsyncU3Ed__12_MoveNext_mFB5D53C73AC5AD8518488967C9DB7B65A2A4FD32_AdjustorThunk },
	{ 0x060002D6, U3CGetMetadataAsyncU3Ed__12_SetStateMachine_mBB81F11716F31F15A11D1F0051392F6E5CEAB0FE_AdjustorThunk },
	{ 0x060007C5, ServerRpcNew__ctor_m812399CDF08C8EBDA8E534F0101627886658BDD6_AdjustorThunk },
	{ 0x060007C6, ServerRpcNew_get_Server_m87B680FC40D0D915644F02EC34EB1C6AC07AD14B_AdjustorThunk },
	{ 0x060007C7, ServerRpcNew_get_Call_m763D4B9EDCE95FD3BDF6CBC2E45D093B67415B02_AdjustorThunk },
	{ 0x060007C8, ServerRpcNew_get_Method_m4828D959C47D085F8AC61EA81C2F93F7E19073E2_AdjustorThunk },
	{ 0x060007C9, ServerRpcNew_get_Host_mB9402BAD4EEE97C1B2B0936C08FDC4D99209891C_AdjustorThunk },
	{ 0x060007CA, ServerRpcNew_get_Deadline_mB68D819B1743D463CE36E274F07D36922065016B_AdjustorThunk },
	{ 0x060007CB, ServerRpcNew_get_RequestMetadata_m9B06EBC35F9F64F34C7BA9FC7D9B2268BF2A1777_AdjustorThunk },
	{ 0x060007DE, Slice__ctor_m215A4A67A3804109D17E135DB6FE31AF1C150BFD_AdjustorThunk },
	{ 0x060007DF, Slice_get_Length_m9EF58B298772325ADE2185E64636F450541A9879_AdjustorThunk },
	{ 0x060007E0, Slice_ToSpanUnsafe_m204F2CA57F323C0375206B0A39B7CC1D8DDA67E4_AdjustorThunk },
	{ 0x060007E1, Slice_ToString_m6813024B28CAFDE3C72F7B0B8BA48F729E2C88E2_AdjustorThunk },
	{ 0x060007F6, Timespec_Equals_m424E3C360D432E90A3A6C43ECD9843DE74DA4967_AdjustorThunk },
	{ 0x060007F7, Timespec_GetHashCode_mB18E5C6167F4A6CEAD178D009D2AA80DF54FD1F8_AdjustorThunk },
	{ 0x060007F8, Timespec_ToString_m4C5C0DFFE4377ED54A87A05216730EAE94B20B50_AdjustorThunk },
	{ 0x060007F9, Timespec_Equals_m5E505EC54B0B0460601ABB54F190E462F987EA67_AdjustorThunk },
	{ 0x060007FA, Timespec__ctor_m6ED659F8011A6D43892EF69CE7A99C3B78E12733_AdjustorThunk },
	{ 0x060007FB, Timespec__ctor_m6A0D2BB6975E9FA6E3B10689801A863BEBEDB04E_AdjustorThunk },
	{ 0x060007FF, Timespec_get_TimevalSeconds_mD94F6B602DDF2E8AFEA00799637D3848C690FA25_AdjustorThunk },
	{ 0x06000800, Timespec_get_TimevalNanos_mA7DA2C0EBBE0AE1B19275519C44B35FA0179567D_AdjustorThunk },
	{ 0x06000801, Timespec_ToClockType_m70E832C1EFB1E0F7902F2D7F81A50815EFC3AC4C_AdjustorThunk },
	{ 0x06000802, Timespec_ToDateTime_m96FC97988DA91C21E7068F123966B3DE3DF491FA_AdjustorThunk },
};
static const int32_t s_InvokerIndices[2110] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	2997,
	1633,
	1613,
	1162,
	6448,
	2341,
	2341,
	6479,
	6379,
	4672,
	6479,
	6479,
	6479,
	6479,
	6479,
	5313,
	5313,
	6449,
	4337,
	9850,
	9575,
	10051,
	6614,
	5313,
	6614,
	5313,
	6614,
	5313,
	10051,
	6614,
	1522,
	2997,
	2992,
	6448,
	6479,
	6448,
	6479,
	3778,
	3778,
	6448,
	8583,
	8583,
	9575,
	5313,
	0,
	0,
	0,
	0,
	0,
	0,
	10008,
	10008,
	9999,
	9850,
	9850,
	9850,
	9850,
	10008,
	10008,
	10008,
	9850,
	9846,
	9846,
	9838,
	9076,
	9076,
	9850,
	9850,
	6614,
	6479,
	6479,
	6479,
	6377,
	6479,
	6479,
	10008,
	10051,
	10051,
	6479,
	6448,
	6448,
	9976,
	10051,
	6614,
	10051,
	10051,
	10051,
	10051,
	6614,
	2997,
	2997,
	6614,
	5313,
	10051,
	6614,
	4703,
	4703,
	6479,
	6479,
	6614,
	5313,
	187,
	4703,
	4703,
	6479,
	6479,
	6479,
	6394,
	6479,
	6379,
	6479,
	6546,
	5372,
	6479,
	5313,
	6479,
	6479,
	6614,
	5313,
	6479,
	6479,
	6479,
	6448,
	5286,
	6614,
	6479,
	6479,
	5313,
	5313,
	4683,
	6479,
	5313,
	4401,
	5313,
	6614,
	6614,
	1444,
	1522,
	1522,
	10051,
	5313,
	5313,
	6479,
	6479,
	5313,
	4401,
	1373,
	6479,
	6479,
	6614,
	5313,
	6614,
	5313,
	6614,
	2480,
	10051,
	6614,
	3778,
	2997,
	6614,
	5313,
	10008,
	0,
	6614,
	10051,
	6479,
	6614,
	1628,
	1631,
	5313,
	6479,
	6479,
	6377,
	6448,
	6479,
	1613,
	2992,
	6479,
	6448,
	6479,
	6448,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	8344,
	10008,
	0,
	0,
	0,
	1657,
	6479,
	9571,
	10008,
	9850,
	8886,
	10051,
	5313,
	5313,
	5313,
	6614,
	6614,
	5286,
	5313,
	5313,
	5313,
	6614,
	5313,
	5313,
	5328,
	2997,
	6614,
	6614,
	5313,
	0,
	10051,
	6614,
	6479,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	2992,
	1606,
	0,
	5313,
	2997,
	5313,
	2997,
	5313,
	2997,
	2997,
	5313,
	2997,
	2997,
	8736,
	5313,
	2997,
	5313,
	2997,
	2997,
	0,
	5313,
	2997,
	5313,
	2997,
	2997,
	6614,
	5313,
	5313,
	2997,
	0,
	5313,
	2997,
	5313,
	2997,
	5313,
	2997,
	2997,
	5313,
	2997,
	2997,
	6479,
	2997,
	6614,
	6479,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	5287,
	6449,
	5204,
	6449,
	6449,
	6614,
	6479,
	6377,
	4699,
	10051,
	0,
	0,
	0,
	6614,
	10008,
	6450,
	5313,
	2997,
	6479,
	6380,
	6479,
	6377,
	6614,
	6377,
	5215,
	6247,
	3666,
	10051,
	2997,
	6479,
	6479,
	6614,
	8843,
	6377,
	10051,
	9846,
	9346,
	6614,
	5313,
	5313,
	594,
	594,
	1631,
	594,
	1631,
	1180,
	5313,
	321,
	5313,
	5313,
	5313,
	2997,
	6614,
	5372,
	6479,
	6479,
	6377,
	9783,
	8829,
	10051,
	10051,
	6614,
	1522,
	1522,
	1522,
	1522,
	1522,
	1522,
	1522,
	6614,
	10008,
	9571,
	1573,
	1572,
	6377,
	10051,
	6614,
	10008,
	8157,
	8843,
	6377,
	10051,
	6614,
	8843,
	8158,
	157,
	4337,
	554,
	6479,
	6377,
	10051,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	3039,
	6546,
	6479,
	9999,
	9999,
	9444,
	10008,
	9999,
	10051,
	6614,
	10008,
	9575,
	6384,
	4051,
	6631,
	6614,
	6479,
	6377,
	6614,
	6614,
	6614,
	10051,
	5313,
	6614,
	2994,
	1522,
	486,
	5313,
	2994,
	2480,
	981,
	5313,
	1633,
	2954,
	2363,
	4703,
	4699,
	6450,
	10051,
	1838,
	4380,
	6614,
	1126,
	6479,
	6394,
	6379,
	6479,
	9575,
	5313,
	6614,
	6479,
	6377,
	10051,
	6614,
	5313,
	6614,
	6479,
	2997,
	2997,
	2361,
	6614,
	9575,
	6479,
	5313,
	1189,
	1633,
	1438,
	2363,
	2363,
	6614,
	10051,
	5313,
	6479,
	231,
	1364,
	6614,
	6479,
	6614,
	6479,
	9575,
	6614,
	6448,
	6479,
	6281,
	5313,
	6614,
	9575,
	10051,
	10051,
	6614,
	6479,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	6614,
	5313,
	6479,
	5286,
	6614,
	6479,
	6614,
	10055,
	10051,
	5313,
	6479,
	6614,
	10051,
	6614,
	6479,
	9850,
	10051,
	1156,
	6614,
	6479,
	6377,
	6479,
	2346,
	2997,
	8839,
	2981,
	10051,
	5313,
	5313,
	6614,
	10051,
	6614,
	3778,
	6614,
	6614,
	6614,
	6479,
	6479,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	8827,
	8046,
	9447,
	9447,
	10051,
	6614,
	9575,
	9573,
	6450,
	6377,
	10051,
	5313,
	6479,
	5313,
	2994,
	231,
	84,
	4401,
	2994,
	146,
	37,
	4401,
	9850,
	9575,
	6870,
	6614,
	10051,
	5254,
	6450,
	6614,
	6614,
	10008,
	6479,
	10008,
	10008,
	10008,
	10008,
	10008,
	10008,
	9976,
	9324,
	10008,
	10008,
	10008,
	10051,
	2994,
	557,
	152,
	5313,
	9850,
	7333,
	10051,
	5313,
	6479,
	231,
	558,
	1429,
	10051,
	6614,
	5313,
	6614,
	5313,
	6614,
	5313,
	2994,
	5215,
	1400,
	5313,
	10008,
	0,
	8843,
	5313,
	5313,
	5313,
	5313,
	5313,
	5313,
	5313,
	5313,
	6614,
	2994,
	6614,
	2363,
	5313,
	2994,
	6614,
	2363,
	5313,
	2994,
	6450,
	2363,
	4618,
	2994,
	6479,
	2363,
	4703,
	2994,
	4618,
	1438,
	4618,
	2994,
	4618,
	1438,
	4618,
	2994,
	1365,
	497,
	1345,
	2994,
	4401,
	1438,
	4401,
	2994,
	2289,
	989,
	2287,
	2994,
	4618,
	1438,
	4618,
	2994,
	4618,
	1438,
	4618,
	2994,
	4401,
	1438,
	4401,
	2994,
	5313,
	1438,
	5313,
	2994,
	5288,
	1416,
	5313,
	2994,
	6479,
	2363,
	4703,
	2994,
	4703,
	1438,
	4703,
	2994,
	2289,
	989,
	2287,
	2994,
	2289,
	989,
	2287,
	2994,
	4877,
	1438,
	4877,
	2994,
	4618,
	1438,
	4618,
	2994,
	5313,
	1438,
	5313,
	2994,
	5288,
	1416,
	5313,
	2994,
	2363,
	1020,
	4703,
	2994,
	5288,
	1416,
	5313,
	2994,
	4401,
	1438,
	4401,
	2994,
	1373,
	505,
	4401,
	2994,
	235,
	87,
	4401,
	2994,
	855,
	249,
	4401,
	2994,
	235,
	87,
	4401,
	2994,
	855,
	249,
	4401,
	2994,
	478,
	161,
	4401,
	2994,
	2122,
	1020,
	4401,
	2994,
	36,
	17,
	4401,
	2994,
	2122,
	1020,
	4401,
	2994,
	2122,
	1020,
	4401,
	2994,
	2122,
	1020,
	4401,
	2994,
	1376,
	517,
	4401,
	2994,
	2122,
	1020,
	4401,
	2994,
	4703,
	1438,
	4703,
	2994,
	5288,
	1416,
	5313,
	2994,
	4715,
	1452,
	4703,
	2994,
	1203,
	258,
	5313,
	2994,
	1202,
	257,
	5313,
	2994,
	5288,
	1416,
	5313,
	2994,
	5313,
	1438,
	5313,
	2994,
	1019,
	250,
	4703,
	2994,
	2363,
	1020,
	4703,
	2994,
	5288,
	1416,
	5313,
	2994,
	2363,
	1020,
	4703,
	2994,
	1438,
	517,
	4703,
	2994,
	160,
	38,
	4703,
	2994,
	2121,
	1003,
	4401,
	2994,
	581,
	158,
	5313,
	2994,
	4703,
	1438,
	4703,
	2994,
	5288,
	1416,
	5313,
	2994,
	6448,
	2363,
	4401,
	2994,
	6479,
	2363,
	4703,
	2994,
	6479,
	2363,
	4703,
	2994,
	5313,
	1438,
	5313,
	2994,
	4052,
	1438,
	4052,
	2994,
	2013,
	1004,
	4052,
	2994,
	5288,
	1416,
	5313,
	2994,
	5288,
	1416,
	5313,
	2994,
	4715,
	1452,
	4703,
	2994,
	1191,
	254,
	5313,
	2994,
	4907,
	1416,
	4908,
	2994,
	1388,
	496,
	2287,
	2994,
	1388,
	496,
	2287,
	2994,
	5288,
	1416,
	5313,
	2994,
	5313,
	1438,
	5313,
	2994,
	5313,
	1438,
	5313,
	2994,
	4699,
	1416,
	4703,
	2994,
	559,
	153,
	5313,
	2994,
	518,
	163,
	4703,
	2994,
	5288,
	1416,
	5313,
	2994,
	4703,
	1438,
	4703,
	2994,
	2997,
	1020,
	5313,
	2994,
	2122,
	1020,
	4401,
	2994,
	1376,
	517,
	4401,
	2994,
	5313,
	1438,
	5313,
	2994,
	1376,
	517,
	4401,
	2994,
	5313,
	1438,
	5313,
	2994,
	1633,
	517,
	5313,
	2994,
	5288,
	1416,
	5313,
	2994,
	4703,
	1438,
	4703,
	2994,
	4618,
	1438,
	4618,
	2994,
	5577,
	1438,
	5577,
	2994,
	4615,
	1396,
	2287,
	2994,
	5288,
	1416,
	5313,
	2994,
	6479,
	2363,
	4703,
	2994,
	1390,
	520,
	4618,
	2994,
	4908,
	1438,
	4908,
	2994,
	1201,
	256,
	1501,
	2994,
	5313,
	1438,
	5313,
	2994,
	5288,
	1416,
	5313,
	2994,
	4876,
	1411,
	4877,
	2994,
	4876,
	1411,
	4877,
	2994,
	4876,
	1411,
	4877,
	2994,
	2414,
	1028,
	4877,
	2994,
	6448,
	2363,
	4401,
	2994,
	4401,
	1438,
	4401,
	2994,
	4617,
	1416,
	4618,
	2994,
	2997,
	1020,
	5313,
	2994,
	235,
	87,
	4401,
	10051,
	10051,
	10001,
	10008,
	9486,
	9486,
	8045,
	9447,
	8787,
	9486,
	9486,
	9447,
	9850,
	9848,
	10008,
	9575,
	8787,
	8787,
	9763,
	9486,
	9850,
	9848,
	8843,
	9848,
	9447,
	8055,
	6952,
	7553,
	6952,
	7553,
	7210,
	8752,
	6792,
	8752,
	8752,
	8752,
	8062,
	8752,
	9575,
	9848,
	9590,
	7853,
	7852,
	9848,
	9850,
	7699,
	8843,
	9848,
	8843,
	8158,
	6881,
	8751,
	7350,
	9575,
	9848,
	9999,
	10008,
	10008,
	9850,
	9353,
	8663,
	9848,
	9848,
	9590,
	7841,
	9813,
	8097,
	8097,
	9848,
	9850,
	9850,
	9573,
	7335,
	7255,
	9848,
	9575,
	9113,
	8752,
	8062,
	9850,
	8062,
	9850,
	8404,
	9848,
	9575,
	9486,
	9868,
	9480,
	9848,
	10008,
	8102,
	9814,
	7851,
	9850,
	9848,
	9762,
	9762,
	9762,
	8965,
	9999,
	9447,
	9485,
	9113,
	6952,
	6614,
	10051,
	10051,
	10001,
	10008,
	9486,
	9486,
	8045,
	9447,
	8787,
	9486,
	9486,
	9447,
	9850,
	9848,
	10008,
	9575,
	8787,
	8787,
	9763,
	9486,
	9850,
	9848,
	8843,
	9848,
	9447,
	8055,
	6952,
	7553,
	6952,
	7553,
	7210,
	8752,
	6792,
	8752,
	8752,
	8752,
	8062,
	8752,
	9575,
	9848,
	9590,
	7853,
	7852,
	9848,
	9850,
	7699,
	8843,
	9848,
	8843,
	8158,
	6881,
	8751,
	7350,
	9575,
	9848,
	9999,
	10008,
	10008,
	9850,
	9353,
	8663,
	9848,
	9848,
	9590,
	7841,
	9813,
	8097,
	8097,
	9848,
	9850,
	9850,
	9573,
	7335,
	7255,
	9848,
	9575,
	9113,
	8752,
	8062,
	9850,
	8062,
	9850,
	8404,
	9848,
	9575,
	9486,
	9868,
	9480,
	9848,
	10008,
	8102,
	9814,
	7851,
	9850,
	9848,
	9762,
	9762,
	9762,
	8965,
	9999,
	9447,
	9485,
	9113,
	6952,
	6614,
	10051,
	10051,
	10001,
	10008,
	9486,
	9486,
	8045,
	9447,
	8787,
	9486,
	9486,
	9447,
	9850,
	9848,
	10008,
	9575,
	8787,
	8787,
	9763,
	9486,
	9850,
	9848,
	8843,
	9848,
	9447,
	8055,
	6952,
	7553,
	6952,
	7553,
	7210,
	8752,
	6792,
	8752,
	8752,
	8752,
	8062,
	8752,
	9575,
	9848,
	9590,
	7853,
	7852,
	9848,
	9850,
	7699,
	8843,
	9848,
	8843,
	8158,
	6881,
	8751,
	7350,
	9575,
	9848,
	9999,
	10008,
	10008,
	9850,
	9353,
	8663,
	9848,
	9848,
	9590,
	7841,
	9813,
	8097,
	8097,
	9848,
	9850,
	9850,
	9573,
	7335,
	7255,
	9848,
	9575,
	9113,
	8752,
	8062,
	9850,
	8062,
	9850,
	8404,
	9848,
	9575,
	9486,
	9868,
	9480,
	9848,
	10008,
	8102,
	9814,
	7851,
	9850,
	9848,
	9762,
	9762,
	9762,
	8965,
	9999,
	9447,
	9485,
	9113,
	6952,
	6614,
	10051,
	10051,
	10001,
	10008,
	9486,
	9486,
	8045,
	9447,
	8787,
	9486,
	9486,
	9447,
	9850,
	9848,
	10008,
	9575,
	8787,
	8787,
	9763,
	9486,
	9850,
	9848,
	8843,
	9848,
	9447,
	8055,
	6952,
	7553,
	6952,
	7553,
	7210,
	8752,
	6792,
	8752,
	8752,
	8752,
	8062,
	8752,
	9575,
	9848,
	9590,
	7853,
	7852,
	9848,
	9850,
	7699,
	8843,
	9848,
	8843,
	8158,
	6881,
	8751,
	7350,
	9575,
	9848,
	9999,
	10008,
	10008,
	9850,
	9353,
	8663,
	9848,
	9848,
	9590,
	7841,
	9813,
	8097,
	8097,
	9848,
	9850,
	9850,
	9573,
	7335,
	7255,
	9848,
	9575,
	9113,
	8752,
	8062,
	9850,
	8062,
	9850,
	8404,
	9848,
	9575,
	9486,
	9868,
	9480,
	9848,
	10008,
	8102,
	9814,
	7851,
	9850,
	9848,
	9762,
	9762,
	9762,
	8965,
	9999,
	9447,
	9485,
	9113,
	6952,
	6614,
	10051,
	10051,
	10001,
	10008,
	9486,
	9486,
	8045,
	9447,
	8787,
	9486,
	9486,
	9447,
	9850,
	9848,
	10008,
	9575,
	8787,
	8787,
	9763,
	9486,
	9850,
	9848,
	8843,
	9848,
	9447,
	8055,
	6952,
	7553,
	6952,
	7553,
	7210,
	8752,
	6792,
	8752,
	8752,
	8752,
	8062,
	8752,
	9575,
	9848,
	9590,
	7853,
	7852,
	9848,
	9850,
	7699,
	8843,
	9848,
	8843,
	8158,
	6881,
	8751,
	7350,
	9575,
	9848,
	9999,
	10008,
	10008,
	9850,
	9353,
	8663,
	9848,
	9848,
	9590,
	7841,
	9813,
	8097,
	8097,
	9848,
	9850,
	9850,
	9573,
	7335,
	7255,
	9848,
	9575,
	9113,
	8752,
	8062,
	9850,
	8062,
	9850,
	8404,
	9848,
	9575,
	9486,
	9868,
	9480,
	9848,
	10008,
	8102,
	9814,
	7851,
	9850,
	9848,
	9762,
	9762,
	9762,
	8965,
	9999,
	9447,
	9485,
	9113,
	6952,
	6614,
	10051,
	10051,
	10001,
	10008,
	9486,
	9486,
	8045,
	9447,
	8787,
	9486,
	9486,
	9447,
	9850,
	9848,
	10008,
	9575,
	8787,
	8787,
	9763,
	9486,
	9850,
	9848,
	8843,
	9848,
	9447,
	8055,
	6952,
	7553,
	6952,
	7553,
	7210,
	8752,
	6792,
	8752,
	8752,
	8752,
	8062,
	8752,
	9575,
	9848,
	9590,
	7853,
	7852,
	9848,
	9850,
	7699,
	8843,
	9848,
	8843,
	8158,
	6881,
	8751,
	7350,
	9575,
	9848,
	9999,
	10008,
	10008,
	9850,
	9353,
	8663,
	9848,
	9848,
	9590,
	7841,
	9813,
	8097,
	8097,
	9848,
	9850,
	9850,
	9573,
	7335,
	7255,
	9848,
	9575,
	9113,
	8752,
	8062,
	9850,
	8062,
	9850,
	8404,
	9848,
	9575,
	9486,
	9868,
	9480,
	9848,
	10008,
	8102,
	9814,
	7851,
	9850,
	9848,
	9762,
	9762,
	9762,
	8965,
	9999,
	9447,
	9485,
	9113,
	6952,
	6614,
	10051,
	10051,
	10001,
	10008,
	9486,
	9486,
	8045,
	9447,
	8787,
	9486,
	9486,
	9447,
	9850,
	9848,
	10008,
	9575,
	8787,
	8787,
	9763,
	9486,
	9850,
	9848,
	8843,
	9848,
	9447,
	8055,
	6952,
	7553,
	6952,
	7553,
	7210,
	8752,
	6792,
	8752,
	8752,
	8752,
	8062,
	8752,
	9575,
	9848,
	9590,
	7853,
	7852,
	9848,
	9850,
	7699,
	8843,
	9848,
	8843,
	8158,
	6881,
	8751,
	7350,
	9575,
	9848,
	9999,
	10008,
	10008,
	9850,
	9353,
	8663,
	9848,
	9848,
	9590,
	7841,
	9813,
	8097,
	8097,
	9848,
	9850,
	9850,
	9573,
	7335,
	7255,
	9848,
	9575,
	9113,
	8752,
	8062,
	9850,
	8062,
	9850,
	8404,
	9848,
	9575,
	9486,
	9868,
	9480,
	9848,
	10008,
	8102,
	9814,
	7851,
	9850,
	9848,
	9762,
	9762,
	9762,
	8965,
	9999,
	9447,
	9485,
	9113,
	6952,
	6614,
	10051,
	9976,
	9976,
	9976,
	9976,
	9976,
	9976,
	9976,
	9976,
	9976,
	9976,
	10008,
	10008,
	9976,
	9976,
	9999,
	10008,
	10008,
	10008,
	10008,
	10008,
	10051,
	6614,
	3778,
	6614,
	10008,
	6450,
	5313,
	6479,
	5313,
	4789,
	6614,
	6377,
	5215,
	10051,
	3310,
	6614,
	6614,
	3038,
	5313,
	6614,
	6614,
	6377,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	6614,
	1438,
	2366,
	10051,
	10051,
	6614,
	4703,
	4703,
	8949,
	9447,
	8169,
	0,
	0,
	0,
	0,
	6614,
	7698,
	6377,
	10051,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	317,
	6479,
	6479,
	6479,
	6479,
	6585,
	6479,
	6614,
	9575,
	5313,
	4401,
	2122,
	6614,
	2997,
	2997,
	6377,
	6614,
	10051,
	9575,
	6479,
	0,
	0,
	0,
	0,
	6614,
	2953,
	6448,
	6297,
	6479,
	6614,
	10008,
	6450,
	5286,
	3256,
	3331,
	6614,
	6614,
	6479,
	5286,
	5286,
	6377,
	10051,
	5357,
	6614,
	6297,
	4652,
	6614,
	5215,
	6614,
	3778,
	6448,
	6479,
	3879,
	2948,
	1581,
	10040,
	10040,
	10040,
	6449,
	6448,
	4876,
	6394,
	9761,
	10040,
	9999,
	10040,
	10040,
	10051,
	6614,
	0,
	0,
	0,
	0,
	0,
	5313,
	4618,
	0,
	8787,
	7656,
	9575,
	10051,
	9486,
	8786,
	8789,
	10001,
	8786,
	8789,
	10001,
	8786,
	8789,
	10001,
	8786,
	8789,
	10001,
	8786,
	10051,
	10008,
	6479,
	613,
	9571,
	9575,
	9798,
	9781,
	9766,
	8827,
	8806,
	8843,
	8843,
	5313,
	6479,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
static const Il2CppTokenIndexMethodTuple s_reversePInvokeIndices[2] = 
{
	{ 0x060002AF, 6,  (void**)&NativeCallbackDispatcher_HandleDispatcherCallback_mF4899474F5F4DB052FE06AF3F349726F6C08102E_RuntimeMethod_var, 0 },
	{ 0x060002C9, 7,  (void**)&NativeLogRedirector_HandleWrite_m95766B386578549BD1126A99659E02C302D40267_RuntimeMethod_var, 0 },
};
static const Il2CppTokenRangePair s_rgctxIndices[64] = 
{
	{ 0x02000002, { 0, 8 } },
	{ 0x02000004, { 43, 6 } },
	{ 0x02000005, { 49, 9 } },
	{ 0x02000026, { 77, 7 } },
	{ 0x02000027, { 84, 10 } },
	{ 0x02000028, { 94, 9 } },
	{ 0x02000029, { 103, 7 } },
	{ 0x0200003B, { 113, 49 } },
	{ 0x0200003C, { 162, 30 } },
	{ 0x0200003D, { 192, 5 } },
	{ 0x0200003E, { 197, 22 } },
	{ 0x02000051, { 219, 6 } },
	{ 0x02000052, { 225, 2 } },
	{ 0x02000053, { 227, 13 } },
	{ 0x02000070, { 240, 30 } },
	{ 0x02000071, { 270, 2 } },
	{ 0x02000072, { 272, 2 } },
	{ 0x0200010D, { 276, 3 } },
	{ 0x0200010E, { 279, 36 } },
	{ 0x0200010F, { 315, 3 } },
	{ 0x02000110, { 318, 26 } },
	{ 0x02000111, { 344, 3 } },
	{ 0x02000112, { 347, 33 } },
	{ 0x02000113, { 380, 3 } },
	{ 0x02000114, { 383, 23 } },
	{ 0x0200011A, { 414, 2 } },
	{ 0x0200011B, { 416, 11 } },
	{ 0x0200011C, { 427, 4 } },
	{ 0x02000130, { 469, 1 } },
	{ 0x02000131, { 470, 1 } },
	{ 0x02000132, { 471, 1 } },
	{ 0x02000133, { 472, 1 } },
	{ 0x0600000B, { 8, 3 } },
	{ 0x0600000C, { 11, 6 } },
	{ 0x0600000D, { 17, 8 } },
	{ 0x0600000E, { 25, 8 } },
	{ 0x0600000F, { 33, 10 } },
	{ 0x06000043, { 58, 2 } },
	{ 0x06000044, { 60, 2 } },
	{ 0x06000045, { 62, 2 } },
	{ 0x06000046, { 64, 2 } },
	{ 0x06000047, { 66, 2 } },
	{ 0x06000048, { 68, 2 } },
	{ 0x060000CC, { 70, 1 } },
	{ 0x060000CD, { 71, 4 } },
	{ 0x060000CE, { 75, 1 } },
	{ 0x060000CF, { 76, 1 } },
	{ 0x060000F5, { 110, 1 } },
	{ 0x06000106, { 111, 1 } },
	{ 0x06000121, { 112, 1 } },
	{ 0x060002DC, { 274, 2 } },
	{ 0x060007B1, { 406, 2 } },
	{ 0x060007B2, { 408, 2 } },
	{ 0x060007B3, { 410, 2 } },
	{ 0x060007B4, { 412, 2 } },
	{ 0x060007D9, { 431, 3 } },
	{ 0x060007DA, { 434, 3 } },
	{ 0x060007DB, { 437, 3 } },
	{ 0x060007DC, { 440, 3 } },
	{ 0x06000811, { 443, 2 } },
	{ 0x06000833, { 445, 6 } },
	{ 0x06000834, { 451, 6 } },
	{ 0x06000835, { 457, 6 } },
	{ 0x06000836, { 463, 6 } },
};
extern const uint32_t g_rgctx_CallInvocationDetails_2__ctor_m5179B4C95D92198A00B95B78B3DDFECC4E515B33;
extern const uint32_t g_rgctx_Method_2_tD5D9BCBFD69D4E47B52AF9E9913458C3584D3559;
extern const uint32_t g_rgctx_Method_2_get_FullName_mEE6CB2086D3F1A0CD4F99ACEFE53181D589F87FA;
extern const uint32_t g_rgctx_Method_2_get_RequestMarshaller_mAA2712298ADC46064306D11918023AF407F75594;
extern const uint32_t g_rgctx_Method_2_get_ResponseMarshaller_m8BFEDDC6C03FF700086CF36BEC928EEAC294D961;
extern const uint32_t g_rgctx_CallInvocationDetails_2__ctor_m064AAB22C37C5B8BB8F67C1E87EF65D158ECE9FF;
extern const uint32_t g_rgctx_GrpcPreconditions_CheckNotNull_TisMarshaller_1_t3C36B16C1331B576F00A604678AA2CD33ECD870D_m2BA3C7BC8403EF8D598A9B682665275BDE634B84;
extern const uint32_t g_rgctx_GrpcPreconditions_CheckNotNull_TisMarshaller_1_t62E1E58C9EF45CCA1E305478A0C0F8B9AB5E1B69_mFC524E7D5AB9E4C7A34F6D78D5766E3A996C966B;
extern const uint32_t g_rgctx_AsyncCall_2_t896C6EBB9B4233DA3E70326B03D30960556DEC69;
extern const uint32_t g_rgctx_AsyncCall_2__ctor_m8BDF539B3D03E5B53101314CFE378BCCE41588A0;
extern const uint32_t g_rgctx_AsyncCall_2_UnaryCall_m290490E11B4DEC7A9DC724DAAECC6CA28BFBA960;
extern const uint32_t g_rgctx_AsyncCall_2_t28E5BA1479A2364675712E16AD1F9D44A9440458;
extern const uint32_t g_rgctx_AsyncCall_2__ctor_mE224EB9E3F53EBD46C9E0F8E83E1E91605EA9F84;
extern const uint32_t g_rgctx_AsyncCall_2_UnaryCallAsync_m8FA4DAF815EFA10C92C512486DAAD800B105F6CA;
extern const uint32_t g_rgctx_Callbacks_2_t75452A2D86B8224BF8BA4300ABDB1B1171282A2E;
extern const uint32_t g_rgctx_AsyncUnaryCall_1_t0BD4178B9D416F87C9EB97E3159AF0FD74406EEF;
extern const uint32_t g_rgctx_AsyncUnaryCall_1__ctor_mB630983C33F610C291569B3B0EAF380A85FDAB92;
extern const uint32_t g_rgctx_AsyncCall_2_t2C69E2CF04C75DC9CC6E49588E678E39514F99BB;
extern const uint32_t g_rgctx_AsyncCall_2__ctor_mB1EC83D9E410F75B200D3738593D206B0D406746;
extern const uint32_t g_rgctx_AsyncCall_2_StartServerStreamingCall_m421A21BCEE506C20B2D72FF4CD3C1EE501FA0135;
extern const uint32_t g_rgctx_ClientResponseStream_2_t22FDF41EA02DFE5FC18F1C806E39A79CC878C1FC;
extern const uint32_t g_rgctx_ClientResponseStream_2__ctor_m3B9D42DD2179D917ABA5A624749704D35AF5B664;
extern const uint32_t g_rgctx_Callbacks_2_t9DB7541EB592D55350034860F780F28FAC76D735;
extern const uint32_t g_rgctx_AsyncServerStreamingCall_1_tBDB4B52766F391713D6DA6CF186A6E3D81D66A02;
extern const uint32_t g_rgctx_AsyncServerStreamingCall_1__ctor_m2FFBB102E7C65DBBE36C86C260A0EE9E890B0EE9;
extern const uint32_t g_rgctx_AsyncCall_2_t0DF193A2622340FFF68DEC6575D1F0B4AFAC23E0;
extern const uint32_t g_rgctx_AsyncCall_2__ctor_m81856F064040E6E0E4713E344E8DFF893B619292;
extern const uint32_t g_rgctx_AsyncCall_2_ClientStreamingCallAsync_m6102330AB755A68FB5D1BEC7EB934F13E0BD1B4F;
extern const uint32_t g_rgctx_ClientRequestStream_2_t6268D0A6522C1DF93CFE65F1B5048E7A4867DD18;
extern const uint32_t g_rgctx_ClientRequestStream_2__ctor_mBC2275131DF842BC4E4631DFB4CBA33A92A8A8A7;
extern const uint32_t g_rgctx_Callbacks_2_tE66523B1AA30169200A865101A1BEFA7F120A8F1;
extern const uint32_t g_rgctx_AsyncClientStreamingCall_2_t09185406406321C01CEDF6734B064A043A995C83;
extern const uint32_t g_rgctx_AsyncClientStreamingCall_2__ctor_m220A1AC2D7638B800B024F5EC5F265E44C6B5BB1;
extern const uint32_t g_rgctx_AsyncCall_2_t51E6A64D28751128035A72956941F6DB548DCE33;
extern const uint32_t g_rgctx_AsyncCall_2__ctor_mB7CF64F132788591A9C17240DC0ACE04F4C644D8;
extern const uint32_t g_rgctx_AsyncCall_2_StartDuplexStreamingCall_m8F5F525422CB65CDFA9FAC40CCCE9AC2C338D827;
extern const uint32_t g_rgctx_ClientRequestStream_2_tDFAEC01DB5906740AF8EE1E5594AD5D7550734E7;
extern const uint32_t g_rgctx_ClientRequestStream_2__ctor_mA1AB9B2B1CCFDE4D82CC94218D9995EFF20ACEBC;
extern const uint32_t g_rgctx_ClientResponseStream_2_tEF640F29F8FB2E20EB8056FAE28C69ECF754A2DE;
extern const uint32_t g_rgctx_ClientResponseStream_2__ctor_mB8656E332F8C43040E7AD438560800A5E7E3E467;
extern const uint32_t g_rgctx_Callbacks_2_tC85C92BE1B8D267EE42B4553DF2B81BFF4E85A5E;
extern const uint32_t g_rgctx_AsyncDuplexStreamingCall_2_t981922C6664758C04718CDDBEA679EAECF722E37;
extern const uint32_t g_rgctx_AsyncDuplexStreamingCall_2__ctor_mE409CEAA87C1FE7759C5D00B9207051BB2681C62;
extern const uint32_t g_rgctx_U3CU3Ec_t3B060568DDA43C9BEF1F6847741ED5EC9161F93B;
extern const uint32_t g_rgctx_U3CU3Ec_U3C_cctorU3Eb__4_0_m615E743E7B2927F25CF7865ECEB0C25BCB1AF3E0;
extern const uint32_t g_rgctx_Callbacks_2_tC4F817CA99F9B3AF75EE92D8A5246E7F60C64825;
extern const uint32_t g_rgctx_U3CU3Ec_U3C_cctorU3Eb__4_1_mDA96AC68CDB1130C28389E3ED3E44192C107DFF9;
extern const uint32_t g_rgctx_U3CU3Ec_U3C_cctorU3Eb__4_2_m9F61926F815AE7B7B0C6E0A313AC51CECA45BBAA;
extern const uint32_t g_rgctx_U3CU3Ec_U3C_cctorU3Eb__4_3_m7560E7AD8D9F099FF32E51604A96EF40A7430C7F;
extern const uint32_t g_rgctx_U3CU3Ec_t0AA879812C2DA17BF9E41ABA8C6CE6B2BD7F9EDA;
extern const uint32_t g_rgctx_U3CU3Ec__ctor_mCCC93B1C7FDE707FA9C61FD95C0EFBA2D2A32D4A;
extern const uint32_t g_rgctx_U3CU3Ec_t0AA879812C2DA17BF9E41ABA8C6CE6B2BD7F9EDA;
extern const uint32_t g_rgctx_AsyncCall_2_t0B390B6C08690AEA46DC12E5B9A90B4DE63D3BAA;
extern const uint32_t g_rgctx_AsyncCall_2_get_ResponseHeadersAsync_m58FF986B659E95C8F292ACC289BCD70EF28F0E11;
extern const uint32_t g_rgctx_AsyncCall_2_GetStatus_mE753E28C617810EEA4DC8F158CDCA3F7A87C2C41;
extern const uint32_t g_rgctx_AsyncCall_2_GetTrailers_m7203908D953007E9A0A33291988EAD110687BB61;
extern const uint32_t g_rgctx_AsyncCallBase_2_t6B0D230C4D9463C8737AB7366714C2F5389650FD;
extern const uint32_t g_rgctx_AsyncCallBase_2_Cancel_mB994C819C20FCA2394177E281CD58E18056D0B9D;
extern const uint32_t g_rgctx_DefaultCallInvoker_CreateCall_TisTRequest_tAB68D8BB1092626F8FC0BF34F92758934E21735D_TisTResponse_t2808B43AFAB03EEDC6210E0840F3647840C529AF_m8AA13C3E249BD295AB1682D6EDEB830703DBBC8F;
extern const uint32_t g_rgctx_Calls_BlockingUnaryCall_TisTRequest_tAB68D8BB1092626F8FC0BF34F92758934E21735D_TisTResponse_t2808B43AFAB03EEDC6210E0840F3647840C529AF_m9D2234B57904CCC9EAF8469B7A7A1142C39981A8;
extern const uint32_t g_rgctx_DefaultCallInvoker_CreateCall_TisTRequest_t29C97DBCD220FB9ED6D8657D2BF4D234F8447972_TisTResponse_t66DD382B8DF0A84E7CDB0EC0FCDDB1A53282BCB9_mA50D5D803AF3FADD48EBC5DF9679C347E4F16915;
extern const uint32_t g_rgctx_Calls_AsyncUnaryCall_TisTRequest_t29C97DBCD220FB9ED6D8657D2BF4D234F8447972_TisTResponse_t66DD382B8DF0A84E7CDB0EC0FCDDB1A53282BCB9_mA5CD7B0D08C05B1AAD4A4D1FF804129E09AB76C5;
extern const uint32_t g_rgctx_DefaultCallInvoker_CreateCall_TisTRequest_tC13F603E95919FA03EA42D890256CFBCC4268789_TisTResponse_tF1924366D05D9CB9CDE0A4DE01A710CD049FE06F_mCBB20CDADF436D98DDBB590174D14642D2086CB6;
extern const uint32_t g_rgctx_Calls_AsyncServerStreamingCall_TisTRequest_tC13F603E95919FA03EA42D890256CFBCC4268789_TisTResponse_tF1924366D05D9CB9CDE0A4DE01A710CD049FE06F_m767560EF9D0F6C4B4C487D76008E902C6034E9B1;
extern const uint32_t g_rgctx_DefaultCallInvoker_CreateCall_TisTRequest_t7C3A9159BAE88798F705D0C3937E81A417B1F54C_TisTResponse_tE913B366C1E045A594D0AE2D5A42A070FE146036_m978A7947087EBB68CF77CA4D049AB537E67809EA;
extern const uint32_t g_rgctx_Calls_AsyncClientStreamingCall_TisTRequest_t7C3A9159BAE88798F705D0C3937E81A417B1F54C_TisTResponse_tE913B366C1E045A594D0AE2D5A42A070FE146036_m4B8960199F5201EB6F81671E434CC760F8CF6B67;
extern const uint32_t g_rgctx_DefaultCallInvoker_CreateCall_TisTRequest_t699B22F22AB3C7BB74CD3BE4C70542CE1F632439_TisTResponse_tC933357C756BC04507E80133E57DB2D23A8BC38D_m086C9BA8509090A659FA10DE81F41CFCC57A23AC;
extern const uint32_t g_rgctx_Calls_AsyncDuplexStreamingCall_TisTRequest_t699B22F22AB3C7BB74CD3BE4C70542CE1F632439_TisTResponse_tC933357C756BC04507E80133E57DB2D23A8BC38D_m7C225C274122D3F8D411B8EED1E7FB22D702ADE8;
extern const uint32_t g_rgctx_CallInvocationDetails_2_t52D0EB82F23C0D2BD483EAEDEA7BEBE53BE1CE1B;
extern const uint32_t g_rgctx_CallInvocationDetails_2__ctor_mD938592F468E4B372D2577DBCC1BEAFFE8FD98B1;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_Start_TisU3CForEachAsyncU3Ed__0_1_t86B3C6CE61CAD047E87DCF6C4C045EE7EB62AD0D_m81767A4F3DDA07072C3220846913A9DAF978F13C;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_Create_mA3189D18DE237B66DD6FE4132134FDE1907164C3;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_tE8FCC3347065ADBA1F857C6CDB5A6046BDE499F8;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_Start_TisU3CToListAsyncU3Ed__1_1_t84BE3AF922DF7C86AAE7B93928022DFC21FFC65C_m846F133C3A175A3E81BE1437B1B5A18F2F8246B3;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_get_Task_m2DDD1640DE19DFB0BFBFB3A883729006047CF1CD;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_Start_TisU3CWriteAllAsyncU3Ed__2_1_tE4C1607FD02669F8003185870AB41D9690E8E7E4_m3AFD5998DC6242490B9DAC458B7A24A949221F1B;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_Start_TisU3CWriteAllAsyncU3Ed__3_1_t77E78144DC926B28D640B21FF2250E6E745439C4_m96298B855C2A09FB892E99ECAB03E7809EF5F535;
extern const uint32_t g_rgctx_IAsyncStreamReader_1_t922EBBE5DC0C2D337DB803A9A9D22C3983D64C08;
extern const uint32_t g_rgctx_IAsyncStreamReader_1_get_Current_m42F2B8713369EE1DA81B9217BDC79E87BF1CD493;
extern const uint32_t g_rgctx_Func_2_t3E9D5F723D41A07CE939BDB19E843E55C6397FBB;
extern const uint32_t g_rgctx_Func_2_Invoke_mED20B5B1DAC7E0790E977937006720ED69B5DE0E;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CForEachAsyncU3Ed__0_1_tB3D56F9176275DD3254B9451FF87CAF6C0FEC3BB_mE7A950EE41AFD440F6B1B621DEE0A5DB4545DC84;
extern const uint32_t g_rgctx_AsyncStreamReaderExtensions_MoveNext_TisT_t4FF052B879D093C2C91EEBF3739E8C15BAE91AB5_m0C3020653F5405E7D9719734F8F1E7822FD2932D;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tADFEF9AE6CB4E22E17B1DFA386EE3D86DB8955E4_TisU3CForEachAsyncU3Ed__0_1_tB3D56F9176275DD3254B9451FF87CAF6C0FEC3BB_mFB3E78853C12B612C7DD5D835303E6A3091579E1;
extern const uint32_t g_rgctx_List_1_t6EDEBC6CDE05F0E25DA68C79104AF8675AF0B5F0;
extern const uint32_t g_rgctx_List_1__ctor_m17918526E4808973B7C25A950A4DBA4A5FA219A3;
extern const uint32_t g_rgctx_IAsyncStreamReader_1_t9F91F25C699C55641DB685E3D7641CBC80A9FD34;
extern const uint32_t g_rgctx_IAsyncStreamReader_1_get_Current_mE1E71E19BAF5B91AB6825B6DDC49D727B873F3E6;
extern const uint32_t g_rgctx_List_1_Add_m5978CAF692EA9DD45056476772946590BF325AA9;
extern const uint32_t g_rgctx_AsyncStreamReaderExtensions_MoveNext_TisT_t682E582EABFD45089DF31227AAA957244BC960CC_m68B5BD03B8D7B3607B94B092A726876917604687;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tADFEF9AE6CB4E22E17B1DFA386EE3D86DB8955E4_TisU3CToListAsyncU3Ed__1_1_t23F1BF8923DDEFA43F230BD8117AE2815167A189_m312910FEC4218DE40573CE97EB5A8DFC186439AA;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_SetException_mBD06A0DBC529009C32A9F0F4A36C6AA0BC27862E;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_SetResult_m2B940BF9F98AAF175CC7909EC04095822029191A;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_SetStateMachine_mE1C18D02AC7E5A37F8F9B3653ADFBBAAD822A13B;
extern const uint32_t g_rgctx_IEnumerable_1_t460F7AC9F545AAC9055A5346DDE5C22F7A3CFD74;
extern const uint32_t g_rgctx_IEnumerable_1_GetEnumerator_mD7412A1D55875F97D5F0449D9E9E5B770E3C28AC;
extern const uint32_t g_rgctx_IEnumerator_1_t8E80DD86D836F44FD5F0B5293E38B42D53A71C57;
extern const uint32_t g_rgctx_IEnumerator_1_get_Current_m78520502CF0CF74C46FB89BAB3B19759BEBC9557;
extern const uint32_t g_rgctx_IAsyncStreamWriter_1_t54C5DC2521F66635EA56D89EC07EDBE9B7C77272;
extern const uint32_t g_rgctx_IAsyncStreamWriter_1_WriteAsync_m837ECC11084106D5657D98326BC38519400818E6;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CWriteAllAsyncU3Ed__2_1_t0EB33B431BCEE8E8E5F1DDA143989DB6496ED9F1_mE84C3C6130E63D83F05D65E0BEDC6638C9334501;
extern const uint32_t g_rgctx_IClientStreamWriter_1_t5CFEEBF4D29F1B71047AF2577D7179A1EA56437A;
extern const uint32_t g_rgctx_IClientStreamWriter_1_CompleteAsync_m6F848B1EEB9964858574671F28B070F2C15F44F1;
extern const uint32_t g_rgctx_IEnumerable_1_t4B650E3A38BBD1170D2011C9D7488207AFF27449;
extern const uint32_t g_rgctx_IEnumerable_1_GetEnumerator_m4D65E818DDA778BA04BA8D3BBAA7A67D154208C6;
extern const uint32_t g_rgctx_IEnumerator_1_t7D9E19992EAFB5E4A1B9836F92F44C1BBB9CA82B;
extern const uint32_t g_rgctx_IEnumerator_1_get_Current_m1B5C69BCA247B6057A3C5CD67DC60E719F4A6D0D;
extern const uint32_t g_rgctx_IAsyncStreamWriter_1_t629810A45AA19FF3825F7A9425E759BF4831ED1A;
extern const uint32_t g_rgctx_IAsyncStreamWriter_1_WriteAsync_m1CCE188ED37CBCFA6D5DA4E685932BACFAC61BC0;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CWriteAllAsyncU3Ed__3_1_tD2ACD0C9967F6D7B1C775CB3A3A11E32033B01DC_m1BCF8742056538703E717272321221BBE04B81B2;
extern const uint32_t g_rgctx_T_t434046A55D96C23D54221D0663C41F4BE35212C0;
extern const uint32_t g_rgctx_ILogger_ForType_TisT_tFC80A4A728C9E5B2B680C8EBE42DCF6E46B2F56C_m4337AD7D8815AC384C6EF93E4EB9A13A9D978C7B;
extern const uint32_t g_rgctx_T_t9B6609BF3188316EDA2151BE4B52A75F2FCC816B;
extern const uint32_t g_rgctx_CallInvocationDetails_2_get_RequestMarshaller_mA074E6E49C4F0D9D533D14DB5F5B4BC398445DF9;
extern const uint32_t g_rgctx_Marshaller_1_t4EF7C35198813B8B72BB06B114F22F6DE5792EE6;
extern const uint32_t g_rgctx_Marshaller_1_get_ContextualSerializer_m5CEBBCB47328A1683C038EF31976D2098AF242CD;
extern const uint32_t g_rgctx_CallInvocationDetails_2_get_ResponseMarshaller_m55F063FFB9833F05C0682D9F33D03BE4400DBDAC;
extern const uint32_t g_rgctx_Marshaller_1_tF1D7E093E17C8EDB3A63C733FCA4CB738C5E4649;
extern const uint32_t g_rgctx_Marshaller_1_get_ContextualDeserializer_m9A5EE8BB8615DBA2AE7A150D23DB3D127719B19D;
extern const uint32_t g_rgctx_AsyncCallBase_2__ctor_mB2B538B2AB61164FCBDA83ECD463455C2AEDEE56;
extern const uint32_t g_rgctx_AsyncCallBase_2_t29EC00F0BE2B99A36FC97F83673F20BAFA4BBC69;
extern const uint32_t g_rgctx_CallInvocationDetails_2_get_Options_mB5B9BB3274F7E3778AA68D1C93C663864AD11D29;
extern const uint32_t g_rgctx_CallInvocationDetails_2_WithOptions_mAE08015633CC227A378E60D4AEAC80C40E23E88D;
extern const uint32_t g_rgctx_AsyncCall_2__ctor_m131B7D3EC37AD774C25E0F2A465A892DF39ADDF3;
extern const uint32_t g_rgctx_TaskCompletionSource_1_t6A2F3C859CE0B07C8B7F38296F1C87A7F127ED00;
extern const uint32_t g_rgctx_TaskCompletionSource_1__ctor_mAAA556292EEE5104B5D7A2FF3360A608A6153953;
extern const uint32_t g_rgctx_AsyncCall_2_Initialize_m19965BD28E7AA207571F5E8A737AD7722F8F8A04;
extern const uint32_t g_rgctx_AsyncCallBase_2_UnsafeSerialize_mA87914B4988D2179E4CC467670AD5FC705752C92;
extern const uint32_t g_rgctx_CallInvocationDetails_2_get_Channel_m9A94930571109B4A8BF674610E2E372F32BB2F77;
extern const uint32_t g_rgctx_AsyncCall_2_GetWriteFlagsForCall_m1AEFEAE4A8B1166BB2C547F3B3D6328303440624;
extern const uint32_t g_rgctx_AsyncCall_2_HandleUnaryResponse_m4DD586FE3A0EDA7F2270BF41298B1BFB2763AF3E;
extern const uint32_t g_rgctx_AsyncCall_2_t7624EADB3688388EAD87AF67B187D044870EEE2D;
extern const uint32_t g_rgctx_AsyncCall_2_OnFailedToStartCallLocked_m1699553033A233D2F1D59F41F968EA6802E064F2;
extern const uint32_t g_rgctx_TaskCompletionSource_1_get_Task_mC0834913D9DFA436E05EC6372F6FE252ECAB9528;
extern const uint32_t g_rgctx_Task_1_tD05801878A69157B5FE9D924E123EE7D73D1B925;
extern const uint32_t g_rgctx_Task_1_GetAwaiter_mE8D3D8E6153EC6AE9B43C92D6CF07D81945EF45C;
extern const uint32_t g_rgctx_TaskAwaiter_1_GetResult_mF961235455ADCFB46D127E480A7B9651AA782E9D;
extern const uint32_t g_rgctx_AsyncCall_2_get_UnaryResponseClientCallback_m8DB3067E479DB0745495621C18EA2C74495A10E3;
extern const uint32_t g_rgctx_AsyncCall_2_get_ReceivedStatusOnClientCallback_m56BF4D30A213937026F45E94A734AECB14E2FEBD;
extern const uint32_t g_rgctx_AsyncCall_2_get_ReceivedResponseHeadersCallback_m76BEAB969659DF01F2257C26B12E9FB6CD112678;
extern const uint32_t g_rgctx_AsyncCallBase_2_SendMessageInternalAsync_m5E9592C08553489B6EC0F86D490F2F194637E9E3;
extern const uint32_t g_rgctx_AsyncCallBase_2_ReadMessageInternalAsync_mB4C534F0EE74E5A069F527BB5B3B9B0B34578BEF;
extern const uint32_t g_rgctx_AsyncCall_2_CheckSendPreconditionsClientSide_m0D17D2E0700CEB03F8AD22DFFB3EBFD52CEF3007;
extern const uint32_t g_rgctx_AsyncCallBase_2_get_SendCompletionCallback_mEC816FA1BEB33D6F259F9C383EDE366B72B14E3A;
extern const uint32_t g_rgctx_AsyncCall_2_CreateNativeCall_m281C8405BD4E1E125E687BA54A84D350016822CE;
extern const uint32_t g_rgctx_AsyncCallBase_2_InitializeInternal_m0E2CB96D6296DAD943F6A7D77D441912EB59EFA4;
extern const uint32_t g_rgctx_AsyncCall_2_RegisterCancellationCallback_m202FBBD1A57060F532849D7DDAE3F7662D116E3F;
extern const uint32_t g_rgctx_AsyncCallBase_2_ReleaseResources_mE0300B767A9102B542577D3196E9BC91E3EB2999;
extern const uint32_t g_rgctx_AsyncCall_2_U3COnFailedToStartCallLockedU3Eb__35_0_m88E48949ACC0692DF98E7FDA681F037563C82161;
extern const uint32_t g_rgctx_CallInvocationDetails_2_get_Method_m94637FC8AF83830F9712F7A7E1AC91C74457EBBA;
extern const uint32_t g_rgctx_CallInvocationDetails_2_get_Host_mE57EB0854193E8B30B4F76451F1959716F6210FB;
extern const uint32_t g_rgctx_AsyncCallBase_2_RegisterCancellationCallbackForToken_m9C292996DB28CE2C074E12D600C78954A1674C7C;
extern const uint32_t g_rgctx_AsyncCallBase_2_ReleaseResourcesIfPossible_m8A4859359FDCD5BAF4E739878A2E8C83B95F80F4;
extern const uint32_t g_rgctx_AsyncCallBase_2_t29EC00F0BE2B99A36FC97F83673F20BAFA4BBC69;
extern const uint32_t g_rgctx_AsyncCallBase_2_OnAfterReleaseResourcesUnlocked_m9A6AE7A32EA78B0B6D90A5AF41835650A8A0FD9C;
extern const uint32_t g_rgctx_AsyncCallBase_2_TryDeserialize_mEC549BC8BE276790B8FCF56BE8FC4AB680D2AB54;
extern const uint32_t g_rgctx_AsyncCallBase_2_GetRpcExceptionClientOnly_m489039B78AE226CEC527AE9B3DDF313374335E1B;
extern const uint32_t g_rgctx_TaskCompletionSource_1_SetException_mAFBFAAF53D37071D39B3DDEF37E748903FC881FA;
extern const uint32_t g_rgctx_TaskCompletionSource_1_SetResult_m99840F16A41F33CCFA0C5A2F4E820605A0716D72;
extern const uint32_t g_rgctx_AsyncCall_2_HandleFinished_m47BEDF53A42F22E377FF1D4616AD6A5B59380A60;
extern const uint32_t g_rgctx_AsyncCall_2_HandleReceivedResponseHeaders_mF3BDD7B71DB2BFDDBF7F1EE3FCC8A998CE5C242C;
extern const uint32_t g_rgctx_ILogger_ForType_TisAsyncCall_2_t7624EADB3688388EAD87AF67B187D044870EEE2D_m7FFD71B9BD2613929DD26FC233F094892277EC31;
extern const uint32_t g_rgctx_GrpcPreconditions_CheckNotNull_TisAction_2_t7DA764C05592CD92F167618934DC3672E8DA7709_mF31E6685BEE23CCFC2B3C8955C7AC9D840E8ED44;
extern const uint32_t g_rgctx_GrpcPreconditions_CheckNotNull_TisFunc_2_t488BAC447E2FC62369B5B8A41A47225863EF69C0_m5A2BB2BF0FDEDFFD7D25C28D54311E5DEA8E501C;
extern const uint32_t g_rgctx_AsyncCallBase_2_UnsafeSerialize_m69BF928051BC6D996E833B959063B75989A8D7AA;
extern const uint32_t g_rgctx_AsyncCallBase_2_tF1889A54FC379A3C3C5A6E2339EEB2DD8996E684;
extern const uint32_t g_rgctx_AsyncCallBase_2_CheckSendAllowedOrEarlyResult_m9CE0AE4B80DBA9A98F0B0FCC2F68C643FFD94D01;
extern const uint32_t g_rgctx_AsyncCallBase_2_get_SendCompletionCallback_m2B1E34FC185BD9328D0AE28E66F81602703CBB8E;
extern const uint32_t g_rgctx_TaskCompletionSource_1_t2262806B2B4EBD7FFCC510655831863F3271B58A;
extern const uint32_t g_rgctx_TaskCompletionSource_1_get_Task_m3DAAF7DCBA7834E77FE1700EB04C5558952ACEB4;
extern const uint32_t g_rgctx_AsyncCallBase_2_get_ReceivedMessageCallback_m85BC251020DE34D56997501A09CA3720AB168BD1;
extern const uint32_t g_rgctx_TaskCompletionSource_1__ctor_m1877597FA19FBED02275079925A0CA5FC7DB47BB;
extern const uint32_t g_rgctx_AsyncCallBase_2_ReleaseResources_m84726B7B8A20986D3F4F1F17E3047B7693EAC7DE;
extern const uint32_t g_rgctx_AsyncCallBase_2_OnAfterReleaseResourcesLocked_m6FED54CD1D221FBDCF4C1803BF32CCBC75199618;
extern const uint32_t g_rgctx_Action_2_t7DA764C05592CD92F167618934DC3672E8DA7709;
extern const uint32_t g_rgctx_Action_2_Invoke_m2EA453071EBF40AFDC9040888503A97BD3C5EA3B;
extern const uint32_t g_rgctx_Func_2_t488BAC447E2FC62369B5B8A41A47225863EF69C0;
extern const uint32_t g_rgctx_Func_2_Invoke_m8E82D0C8BC93D5A368A96B48D87795DA5A59FB79;
extern const uint32_t g_rgctx_AsyncCallBase_2_get_IsClient_m1AAF604CC342CCAAC4A58C1793C9FD49B94B05DB;
extern const uint32_t g_rgctx_AsyncCallBase_2_ReleaseResourcesIfPossible_m7293DA758F026E7588D14FFC193F093E21B31C76;
extern const uint32_t g_rgctx_AsyncCallBase_2_OnAfterReleaseResourcesUnlocked_m8C2160AC14BCA81565593983AE02EEBCB97587B8;
extern const uint32_t g_rgctx_AsyncCallBase_2_GetRpcExceptionClientOnly_m2FBF5C85175F1EEED26B5B8A4D7178F4CFCF82E6;
extern const uint32_t g_rgctx_AsyncCallBase_2_TryDeserialize_m92883E5971D0505387F32EFAC00D76FA492607DC;
extern const uint32_t g_rgctx_AsyncCallBase_2_tF1889A54FC379A3C3C5A6E2339EEB2DD8996E684;
extern const uint32_t g_rgctx_AsyncCallBase_2_CancelWithStatus_m28DECB4FF2CFA12002B715F6531FAE72C2A653B2;
extern const uint32_t g_rgctx_TaskCompletionSource_1_SetException_m9B294C978B0AC5C5F2740229AD88DAE995FFCDAE;
extern const uint32_t g_rgctx_TaskCompletionSource_1_SetResult_m9D6B3C2572A0497033E22603A00107994A5C55DB;
extern const uint32_t g_rgctx_AsyncCallBase_2_HandleSendFinished_m8EBA12E52F6CE481C83D1B4320F1176861350700;
extern const uint32_t g_rgctx_AsyncCallBase_2_HandleReadFinished_m8EDE73D0BE94C9128616387A9070AB8CC06FDE35;
extern const uint32_t g_rgctx_ILogger_ForType_TisAsyncCallBase_2_tF1889A54FC379A3C3C5A6E2339EEB2DD8996E684_mE4B731F55259E70FDA2C64CA6690C4481C71ABA3;
extern const uint32_t g_rgctx_U3CU3Ec_t5097B4EF3AFCB9C60A903C5775C642AB9B6CCD15;
extern const uint32_t g_rgctx_U3CU3Ec_U3C_cctorU3Eb__46_0_mE2CEE9AA92D9309D10AED3E128DFB5B24CDFB178;
extern const uint32_t g_rgctx_U3CU3Ec_t2F05EA34FC0B87E1C7B7D804DA723C745DB3E756;
extern const uint32_t g_rgctx_U3CU3Ec__ctor_m4CAB3D19E20A24AB52DD1F1A3A67E3DFABA86B4E;
extern const uint32_t g_rgctx_U3CU3Ec_t2F05EA34FC0B87E1C7B7D804DA723C745DB3E756;
extern const uint32_t g_rgctx_AsyncCallBase_2_t323E8494A039BA10BD0CF689BB8157B2C8BDD87E;
extern const uint32_t g_rgctx_AsyncCallBase_2_Cancel_m8A1A54B0D0E0E9785CE3848CB83F5957ED2B48A4;
extern const uint32_t g_rgctx_AsyncCallBase_2__ctor_mF3C5C76BECCBE0D6B9638C4F3F48CFED784D82A0;
extern const uint32_t g_rgctx_AsyncCallBase_2_tDAB2E6F6FA4DACBDC71125CE168336D10193D79E;
extern const uint32_t g_rgctx_AsyncCallBase_2_InitializeInternal_mE5676D2E481230134297E38CDA1AF2AA74575F8C;
extern const uint32_t g_rgctx_AsyncCallServer_2_get_ReceiveCloseOnServerCallback_m9A1DCE88572F006382F37CA23ED5B29168ADCB58;
extern const uint32_t g_rgctx_AsyncCallBase_2_SendMessageInternalAsync_m5E927F87E07609EC649AA8249BB588BAA3DA1F62;
extern const uint32_t g_rgctx_AsyncCallBase_2_ReadMessageInternalAsync_m02088E1707E58A6F901C0E3C8C06C743BDE562D4;
extern const uint32_t g_rgctx_AsyncCallBase_2_tDAB2E6F6FA4DACBDC71125CE168336D10193D79E;
extern const uint32_t g_rgctx_AsyncCallBase_2_CheckSendAllowedOrEarlyResult_m9A22F8159BFC291EE08A4A6D274663811BC5D441;
extern const uint32_t g_rgctx_AsyncCallBase_2_get_SendCompletionCallback_mCEBCE9AFFD471E78FAD684183A49510DC8BC1408;
extern const uint32_t g_rgctx_Nullable_1_get_HasValue_m8C151A90CB186472D377A37A23A8D304567CE474;
extern const uint32_t g_rgctx_Nullable_1_get_Value_mAFA01C3F9CC64DC5FC9BB124E27A3D93367CD801;
extern const uint32_t g_rgctx_ResponseWithFlags_get_Response_mB9073E3DA5C7ED43062BF7D57381F6029514C74F;
extern const uint32_t g_rgctx_AsyncCallBase_2_UnsafeSerialize_m19821B1A1EC7B23607C2AB7051AD6F71FACFC0FB;
extern const uint32_t g_rgctx_ResponseWithFlags_get_WriteFlags_m4DC0A8BABC15E3F47BD7CC105DCCA7F0FF83BF6F;
extern const uint32_t g_rgctx_AsyncCallServer_2_get_SendStatusFromServerCompletionCallback_mEFF40A48516B174BE5653EDECFF610F81E0EC090;
extern const uint32_t g_rgctx_TaskCompletionSource_1_t0738ECEC0614283B745219A501CF159220ADD9CA;
extern const uint32_t g_rgctx_TaskCompletionSource_1__ctor_m78AA40D41E482BFDA341B7147A98DDBD7D6D0BEC;
extern const uint32_t g_rgctx_TaskCompletionSource_1_SetResult_m3EB0947F09E46FC043C9ABA78002D4AC2E532B83;
extern const uint32_t g_rgctx_AsyncCallBase_2_ReleaseResourcesIfPossible_mBA86DC36ED97D21C2AB98315C3D78F1FFC2D4C37;
extern const uint32_t g_rgctx_AsyncCallBase_2_OnAfterReleaseResourcesUnlocked_m99307EA4B8EE8076B7A435E04A8DCD28E2E1A6F2;
extern const uint32_t g_rgctx_AsyncCallServer_2_HandleFinishedServerside_m3E5D9AD0DF37CA5A50A118F45434387C37B21B6D;
extern const uint32_t g_rgctx_AsyncCallBase_2_HandleSendStatusFromServerFinished_m5F509FAE166ABF51830858628C0BB2B812E814FC;
extern const uint32_t g_rgctx_AsyncCall_2_tC256C4209E60489E80FF468BA0AD48770AC1F51C;
extern const uint32_t g_rgctx_AsyncCall_2_get_Details_m3982A620F64AB7AC9E9B1E396DE4E437950F5310;
extern const uint32_t g_rgctx_CallInvocationDetails_2_get_Options_m6D22DB0ED9B2DF879671260D238599CCB79B0A8D;
extern const uint32_t g_rgctx_ClientRequestStream_2_GetWriteFlags_m05CA87F709B4BF187B0873464BAE853D1BF8F23A;
extern const uint32_t g_rgctx_AsyncCall_2_SendMessageAsync_m3A87424359581E04E5418ED84CBC17AFBB59852F;
extern const uint32_t g_rgctx_AsyncCall_2_SendCloseFromClientAsync_m69352989EAE8867210A39818210E2545AA3FAAB9;
extern const uint32_t g_rgctx_TResponse_tDAB609A8A95617DDE9705A33860916C1747FE89E;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_Start_TisU3CMoveNextU3Ed__5_t3120559802811C4741C575A9586EBDCFACAE219F_mC6CD1EC5F590E29C53FBF75267792BC2C8F6BADD;
extern const uint32_t g_rgctx_AsyncCallBase_2_t33FC5FA90901972727AA49B733FDFF1F4F149B77;
extern const uint32_t g_rgctx_AsyncCallBase_2_RegisterCancellationCallbackForToken_m8720C9EBA0692566D036467B02CD74076DE3A817;
extern const uint32_t g_rgctx_AsyncCall_2_tC5BC90D5278A67F341AE3B9099C25A24C516AF03;
extern const uint32_t g_rgctx_AsyncCall_2_ReadMessageAsync_mD221D026BE0C6EE476CB4910C5AAC456E490671E;
extern const uint32_t g_rgctx_Task_1_tB7F6E758B271895F74696FC71F306D52A34703D0;
extern const uint32_t g_rgctx_Task_1_ConfigureAwait_mCE45FCD612C21D87EDC4BB73819C74D870DE4E94;
extern const uint32_t g_rgctx_ConfiguredTaskAwaitable_1_GetAwaiter_mA2786BF5FEA2E08373D882C807F172B28D177AB4;
extern const uint32_t g_rgctx_ConfiguredTaskAwaiter_get_IsCompleted_m386CEBF3B0D27ED54A9FD4EFB00CE92D127EAD38;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t976DFC37B48E1FC51DD18D0A75580056300A0C0E_TisU3CMoveNextU3Ed__5_tD95254A4C135C6AD76C3CF329D175C9C7BF2CD24_mA8B88BBFB379A62D8C80763814318A2C7E83ED54;
extern const uint32_t g_rgctx_ConfiguredTaskAwaiter_GetResult_m2D66440896111994D845E720249C11734C146AEB;
extern const uint32_t g_rgctx_TResponse_tD493425F438BBCB5170872D7127ED854BC50A6E3;
extern const uint32_t g_rgctx_AsyncCall_2_get_StreamingResponseCallFinishedTask_mA908C5CFA81A7306A1ED6E5EFD47F2C71AECD963;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CMoveNextU3Ed__5_tD95254A4C135C6AD76C3CF329D175C9C7BF2CD24_m874113BFDEA7AA3C9080AEAFDA478CBDE4654082;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass9_0_t87A70ABF426E06FA17CBC990A83EBFD210BD7E97;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass9_0__ctor_mF19E7B3B7694971355F6219FE6F16E6A530F2C6D;
extern const uint32_t g_rgctx_DefaultObjectPool_1_Return_m62918E7F5B5CEDD050A3917C6984F2054BEF342C;
extern const uint32_t g_rgctx_Action_1_tDD527D1F8EA27C9456A7D11D726FE9DA1710A980;
extern const uint32_t g_rgctx_Action_1__ctor_m4906DD4D11D72D3CC4065F29D795A0CDC3D00C1A;
extern const uint32_t g_rgctx_GrpcPreconditions_CheckNotNull_TisFunc_1_t8F5E838DFE56151119F4123CDF102908217CDA94_m27765FD95678FACC22F869CEC6798B3EF0B6EC71;
extern const uint32_t g_rgctx_Queue_1_tFB2294BB83DCF01C8F57300753B699DBF5813D69;
extern const uint32_t g_rgctx_Queue_1__ctor_mF68566316E803C6FC236B3892C81420C285CC642;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass9_0_U3C_ctorU3Eb__0_m66A0AD4E462CEB9FFCB9FADD38AEE916259E6E18;
extern const uint32_t g_rgctx_Func_1_t7F50BDB2DA7808587AFBC1A14A1BC577FD37A0F3;
extern const uint32_t g_rgctx_Func_1__ctor_m121CE638C8CAC9DFE5671F6C88FC93E1E1F881DC;
extern const uint32_t g_rgctx_ThreadLocal_1_t7E36296CFFE1A481C8ECDF99D552BCB24730FA28;
extern const uint32_t g_rgctx_ThreadLocal_1__ctor_mB0A09A392266445F614879A5F501A79D7907A174;
extern const uint32_t g_rgctx_DefaultObjectPool_1_LeaseInternal_mCDD14E6E258F9787D15DC3C2AA71F5BD836A820A;
extern const uint32_t g_rgctx_T_t9992E7CD4C33EE5113821E44D5A06291F5B53949;
extern const uint32_t g_rgctx_IPooledObject_1_tB253DA6DE718A792CFB5C82EE2BB7E87CC76A152;
extern const uint32_t g_rgctx_IPooledObject_1_SetReturnToPoolAction_mE8EBB367188481155B2197826B5EC1D234046DF8;
extern const uint32_t g_rgctx_ThreadLocal_1_get_Value_mCCFFEAE736737CB6575FE62A6844AEC05F449013;
extern const uint32_t g_rgctx_ThreadLocalData_tB9C0C1D65962017727614A37D159D4CEDC126119;
extern const uint32_t g_rgctx_ThreadLocalData_get_Queue_m2B0C41500DB7F79BD27321313B526192B46EB4A8;
extern const uint32_t g_rgctx_Queue_1_get_Count_m280226FD85E06D4982ADACE99197B98A8CBAEAAC;
extern const uint32_t g_rgctx_Queue_1_Dequeue_mF8470E2F1CE12495466400DE219DBE7127F7D423;
extern const uint32_t g_rgctx_ThreadLocalData_get_CreateBudget_mC3B0DE0D8E9EEE8A6DADC22C06378A8A35E9209A;
extern const uint32_t g_rgctx_ThreadLocalData_set_CreateBudget_mD620271D3C7233EF35984F1E3CD951918BE60894;
extern const uint32_t g_rgctx_Func_1_t8F5E838DFE56151119F4123CDF102908217CDA94;
extern const uint32_t g_rgctx_Func_1_Invoke_m0FA6097152E62C8A2DAB8B700F55C20952305A5F;
extern const uint32_t g_rgctx_Queue_1_Enqueue_mCC5EE3B13C125DB74F6A78ED6376EC10737EB3A1;
extern const uint32_t g_rgctx_GrpcPreconditions_CheckNotNull_TisT_t9992E7CD4C33EE5113821E44D5A06291F5B53949_m526DEDF6A2FDDBE93839B698ABF3A7F7C6C91239;
extern const uint32_t g_rgctx_ThreadLocalData_get_DisposeBudget_m8D3CA81B17855614DD9BFC79840132D9CFFE2D25;
extern const uint32_t g_rgctx_ThreadLocalData_set_DisposeBudget_m0398CCD620564F2ABE9FF37390951C1D8093C8EE;
extern const uint32_t g_rgctx_Queue_1_t6F298298651234BCA31A765715A376A5DEC685BB;
extern const uint32_t g_rgctx_Queue_1__ctor_m36FD892FD788AA7299F1CDD8E0887937ADE680F2;
extern const uint32_t g_rgctx_ThreadLocalData_tD457F089F8149CB19EFD9B6B9BD08367BB77446A;
extern const uint32_t g_rgctx_ThreadLocalData__ctor_m0968B4CC6E728443257E3EF1B2A00672B467496E;
extern const uint32_t g_rgctx_T_t61C27DB8EA5FDA4CAA3A201AB2565820FDE0A846;
extern const uint32_t g_rgctx_UnmanagedLibrary_GetNativeMethodDelegate_TisT_t61C27DB8EA5FDA4CAA3A201AB2565820FDE0A846_mB5E83301FFE96D09320ABDCF92C4113235CC4E34;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_Start_TisU3CHandleCallU3Ed__4_t1950D0FBEEDA7F8FC5996F39FFCD886B38BDE74B_mCC4220212754710E71E2FDF700BB6F2743A87546;
extern const uint32_t g_rgctx_ILogger_ForType_TisUnaryServerCallHandler_2_t04C4ED11CDCC2C31374F6F010874A08BA890C3C7_mB40D8B68FBF88BDD0623935D759CD613045F72F0;
extern const uint32_t g_rgctx_UnaryServerCallHandler_2_t04C4ED11CDCC2C31374F6F010874A08BA890C3C7;
extern const uint32_t g_rgctx_Method_2_tCD046D9B9D24EA91943E6B7E6AF8E243DAC32B14;
extern const uint32_t g_rgctx_Method_2_get_ResponseMarshaller_mAB1D79CD020070B7C4DE29F9566509DCC0C41F05;
extern const uint32_t g_rgctx_Marshaller_1_t105DA5AF4BB55714930AEF3A3E847CA5C77C9016;
extern const uint32_t g_rgctx_Marshaller_1_get_ContextualSerializer_m66BE669EC1BD98D900B188DB05E381D88C614CFB;
extern const uint32_t g_rgctx_Method_2_get_RequestMarshaller_m4AE6FB0BB6A2D8AB492F3AB063CC029BCEF194FF;
extern const uint32_t g_rgctx_Marshaller_1_t2B271610E72640D1B4B91C5E4ACC2A1CDBEB3526;
extern const uint32_t g_rgctx_Marshaller_1_get_ContextualDeserializer_m37A575CEF2951CFE3A04E02AE24BFECA21D78F09;
extern const uint32_t g_rgctx_AsyncCallServer_2_tB91DEB2C41AD69B430B7E897DD867342691968F7;
extern const uint32_t g_rgctx_AsyncCallServer_2__ctor_m446AC030DE1EBF0DDC2C9E6840CEB32C754DA236;
extern const uint32_t g_rgctx_AsyncCallServer_2_Initialize_mB6E0CFB816417096C21D52743A2F9F323375B2A9;
extern const uint32_t g_rgctx_AsyncCallServer_2_ServerSideCallAsync_mCB01DB9B69EB27C5016C4A8234F99FFD27F16BEB;
extern const uint32_t g_rgctx_ServerRequestStream_2_t5CB8C610AA6E30763D095540C209F92755D2E633;
extern const uint32_t g_rgctx_ServerRequestStream_2__ctor_m2BADB3B76D271E1CB3A36918E300976EAAD5940C;
extern const uint32_t g_rgctx_ServerResponseStream_2_tCF835EFD0309A4DDD89BA1354D88402FC8FC753F;
extern const uint32_t g_rgctx_ServerResponseStream_2__ctor_m077F69A0499AD6C325770B5AF5D85B5B76D96950;
extern const uint32_t g_rgctx_AsyncCallServer_2_get_CancellationToken_m5D6E9CF6163C258C0114B3C8ACE329A717DA5644;
extern const uint32_t g_rgctx_AsyncStreamReaderExtensions_MoveNext_TisTRequest_t5EB760EA2F8F6BA22D60A57DE1E143CCF57F48D2_mC5B8BB7F74A74FB1FE546ED2692475DF67ADCADD;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tADFEF9AE6CB4E22E17B1DFA386EE3D86DB8955E4_TisU3CHandleCallU3Ed__4_t9BC20CA7613084A04894ABF72CBF77FED9122D44_mBD6525E4484A85F6E3FFC88396A632A2055DC000;
extern const uint32_t g_rgctx_ServerRequestStream_2_get_Current_m385E3886EF7CFB4457F05B686FF2CE6C0ECAA06B;
extern const uint32_t g_rgctx_UnaryServerMethod_2_t8C3DC7CD6DC6831D81CAD4616FA7A5D6703F3EB2;
extern const uint32_t g_rgctx_UnaryServerMethod_2_Invoke_m8D866E4155989AFD6FA7E8486CE9AE88AA8030D8;
extern const uint32_t g_rgctx_Task_1_t86AD42658914E6A3ADCE8450BD8443591357D9C0;
extern const uint32_t g_rgctx_Task_1_ConfigureAwait_m7322CB79EE26FBBB02EAA9BC0FE7D7EFB2D1EF2C;
extern const uint32_t g_rgctx_ConfiguredTaskAwaitable_1_GetAwaiter_m9FA9B506924269DCE37889F721F995EF06CCE16E;
extern const uint32_t g_rgctx_ConfiguredTaskAwaiter_get_IsCompleted_m72268111C1BF754BD1B1C7798756D2F87297C734;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF85B520ED37A1FED0C50654972BBBAEA3CF34F0F_TisU3CHandleCallU3Ed__4_t9BC20CA7613084A04894ABF72CBF77FED9122D44_mF975C0C310C6E2D5593303789052BB56AD4FBFCC;
extern const uint32_t g_rgctx_ConfiguredTaskAwaiter_GetResult_m2915AEF47B157B83BD158EF185EF8A34F9AD8AE1;
extern const uint32_t g_rgctx_ResponseWithFlags_tC2EAF6B979B827E5B572D02439F9F90B4121BF45;
extern const uint32_t g_rgctx_ResponseWithFlags__ctor_m46A2F7899E8061F02CED617A66FD6E8E13B6F0B2;
extern const uint32_t g_rgctx_Nullable_1_tFDF3999A9AFBCC3358013C26D6AE0A21B41EFB85;
extern const uint32_t g_rgctx_Nullable_1__ctor_m27FCC758B779A483927223DDA6053F56FDC4D23A;
extern const uint32_t g_rgctx_UnaryServerCallHandler_2_tF310433401F795A722656BBFEE88D37758DF4625;
extern const uint32_t g_rgctx_AsyncCallServer_2_SendStatusFromServerAsync_mA21607F52CE643D3CCEE7A1A2FB0A4D15639A778;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CHandleCallU3Ed__4_t9BC20CA7613084A04894ABF72CBF77FED9122D44_m14FD30764E4189FD17617652842C88C90E8ED866;
extern const uint32_t g_rgctx_AsyncCallBase_2_t886FEA2129571A4E510C322ACC7C539FEE95E245;
extern const uint32_t g_rgctx_AsyncCallBase_2_Cancel_m1F346E745E66C76D9F16C9970E2F494093254F46;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_Start_TisU3CHandleCallU3Ed__4_t779C80B69144A679A04D7C49564F0ED74F5CDCC1_m1E04DFAFBEFC2D5241A0DBB0D80C5CD269084D0C;
extern const uint32_t g_rgctx_ILogger_ForType_TisServerStreamingServerCallHandler_2_t462974348016A34DC15BE06A537A47F9FC964013_m51FFE86F5849E6ED2628C135E7174EB9D5E0AB1F;
extern const uint32_t g_rgctx_ServerStreamingServerCallHandler_2_t462974348016A34DC15BE06A537A47F9FC964013;
extern const uint32_t g_rgctx_Method_2_t50BBAA5305189FC8E2E82955B388534304ABB3E5;
extern const uint32_t g_rgctx_Method_2_get_ResponseMarshaller_mAC479783E0F832FFF3FCBC0FF3F5ACB63C3F8A7B;
extern const uint32_t g_rgctx_Marshaller_1_tEDDB0136F18AF0D72EACCE2AAA2FC0710DFFE972;
extern const uint32_t g_rgctx_Marshaller_1_get_ContextualSerializer_m6A60919FA28DC876BA5E2604F441BA95C92C75AE;
extern const uint32_t g_rgctx_Method_2_get_RequestMarshaller_mD8551AF95F34DAAB63C454C37CDAF48A67F662A3;
extern const uint32_t g_rgctx_Marshaller_1_tAA05A0DA6AEFC5F3613A1FE9835DC52550FEBF35;
extern const uint32_t g_rgctx_Marshaller_1_get_ContextualDeserializer_mAB05B20B86647E0D41608476844335EC0DC3EC36;
extern const uint32_t g_rgctx_AsyncCallServer_2_tADF1B574F0472F69B76958F06FFDF879A7C89EDC;
extern const uint32_t g_rgctx_AsyncCallServer_2__ctor_m994B17FC78F56027D3CB95D28EFF2F868BCA8D53;
extern const uint32_t g_rgctx_AsyncCallServer_2_Initialize_m5F70A6C05319101C47B885146F7BDD58DC3DF17E;
extern const uint32_t g_rgctx_AsyncCallServer_2_ServerSideCallAsync_mBEA2F734C89244A7CFAB982C6B2EC4F6301D7AE8;
extern const uint32_t g_rgctx_ServerRequestStream_2_tCB9DE8AAFBDC052991341CBF1E58EF8893329087;
extern const uint32_t g_rgctx_ServerRequestStream_2__ctor_m501D679510C52DE93923D3B7090A71BDB4D5536D;
extern const uint32_t g_rgctx_ServerResponseStream_2_t330C5E60CF28EFC91519C21A4AD46E10B8F1E03C;
extern const uint32_t g_rgctx_ServerResponseStream_2__ctor_m1CFE9A453E8A31AF243B8DBC2E06ADC533C983DA;
extern const uint32_t g_rgctx_AsyncCallServer_2_get_CancellationToken_m4E9103D2BE80E13CC57638BF7B90255691CC0370;
extern const uint32_t g_rgctx_AsyncStreamReaderExtensions_MoveNext_TisTRequest_tD99FA039409820BA555F72B33A99ED4A8E9A31ED_mFD489098963121A8FA9A487F35E1CA275C2BAB72;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tADFEF9AE6CB4E22E17B1DFA386EE3D86DB8955E4_TisU3CHandleCallU3Ed__4_t5380DA22836CF0686F9E373276CD86139AED828B_m9D7AB2FD11441301B2B1F9D44454425F3CBF3E0E;
extern const uint32_t g_rgctx_ServerRequestStream_2_get_Current_mADCBE42466E6F0323A06A5BC15481A0121198141;
extern const uint32_t g_rgctx_ServerStreamingServerMethod_2_tE8EC8C6A29F67A4CD2E7321B6131B69A6C681AAF;
extern const uint32_t g_rgctx_ServerStreamingServerMethod_2_Invoke_mA0835FC63F9AC9B0CED4B2531888C852BC89ED63;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CHandleCallU3Ed__4_t5380DA22836CF0686F9E373276CD86139AED828B_m25A66D850E428E4287C718672DECD1591F253975;
extern const uint32_t g_rgctx_ServerStreamingServerCallHandler_2_t83724C99872BACFB805F21D01042D44796F4C65D;
extern const uint32_t g_rgctx_AsyncCallServer_2_SendStatusFromServerAsync_m1ADE590A46DB85EAA193DE78337EE0A39C6D3990;
extern const uint32_t g_rgctx_AsyncCallBase_2_tF3BEAB830EAE9EA7BBAF4C812F45675C3DC4084A;
extern const uint32_t g_rgctx_AsyncCallBase_2_Cancel_m90CACF9232CAE07AEB0967233B23C7711D80AEF6;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_Start_TisU3CHandleCallU3Ed__4_tDD76546033B586BEBAD1851ABABEF64B7CC30C25_mDE74F2C4F5427C0A61A4759049B39DA7C552E91D;
extern const uint32_t g_rgctx_ILogger_ForType_TisClientStreamingServerCallHandler_2_t3DA4C719A5CAC5141F1B60A280EDBE6BFCC3BE31_m65D617658AC48415DF289E96366EDD775F62E9AF;
extern const uint32_t g_rgctx_ClientStreamingServerCallHandler_2_t3DA4C719A5CAC5141F1B60A280EDBE6BFCC3BE31;
extern const uint32_t g_rgctx_Method_2_t04A09665264FD5B79C0D304B47848D1A5A0E42FE;
extern const uint32_t g_rgctx_Method_2_get_ResponseMarshaller_mADC4FE5FB65045DEF0D70F06EC775E1BBA7D176F;
extern const uint32_t g_rgctx_Marshaller_1_t2ABCD824307010CCCE962752A55BEE76E2E8C013;
extern const uint32_t g_rgctx_Marshaller_1_get_ContextualSerializer_m2C24D4B23594812D8F6B4379863ED0E911F760EF;
extern const uint32_t g_rgctx_Method_2_get_RequestMarshaller_m0A028E53E677DAE5DA179C74144EF648A2668304;
extern const uint32_t g_rgctx_Marshaller_1_tEF913A80754936D70899CB1637453AE0946D859F;
extern const uint32_t g_rgctx_Marshaller_1_get_ContextualDeserializer_m760742B726DF48DFA90DE69FEABAFF09C6027391;
extern const uint32_t g_rgctx_AsyncCallServer_2_tA84F9F90341A5216F327119A70CC49DDF918D246;
extern const uint32_t g_rgctx_AsyncCallServer_2__ctor_m30CCA4DC07F997A1AAC30F73789B01A6DAF9A033;
extern const uint32_t g_rgctx_AsyncCallServer_2_Initialize_mC4EFDC37E81FF545264EFF156332FB1C1E82B82F;
extern const uint32_t g_rgctx_AsyncCallServer_2_ServerSideCallAsync_m2651C52939DEDF0444784B85D9C3629104DD7637;
extern const uint32_t g_rgctx_ServerRequestStream_2_t8F8B6DB69AE269822813F9B497819DFF44F3B53C;
extern const uint32_t g_rgctx_ServerRequestStream_2__ctor_m634417D90CA3FBAD1B11FF52F1C8C911004A813D;
extern const uint32_t g_rgctx_ServerResponseStream_2_t9F5E0FB161D0D937E4E60915DBA283D6DA959810;
extern const uint32_t g_rgctx_ServerResponseStream_2__ctor_mD5ED82B1F6A42760A00FD2A3E8BC70007E6D0BD4;
extern const uint32_t g_rgctx_AsyncCallServer_2_get_CancellationToken_m2BCF481AA3E3D465DBBE97C869406232EFA105E7;
extern const uint32_t g_rgctx_ClientStreamingServerMethod_2_t5165014034C3774A28342C9535C4C136733773EB;
extern const uint32_t g_rgctx_ClientStreamingServerMethod_2_Invoke_m1E684D0D2203DA07C27DA86ABD23A2BF686CA122;
extern const uint32_t g_rgctx_Task_1_tFD9834CD49A81AD9AD140A1F9551C82F35CE3783;
extern const uint32_t g_rgctx_Task_1_ConfigureAwait_m065446DC59D207A9F48D915F8211C6ACBEA3889D;
extern const uint32_t g_rgctx_ConfiguredTaskAwaitable_1_GetAwaiter_m08898A6B543D7F32CB3F0342DE2C0E1F2DA3F2BE;
extern const uint32_t g_rgctx_ConfiguredTaskAwaiter_get_IsCompleted_m508197AE961AC1CD26F86F6493A233F56BEED89D;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t628FBA64F63DA69DDE0761B2AA8AEB2D5227C97D_TisU3CHandleCallU3Ed__4_t0EB9283990468EB94B906C831A7510DF05042123_mAB2B66C40E97D2B708C25667FB52B5DB8ED4D881;
extern const uint32_t g_rgctx_ConfiguredTaskAwaiter_GetResult_m2E9C2AFAF21F82708E9073EB72DF5AACFCDE82C3;
extern const uint32_t g_rgctx_ResponseWithFlags_tCA6AC4B16E5252BF5F39543D9DF9BE629FBDE66D;
extern const uint32_t g_rgctx_ResponseWithFlags__ctor_m81BCE1936CDF41B0E00E5DBE29ABA7871D8A506A;
extern const uint32_t g_rgctx_Nullable_1_t25A48849D17B02BB3457301154570E8B9FD6275E;
extern const uint32_t g_rgctx_Nullable_1__ctor_m8B9526337F7143BB44F47F18F2A2E1127725231D;
extern const uint32_t g_rgctx_ClientStreamingServerCallHandler_2_tF7F2EAEEF9278813DCF962E94B38991E6BB5EE9F;
extern const uint32_t g_rgctx_AsyncCallServer_2_SendStatusFromServerAsync_mF4F6A47EE43C82F3239A339E993D3DFECC039B16;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CHandleCallU3Ed__4_t0EB9283990468EB94B906C831A7510DF05042123_mA26F994F173844DECEC73C04E7A866BC904EA329;
extern const uint32_t g_rgctx_AsyncCallBase_2_t48422A07D8FA11D508A7CD9124CEA100B2FFD073;
extern const uint32_t g_rgctx_AsyncCallBase_2_Cancel_mF1B910400E5F738E56008D10BF264BD1414B1F6A;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_Start_TisU3CHandleCallU3Ed__4_tF57C596F4164C0B2FC02AA5FDEB30604C1368A75_m7B7262DE8E6C5C28052D74F8808508C334094DFD;
extern const uint32_t g_rgctx_ILogger_ForType_TisDuplexStreamingServerCallHandler_2_tF5976C4E155C789EFC0AEB4F532ED65C5E5D2F3A_mA6F7DC91E667483085E206EC79A82CE96FD28823;
extern const uint32_t g_rgctx_DuplexStreamingServerCallHandler_2_tF5976C4E155C789EFC0AEB4F532ED65C5E5D2F3A;
extern const uint32_t g_rgctx_Method_2_tBEAE12167134D54D39BF2A94A51F0CE05B1FA448;
extern const uint32_t g_rgctx_Method_2_get_ResponseMarshaller_m1328BAE875A9996F035982357469CCDED6C85F71;
extern const uint32_t g_rgctx_Marshaller_1_tA4BA84ACBD6CA7DF15C016290C8829D976F7E33D;
extern const uint32_t g_rgctx_Marshaller_1_get_ContextualSerializer_m1B240F43419FAC03EA18F154BB83614E0A4E701C;
extern const uint32_t g_rgctx_Method_2_get_RequestMarshaller_m46FB522804CA98A9CCECBC7E2C432E99FE42F979;
extern const uint32_t g_rgctx_Marshaller_1_t0C00FB115F323CBAFF62AF9605ADA5788AB70E87;
extern const uint32_t g_rgctx_Marshaller_1_get_ContextualDeserializer_m795B0018C42FD7842DC1278A24F6E9C434BDE601;
extern const uint32_t g_rgctx_AsyncCallServer_2_tE4A854C242A4041DB413860C0A2DC7704BE0DA09;
extern const uint32_t g_rgctx_AsyncCallServer_2__ctor_m4667EA268455C4C00DE206394A2D50D325B2C81C;
extern const uint32_t g_rgctx_AsyncCallServer_2_Initialize_mAF682B9C8646FD7741A7F829496326B0B329DB14;
extern const uint32_t g_rgctx_AsyncCallServer_2_ServerSideCallAsync_m96C40CC278146C906833A923A7BA7843A6B43C6E;
extern const uint32_t g_rgctx_ServerRequestStream_2_t40E5143E59DA6599CF7B79B03581C1DB7CB9A83D;
extern const uint32_t g_rgctx_ServerRequestStream_2__ctor_m8BF8D59695DABEC7B9E53F666850E9EAAEF52154;
extern const uint32_t g_rgctx_ServerResponseStream_2_tD60A7C201E90A4142997147BD8DE96720DFDEACD;
extern const uint32_t g_rgctx_ServerResponseStream_2__ctor_mA2ACF34C7118EF1040C5C1662C6F199E2BA5BF74;
extern const uint32_t g_rgctx_AsyncCallServer_2_get_CancellationToken_mEA4EAA28BC592D5EF51A3B791F775E8B7036CE38;
extern const uint32_t g_rgctx_DuplexStreamingServerMethod_2_tB396E363D40BA7C5F94D243B18B3E985862BECF1;
extern const uint32_t g_rgctx_DuplexStreamingServerMethod_2_Invoke_m4F48F2525EB18974EF6F672D5CBFF7AD3DA83836;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CHandleCallU3Ed__4_t6306BE103FB633A679130BCD678ECE0388BC8741_mC650976B48DB2F284C4CEF478F45773330A5B206;
extern const uint32_t g_rgctx_DuplexStreamingServerCallHandler_2_tD54CBAE476255585306DC39A9F4F599864E02F2B;
extern const uint32_t g_rgctx_AsyncCallServer_2_SendStatusFromServerAsync_m5C114CBDD1B8AC82BADA55D2E8E8FF129BB7BA8D;
extern const uint32_t g_rgctx_AsyncCallBase_2_t77F4B8A96DF484D783D48200B798970E9509D835;
extern const uint32_t g_rgctx_AsyncCallBase_2_Cancel_m9C69DF87B03C2DAC3BCCC41628363E436B9B84F9;
extern const uint32_t g_rgctx_UnaryServerCallHandler_2_t222B39E90518215DA2AFC420140688B81B4EBFB3;
extern const uint32_t g_rgctx_UnaryServerCallHandler_2__ctor_mDE1B38DE11DD5CFE6E760000EF4C5187115D6CE1;
extern const uint32_t g_rgctx_ClientStreamingServerCallHandler_2_tA660E0E0A511D1780F0AABF6268A371A69B432C9;
extern const uint32_t g_rgctx_ClientStreamingServerCallHandler_2__ctor_m0A2BBFCF3A2B7E095511898FEDDF10D44C0744E8;
extern const uint32_t g_rgctx_ServerStreamingServerCallHandler_2_t3E737178A155ECB9883DF926375A678839FEC9D3;
extern const uint32_t g_rgctx_ServerStreamingServerCallHandler_2__ctor_m7EAD009407A8A687E430B3FF6275F194F90F23CD;
extern const uint32_t g_rgctx_DuplexStreamingServerCallHandler_2_t4FF8B5D3B57935F356BCA7BBC6A6828C7DD47862;
extern const uint32_t g_rgctx_DuplexStreamingServerCallHandler_2__ctor_m5A9E137242BA07E0478B0B68EA6E2EBFF293F311;
extern const uint32_t g_rgctx_TRequest_tB73B18685666A803AAA1D18D183E09E5C8346CD1;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_Start_TisU3CMoveNextU3Ed__5_tA07E32D06EB15A0F69D3B0C99FBB2EE61435EA12_m2E4711F32873EE783DCCF7AB04E20C9C439993E0;
extern const uint32_t g_rgctx_AsyncCallBase_2_t9A8990A4D8157538ABE6AA842C84B710FD595B38;
extern const uint32_t g_rgctx_AsyncCallBase_2_RegisterCancellationCallbackForToken_mD0B86656E3AFFFEF3E217706E1BAFECE9F2415A8;
extern const uint32_t g_rgctx_AsyncCallServer_2_t2EE1D116018AC3767BB9E19569194351E3FA4057;
extern const uint32_t g_rgctx_AsyncCallServer_2_ReadMessageAsync_m9D13CFBF56BB80BBB334D0E738AA3919C26CD257;
extern const uint32_t g_rgctx_Task_1_t9E269A9B077A4FA212DD9412EA74E4353414A616;
extern const uint32_t g_rgctx_Task_1_ConfigureAwait_mCD322222F670B69C6C8387F2CE32FBB7052BAF8A;
extern const uint32_t g_rgctx_ConfiguredTaskAwaitable_1_GetAwaiter_m70DE17071F15EF9EB79B6ECCCACE83B9A9022B23;
extern const uint32_t g_rgctx_ConfiguredTaskAwaiter_get_IsCompleted_m2BAE3C248BC71A9F335DB423FB35069D9DE27C34;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t00714972C01BE3AC66A91DF28B40F99656CDAE6C_TisU3CMoveNextU3Ed__5_t213F283FA765D844CCB03C77C361A5CC075C234E_m3FCD35413409438D4B5FC323A7AE4FCB94905F41;
extern const uint32_t g_rgctx_ConfiguredTaskAwaiter_GetResult_mD9FDF19BE95F98DD6F57FF18B151CD80DACA235D;
extern const uint32_t g_rgctx_TRequest_t378E7E370E381E3A5424C53A8BF99499A453B2D3;
extern const uint32_t g_rgctx_ServerResponseStream_2_GetWriteFlags_m388FCB705FB0535708FB7BACF9804A5CE798222A;
extern const uint32_t g_rgctx_AsyncCallServer_2_t6D97103C62B21B64E75ECDF2AAEB07845CBAA603;
extern const uint32_t g_rgctx_AsyncCallServer_2_SendMessageAsync_mB43FC738166273F65EE4BCB4FC137FD790681128;
extern const uint32_t g_rgctx_AsyncCallServer_2_SendInitialMetadataAsync_m0307C1723075556FEB8B33647577EF635DAE8724;
extern const uint32_t g_rgctx_Method_2_t27FAA7B2522D486489D905779753F91BA267ADE7;
extern const uint32_t g_rgctx_Method_2_get_FullName_m97426039A79766934C5F3C7C914A8C9E4021AE4B;
extern const uint32_t g_rgctx_ServerCalls_UnaryCall_TisTRequest_t11F4C1E4CE30DEC47F67274550D378F236B8906A_TisTResponse_t9DD9C3C55973D054EDF6190DFD83922B769CB9F9_m31A640C3FD8DB327DC2A4E3F258B3C17A949573F;
extern const uint32_t g_rgctx_Method_2_t6424AAFB8D84606149D026C5DB849372D7382928;
extern const uint32_t g_rgctx_Method_2_get_FullName_m8B5B84EEC2DA40EE928AE57E35926E471E025F2E;
extern const uint32_t g_rgctx_ServerCalls_ClientStreamingCall_TisTRequest_tE2FD4067E6C641948E9011EA765246AA2AB4D3D2_TisTResponse_tA7C62D6DA9DEB0CAAB659C5B6B0A411E5B488D9D_m5884369A017F5AD772E7DF034DD56E70CC9890DB;
extern const uint32_t g_rgctx_Method_2_tE66FBA291F3006D25ABE1730768C322C20CD8104;
extern const uint32_t g_rgctx_Method_2_get_FullName_mED49D672D758A3F53392BD30C74C196BC16DAFF8;
extern const uint32_t g_rgctx_ServerCalls_ServerStreamingCall_TisTRequest_t99F4A6D17059CB72FD39FCFBB38BE87D7A4F4D44_TisTResponse_tA9F679F0EB3F5373044BF600C3CAB008D3273782_mC6AAC3D76CF610E7944036FF671992D4EC264725;
extern const uint32_t g_rgctx_Method_2_tCAC15B1653E7F8722821C15391A3F1F1220796C9;
extern const uint32_t g_rgctx_Method_2_get_FullName_m6B994A3A48F74102F3A07E366EE111C3C844C7BC;
extern const uint32_t g_rgctx_ServerCalls_DuplexStreamingCall_TisTRequest_t859B266ED8922A2FB5833F4D1ED044F1E45EF7E2_TisTResponse_t8FF9055AE5BE360E64B8BA9944267DD3C49C8876_m516A14A9297DF709F539086C283BE27F7982D76E;
extern const uint32_t g_rgctx_T_tF372209D3BF6E53A1F1395DB29238E4891E6C605;
extern const uint32_t g_rgctx_T_tF372209D3BF6E53A1F1395DB29238E4891E6C605;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass4_0_2_t501AF5BB26BB2DC939144B20413AA91628B184D8;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass4_0_2__ctor_mBE24617051134FA129604122BAD85380AB941E50;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass4_0_2_U3CAddMethodU3Eb__0_m9890A78FAFD38996E0C68029B086797210FFA43A;
extern const uint32_t g_rgctx_UnaryServerMethod_2_tB641DB1B6C0367502702A634ECB385D8AE022CCA;
extern const uint32_t g_rgctx_UnaryServerMethod_2__ctor_m5B181B06F42084622B90E48576075A42E4B29D16;
extern const uint32_t g_rgctx_Builder_AddMethod_TisTRequest_t423F446A36F054488FD798C8C9B28844A1DC41AD_TisTResponse_t1879411BDE1E008F05CDBAA4F211219DFDC629FD_mF1BA452FAE9480407D541FC3FA3BEA19091B897B;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass5_0_2_t55300769DF629FD4DE727807B57B90405D15AAE9;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass5_0_2__ctor_m7996BE9A55FF818238865228C7A2D71D902F82A2;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass5_0_2_U3CAddMethodU3Eb__0_m943A94CCA2B06BD84D2B571409E7A92041B4F878;
extern const uint32_t g_rgctx_ClientStreamingServerMethod_2_tF6E7196CF40AB205A8E41A888C30F09F42FDCCC3;
extern const uint32_t g_rgctx_ClientStreamingServerMethod_2__ctor_m47C3094BDAF229111801DA703A6624E48370945C;
extern const uint32_t g_rgctx_Builder_AddMethod_TisTRequest_tF956CEFDD7615655FCE4AFAC64DC199888DFADF7_TisTResponse_tE121E7BC2F7CCDF7D1B645FAA071308C2063F93E_mE08B1340AC0336D9299050B4C8A4E51160DF2A6C;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass6_0_2_tEF6A6E1F3583CFB299F4F2B1262881E3087C6D37;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass6_0_2__ctor_m591BC6C2153C122021B441290F6D548A85ADDFEB;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass6_0_2_U3CAddMethodU3Eb__0_m1571B7507A6E32947917D8526A7616EF6315EEF5;
extern const uint32_t g_rgctx_ServerStreamingServerMethod_2_t41D612F638097B7F57D66ED1E4CE348DC99AD900;
extern const uint32_t g_rgctx_ServerStreamingServerMethod_2__ctor_mB9D110DD9CAB8E6A461C6DE51811DD80CFFD1EDB;
extern const uint32_t g_rgctx_Builder_AddMethod_TisTRequest_t2E543F52D360B6F6024B78C27429699E8482ADB0_TisTResponse_tD48CE2B0487AC834EF3AE1658AC36A31C63F51E5_m53DA9B99BFA550C5F6D0AE9C3328501199F4A53C;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass7_0_2_tDEFA6DEB9B9D122B7CDAC20A004CE7393D6336BB;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass7_0_2__ctor_m10BC9931CAA5FBF2BE534A538CC361DB74FD9B4D;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass7_0_2_U3CAddMethodU3Eb__0_m3934C2537E49B362D1AF70F23938A3E862B2293F;
extern const uint32_t g_rgctx_DuplexStreamingServerMethod_2_tB4BE9D8B793DBAB870CA2B1B1339B25D891B391C;
extern const uint32_t g_rgctx_DuplexStreamingServerMethod_2__ctor_mF681CD2D15A63B932550E1C1EFB3E8B9F2F804A8;
extern const uint32_t g_rgctx_Builder_AddMethod_TisTRequest_t832F97DA40512A31112481BE7DB33215207709CF_TisTResponse_t6D4A8697D93BF6DF4D66F50BCBFB920E8DA30BEF_m12E7EDD7BD269752F90F008EF07775C41C6459AC;
extern const uint32_t g_rgctx_Interceptor_UnaryServerHandler_TisTRequest_t3C4D10CB65332FED6105B1ABAC3D049C2FB61833_TisTResponse_t29492DC2A6783F9440A252BEA47EDF4BE3ED2F36_m43D56B3C97288E04AC4372B71762ABE65D337839;
extern const uint32_t g_rgctx_Interceptor_ClientStreamingServerHandler_TisTRequest_t4CEE6B476D2456A0A5D6ADDEC7025B414D14C144_TisTResponse_t6D618C5AD11895EDCFF75A31F548BB7DFAA5823C_m6D4CE714204989C38E57CA9E91168AA1144C1F25;
extern const uint32_t g_rgctx_Interceptor_ServerStreamingServerHandler_TisTRequest_t12FCB45FD54335FC6554E724BAB5469D0711F354_TisTResponse_t9583855BE377DD40066DAB9F36903D29C86A9BB6_mCFFE8B33C45752298BA5CBD4C21090DC454052D7;
extern const uint32_t g_rgctx_Interceptor_DuplexStreamingServerHandler_TisTRequest_t3E58B6C9AF78A2E1010A1B824E589C3D641238A0_TisTResponse_t195D2385DCF82C5E4F744A1CDA94A40E17D236F6_m7CE80A17493D0DA74197D306F872040CBC093A31;
static const Il2CppRGCTXDefinition s_rgctxValues[473] = 
{
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_CallInvocationDetails_2__ctor_m5179B4C95D92198A00B95B78B3DDFECC4E515B33 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Method_2_tD5D9BCBFD69D4E47B52AF9E9913458C3584D3559 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Method_2_get_FullName_mEE6CB2086D3F1A0CD4F99ACEFE53181D589F87FA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Method_2_get_RequestMarshaller_mAA2712298ADC46064306D11918023AF407F75594 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Method_2_get_ResponseMarshaller_m8BFEDDC6C03FF700086CF36BEC928EEAC294D961 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_CallInvocationDetails_2__ctor_m064AAB22C37C5B8BB8F67C1E87EF65D158ECE9FF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_GrpcPreconditions_CheckNotNull_TisMarshaller_1_t3C36B16C1331B576F00A604678AA2CD33ECD870D_m2BA3C7BC8403EF8D598A9B682665275BDE634B84 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_GrpcPreconditions_CheckNotNull_TisMarshaller_1_t62E1E58C9EF45CCA1E305478A0C0F8B9AB5E1B69_mFC524E7D5AB9E4C7A34F6D78D5766E3A996C966B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncCall_2_t896C6EBB9B4233DA3E70326B03D30960556DEC69 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCall_2__ctor_m8BDF539B3D03E5B53101314CFE378BCCE41588A0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCall_2_UnaryCall_m290490E11B4DEC7A9DC724DAAECC6CA28BFBA960 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncCall_2_t28E5BA1479A2364675712E16AD1F9D44A9440458 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCall_2__ctor_mE224EB9E3F53EBD46C9E0F8E83E1E91605EA9F84 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCall_2_UnaryCallAsync_m8FA4DAF815EFA10C92C512486DAAD800B105F6CA },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Callbacks_2_t75452A2D86B8224BF8BA4300ABDB1B1171282A2E },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncUnaryCall_1_t0BD4178B9D416F87C9EB97E3159AF0FD74406EEF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncUnaryCall_1__ctor_mB630983C33F610C291569B3B0EAF380A85FDAB92 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncCall_2_t2C69E2CF04C75DC9CC6E49588E678E39514F99BB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCall_2__ctor_mB1EC83D9E410F75B200D3738593D206B0D406746 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCall_2_StartServerStreamingCall_m421A21BCEE506C20B2D72FF4CD3C1EE501FA0135 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ClientResponseStream_2_t22FDF41EA02DFE5FC18F1C806E39A79CC878C1FC },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ClientResponseStream_2__ctor_m3B9D42DD2179D917ABA5A624749704D35AF5B664 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Callbacks_2_t9DB7541EB592D55350034860F780F28FAC76D735 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncServerStreamingCall_1_tBDB4B52766F391713D6DA6CF186A6E3D81D66A02 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncServerStreamingCall_1__ctor_m2FFBB102E7C65DBBE36C86C260A0EE9E890B0EE9 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncCall_2_t0DF193A2622340FFF68DEC6575D1F0B4AFAC23E0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCall_2__ctor_m81856F064040E6E0E4713E344E8DFF893B619292 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCall_2_ClientStreamingCallAsync_m6102330AB755A68FB5D1BEC7EB934F13E0BD1B4F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ClientRequestStream_2_t6268D0A6522C1DF93CFE65F1B5048E7A4867DD18 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ClientRequestStream_2__ctor_mBC2275131DF842BC4E4631DFB4CBA33A92A8A8A7 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Callbacks_2_tE66523B1AA30169200A865101A1BEFA7F120A8F1 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncClientStreamingCall_2_t09185406406321C01CEDF6734B064A043A995C83 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncClientStreamingCall_2__ctor_m220A1AC2D7638B800B024F5EC5F265E44C6B5BB1 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncCall_2_t51E6A64D28751128035A72956941F6DB548DCE33 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCall_2__ctor_mB7CF64F132788591A9C17240DC0ACE04F4C644D8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCall_2_StartDuplexStreamingCall_m8F5F525422CB65CDFA9FAC40CCCE9AC2C338D827 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ClientRequestStream_2_tDFAEC01DB5906740AF8EE1E5594AD5D7550734E7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ClientRequestStream_2__ctor_mA1AB9B2B1CCFDE4D82CC94218D9995EFF20ACEBC },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ClientResponseStream_2_tEF640F29F8FB2E20EB8056FAE28C69ECF754A2DE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ClientResponseStream_2__ctor_mB8656E332F8C43040E7AD438560800A5E7E3E467 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Callbacks_2_tC85C92BE1B8D267EE42B4553DF2B81BFF4E85A5E },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncDuplexStreamingCall_2_t981922C6664758C04718CDDBEA679EAECF722E37 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncDuplexStreamingCall_2__ctor_mE409CEAA87C1FE7759C5D00B9207051BB2681C62 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec_t3B060568DDA43C9BEF1F6847741ED5EC9161F93B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec_U3C_cctorU3Eb__4_0_m615E743E7B2927F25CF7865ECEB0C25BCB1AF3E0 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Callbacks_2_tC4F817CA99F9B3AF75EE92D8A5246E7F60C64825 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec_U3C_cctorU3Eb__4_1_mDA96AC68CDB1130C28389E3ED3E44192C107DFF9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec_U3C_cctorU3Eb__4_2_m9F61926F815AE7B7B0C6E0A313AC51CECA45BBAA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec_U3C_cctorU3Eb__4_3_m7560E7AD8D9F099FF32E51604A96EF40A7430C7F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec_t0AA879812C2DA17BF9E41ABA8C6CE6B2BD7F9EDA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__ctor_mCCC93B1C7FDE707FA9C61FD95C0EFBA2D2A32D4A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec_t0AA879812C2DA17BF9E41ABA8C6CE6B2BD7F9EDA },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncCall_2_t0B390B6C08690AEA46DC12E5B9A90B4DE63D3BAA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCall_2_get_ResponseHeadersAsync_m58FF986B659E95C8F292ACC289BCD70EF28F0E11 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCall_2_GetStatus_mE753E28C617810EEA4DC8F158CDCA3F7A87C2C41 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCall_2_GetTrailers_m7203908D953007E9A0A33291988EAD110687BB61 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncCallBase_2_t6B0D230C4D9463C8737AB7366714C2F5389650FD },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallBase_2_Cancel_mB994C819C20FCA2394177E281CD58E18056D0B9D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_DefaultCallInvoker_CreateCall_TisTRequest_tAB68D8BB1092626F8FC0BF34F92758934E21735D_TisTResponse_t2808B43AFAB03EEDC6210E0840F3647840C529AF_m8AA13C3E249BD295AB1682D6EDEB830703DBBC8F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Calls_BlockingUnaryCall_TisTRequest_tAB68D8BB1092626F8FC0BF34F92758934E21735D_TisTResponse_t2808B43AFAB03EEDC6210E0840F3647840C529AF_m9D2234B57904CCC9EAF8469B7A7A1142C39981A8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_DefaultCallInvoker_CreateCall_TisTRequest_t29C97DBCD220FB9ED6D8657D2BF4D234F8447972_TisTResponse_t66DD382B8DF0A84E7CDB0EC0FCDDB1A53282BCB9_mA50D5D803AF3FADD48EBC5DF9679C347E4F16915 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Calls_AsyncUnaryCall_TisTRequest_t29C97DBCD220FB9ED6D8657D2BF4D234F8447972_TisTResponse_t66DD382B8DF0A84E7CDB0EC0FCDDB1A53282BCB9_mA5CD7B0D08C05B1AAD4A4D1FF804129E09AB76C5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_DefaultCallInvoker_CreateCall_TisTRequest_tC13F603E95919FA03EA42D890256CFBCC4268789_TisTResponse_tF1924366D05D9CB9CDE0A4DE01A710CD049FE06F_mCBB20CDADF436D98DDBB590174D14642D2086CB6 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Calls_AsyncServerStreamingCall_TisTRequest_tC13F603E95919FA03EA42D890256CFBCC4268789_TisTResponse_tF1924366D05D9CB9CDE0A4DE01A710CD049FE06F_m767560EF9D0F6C4B4C487D76008E902C6034E9B1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_DefaultCallInvoker_CreateCall_TisTRequest_t7C3A9159BAE88798F705D0C3937E81A417B1F54C_TisTResponse_tE913B366C1E045A594D0AE2D5A42A070FE146036_m978A7947087EBB68CF77CA4D049AB537E67809EA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Calls_AsyncClientStreamingCall_TisTRequest_t7C3A9159BAE88798F705D0C3937E81A417B1F54C_TisTResponse_tE913B366C1E045A594D0AE2D5A42A070FE146036_m4B8960199F5201EB6F81671E434CC760F8CF6B67 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_DefaultCallInvoker_CreateCall_TisTRequest_t699B22F22AB3C7BB74CD3BE4C70542CE1F632439_TisTResponse_tC933357C756BC04507E80133E57DB2D23A8BC38D_m086C9BA8509090A659FA10DE81F41CFCC57A23AC },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Calls_AsyncDuplexStreamingCall_TisTRequest_t699B22F22AB3C7BB74CD3BE4C70542CE1F632439_TisTResponse_tC933357C756BC04507E80133E57DB2D23A8BC38D_m7C225C274122D3F8D411B8EED1E7FB22D702ADE8 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_CallInvocationDetails_2_t52D0EB82F23C0D2BD483EAEDEA7BEBE53BE1CE1B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_CallInvocationDetails_2__ctor_mD938592F468E4B372D2577DBCC1BEAFFE8FD98B1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_Start_TisU3CForEachAsyncU3Ed__0_1_t86B3C6CE61CAD047E87DCF6C4C045EE7EB62AD0D_m81767A4F3DDA07072C3220846913A9DAF978F13C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_Create_mA3189D18DE237B66DD6FE4132134FDE1907164C3 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_tE8FCC3347065ADBA1F857C6CDB5A6046BDE499F8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_Start_TisU3CToListAsyncU3Ed__1_1_t84BE3AF922DF7C86AAE7B93928022DFC21FFC65C_m846F133C3A175A3E81BE1437B1B5A18F2F8246B3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_get_Task_m2DDD1640DE19DFB0BFBFB3A883729006047CF1CD },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_Start_TisU3CWriteAllAsyncU3Ed__2_1_tE4C1607FD02669F8003185870AB41D9690E8E7E4_m3AFD5998DC6242490B9DAC458B7A24A949221F1B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_Start_TisU3CWriteAllAsyncU3Ed__3_1_t77E78144DC926B28D640B21FF2250E6E745439C4_m96298B855C2A09FB892E99ECAB03E7809EF5F535 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IAsyncStreamReader_1_t922EBBE5DC0C2D337DB803A9A9D22C3983D64C08 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IAsyncStreamReader_1_get_Current_m42F2B8713369EE1DA81B9217BDC79E87BF1CD493 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t3E9D5F723D41A07CE939BDB19E843E55C6397FBB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_mED20B5B1DAC7E0790E977937006720ED69B5DE0E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CForEachAsyncU3Ed__0_1_tB3D56F9176275DD3254B9451FF87CAF6C0FEC3BB_mE7A950EE41AFD440F6B1B621DEE0A5DB4545DC84 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncStreamReaderExtensions_MoveNext_TisT_t4FF052B879D093C2C91EEBF3739E8C15BAE91AB5_m0C3020653F5405E7D9719734F8F1E7822FD2932D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tADFEF9AE6CB4E22E17B1DFA386EE3D86DB8955E4_TisU3CForEachAsyncU3Ed__0_1_tB3D56F9176275DD3254B9451FF87CAF6C0FEC3BB_mFB3E78853C12B612C7DD5D835303E6A3091579E1 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_List_1_t6EDEBC6CDE05F0E25DA68C79104AF8675AF0B5F0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1__ctor_m17918526E4808973B7C25A950A4DBA4A5FA219A3 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IAsyncStreamReader_1_t9F91F25C699C55641DB685E3D7641CBC80A9FD34 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IAsyncStreamReader_1_get_Current_mE1E71E19BAF5B91AB6825B6DDC49D727B873F3E6 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_Add_m5978CAF692EA9DD45056476772946590BF325AA9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncStreamReaderExtensions_MoveNext_TisT_t682E582EABFD45089DF31227AAA957244BC960CC_m68B5BD03B8D7B3607B94B092A726876917604687 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tADFEF9AE6CB4E22E17B1DFA386EE3D86DB8955E4_TisU3CToListAsyncU3Ed__1_1_t23F1BF8923DDEFA43F230BD8117AE2815167A189_m312910FEC4218DE40573CE97EB5A8DFC186439AA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_SetException_mBD06A0DBC529009C32A9F0F4A36C6AA0BC27862E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_SetResult_m2B940BF9F98AAF175CC7909EC04095822029191A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_SetStateMachine_mE1C18D02AC7E5A37F8F9B3653ADFBBAAD822A13B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_t460F7AC9F545AAC9055A5346DDE5C22F7A3CFD74 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerable_1_GetEnumerator_mD7412A1D55875F97D5F0449D9E9E5B770E3C28AC },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerator_1_t8E80DD86D836F44FD5F0B5293E38B42D53A71C57 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerator_1_get_Current_m78520502CF0CF74C46FB89BAB3B19759BEBC9557 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IAsyncStreamWriter_1_t54C5DC2521F66635EA56D89EC07EDBE9B7C77272 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IAsyncStreamWriter_1_WriteAsync_m837ECC11084106D5657D98326BC38519400818E6 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CWriteAllAsyncU3Ed__2_1_t0EB33B431BCEE8E8E5F1DDA143989DB6496ED9F1_mE84C3C6130E63D83F05D65E0BEDC6638C9334501 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IClientStreamWriter_1_t5CFEEBF4D29F1B71047AF2577D7179A1EA56437A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IClientStreamWriter_1_CompleteAsync_m6F848B1EEB9964858574671F28B070F2C15F44F1 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_t4B650E3A38BBD1170D2011C9D7488207AFF27449 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerable_1_GetEnumerator_m4D65E818DDA778BA04BA8D3BBAA7A67D154208C6 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerator_1_t7D9E19992EAFB5E4A1B9836F92F44C1BBB9CA82B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerator_1_get_Current_m1B5C69BCA247B6057A3C5CD67DC60E719F4A6D0D },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IAsyncStreamWriter_1_t629810A45AA19FF3825F7A9425E759BF4831ED1A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IAsyncStreamWriter_1_WriteAsync_m1CCE188ED37CBCFA6D5DA4E685932BACFAC61BC0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CWriteAllAsyncU3Ed__3_1_tD2ACD0C9967F6D7B1C775CB3A3A11E32033B01DC_m1BCF8742056538703E717272321221BBE04B81B2 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_T_t434046A55D96C23D54221D0663C41F4BE35212C0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ILogger_ForType_TisT_tFC80A4A728C9E5B2B680C8EBE42DCF6E46B2F56C_m4337AD7D8815AC384C6EF93E4EB9A13A9D978C7B },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_T_t9B6609BF3188316EDA2151BE4B52A75F2FCC816B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_CallInvocationDetails_2_get_RequestMarshaller_mA074E6E49C4F0D9D533D14DB5F5B4BC398445DF9 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Marshaller_1_t4EF7C35198813B8B72BB06B114F22F6DE5792EE6 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Marshaller_1_get_ContextualSerializer_m5CEBBCB47328A1683C038EF31976D2098AF242CD },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_CallInvocationDetails_2_get_ResponseMarshaller_m55F063FFB9833F05C0682D9F33D03BE4400DBDAC },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Marshaller_1_tF1D7E093E17C8EDB3A63C733FCA4CB738C5E4649 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Marshaller_1_get_ContextualDeserializer_m9A5EE8BB8615DBA2AE7A150D23DB3D127719B19D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallBase_2__ctor_mB2B538B2AB61164FCBDA83ECD463455C2AEDEE56 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncCallBase_2_t29EC00F0BE2B99A36FC97F83673F20BAFA4BBC69 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_CallInvocationDetails_2_get_Options_mB5B9BB3274F7E3778AA68D1C93C663864AD11D29 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_CallInvocationDetails_2_WithOptions_mAE08015633CC227A378E60D4AEAC80C40E23E88D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCall_2__ctor_m131B7D3EC37AD774C25E0F2A465A892DF39ADDF3 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TaskCompletionSource_1_t6A2F3C859CE0B07C8B7F38296F1C87A7F127ED00 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskCompletionSource_1__ctor_mAAA556292EEE5104B5D7A2FF3360A608A6153953 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCall_2_Initialize_m19965BD28E7AA207571F5E8A737AD7722F8F8A04 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallBase_2_UnsafeSerialize_mA87914B4988D2179E4CC467670AD5FC705752C92 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_CallInvocationDetails_2_get_Channel_m9A94930571109B4A8BF674610E2E372F32BB2F77 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCall_2_GetWriteFlagsForCall_m1AEFEAE4A8B1166BB2C547F3B3D6328303440624 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCall_2_HandleUnaryResponse_m4DD586FE3A0EDA7F2270BF41298B1BFB2763AF3E },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncCall_2_t7624EADB3688388EAD87AF67B187D044870EEE2D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCall_2_OnFailedToStartCallLocked_m1699553033A233D2F1D59F41F968EA6802E064F2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskCompletionSource_1_get_Task_mC0834913D9DFA436E05EC6372F6FE252ECAB9528 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Task_1_tD05801878A69157B5FE9D924E123EE7D73D1B925 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Task_1_GetAwaiter_mE8D3D8E6153EC6AE9B43C92D6CF07D81945EF45C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskAwaiter_1_GetResult_mF961235455ADCFB46D127E480A7B9651AA782E9D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCall_2_get_UnaryResponseClientCallback_m8DB3067E479DB0745495621C18EA2C74495A10E3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCall_2_get_ReceivedStatusOnClientCallback_m56BF4D30A213937026F45E94A734AECB14E2FEBD },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCall_2_get_ReceivedResponseHeadersCallback_m76BEAB969659DF01F2257C26B12E9FB6CD112678 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallBase_2_SendMessageInternalAsync_m5E9592C08553489B6EC0F86D490F2F194637E9E3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallBase_2_ReadMessageInternalAsync_mB4C534F0EE74E5A069F527BB5B3B9B0B34578BEF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCall_2_CheckSendPreconditionsClientSide_m0D17D2E0700CEB03F8AD22DFFB3EBFD52CEF3007 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallBase_2_get_SendCompletionCallback_mEC816FA1BEB33D6F259F9C383EDE366B72B14E3A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCall_2_CreateNativeCall_m281C8405BD4E1E125E687BA54A84D350016822CE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallBase_2_InitializeInternal_m0E2CB96D6296DAD943F6A7D77D441912EB59EFA4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCall_2_RegisterCancellationCallback_m202FBBD1A57060F532849D7DDAE3F7662D116E3F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallBase_2_ReleaseResources_mE0300B767A9102B542577D3196E9BC91E3EB2999 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCall_2_U3COnFailedToStartCallLockedU3Eb__35_0_m88E48949ACC0692DF98E7FDA681F037563C82161 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_CallInvocationDetails_2_get_Method_m94637FC8AF83830F9712F7A7E1AC91C74457EBBA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_CallInvocationDetails_2_get_Host_mE57EB0854193E8B30B4F76451F1959716F6210FB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallBase_2_RegisterCancellationCallbackForToken_m9C292996DB28CE2C074E12D600C78954A1674C7C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallBase_2_ReleaseResourcesIfPossible_m8A4859359FDCD5BAF4E739878A2E8C83B95F80F4 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncCallBase_2_t29EC00F0BE2B99A36FC97F83673F20BAFA4BBC69 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallBase_2_OnAfterReleaseResourcesUnlocked_m9A6AE7A32EA78B0B6D90A5AF41835650A8A0FD9C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallBase_2_TryDeserialize_mEC549BC8BE276790B8FCF56BE8FC4AB680D2AB54 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallBase_2_GetRpcExceptionClientOnly_m489039B78AE226CEC527AE9B3DDF313374335E1B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskCompletionSource_1_SetException_mAFBFAAF53D37071D39B3DDEF37E748903FC881FA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskCompletionSource_1_SetResult_m99840F16A41F33CCFA0C5A2F4E820605A0716D72 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCall_2_HandleFinished_m47BEDF53A42F22E377FF1D4616AD6A5B59380A60 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCall_2_HandleReceivedResponseHeaders_mF3BDD7B71DB2BFDDBF7F1EE3FCC8A998CE5C242C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ILogger_ForType_TisAsyncCall_2_t7624EADB3688388EAD87AF67B187D044870EEE2D_m7FFD71B9BD2613929DD26FC233F094892277EC31 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_GrpcPreconditions_CheckNotNull_TisAction_2_t7DA764C05592CD92F167618934DC3672E8DA7709_mF31E6685BEE23CCFC2B3C8955C7AC9D840E8ED44 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_GrpcPreconditions_CheckNotNull_TisFunc_2_t488BAC447E2FC62369B5B8A41A47225863EF69C0_m5A2BB2BF0FDEDFFD7D25C28D54311E5DEA8E501C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallBase_2_UnsafeSerialize_m69BF928051BC6D996E833B959063B75989A8D7AA },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncCallBase_2_tF1889A54FC379A3C3C5A6E2339EEB2DD8996E684 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallBase_2_CheckSendAllowedOrEarlyResult_m9CE0AE4B80DBA9A98F0B0FCC2F68C643FFD94D01 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallBase_2_get_SendCompletionCallback_m2B1E34FC185BD9328D0AE28E66F81602703CBB8E },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TaskCompletionSource_1_t2262806B2B4EBD7FFCC510655831863F3271B58A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskCompletionSource_1_get_Task_m3DAAF7DCBA7834E77FE1700EB04C5558952ACEB4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallBase_2_get_ReceivedMessageCallback_m85BC251020DE34D56997501A09CA3720AB168BD1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskCompletionSource_1__ctor_m1877597FA19FBED02275079925A0CA5FC7DB47BB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallBase_2_ReleaseResources_m84726B7B8A20986D3F4F1F17E3047B7693EAC7DE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallBase_2_OnAfterReleaseResourcesLocked_m6FED54CD1D221FBDCF4C1803BF32CCBC75199618 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Action_2_t7DA764C05592CD92F167618934DC3672E8DA7709 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Action_2_Invoke_m2EA453071EBF40AFDC9040888503A97BD3C5EA3B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t488BAC447E2FC62369B5B8A41A47225863EF69C0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_m8E82D0C8BC93D5A368A96B48D87795DA5A59FB79 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallBase_2_get_IsClient_m1AAF604CC342CCAAC4A58C1793C9FD49B94B05DB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallBase_2_ReleaseResourcesIfPossible_m7293DA758F026E7588D14FFC193F093E21B31C76 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallBase_2_OnAfterReleaseResourcesUnlocked_m8C2160AC14BCA81565593983AE02EEBCB97587B8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallBase_2_GetRpcExceptionClientOnly_m2FBF5C85175F1EEED26B5B8A4D7178F4CFCF82E6 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallBase_2_TryDeserialize_m92883E5971D0505387F32EFAC00D76FA492607DC },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncCallBase_2_tF1889A54FC379A3C3C5A6E2339EEB2DD8996E684 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallBase_2_CancelWithStatus_m28DECB4FF2CFA12002B715F6531FAE72C2A653B2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskCompletionSource_1_SetException_m9B294C978B0AC5C5F2740229AD88DAE995FFCDAE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskCompletionSource_1_SetResult_m9D6B3C2572A0497033E22603A00107994A5C55DB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallBase_2_HandleSendFinished_m8EBA12E52F6CE481C83D1B4320F1176861350700 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallBase_2_HandleReadFinished_m8EDE73D0BE94C9128616387A9070AB8CC06FDE35 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ILogger_ForType_TisAsyncCallBase_2_tF1889A54FC379A3C3C5A6E2339EEB2DD8996E684_mE4B731F55259E70FDA2C64CA6690C4481C71ABA3 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec_t5097B4EF3AFCB9C60A903C5775C642AB9B6CCD15 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec_U3C_cctorU3Eb__46_0_mE2CEE9AA92D9309D10AED3E128DFB5B24CDFB178 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec_t2F05EA34FC0B87E1C7B7D804DA723C745DB3E756 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__ctor_m4CAB3D19E20A24AB52DD1F1A3A67E3DFABA86B4E },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec_t2F05EA34FC0B87E1C7B7D804DA723C745DB3E756 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncCallBase_2_t323E8494A039BA10BD0CF689BB8157B2C8BDD87E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallBase_2_Cancel_m8A1A54B0D0E0E9785CE3848CB83F5957ED2B48A4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallBase_2__ctor_mF3C5C76BECCBE0D6B9638C4F3F48CFED784D82A0 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncCallBase_2_tDAB2E6F6FA4DACBDC71125CE168336D10193D79E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallBase_2_InitializeInternal_mE5676D2E481230134297E38CDA1AF2AA74575F8C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallServer_2_get_ReceiveCloseOnServerCallback_m9A1DCE88572F006382F37CA23ED5B29168ADCB58 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallBase_2_SendMessageInternalAsync_m5E927F87E07609EC649AA8249BB588BAA3DA1F62 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallBase_2_ReadMessageInternalAsync_m02088E1707E58A6F901C0E3C8C06C743BDE562D4 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncCallBase_2_tDAB2E6F6FA4DACBDC71125CE168336D10193D79E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallBase_2_CheckSendAllowedOrEarlyResult_m9A22F8159BFC291EE08A4A6D274663811BC5D441 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallBase_2_get_SendCompletionCallback_mCEBCE9AFFD471E78FAD684183A49510DC8BC1408 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Nullable_1_get_HasValue_m8C151A90CB186472D377A37A23A8D304567CE474 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Nullable_1_get_Value_mAFA01C3F9CC64DC5FC9BB124E27A3D93367CD801 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ResponseWithFlags_get_Response_mB9073E3DA5C7ED43062BF7D57381F6029514C74F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallBase_2_UnsafeSerialize_m19821B1A1EC7B23607C2AB7051AD6F71FACFC0FB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ResponseWithFlags_get_WriteFlags_m4DC0A8BABC15E3F47BD7CC105DCCA7F0FF83BF6F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallServer_2_get_SendStatusFromServerCompletionCallback_mEFF40A48516B174BE5653EDECFF610F81E0EC090 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TaskCompletionSource_1_t0738ECEC0614283B745219A501CF159220ADD9CA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskCompletionSource_1__ctor_m78AA40D41E482BFDA341B7147A98DDBD7D6D0BEC },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskCompletionSource_1_SetResult_m3EB0947F09E46FC043C9ABA78002D4AC2E532B83 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallBase_2_ReleaseResourcesIfPossible_mBA86DC36ED97D21C2AB98315C3D78F1FFC2D4C37 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallBase_2_OnAfterReleaseResourcesUnlocked_m99307EA4B8EE8076B7A435E04A8DCD28E2E1A6F2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallServer_2_HandleFinishedServerside_m3E5D9AD0DF37CA5A50A118F45434387C37B21B6D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallBase_2_HandleSendStatusFromServerFinished_m5F509FAE166ABF51830858628C0BB2B812E814FC },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncCall_2_tC256C4209E60489E80FF468BA0AD48770AC1F51C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCall_2_get_Details_m3982A620F64AB7AC9E9B1E396DE4E437950F5310 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_CallInvocationDetails_2_get_Options_m6D22DB0ED9B2DF879671260D238599CCB79B0A8D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ClientRequestStream_2_GetWriteFlags_m05CA87F709B4BF187B0873464BAE853D1BF8F23A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCall_2_SendMessageAsync_m3A87424359581E04E5418ED84CBC17AFBB59852F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCall_2_SendCloseFromClientAsync_m69352989EAE8867210A39818210E2545AA3FAAB9 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TResponse_tDAB609A8A95617DDE9705A33860916C1747FE89E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_Start_TisU3CMoveNextU3Ed__5_t3120559802811C4741C575A9586EBDCFACAE219F_mC6CD1EC5F590E29C53FBF75267792BC2C8F6BADD },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncCallBase_2_t33FC5FA90901972727AA49B733FDFF1F4F149B77 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallBase_2_RegisterCancellationCallbackForToken_m8720C9EBA0692566D036467B02CD74076DE3A817 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncCall_2_tC5BC90D5278A67F341AE3B9099C25A24C516AF03 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCall_2_ReadMessageAsync_mD221D026BE0C6EE476CB4910C5AAC456E490671E },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Task_1_tB7F6E758B271895F74696FC71F306D52A34703D0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Task_1_ConfigureAwait_mCE45FCD612C21D87EDC4BB73819C74D870DE4E94 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ConfiguredTaskAwaitable_1_GetAwaiter_mA2786BF5FEA2E08373D882C807F172B28D177AB4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ConfiguredTaskAwaiter_get_IsCompleted_m386CEBF3B0D27ED54A9FD4EFB00CE92D127EAD38 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t976DFC37B48E1FC51DD18D0A75580056300A0C0E_TisU3CMoveNextU3Ed__5_tD95254A4C135C6AD76C3CF329D175C9C7BF2CD24_mA8B88BBFB379A62D8C80763814318A2C7E83ED54 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ConfiguredTaskAwaiter_GetResult_m2D66440896111994D845E720249C11734C146AEB },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TResponse_tD493425F438BBCB5170872D7127ED854BC50A6E3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCall_2_get_StreamingResponseCallFinishedTask_mA908C5CFA81A7306A1ED6E5EFD47F2C71AECD963 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CMoveNextU3Ed__5_tD95254A4C135C6AD76C3CF329D175C9C7BF2CD24_m874113BFDEA7AA3C9080AEAFDA478CBDE4654082 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__DisplayClass9_0_t87A70ABF426E06FA17CBC990A83EBFD210BD7E97 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass9_0__ctor_mF19E7B3B7694971355F6219FE6F16E6A530F2C6D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_DefaultObjectPool_1_Return_m62918E7F5B5CEDD050A3917C6984F2054BEF342C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Action_1_tDD527D1F8EA27C9456A7D11D726FE9DA1710A980 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Action_1__ctor_m4906DD4D11D72D3CC4065F29D795A0CDC3D00C1A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_GrpcPreconditions_CheckNotNull_TisFunc_1_t8F5E838DFE56151119F4123CDF102908217CDA94_m27765FD95678FACC22F869CEC6798B3EF0B6EC71 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Queue_1_tFB2294BB83DCF01C8F57300753B699DBF5813D69 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Queue_1__ctor_mF68566316E803C6FC236B3892C81420C285CC642 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass9_0_U3C_ctorU3Eb__0_m66A0AD4E462CEB9FFCB9FADD38AEE916259E6E18 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_1_t7F50BDB2DA7808587AFBC1A14A1BC577FD37A0F3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_1__ctor_m121CE638C8CAC9DFE5671F6C88FC93E1E1F881DC },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ThreadLocal_1_t7E36296CFFE1A481C8ECDF99D552BCB24730FA28 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ThreadLocal_1__ctor_mB0A09A392266445F614879A5F501A79D7907A174 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_DefaultObjectPool_1_LeaseInternal_mCDD14E6E258F9787D15DC3C2AA71F5BD836A820A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t9992E7CD4C33EE5113821E44D5A06291F5B53949 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IPooledObject_1_tB253DA6DE718A792CFB5C82EE2BB7E87CC76A152 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IPooledObject_1_SetReturnToPoolAction_mE8EBB367188481155B2197826B5EC1D234046DF8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ThreadLocal_1_get_Value_mCCFFEAE736737CB6575FE62A6844AEC05F449013 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ThreadLocalData_tB9C0C1D65962017727614A37D159D4CEDC126119 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ThreadLocalData_get_Queue_m2B0C41500DB7F79BD27321313B526192B46EB4A8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Queue_1_get_Count_m280226FD85E06D4982ADACE99197B98A8CBAEAAC },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Queue_1_Dequeue_mF8470E2F1CE12495466400DE219DBE7127F7D423 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ThreadLocalData_get_CreateBudget_mC3B0DE0D8E9EEE8A6DADC22C06378A8A35E9209A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ThreadLocalData_set_CreateBudget_mD620271D3C7233EF35984F1E3CD951918BE60894 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_1_t8F5E838DFE56151119F4123CDF102908217CDA94 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_1_Invoke_m0FA6097152E62C8A2DAB8B700F55C20952305A5F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Queue_1_Enqueue_mCC5EE3B13C125DB74F6A78ED6376EC10737EB3A1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_GrpcPreconditions_CheckNotNull_TisT_t9992E7CD4C33EE5113821E44D5A06291F5B53949_m526DEDF6A2FDDBE93839B698ABF3A7F7C6C91239 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ThreadLocalData_get_DisposeBudget_m8D3CA81B17855614DD9BFC79840132D9CFFE2D25 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ThreadLocalData_set_DisposeBudget_m0398CCD620564F2ABE9FF37390951C1D8093C8EE },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Queue_1_t6F298298651234BCA31A765715A376A5DEC685BB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Queue_1__ctor_m36FD892FD788AA7299F1CDD8E0887937ADE680F2 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ThreadLocalData_tD457F089F8149CB19EFD9B6B9BD08367BB77446A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ThreadLocalData__ctor_m0968B4CC6E728443257E3EF1B2A00672B467496E },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_T_t61C27DB8EA5FDA4CAA3A201AB2565820FDE0A846 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnmanagedLibrary_GetNativeMethodDelegate_TisT_t61C27DB8EA5FDA4CAA3A201AB2565820FDE0A846_mB5E83301FFE96D09320ABDCF92C4113235CC4E34 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_Start_TisU3CHandleCallU3Ed__4_t1950D0FBEEDA7F8FC5996F39FFCD886B38BDE74B_mCC4220212754710E71E2FDF700BB6F2743A87546 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ILogger_ForType_TisUnaryServerCallHandler_2_t04C4ED11CDCC2C31374F6F010874A08BA890C3C7_mB40D8B68FBF88BDD0623935D759CD613045F72F0 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_UnaryServerCallHandler_2_t04C4ED11CDCC2C31374F6F010874A08BA890C3C7 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Method_2_tCD046D9B9D24EA91943E6B7E6AF8E243DAC32B14 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Method_2_get_ResponseMarshaller_mAB1D79CD020070B7C4DE29F9566509DCC0C41F05 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Marshaller_1_t105DA5AF4BB55714930AEF3A3E847CA5C77C9016 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Marshaller_1_get_ContextualSerializer_m66BE669EC1BD98D900B188DB05E381D88C614CFB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Method_2_get_RequestMarshaller_m4AE6FB0BB6A2D8AB492F3AB063CC029BCEF194FF },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Marshaller_1_t2B271610E72640D1B4B91C5E4ACC2A1CDBEB3526 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Marshaller_1_get_ContextualDeserializer_m37A575CEF2951CFE3A04E02AE24BFECA21D78F09 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncCallServer_2_tB91DEB2C41AD69B430B7E897DD867342691968F7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallServer_2__ctor_m446AC030DE1EBF0DDC2C9E6840CEB32C754DA236 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallServer_2_Initialize_mB6E0CFB816417096C21D52743A2F9F323375B2A9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallServer_2_ServerSideCallAsync_mCB01DB9B69EB27C5016C4A8234F99FFD27F16BEB },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ServerRequestStream_2_t5CB8C610AA6E30763D095540C209F92755D2E633 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ServerRequestStream_2__ctor_m2BADB3B76D271E1CB3A36918E300976EAAD5940C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ServerResponseStream_2_tCF835EFD0309A4DDD89BA1354D88402FC8FC753F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ServerResponseStream_2__ctor_m077F69A0499AD6C325770B5AF5D85B5B76D96950 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallServer_2_get_CancellationToken_m5D6E9CF6163C258C0114B3C8ACE329A717DA5644 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncStreamReaderExtensions_MoveNext_TisTRequest_t5EB760EA2F8F6BA22D60A57DE1E143CCF57F48D2_mC5B8BB7F74A74FB1FE546ED2692475DF67ADCADD },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tADFEF9AE6CB4E22E17B1DFA386EE3D86DB8955E4_TisU3CHandleCallU3Ed__4_t9BC20CA7613084A04894ABF72CBF77FED9122D44_mBD6525E4484A85F6E3FFC88396A632A2055DC000 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ServerRequestStream_2_get_Current_m385E3886EF7CFB4457F05B686FF2CE6C0ECAA06B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_UnaryServerMethod_2_t8C3DC7CD6DC6831D81CAD4616FA7A5D6703F3EB2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnaryServerMethod_2_Invoke_m8D866E4155989AFD6FA7E8486CE9AE88AA8030D8 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Task_1_t86AD42658914E6A3ADCE8450BD8443591357D9C0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Task_1_ConfigureAwait_m7322CB79EE26FBBB02EAA9BC0FE7D7EFB2D1EF2C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ConfiguredTaskAwaitable_1_GetAwaiter_m9FA9B506924269DCE37889F721F995EF06CCE16E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ConfiguredTaskAwaiter_get_IsCompleted_m72268111C1BF754BD1B1C7798756D2F87297C734 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF85B520ED37A1FED0C50654972BBBAEA3CF34F0F_TisU3CHandleCallU3Ed__4_t9BC20CA7613084A04894ABF72CBF77FED9122D44_mF975C0C310C6E2D5593303789052BB56AD4FBFCC },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ConfiguredTaskAwaiter_GetResult_m2915AEF47B157B83BD158EF185EF8A34F9AD8AE1 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ResponseWithFlags_tC2EAF6B979B827E5B572D02439F9F90B4121BF45 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ResponseWithFlags__ctor_m46A2F7899E8061F02CED617A66FD6E8E13B6F0B2 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Nullable_1_tFDF3999A9AFBCC3358013C26D6AE0A21B41EFB85 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Nullable_1__ctor_m27FCC758B779A483927223DDA6053F56FDC4D23A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_UnaryServerCallHandler_2_tF310433401F795A722656BBFEE88D37758DF4625 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallServer_2_SendStatusFromServerAsync_mA21607F52CE643D3CCEE7A1A2FB0A4D15639A778 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CHandleCallU3Ed__4_t9BC20CA7613084A04894ABF72CBF77FED9122D44_m14FD30764E4189FD17617652842C88C90E8ED866 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncCallBase_2_t886FEA2129571A4E510C322ACC7C539FEE95E245 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallBase_2_Cancel_m1F346E745E66C76D9F16C9970E2F494093254F46 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_Start_TisU3CHandleCallU3Ed__4_t779C80B69144A679A04D7C49564F0ED74F5CDCC1_m1E04DFAFBEFC2D5241A0DBB0D80C5CD269084D0C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ILogger_ForType_TisServerStreamingServerCallHandler_2_t462974348016A34DC15BE06A537A47F9FC964013_m51FFE86F5849E6ED2628C135E7174EB9D5E0AB1F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ServerStreamingServerCallHandler_2_t462974348016A34DC15BE06A537A47F9FC964013 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Method_2_t50BBAA5305189FC8E2E82955B388534304ABB3E5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Method_2_get_ResponseMarshaller_mAC479783E0F832FFF3FCBC0FF3F5ACB63C3F8A7B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Marshaller_1_tEDDB0136F18AF0D72EACCE2AAA2FC0710DFFE972 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Marshaller_1_get_ContextualSerializer_m6A60919FA28DC876BA5E2604F441BA95C92C75AE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Method_2_get_RequestMarshaller_mD8551AF95F34DAAB63C454C37CDAF48A67F662A3 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Marshaller_1_tAA05A0DA6AEFC5F3613A1FE9835DC52550FEBF35 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Marshaller_1_get_ContextualDeserializer_mAB05B20B86647E0D41608476844335EC0DC3EC36 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncCallServer_2_tADF1B574F0472F69B76958F06FFDF879A7C89EDC },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallServer_2__ctor_m994B17FC78F56027D3CB95D28EFF2F868BCA8D53 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallServer_2_Initialize_m5F70A6C05319101C47B885146F7BDD58DC3DF17E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallServer_2_ServerSideCallAsync_mBEA2F734C89244A7CFAB982C6B2EC4F6301D7AE8 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ServerRequestStream_2_tCB9DE8AAFBDC052991341CBF1E58EF8893329087 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ServerRequestStream_2__ctor_m501D679510C52DE93923D3B7090A71BDB4D5536D },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ServerResponseStream_2_t330C5E60CF28EFC91519C21A4AD46E10B8F1E03C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ServerResponseStream_2__ctor_m1CFE9A453E8A31AF243B8DBC2E06ADC533C983DA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallServer_2_get_CancellationToken_m4E9103D2BE80E13CC57638BF7B90255691CC0370 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncStreamReaderExtensions_MoveNext_TisTRequest_tD99FA039409820BA555F72B33A99ED4A8E9A31ED_mFD489098963121A8FA9A487F35E1CA275C2BAB72 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tADFEF9AE6CB4E22E17B1DFA386EE3D86DB8955E4_TisU3CHandleCallU3Ed__4_t5380DA22836CF0686F9E373276CD86139AED828B_m9D7AB2FD11441301B2B1F9D44454425F3CBF3E0E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ServerRequestStream_2_get_Current_mADCBE42466E6F0323A06A5BC15481A0121198141 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ServerStreamingServerMethod_2_tE8EC8C6A29F67A4CD2E7321B6131B69A6C681AAF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ServerStreamingServerMethod_2_Invoke_mA0835FC63F9AC9B0CED4B2531888C852BC89ED63 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CHandleCallU3Ed__4_t5380DA22836CF0686F9E373276CD86139AED828B_m25A66D850E428E4287C718672DECD1591F253975 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ServerStreamingServerCallHandler_2_t83724C99872BACFB805F21D01042D44796F4C65D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallServer_2_SendStatusFromServerAsync_m1ADE590A46DB85EAA193DE78337EE0A39C6D3990 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncCallBase_2_tF3BEAB830EAE9EA7BBAF4C812F45675C3DC4084A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallBase_2_Cancel_m90CACF9232CAE07AEB0967233B23C7711D80AEF6 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_Start_TisU3CHandleCallU3Ed__4_tDD76546033B586BEBAD1851ABABEF64B7CC30C25_mDE74F2C4F5427C0A61A4759049B39DA7C552E91D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ILogger_ForType_TisClientStreamingServerCallHandler_2_t3DA4C719A5CAC5141F1B60A280EDBE6BFCC3BE31_m65D617658AC48415DF289E96366EDD775F62E9AF },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ClientStreamingServerCallHandler_2_t3DA4C719A5CAC5141F1B60A280EDBE6BFCC3BE31 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Method_2_t04A09665264FD5B79C0D304B47848D1A5A0E42FE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Method_2_get_ResponseMarshaller_mADC4FE5FB65045DEF0D70F06EC775E1BBA7D176F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Marshaller_1_t2ABCD824307010CCCE962752A55BEE76E2E8C013 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Marshaller_1_get_ContextualSerializer_m2C24D4B23594812D8F6B4379863ED0E911F760EF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Method_2_get_RequestMarshaller_m0A028E53E677DAE5DA179C74144EF648A2668304 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Marshaller_1_tEF913A80754936D70899CB1637453AE0946D859F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Marshaller_1_get_ContextualDeserializer_m760742B726DF48DFA90DE69FEABAFF09C6027391 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncCallServer_2_tA84F9F90341A5216F327119A70CC49DDF918D246 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallServer_2__ctor_m30CCA4DC07F997A1AAC30F73789B01A6DAF9A033 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallServer_2_Initialize_mC4EFDC37E81FF545264EFF156332FB1C1E82B82F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallServer_2_ServerSideCallAsync_m2651C52939DEDF0444784B85D9C3629104DD7637 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ServerRequestStream_2_t8F8B6DB69AE269822813F9B497819DFF44F3B53C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ServerRequestStream_2__ctor_m634417D90CA3FBAD1B11FF52F1C8C911004A813D },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ServerResponseStream_2_t9F5E0FB161D0D937E4E60915DBA283D6DA959810 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ServerResponseStream_2__ctor_mD5ED82B1F6A42760A00FD2A3E8BC70007E6D0BD4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallServer_2_get_CancellationToken_m2BCF481AA3E3D465DBBE97C869406232EFA105E7 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ClientStreamingServerMethod_2_t5165014034C3774A28342C9535C4C136733773EB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ClientStreamingServerMethod_2_Invoke_m1E684D0D2203DA07C27DA86ABD23A2BF686CA122 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Task_1_tFD9834CD49A81AD9AD140A1F9551C82F35CE3783 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Task_1_ConfigureAwait_m065446DC59D207A9F48D915F8211C6ACBEA3889D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ConfiguredTaskAwaitable_1_GetAwaiter_m08898A6B543D7F32CB3F0342DE2C0E1F2DA3F2BE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ConfiguredTaskAwaiter_get_IsCompleted_m508197AE961AC1CD26F86F6493A233F56BEED89D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t628FBA64F63DA69DDE0761B2AA8AEB2D5227C97D_TisU3CHandleCallU3Ed__4_t0EB9283990468EB94B906C831A7510DF05042123_mAB2B66C40E97D2B708C25667FB52B5DB8ED4D881 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ConfiguredTaskAwaiter_GetResult_m2E9C2AFAF21F82708E9073EB72DF5AACFCDE82C3 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ResponseWithFlags_tCA6AC4B16E5252BF5F39543D9DF9BE629FBDE66D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ResponseWithFlags__ctor_m81BCE1936CDF41B0E00E5DBE29ABA7871D8A506A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Nullable_1_t25A48849D17B02BB3457301154570E8B9FD6275E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Nullable_1__ctor_m8B9526337F7143BB44F47F18F2A2E1127725231D },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ClientStreamingServerCallHandler_2_tF7F2EAEEF9278813DCF962E94B38991E6BB5EE9F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallServer_2_SendStatusFromServerAsync_mF4F6A47EE43C82F3239A339E993D3DFECC039B16 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CHandleCallU3Ed__4_t0EB9283990468EB94B906C831A7510DF05042123_mA26F994F173844DECEC73C04E7A866BC904EA329 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncCallBase_2_t48422A07D8FA11D508A7CD9124CEA100B2FFD073 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallBase_2_Cancel_mF1B910400E5F738E56008D10BF264BD1414B1F6A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_Start_TisU3CHandleCallU3Ed__4_tF57C596F4164C0B2FC02AA5FDEB30604C1368A75_m7B7262DE8E6C5C28052D74F8808508C334094DFD },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ILogger_ForType_TisDuplexStreamingServerCallHandler_2_tF5976C4E155C789EFC0AEB4F532ED65C5E5D2F3A_mA6F7DC91E667483085E206EC79A82CE96FD28823 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_DuplexStreamingServerCallHandler_2_tF5976C4E155C789EFC0AEB4F532ED65C5E5D2F3A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Method_2_tBEAE12167134D54D39BF2A94A51F0CE05B1FA448 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Method_2_get_ResponseMarshaller_m1328BAE875A9996F035982357469CCDED6C85F71 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Marshaller_1_tA4BA84ACBD6CA7DF15C016290C8829D976F7E33D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Marshaller_1_get_ContextualSerializer_m1B240F43419FAC03EA18F154BB83614E0A4E701C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Method_2_get_RequestMarshaller_m46FB522804CA98A9CCECBC7E2C432E99FE42F979 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Marshaller_1_t0C00FB115F323CBAFF62AF9605ADA5788AB70E87 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Marshaller_1_get_ContextualDeserializer_m795B0018C42FD7842DC1278A24F6E9C434BDE601 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncCallServer_2_tE4A854C242A4041DB413860C0A2DC7704BE0DA09 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallServer_2__ctor_m4667EA268455C4C00DE206394A2D50D325B2C81C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallServer_2_Initialize_mAF682B9C8646FD7741A7F829496326B0B329DB14 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallServer_2_ServerSideCallAsync_m96C40CC278146C906833A923A7BA7843A6B43C6E },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ServerRequestStream_2_t40E5143E59DA6599CF7B79B03581C1DB7CB9A83D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ServerRequestStream_2__ctor_m8BF8D59695DABEC7B9E53F666850E9EAAEF52154 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ServerResponseStream_2_tD60A7C201E90A4142997147BD8DE96720DFDEACD },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ServerResponseStream_2__ctor_mA2ACF34C7118EF1040C5C1662C6F199E2BA5BF74 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallServer_2_get_CancellationToken_mEA4EAA28BC592D5EF51A3B791F775E8B7036CE38 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_DuplexStreamingServerMethod_2_tB396E363D40BA7C5F94D243B18B3E985862BECF1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_DuplexStreamingServerMethod_2_Invoke_m4F48F2525EB18974EF6F672D5CBFF7AD3DA83836 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CHandleCallU3Ed__4_t6306BE103FB633A679130BCD678ECE0388BC8741_mC650976B48DB2F284C4CEF478F45773330A5B206 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_DuplexStreamingServerCallHandler_2_tD54CBAE476255585306DC39A9F4F599864E02F2B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallServer_2_SendStatusFromServerAsync_m5C114CBDD1B8AC82BADA55D2E8E8FF129BB7BA8D },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncCallBase_2_t77F4B8A96DF484D783D48200B798970E9509D835 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallBase_2_Cancel_m9C69DF87B03C2DAC3BCCC41628363E436B9B84F9 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_UnaryServerCallHandler_2_t222B39E90518215DA2AFC420140688B81B4EBFB3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnaryServerCallHandler_2__ctor_mDE1B38DE11DD5CFE6E760000EF4C5187115D6CE1 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ClientStreamingServerCallHandler_2_tA660E0E0A511D1780F0AABF6268A371A69B432C9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ClientStreamingServerCallHandler_2__ctor_m0A2BBFCF3A2B7E095511898FEDDF10D44C0744E8 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ServerStreamingServerCallHandler_2_t3E737178A155ECB9883DF926375A678839FEC9D3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ServerStreamingServerCallHandler_2__ctor_m7EAD009407A8A687E430B3FF6275F194F90F23CD },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_DuplexStreamingServerCallHandler_2_t4FF8B5D3B57935F356BCA7BBC6A6828C7DD47862 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_DuplexStreamingServerCallHandler_2__ctor_m5A9E137242BA07E0478B0B68EA6E2EBFF293F311 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TRequest_tB73B18685666A803AAA1D18D183E09E5C8346CD1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_Start_TisU3CMoveNextU3Ed__5_tA07E32D06EB15A0F69D3B0C99FBB2EE61435EA12_m2E4711F32873EE783DCCF7AB04E20C9C439993E0 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncCallBase_2_t9A8990A4D8157538ABE6AA842C84B710FD595B38 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallBase_2_RegisterCancellationCallbackForToken_mD0B86656E3AFFFEF3E217706E1BAFECE9F2415A8 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncCallServer_2_t2EE1D116018AC3767BB9E19569194351E3FA4057 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallServer_2_ReadMessageAsync_m9D13CFBF56BB80BBB334D0E738AA3919C26CD257 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Task_1_t9E269A9B077A4FA212DD9412EA74E4353414A616 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Task_1_ConfigureAwait_mCD322222F670B69C6C8387F2CE32FBB7052BAF8A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ConfiguredTaskAwaitable_1_GetAwaiter_m70DE17071F15EF9EB79B6ECCCACE83B9A9022B23 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ConfiguredTaskAwaiter_get_IsCompleted_m2BAE3C248BC71A9F335DB423FB35069D9DE27C34 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t00714972C01BE3AC66A91DF28B40F99656CDAE6C_TisU3CMoveNextU3Ed__5_t213F283FA765D844CCB03C77C361A5CC075C234E_m3FCD35413409438D4B5FC323A7AE4FCB94905F41 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ConfiguredTaskAwaiter_GetResult_mD9FDF19BE95F98DD6F57FF18B151CD80DACA235D },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TRequest_t378E7E370E381E3A5424C53A8BF99499A453B2D3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ServerResponseStream_2_GetWriteFlags_m388FCB705FB0535708FB7BACF9804A5CE798222A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncCallServer_2_t6D97103C62B21B64E75ECDF2AAEB07845CBAA603 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallServer_2_SendMessageAsync_mB43FC738166273F65EE4BCB4FC137FD790681128 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncCallServer_2_SendInitialMetadataAsync_m0307C1723075556FEB8B33647577EF635DAE8724 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Method_2_t27FAA7B2522D486489D905779753F91BA267ADE7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Method_2_get_FullName_m97426039A79766934C5F3C7C914A8C9E4021AE4B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ServerCalls_UnaryCall_TisTRequest_t11F4C1E4CE30DEC47F67274550D378F236B8906A_TisTResponse_t9DD9C3C55973D054EDF6190DFD83922B769CB9F9_m31A640C3FD8DB327DC2A4E3F258B3C17A949573F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Method_2_t6424AAFB8D84606149D026C5DB849372D7382928 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Method_2_get_FullName_m8B5B84EEC2DA40EE928AE57E35926E471E025F2E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ServerCalls_ClientStreamingCall_TisTRequest_tE2FD4067E6C641948E9011EA765246AA2AB4D3D2_TisTResponse_tA7C62D6DA9DEB0CAAB659C5B6B0A411E5B488D9D_m5884369A017F5AD772E7DF034DD56E70CC9890DB },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Method_2_tE66FBA291F3006D25ABE1730768C322C20CD8104 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Method_2_get_FullName_mED49D672D758A3F53392BD30C74C196BC16DAFF8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ServerCalls_ServerStreamingCall_TisTRequest_t99F4A6D17059CB72FD39FCFBB38BE87D7A4F4D44_TisTResponse_tA9F679F0EB3F5373044BF600C3CAB008D3273782_mC6AAC3D76CF610E7944036FF671992D4EC264725 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Method_2_tCAC15B1653E7F8722821C15391A3F1F1220796C9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Method_2_get_FullName_m6B994A3A48F74102F3A07E366EE111C3C844C7BC },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ServerCalls_DuplexStreamingCall_TisTRequest_t859B266ED8922A2FB5833F4D1ED044F1E45EF7E2_TisTResponse_t8FF9055AE5BE360E64B8BA9944267DD3C49C8876_m516A14A9297DF709F539086C283BE27F7982D76E },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_T_tF372209D3BF6E53A1F1395DB29238E4891E6C605 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tF372209D3BF6E53A1F1395DB29238E4891E6C605 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__DisplayClass4_0_2_t501AF5BB26BB2DC939144B20413AA91628B184D8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass4_0_2__ctor_mBE24617051134FA129604122BAD85380AB941E50 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass4_0_2_U3CAddMethodU3Eb__0_m9890A78FAFD38996E0C68029B086797210FFA43A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_UnaryServerMethod_2_tB641DB1B6C0367502702A634ECB385D8AE022CCA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnaryServerMethod_2__ctor_m5B181B06F42084622B90E48576075A42E4B29D16 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Builder_AddMethod_TisTRequest_t423F446A36F054488FD798C8C9B28844A1DC41AD_TisTResponse_t1879411BDE1E008F05CDBAA4F211219DFDC629FD_mF1BA452FAE9480407D541FC3FA3BEA19091B897B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__DisplayClass5_0_2_t55300769DF629FD4DE727807B57B90405D15AAE9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass5_0_2__ctor_m7996BE9A55FF818238865228C7A2D71D902F82A2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass5_0_2_U3CAddMethodU3Eb__0_m943A94CCA2B06BD84D2B571409E7A92041B4F878 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ClientStreamingServerMethod_2_tF6E7196CF40AB205A8E41A888C30F09F42FDCCC3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ClientStreamingServerMethod_2__ctor_m47C3094BDAF229111801DA703A6624E48370945C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Builder_AddMethod_TisTRequest_tF956CEFDD7615655FCE4AFAC64DC199888DFADF7_TisTResponse_tE121E7BC2F7CCDF7D1B645FAA071308C2063F93E_mE08B1340AC0336D9299050B4C8A4E51160DF2A6C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__DisplayClass6_0_2_tEF6A6E1F3583CFB299F4F2B1262881E3087C6D37 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass6_0_2__ctor_m591BC6C2153C122021B441290F6D548A85ADDFEB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass6_0_2_U3CAddMethodU3Eb__0_m1571B7507A6E32947917D8526A7616EF6315EEF5 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ServerStreamingServerMethod_2_t41D612F638097B7F57D66ED1E4CE348DC99AD900 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ServerStreamingServerMethod_2__ctor_mB9D110DD9CAB8E6A461C6DE51811DD80CFFD1EDB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Builder_AddMethod_TisTRequest_t2E543F52D360B6F6024B78C27429699E8482ADB0_TisTResponse_tD48CE2B0487AC834EF3AE1658AC36A31C63F51E5_m53DA9B99BFA550C5F6D0AE9C3328501199F4A53C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__DisplayClass7_0_2_tDEFA6DEB9B9D122B7CDAC20A004CE7393D6336BB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass7_0_2__ctor_m10BC9931CAA5FBF2BE534A538CC361DB74FD9B4D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass7_0_2_U3CAddMethodU3Eb__0_m3934C2537E49B362D1AF70F23938A3E862B2293F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_DuplexStreamingServerMethod_2_tB4BE9D8B793DBAB870CA2B1B1339B25D891B391C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_DuplexStreamingServerMethod_2__ctor_mF681CD2D15A63B932550E1C1EFB3E8B9F2F804A8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Builder_AddMethod_TisTRequest_t832F97DA40512A31112481BE7DB33215207709CF_TisTResponse_t6D4A8697D93BF6DF4D66F50BCBFB920E8DA30BEF_m12E7EDD7BD269752F90F008EF07775C41C6459AC },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Interceptor_UnaryServerHandler_TisTRequest_t3C4D10CB65332FED6105B1ABAC3D049C2FB61833_TisTResponse_t29492DC2A6783F9440A252BEA47EDF4BE3ED2F36_m43D56B3C97288E04AC4372B71762ABE65D337839 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Interceptor_ClientStreamingServerHandler_TisTRequest_t4CEE6B476D2456A0A5D6ADDEC7025B414D14C144_TisTResponse_t6D618C5AD11895EDCFF75A31F548BB7DFAA5823C_m6D4CE714204989C38E57CA9E91168AA1144C1F25 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Interceptor_ServerStreamingServerHandler_TisTRequest_t12FCB45FD54335FC6554E724BAB5469D0711F354_TisTResponse_t9583855BE377DD40066DAB9F36903D29C86A9BB6_mCFFE8B33C45752298BA5CBD4C21090DC454052D7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Interceptor_DuplexStreamingServerHandler_TisTRequest_t3E58B6C9AF78A2E1010A1B824E589C3D641238A0_TisTResponse_t195D2385DCF82C5E4F744A1CDA94A40E17D236F6_m7CE80A17493D0DA74197D306F872040CBC093A31 },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Grpc_Core_CodeGenModule;
const Il2CppCodeGenModule g_Grpc_Core_CodeGenModule = 
{
	"Grpc.Core.dll",
	2110,
	s_methodPointers,
	56,
	s_adjustorThunks,
	s_InvokerIndices,
	2,
	s_reversePInvokeIndices,
	64,
	s_rgctxIndices,
	473,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
