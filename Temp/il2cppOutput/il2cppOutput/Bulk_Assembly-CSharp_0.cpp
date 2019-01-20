#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// InterfaceController
struct InterfaceController_t023AB28D3794FDF27110D9676E4D5834A8A434CF;
// MenuElement
struct MenuElement_t9A7B58726866102A8F63B3393AF9300404D1B0AE;
// MenuElement[]
struct MenuElementU5BU5D_t417DEB593746AC5F4A6EC8B98C72EAB40B827434;
// RecieveMessages
struct RecieveMessages_t9C8D088B2F3A1B105AE49106201BE53BE69A52EB;
// RecieveMessages/OnMessageRecieved
struct OnMessageRecieved_t836C6FE1A364160E42F697B50208F369179B07F4;
// SendMessages
struct SendMessages_t2345EAEF6050E39DAF1727EBDC6325E3604C60F0;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action`1<System.Boolean>
struct Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C;
// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>
struct Dictionary_2_t49253736D56E3666B7CCAAE565D303EDEC7C3EF2;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73;
// System.Collections.Generic.IEnumerable`1<VideoInfo>
struct IEnumerable_1_t1B43524CF95A4BCB0F0806F7ADE6CA34BAF59F90;
// System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>
struct List_1_t1314A3DDAE2D8AD81F9403BD961C3CC0530B04A9;
// System.Collections.Generic.List`1<Vuforia.Image/PIXEL_FORMAT>
struct List_1_tCEBB35CD33D4B0F0D274B18B37FF981021B62739;
// System.Collections.Hashtable
struct Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t7EE965B791A606D187CCB69569A433D4CBB36879;
// System.Func`2<VideoInfo,System.Boolean>
struct Func_2_t2545C65108613DA6ADF0E4952F253E2BC3F65ED3;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IOAsyncCallback
struct IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Net.EndPoint
struct EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980;
// System.Net.IPAddress
struct IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE;
// System.Net.IPEndPoint
struct IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F;
// System.Net.Sockets.SafeSocketHandle
struct SafeSocketHandle_t9A33B4DCE2012075A5D6D355D323A05E7F16329A;
// System.Net.Sockets.Socket
struct Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8;
// System.Net.Sockets.UdpClient
struct UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Text.DecoderFallback
struct DecoderFallback_t128445EB7676870485230893338EF044F6B72F60;
// System.Text.EncoderFallback
struct EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048;
// System.UInt16[]
struct UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E;
// System.Uri
struct Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Video.VideoPlayer
struct VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2;
// UnityEngine.Video.VideoPlayer/ErrorEventHandler
struct ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222;
// UnityEngine.Video.VideoPlayer/EventHandler
struct EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308;
// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler
struct FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422;
// UnityEngine.Video.VideoPlayer/TimeEventHandler
struct TimeEventHandler_tDD815DAABFADDD98C8993B2A97A2FCE858266BC1;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8;
// VideoInfo
struct VideoInfo_t7E5A38A250D6E27C985A55FC8F4BB36C4211B16F;
// VideoInfoCollection
struct VideoInfoCollection_t72B0AF865AEE1D9CF2CE38DC82CB4DCCD97182C6;
// VideoInfo[]
struct VideoInfoU5BU5D_t1892A039097B71C8907A8741BD3FF91B756BDC8F;
// Vuforia.CameraDevice
struct CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B;
// Vuforia.DigitalEyewearARController
struct DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4;
// Vuforia.ICameraConfiguration
struct ICameraConfiguration_tB7509A17C94E12154FA84F00D5E0A03EE3F4AF3F;
// Vuforia.IViewerParameters
struct IViewerParameters_t8D2684183E6888988F59D4E3ED3786853AFB6324;
// Vuforia.IWebCam
struct IWebCam_t81470898840D05D51B7FF454CD0074AF95A3E1EA;
// Vuforia.MixedRealityController
struct MixedRealityController_t140A79CE6381E61D93A6C265DCC7A50522A901BE;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4;
// Vuforia.VideoBackgroundManager
struct VideoBackgroundManager_tDCE9A898A17B3C5ED63C8BDE29A4455C4074BD50;
// Vuforia.VuforiaARController
struct VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876;
// Vuforia.VuforiaBehaviour
struct VuforiaBehaviour_t9E688F16A822A56C5BB1910EF9B91448A9165BC2;
// VuforiaSettings
struct VuforiaSettings_t659607A555136BCAFCBBD550710B74B8704C047C;
// VuforiaSettings/<DelaySetupRoutine>d__3
struct U3CDelaySetupRoutineU3Ed__3_tC6689361693EFAEAE05D5C215F789EAE750CA969;
// YouTubeAPI
struct YouTubeAPI_t77BD34FB90DF0001C2B731FB6F07502995C16897;
// YouTubeAPI/<>c
struct U3CU3Ec_tBC09F3698A728D2527404129B64CD4BD6EAD73CF;
// YouTubeAPI/<GetYouTubeLinkRoutine>d__5
struct U3CGetYouTubeLinkRoutineU3Ed__5_t9813147061324262BA459D775E1DE964C601EC11;
// hudController
struct hudController_t5A0777F909E0550E5C6337C48E82A5AD555350F4;

extern RuntimeClass* Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var;
extern RuntimeClass* AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_il2cpp_TypeInfo_var;
extern RuntimeClass* CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_t2545C65108613DA6ADF0E4952F253E2BC3F65ED3_il2cpp_TypeInfo_var;
extern RuntimeClass* IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598_il2cpp_TypeInfo_var;
extern RuntimeClass* IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_il2cpp_TypeInfo_var;
extern RuntimeClass* IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_il2cpp_TypeInfo_var;
extern RuntimeClass* MixedRealityController_t140A79CE6381E61D93A6C265DCC7A50522A901BE_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
extern RuntimeClass* OnMessageRecieved_t836C6FE1A364160E42F697B50208F369179B07F4_il2cpp_TypeInfo_var;
extern RuntimeClass* RecieveMessages_t9C8D088B2F3A1B105AE49106201BE53BE69A52EB_il2cpp_TypeInfo_var;
extern RuntimeClass* SendMessages_t2345EAEF6050E39DAF1727EBDC6325E3604C60F0_il2cpp_TypeInfo_var;
extern RuntimeClass* SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5_il2cpp_TypeInfo_var;
extern RuntimeClass* Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CDelaySetupRoutineU3Ed__3_tC6689361693EFAEAE05D5C215F789EAE750CA969_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CGetYouTubeLinkRoutineU3Ed__5_t9813147061324262BA459D775E1DE964C601EC11_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec_tBC09F3698A728D2527404129B64CD4BD6EAD73CF_il2cpp_TypeInfo_var;
extern RuntimeClass* UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
extern RuntimeClass* VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876_il2cpp_TypeInfo_var;
extern RuntimeClass* WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral20AF418657698863DB8D966F4B42ED8DC7D0BD54;
extern String_t* _stringLiteral3A01BE17246D588CAF9A649F8A04E3E5D629DB94;
extern String_t* _stringLiteral467E09595712EBBF4948285A2996E57B12481C0A;
extern String_t* _stringLiteral53237DF0059BC949FA6FB2C6EC69C9B6B5834C44;
extern String_t* _stringLiteral534F9694C951C3DC862CAABA8AD8CB9C896F18EB;
extern String_t* _stringLiteral55589E9E8FD977449720E69BD41D7DB873245356;
extern String_t* _stringLiteral928D2B35E90A67FBBF9F74671185EE7E0E5DE70C;
extern String_t* _stringLiteralBED085B91B8E7EA822B98FBA576E41E25774A72D;
extern String_t* _stringLiteralC2B7DF6201FDD3362399091F0A29550DF3505B6A;
extern String_t* _stringLiteralCA84D1343B96BAA8137C943ED1860E522CACB238;
extern String_t* _stringLiteralD6A4EED80594F0806043581292D64483EBC5D34F;
extern String_t* _stringLiteralE7C5C34C8A7FA58139A326D9099A8E4230623D3F;
extern String_t* _stringLiteralE84C77E5D289D099D81227C74C42514EA206FD79;
extern String_t* _stringLiteralF98669CC9B81FEA7BD27F04B1D03B400F511A9DF;
extern const RuntimeMethod* Component_GetComponent_TisVideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2_m8BD724EFE5F13D9F3164EA576D0914D714758959_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_FirstOrDefault_TisVideoInfo_t7E5A38A250D6E27C985A55FC8F4BB36C4211B16F_mE2819188F6B1C4E1454619C63D5E367F492BB679_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Where_TisVideoInfo_t7E5A38A250D6E27C985A55FC8F4BB36C4211B16F_m2CE5D6F18B362D17F65C166044ACC0EB2D2CE830_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m3A75FAE579E7C61A9DED00E5BEBE6F62E44889F4_RuntimeMethod_var;
extern const RuntimeMethod* JsonUtility_FromJson_TisVideoInfoCollection_t72B0AF865AEE1D9CF2CE38DC82CB4DCCD97182C6_m0605452C1DD9890AC0B2B06C4ECB38722906CE50_RuntimeMethod_var;
extern const RuntimeMethod* Object_FindObjectsOfType_TisMenuElement_t9A7B58726866102A8F63B3393AF9300404D1B0AE_m8623AEB12C23565869CCA2D5B638BC1EA5095ABD_RuntimeMethod_var;
extern const RuntimeMethod* RecieveMessages_DataReceived_m6A9E67738B75216C2F6A24298CE277D5229E69C8_RuntimeMethod_var;
extern const RuntimeMethod* U3CDelaySetupRoutineU3Ed__3_System_Collections_IEnumerator_Reset_m97C211F508F9F32A85B0D33725E869E96D40EDEC_RuntimeMethod_var;
extern const RuntimeMethod* U3CGetYouTubeLinkRoutineU3Ed__5_System_Collections_IEnumerator_Reset_m7652F6FF2239E652315EF4C4CB2A8F77E953AED1_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec_U3CGetYouTubeLinkRoutineU3Eb__5_0_m010FE3A545CBB3C934944B44CF95F5F5B49F5BE7_RuntimeMethod_var;
extern const RuntimeMethod* VuforiaSettings_OnVuforiaStarted_m0472302C5BF4D7C7E37090C0387E7E44F49081F5_RuntimeMethod_var;
extern const RuntimeMethod* hudController_MessageRecieved_mB8F55BFEB20DD2FB4B369C2761EA2C8AEAC65CB0_RuntimeMethod_var;
extern const uint32_t MenuElement_Close_mE01247A45B262B529BC1142F71A95EE1AAE6C493_MetadataUsageId;
extern const uint32_t MenuElement_ToggleState_m2DC0D5E78D71C8F2CA3D573A3E04FFD58EA0C08F_MetadataUsageId;
extern const uint32_t MenuElement_Update_m41FEF7783B1BA5C21D19B3EDCB333B43F9B31E48_MetadataUsageId;
extern const uint32_t MenuElement__ctor_m7DA621C702C45E0EE6E9241C079149E48768A6FD_MetadataUsageId;
extern const uint32_t RecieveMessages_DataReceived_m6A9E67738B75216C2F6A24298CE277D5229E69C8_MetadataUsageId;
extern const uint32_t RecieveMessages_Start_m6E9228D8D449B5D9D04899A2878D3890DC30B593_MetadataUsageId;
extern const uint32_t SendMessages_SendPacket_m3F22B8610D333EAF4B3B3D8D2BB765DAE87EE027_MetadataUsageId;
extern const uint32_t SendMessages_Start_m91B82CAA202EB8265A88B157673B1ECE6568995A_MetadataUsageId;
extern const uint32_t SendMessages_get_Instance_m2DB8C71F2D6F4C4EAEDF5D9F1F934CD1817D3034_MetadataUsageId;
extern const uint32_t SendMessages_set_Instance_mA3149BD54BE651AD560A6C6D4D40F4D5C903D62B_MetadataUsageId;
extern const uint32_t U3CDelaySetupRoutineU3Ed__3_MoveNext_mFA8E54AFE093DCA8D082226AE56E6804BA49122B_MetadataUsageId;
extern const uint32_t U3CDelaySetupRoutineU3Ed__3_System_Collections_IEnumerator_Reset_m97C211F508F9F32A85B0D33725E869E96D40EDEC_MetadataUsageId;
extern const uint32_t U3CGetYouTubeLinkRoutineU3Ed__5_MoveNext_m128FB3F0E78E92827E656896F531FB828A38AC1C_MetadataUsageId;
extern const uint32_t U3CGetYouTubeLinkRoutineU3Ed__5_System_Collections_IEnumerator_Reset_m7652F6FF2239E652315EF4C4CB2A8F77E953AED1_MetadataUsageId;
extern const uint32_t U3CU3Ec_U3CGetYouTubeLinkRoutineU3Eb__5_0_m010FE3A545CBB3C934944B44CF95F5F5B49F5BE7_MetadataUsageId;
extern const uint32_t U3CU3Ec__cctor_mB055568A7736B1C6CAE987DCF8BFFA05E917C6A5_MetadataUsageId;
extern const uint32_t VuforiaSettings_DelaySetupRoutine_mCB2A50D0DAC82CF66123DAD0D18B7ED295F23592_MetadataUsageId;
extern const uint32_t VuforiaSettings_OnDisable_m62394B616324402A403DC326304E48A82A5BA73D_MetadataUsageId;
extern const uint32_t VuforiaSettings_OnVuforiaStarted_m0472302C5BF4D7C7E37090C0387E7E44F49081F5_MetadataUsageId;
extern const uint32_t VuforiaSettings_Start_m618FA6573759668F85C9E883C3A06C717FA11122_MetadataUsageId;
extern const uint32_t YouTubeAPI_GetYouTubeLinkRoutine_mFE937D625BAEA209C1061A2CA048A8385B0BDA18_MetadataUsageId;
extern const uint32_t YouTubeAPI_Start_m3303B9FF9FEAC15216CE25CD83D41CB33DD8DDC9_MetadataUsageId;
extern const uint32_t hudController_DisableOtherWindows_m46F4E71C94921BEDDE58B7E4BFF74F3AADC01A51_MetadataUsageId;
extern const uint32_t hudController_MessageRecieved_mB8F55BFEB20DD2FB4B369C2761EA2C8AEAC65CB0_MetadataUsageId;
extern const uint32_t hudController_OnDisable_mD33EC40A7662D4DF9E5EE8DEE55B9D5322792D39_MetadataUsageId;
extern const uint32_t hudController_OnEnable_mB2BED938CE7D974C206817E6D4811F12166B5F6F_MetadataUsageId;
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_com;
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_com;
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_pinvoke;
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_com;

struct MenuElementU5BU5D_t417DEB593746AC5F4A6EC8B98C72EAB40B827434;
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct VideoInfoU5BU5D_t1892A039097B71C8907A8741BD3FF91B756BDC8F;


#ifndef U3CMODULEU3E_T6CDDDF959E7E18A6744E43B613F41CDAC780256A_H
#define U3CMODULEU3E_T6CDDDF959E7E18A6744E43B613F41CDAC780256A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t6CDDDF959E7E18A6744E43B613F41CDAC780256A 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T6CDDDF959E7E18A6744E43B613F41CDAC780256A_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef ENDPOINT_TD87FCEF2780A951E8CE8D808C345FBF2C088D980_H
#define ENDPOINT_TD87FCEF2780A951E8CE8D808C345FBF2C088D980_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.EndPoint
struct  EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENDPOINT_TD87FCEF2780A951E8CE8D808C345FBF2C088D980_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef ENCODING_T7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_H
#define ENCODING_T7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding
struct  Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___dataItem_10)); }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((&___dataItem_10), value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___encoderFallback_13)); }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((&___encoderFallback_13), value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___decoderFallback_14)); }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___decoderFallback_14), value);
	}
};

struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((&___defaultEncoding_0), value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((&___unicodeEncoding_1), value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianUnicode_2), value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((&___utf7Encoding_3), value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((&___utf8Encoding_4), value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((&___utf32Encoding_5), value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((&___asciiEncoding_6), value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((&___latin1Encoding_7), value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___encodings_8)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((&___encodings_8), value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_InternalSyncObject_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODING_T7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef UNITYEVENTBASE_T6E0F7823762EE94BB8489B5AE41C7802A266D3D5_H
#define UNITYEVENTBASE_T6E0F7823762EE94BB8489B5AE41C7802A266D3D5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_Calls_0)); }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T6E0F7823762EE94BB8489B5AE41C7802A266D3D5_H
#ifndef YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#define YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#ifndef VIDEOINFO_T7E5A38A250D6E27C985A55FC8F4BB36C4211B16F_H
#define VIDEOINFO_T7E5A38A250D6E27C985A55FC8F4BB36C4211B16F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VideoInfo
struct  VideoInfo_t7E5A38A250D6E27C985A55FC8F4BB36C4211B16F  : public RuntimeObject
{
public:
	// System.String VideoInfo::quality
	String_t* ___quality_0;
	// System.String VideoInfo::url
	String_t* ___url_1;
	// System.String VideoInfo::itag
	String_t* ___itag_2;
	// System.String VideoInfo::type
	String_t* ___type_3;

public:
	inline static int32_t get_offset_of_quality_0() { return static_cast<int32_t>(offsetof(VideoInfo_t7E5A38A250D6E27C985A55FC8F4BB36C4211B16F, ___quality_0)); }
	inline String_t* get_quality_0() const { return ___quality_0; }
	inline String_t** get_address_of_quality_0() { return &___quality_0; }
	inline void set_quality_0(String_t* value)
	{
		___quality_0 = value;
		Il2CppCodeGenWriteBarrier((&___quality_0), value);
	}

	inline static int32_t get_offset_of_url_1() { return static_cast<int32_t>(offsetof(VideoInfo_t7E5A38A250D6E27C985A55FC8F4BB36C4211B16F, ___url_1)); }
	inline String_t* get_url_1() const { return ___url_1; }
	inline String_t** get_address_of_url_1() { return &___url_1; }
	inline void set_url_1(String_t* value)
	{
		___url_1 = value;
		Il2CppCodeGenWriteBarrier((&___url_1), value);
	}

	inline static int32_t get_offset_of_itag_2() { return static_cast<int32_t>(offsetof(VideoInfo_t7E5A38A250D6E27C985A55FC8F4BB36C4211B16F, ___itag_2)); }
	inline String_t* get_itag_2() const { return ___itag_2; }
	inline String_t** get_address_of_itag_2() { return &___itag_2; }
	inline void set_itag_2(String_t* value)
	{
		___itag_2 = value;
		Il2CppCodeGenWriteBarrier((&___itag_2), value);
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(VideoInfo_t7E5A38A250D6E27C985A55FC8F4BB36C4211B16F, ___type_3)); }
	inline String_t* get_type_3() const { return ___type_3; }
	inline String_t** get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(String_t* value)
	{
		___type_3 = value;
		Il2CppCodeGenWriteBarrier((&___type_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOINFO_T7E5A38A250D6E27C985A55FC8F4BB36C4211B16F_H
#ifndef VIDEOINFOCOLLECTION_T72B0AF865AEE1D9CF2CE38DC82CB4DCCD97182C6_H
#define VIDEOINFOCOLLECTION_T72B0AF865AEE1D9CF2CE38DC82CB4DCCD97182C6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VideoInfoCollection
struct  VideoInfoCollection_t72B0AF865AEE1D9CF2CE38DC82CB4DCCD97182C6  : public RuntimeObject
{
public:
	// VideoInfo[] VideoInfoCollection::videoInfoCollection
	VideoInfoU5BU5D_t1892A039097B71C8907A8741BD3FF91B756BDC8F* ___videoInfoCollection_0;

public:
	inline static int32_t get_offset_of_videoInfoCollection_0() { return static_cast<int32_t>(offsetof(VideoInfoCollection_t72B0AF865AEE1D9CF2CE38DC82CB4DCCD97182C6, ___videoInfoCollection_0)); }
	inline VideoInfoU5BU5D_t1892A039097B71C8907A8741BD3FF91B756BDC8F* get_videoInfoCollection_0() const { return ___videoInfoCollection_0; }
	inline VideoInfoU5BU5D_t1892A039097B71C8907A8741BD3FF91B756BDC8F** get_address_of_videoInfoCollection_0() { return &___videoInfoCollection_0; }
	inline void set_videoInfoCollection_0(VideoInfoU5BU5D_t1892A039097B71C8907A8741BD3FF91B756BDC8F* value)
	{
		___videoInfoCollection_0 = value;
		Il2CppCodeGenWriteBarrier((&___videoInfoCollection_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOINFOCOLLECTION_T72B0AF865AEE1D9CF2CE38DC82CB4DCCD97182C6_H
#ifndef ARCONTROLLER_TBCF5CBE22AE2AD3FF6DCAC88E78FF7C929D91293_H
#define ARCONTROLLER_TBCF5CBE22AE2AD3FF6DCAC88E78FF7C929D91293_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ARController
struct  ARController_tBCF5CBE22AE2AD3FF6DCAC88E78FF7C929D91293  : public RuntimeObject
{
public:
	// Vuforia.VuforiaBehaviour Vuforia.ARController::mVuforiaBehaviour
	VuforiaBehaviour_t9E688F16A822A56C5BB1910EF9B91448A9165BC2 * ___mVuforiaBehaviour_0;

public:
	inline static int32_t get_offset_of_mVuforiaBehaviour_0() { return static_cast<int32_t>(offsetof(ARController_tBCF5CBE22AE2AD3FF6DCAC88E78FF7C929D91293, ___mVuforiaBehaviour_0)); }
	inline VuforiaBehaviour_t9E688F16A822A56C5BB1910EF9B91448A9165BC2 * get_mVuforiaBehaviour_0() const { return ___mVuforiaBehaviour_0; }
	inline VuforiaBehaviour_t9E688F16A822A56C5BB1910EF9B91448A9165BC2 ** get_address_of_mVuforiaBehaviour_0() { return &___mVuforiaBehaviour_0; }
	inline void set_mVuforiaBehaviour_0(VuforiaBehaviour_t9E688F16A822A56C5BB1910EF9B91448A9165BC2 * value)
	{
		___mVuforiaBehaviour_0 = value;
		Il2CppCodeGenWriteBarrier((&___mVuforiaBehaviour_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARCONTROLLER_TBCF5CBE22AE2AD3FF6DCAC88E78FF7C929D91293_H
#ifndef U3CDELAYSETUPROUTINEU3ED__3_TC6689361693EFAEAE05D5C215F789EAE750CA969_H
#define U3CDELAYSETUPROUTINEU3ED__3_TC6689361693EFAEAE05D5C215F789EAE750CA969_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VuforiaSettings/<DelaySetupRoutine>d__3
struct  U3CDelaySetupRoutineU3Ed__3_tC6689361693EFAEAE05D5C215F789EAE750CA969  : public RuntimeObject
{
public:
	// System.Int32 VuforiaSettings/<DelaySetupRoutine>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object VuforiaSettings/<DelaySetupRoutine>d__3::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// VuforiaSettings VuforiaSettings/<DelaySetupRoutine>d__3::<>4__this
	VuforiaSettings_t659607A555136BCAFCBBD550710B74B8704C047C * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDelaySetupRoutineU3Ed__3_tC6689361693EFAEAE05D5C215F789EAE750CA969, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDelaySetupRoutineU3Ed__3_tC6689361693EFAEAE05D5C215F789EAE750CA969, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDelaySetupRoutineU3Ed__3_tC6689361693EFAEAE05D5C215F789EAE750CA969, ___U3CU3E4__this_2)); }
	inline VuforiaSettings_t659607A555136BCAFCBBD550710B74B8704C047C * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline VuforiaSettings_t659607A555136BCAFCBBD550710B74B8704C047C ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(VuforiaSettings_t659607A555136BCAFCBBD550710B74B8704C047C * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDELAYSETUPROUTINEU3ED__3_TC6689361693EFAEAE05D5C215F789EAE750CA969_H
#ifndef U3CU3EC_TBC09F3698A728D2527404129B64CD4BD6EAD73CF_H
#define U3CU3EC_TBC09F3698A728D2527404129B64CD4BD6EAD73CF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YouTubeAPI/<>c
struct  U3CU3Ec_tBC09F3698A728D2527404129B64CD4BD6EAD73CF  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tBC09F3698A728D2527404129B64CD4BD6EAD73CF_StaticFields
{
public:
	// YouTubeAPI/<>c YouTubeAPI/<>c::<>9
	U3CU3Ec_tBC09F3698A728D2527404129B64CD4BD6EAD73CF * ___U3CU3E9_0;
	// System.Func`2<VideoInfo,System.Boolean> YouTubeAPI/<>c::<>9__5_0
	Func_2_t2545C65108613DA6ADF0E4952F253E2BC3F65ED3 * ___U3CU3E9__5_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tBC09F3698A728D2527404129B64CD4BD6EAD73CF_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tBC09F3698A728D2527404129B64CD4BD6EAD73CF * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tBC09F3698A728D2527404129B64CD4BD6EAD73CF ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tBC09F3698A728D2527404129B64CD4BD6EAD73CF * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__5_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tBC09F3698A728D2527404129B64CD4BD6EAD73CF_StaticFields, ___U3CU3E9__5_0_1)); }
	inline Func_2_t2545C65108613DA6ADF0E4952F253E2BC3F65ED3 * get_U3CU3E9__5_0_1() const { return ___U3CU3E9__5_0_1; }
	inline Func_2_t2545C65108613DA6ADF0E4952F253E2BC3F65ED3 ** get_address_of_U3CU3E9__5_0_1() { return &___U3CU3E9__5_0_1; }
	inline void set_U3CU3E9__5_0_1(Func_2_t2545C65108613DA6ADF0E4952F253E2BC3F65ED3 * value)
	{
		___U3CU3E9__5_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__5_0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_TBC09F3698A728D2527404129B64CD4BD6EAD73CF_H
#ifndef U3CGETYOUTUBELINKROUTINEU3ED__5_T9813147061324262BA459D775E1DE964C601EC11_H
#define U3CGETYOUTUBELINKROUTINEU3ED__5_T9813147061324262BA459D775E1DE964C601EC11_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YouTubeAPI/<GetYouTubeLinkRoutine>d__5
struct  U3CGetYouTubeLinkRoutineU3Ed__5_t9813147061324262BA459D775E1DE964C601EC11  : public RuntimeObject
{
public:
	// System.Int32 YouTubeAPI/<GetYouTubeLinkRoutine>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object YouTubeAPI/<GetYouTubeLinkRoutine>d__5::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.String YouTubeAPI/<GetYouTubeLinkRoutine>d__5::url
	String_t* ___url_2;
	// YouTubeAPI YouTubeAPI/<GetYouTubeLinkRoutine>d__5::<>4__this
	YouTubeAPI_t77BD34FB90DF0001C2B731FB6F07502995C16897 * ___U3CU3E4__this_3;
	// UnityEngine.Networking.UnityWebRequest YouTubeAPI/<GetYouTubeLinkRoutine>d__5::<www>5__1
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * ___U3CwwwU3E5__1_4;
	// VideoInfo[] YouTubeAPI/<GetYouTubeLinkRoutine>d__5::<videoArray>5__2
	VideoInfoU5BU5D_t1892A039097B71C8907A8741BD3FF91B756BDC8F* ___U3CvideoArrayU3E5__2_5;
	// VideoInfo YouTubeAPI/<GetYouTubeLinkRoutine>d__5::<videoInfo>5__3
	VideoInfo_t7E5A38A250D6E27C985A55FC8F4BB36C4211B16F * ___U3CvideoInfoU3E5__3_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetYouTubeLinkRoutineU3Ed__5_t9813147061324262BA459D775E1DE964C601EC11, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetYouTubeLinkRoutineU3Ed__5_t9813147061324262BA459D775E1DE964C601EC11, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_url_2() { return static_cast<int32_t>(offsetof(U3CGetYouTubeLinkRoutineU3Ed__5_t9813147061324262BA459D775E1DE964C601EC11, ___url_2)); }
	inline String_t* get_url_2() const { return ___url_2; }
	inline String_t** get_address_of_url_2() { return &___url_2; }
	inline void set_url_2(String_t* value)
	{
		___url_2 = value;
		Il2CppCodeGenWriteBarrier((&___url_2), value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CGetYouTubeLinkRoutineU3Ed__5_t9813147061324262BA459D775E1DE964C601EC11, ___U3CU3E4__this_3)); }
	inline YouTubeAPI_t77BD34FB90DF0001C2B731FB6F07502995C16897 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline YouTubeAPI_t77BD34FB90DF0001C2B731FB6F07502995C16897 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(YouTubeAPI_t77BD34FB90DF0001C2B731FB6F07502995C16897 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_3), value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E5__1_4() { return static_cast<int32_t>(offsetof(U3CGetYouTubeLinkRoutineU3Ed__5_t9813147061324262BA459D775E1DE964C601EC11, ___U3CwwwU3E5__1_4)); }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * get_U3CwwwU3E5__1_4() const { return ___U3CwwwU3E5__1_4; }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 ** get_address_of_U3CwwwU3E5__1_4() { return &___U3CwwwU3E5__1_4; }
	inline void set_U3CwwwU3E5__1_4(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * value)
	{
		___U3CwwwU3E5__1_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CwwwU3E5__1_4), value);
	}

	inline static int32_t get_offset_of_U3CvideoArrayU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CGetYouTubeLinkRoutineU3Ed__5_t9813147061324262BA459D775E1DE964C601EC11, ___U3CvideoArrayU3E5__2_5)); }
	inline VideoInfoU5BU5D_t1892A039097B71C8907A8741BD3FF91B756BDC8F* get_U3CvideoArrayU3E5__2_5() const { return ___U3CvideoArrayU3E5__2_5; }
	inline VideoInfoU5BU5D_t1892A039097B71C8907A8741BD3FF91B756BDC8F** get_address_of_U3CvideoArrayU3E5__2_5() { return &___U3CvideoArrayU3E5__2_5; }
	inline void set_U3CvideoArrayU3E5__2_5(VideoInfoU5BU5D_t1892A039097B71C8907A8741BD3FF91B756BDC8F* value)
	{
		___U3CvideoArrayU3E5__2_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CvideoArrayU3E5__2_5), value);
	}

	inline static int32_t get_offset_of_U3CvideoInfoU3E5__3_6() { return static_cast<int32_t>(offsetof(U3CGetYouTubeLinkRoutineU3Ed__5_t9813147061324262BA459D775E1DE964C601EC11, ___U3CvideoInfoU3E5__3_6)); }
	inline VideoInfo_t7E5A38A250D6E27C985A55FC8F4BB36C4211B16F * get_U3CvideoInfoU3E5__3_6() const { return ___U3CvideoInfoU3E5__3_6; }
	inline VideoInfo_t7E5A38A250D6E27C985A55FC8F4BB36C4211B16F ** get_address_of_U3CvideoInfoU3E5__3_6() { return &___U3CvideoInfoU3E5__3_6; }
	inline void set_U3CvideoInfoU3E5__3_6(VideoInfo_t7E5A38A250D6E27C985A55FC8F4BB36C4211B16F * value)
	{
		___U3CvideoInfoU3E5__3_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CvideoInfoU3E5__3_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETYOUTUBELINKROUTINEU3ED__5_T9813147061324262BA459D775E1DE964C601EC11_H
#ifndef BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#define BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifndef BYTE_TF87C579059BD4633E6840EBBBEEF899C6E33EF07_H
#define BYTE_TF87C579059BD4633E6840EBBBEEF899C6E33EF07_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_TF87C579059BD4633E6840EBBBEEF899C6E33EF07_H
#ifndef ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#define ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};
#endif // ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifndef INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#define INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef IPENDPOINT_TCD29981135F7B1989C3845BF455AD44EBC13DE3F_H
#define IPENDPOINT_TCD29981135F7B1989C3845BF455AD44EBC13DE3F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.IPEndPoint
struct  IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F  : public EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980
{
public:
	// System.Net.IPAddress System.Net.IPEndPoint::m_Address
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___m_Address_2;
	// System.Int32 System.Net.IPEndPoint::m_Port
	int32_t ___m_Port_3;

public:
	inline static int32_t get_offset_of_m_Address_2() { return static_cast<int32_t>(offsetof(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F, ___m_Address_2)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_m_Address_2() const { return ___m_Address_2; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_m_Address_2() { return &___m_Address_2; }
	inline void set_m_Address_2(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___m_Address_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Address_2), value);
	}

	inline static int32_t get_offset_of_m_Port_3() { return static_cast<int32_t>(offsetof(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F, ___m_Port_3)); }
	inline int32_t get_m_Port_3() const { return ___m_Port_3; }
	inline int32_t* get_address_of_m_Port_3() { return &___m_Port_3; }
	inline void set_m_Port_3(int32_t value)
	{
		___m_Port_3 = value;
	}
};

struct IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_StaticFields
{
public:
	// System.Net.IPEndPoint System.Net.IPEndPoint::Any
	IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * ___Any_5;
	// System.Net.IPEndPoint System.Net.IPEndPoint::IPv6Any
	IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * ___IPv6Any_6;

public:
	inline static int32_t get_offset_of_Any_5() { return static_cast<int32_t>(offsetof(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_StaticFields, ___Any_5)); }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * get_Any_5() const { return ___Any_5; }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F ** get_address_of_Any_5() { return &___Any_5; }
	inline void set_Any_5(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * value)
	{
		___Any_5 = value;
		Il2CppCodeGenWriteBarrier((&___Any_5), value);
	}

	inline static int32_t get_offset_of_IPv6Any_6() { return static_cast<int32_t>(offsetof(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_StaticFields, ___IPv6Any_6)); }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * get_IPv6Any_6() const { return ___IPv6Any_6; }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F ** get_address_of_IPv6Any_6() { return &___IPv6Any_6; }
	inline void set_IPv6Any_6(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * value)
	{
		___IPv6Any_6 = value;
		Il2CppCodeGenWriteBarrier((&___IPv6Any_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IPENDPOINT_TCD29981135F7B1989C3845BF455AD44EBC13DE3F_H
#ifndef SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#define SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifndef SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#define SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifndef VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#define VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifndef UNITYEVENT_T5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F_H
#define UNITYEVENT_T5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent
struct  UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_T5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F_H
#ifndef VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#define VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifndef WAITFORSECONDS_T3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_H
#define WAITFORSECONDS_T3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	float ___m_Seconds_0;
};
#endif // WAITFORSECONDS_T3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_H
#ifndef VIDEOMODEDATA_T7BC59F654FEA6A276ACE52D08AA89A8438698C3D_H
#define VIDEOMODEDATA_T7BC59F654FEA6A276ACE52D08AA89A8438698C3D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/VideoModeData
#pragma pack(push, tp, 1)
struct  VideoModeData_t7BC59F654FEA6A276ACE52D08AA89A8438698C3D 
{
public:
	// System.Int32 Vuforia.CameraDevice/VideoModeData::width
	int32_t ___width_0;
	// System.Int32 Vuforia.CameraDevice/VideoModeData::height
	int32_t ___height_1;
	// System.Single Vuforia.CameraDevice/VideoModeData::frameRate
	float ___frameRate_2;
	// System.Int32 Vuforia.CameraDevice/VideoModeData::unused
	int32_t ___unused_3;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(VideoModeData_t7BC59F654FEA6A276ACE52D08AA89A8438698C3D, ___width_0)); }
	inline int32_t get_width_0() const { return ___width_0; }
	inline int32_t* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(int32_t value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(VideoModeData_t7BC59F654FEA6A276ACE52D08AA89A8438698C3D, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_frameRate_2() { return static_cast<int32_t>(offsetof(VideoModeData_t7BC59F654FEA6A276ACE52D08AA89A8438698C3D, ___frameRate_2)); }
	inline float get_frameRate_2() const { return ___frameRate_2; }
	inline float* get_address_of_frameRate_2() { return &___frameRate_2; }
	inline void set_frameRate_2(float value)
	{
		___frameRate_2 = value;
	}

	inline static int32_t get_offset_of_unused_3() { return static_cast<int32_t>(offsetof(VideoModeData_t7BC59F654FEA6A276ACE52D08AA89A8438698C3D, ___unused_3)); }
	inline int32_t get_unused_3() const { return ___unused_3; }
	inline int32_t* get_address_of_unused_3() { return &___unused_3; }
	inline void set_unused_3(int32_t value)
	{
		___unused_3 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOMODEDATA_T7BC59F654FEA6A276ACE52D08AA89A8438698C3D_H
#ifndef DELEGATE_T_H
#define DELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T_H
#ifndef ADDRESSFAMILY_TFA4F79FA7F299EBDF507F4811E6E5C3EEBF0850E_H
#define ADDRESSFAMILY_TFA4F79FA7F299EBDF507F4811E6E5C3EEBF0850E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.AddressFamily
struct  AddressFamily_tFA4F79FA7F299EBDF507F4811E6E5C3EEBF0850E 
{
public:
	// System.Int32 System.Net.Sockets.AddressFamily::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AddressFamily_tFA4F79FA7F299EBDF507F4811E6E5C3EEBF0850E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADDRESSFAMILY_TFA4F79FA7F299EBDF507F4811E6E5C3EEBF0850E_H
#ifndef PROTOCOLTYPE_T20E72BC88D85E41793731DC987F8F04F312D66DD_H
#define PROTOCOLTYPE_T20E72BC88D85E41793731DC987F8F04F312D66DD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.ProtocolType
struct  ProtocolType_t20E72BC88D85E41793731DC987F8F04F312D66DD 
{
public:
	// System.Int32 System.Net.Sockets.ProtocolType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProtocolType_t20E72BC88D85E41793731DC987F8F04F312D66DD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROTOCOLTYPE_T20E72BC88D85E41793731DC987F8F04F312D66DD_H
#ifndef SOCKETTYPE_TCD56A18D4C7B43BF166E5C8B4B456BD646DF5775_H
#define SOCKETTYPE_TCD56A18D4C7B43BF166E5C8B4B456BD646DF5775_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketType
struct  SocketType_tCD56A18D4C7B43BF166E5C8B4B456BD646DF5775 
{
public:
	// System.Int32 System.Net.Sockets.SocketType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketType_tCD56A18D4C7B43BF166E5C8B4B456BD646DF5775, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKETTYPE_TCD56A18D4C7B43BF166E5C8B4B456BD646DF5775_H
#ifndef NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#define NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#ifndef EXTERNALEXCEPTION_T68841FD169C0CB00CC950EDA7E2A59540D65B1CE_H
#define EXTERNALEXCEPTION_T68841FD169C0CB00CC950EDA7E2A59540D65B1CE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ExternalException
struct  ExternalException_t68841FD169C0CB00CC950EDA7E2A59540D65B1CE  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTERNALEXCEPTION_T68841FD169C0CB00CC950EDA7E2A59540D65B1CE_H
#ifndef ASYNCOPERATION_T304C51ABED8AE734CC8DDDFE13013D8D5A44641D_H
#define ASYNCOPERATION_T304C51ABED8AE734CC8DDDFE13013D8D5A44641D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AsyncOperation
struct  AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D, ___m_completeCallback_1)); }
	inline Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_completeCallback_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
#endif // ASYNCOPERATION_T304C51ABED8AE734CC8DDDFE13013D8D5A44641D_H
#ifndef COROUTINE_TAE7DB2FC70A0AE6477F896F852057CB0754F06EC_H
#define COROUTINE_TAE7DB2FC70A0AE6477F896F852057CB0754F06EC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_TAE7DB2FC70A0AE6477F896F852057CB0754F06EC_H
#ifndef CERTIFICATEHANDLER_TBD070BF4150A44AB482FD36EA3882C363117E8C0_H
#define CERTIFICATEHANDLER_TBD070BF4150A44AB482FD36EA3882C363117E8C0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.CertificateHandler
struct  CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // CERTIFICATEHANDLER_TBD070BF4150A44AB482FD36EA3882C363117E8C0_H
#ifndef DOWNLOADHANDLER_T4A7802ADC97024B469C87FA454B6973951980EE9_H
#define DOWNLOADHANDLER_T4A7802ADC97024B469C87FA454B6973951980EE9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.DownloadHandler
struct  DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // DOWNLOADHANDLER_T4A7802ADC97024B469C87FA454B6973951980EE9_H
#ifndef UPLOADHANDLER_T24F4097D30A1E7C689D8881A27F251B4741601E4_H
#define UPLOADHANDLER_T24F4097D30A1E7C689D8881A27F251B4741601E4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.UploadHandler
struct  UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // UPLOADHANDLER_T24F4097D30A1E7C689D8881A27F251B4741601E4_H
#ifndef OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#define OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifndef CAMERADEVICEMODE_T31CE15C1D60CED5FC63DF3962D53D5DAADD40589_H
#define CAMERADEVICEMODE_T31CE15C1D60CED5FC63DF3962D53D5DAADD40589_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/CameraDeviceMode
struct  CameraDeviceMode_t31CE15C1D60CED5FC63DF3962D53D5DAADD40589 
{
public:
	// System.Int32 Vuforia.CameraDevice/CameraDeviceMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraDeviceMode_t31CE15C1D60CED5FC63DF3962D53D5DAADD40589, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERADEVICEMODE_T31CE15C1D60CED5FC63DF3962D53D5DAADD40589_H
#ifndef CAMERADIRECTION_T99A7DDFDD0655039A53CB7B65650BF9C584F427C_H
#define CAMERADIRECTION_T99A7DDFDD0655039A53CB7B65650BF9C584F427C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/CameraDirection
struct  CameraDirection_t99A7DDFDD0655039A53CB7B65650BF9C584F427C 
{
public:
	// System.Int32 Vuforia.CameraDevice/CameraDirection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraDirection_t99A7DDFDD0655039A53CB7B65650BF9C584F427C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERADIRECTION_T99A7DDFDD0655039A53CB7B65650BF9C584F427C_H
#ifndef FOCUSMODE_T649DA432637F3552AFF51C0E9D5F7BFB478CA84E_H
#define FOCUSMODE_T649DA432637F3552AFF51C0E9D5F7BFB478CA84E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/FocusMode
struct  FocusMode_t649DA432637F3552AFF51C0E9D5F7BFB478CA84E 
{
public:
	// System.Int32 Vuforia.CameraDevice/FocusMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FocusMode_t649DA432637F3552AFF51C0E9D5F7BFB478CA84E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FOCUSMODE_T649DA432637F3552AFF51C0E9D5F7BFB478CA84E_H
#ifndef STEREOFRAMEWORK_T95A56F9A03F0EBAFFC34ABBE8309C936859E13BA_H
#define STEREOFRAMEWORK_T95A56F9A03F0EBAFFC34ABBE8309C936859E13BA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DigitalEyewearARController/StereoFramework
struct  StereoFramework_t95A56F9A03F0EBAFFC34ABBE8309C936859E13BA 
{
public:
	// System.Int32 Vuforia.DigitalEyewearARController/StereoFramework::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StereoFramework_t95A56F9A03F0EBAFFC34ABBE8309C936859E13BA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STEREOFRAMEWORK_T95A56F9A03F0EBAFFC34ABBE8309C936859E13BA_H
#ifndef MODE_T85FA3C2ABF84A0D6BB7742A375C9DA35140008AB_H
#define MODE_T85FA3C2ABF84A0D6BB7742A375C9DA35140008AB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.MixedRealityController/Mode
struct  Mode_t85FA3C2ABF84A0D6BB7742A375C9DA35140008AB 
{
public:
	// System.Int32 Vuforia.MixedRealityController/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t85FA3C2ABF84A0D6BB7742A375C9DA35140008AB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODE_T85FA3C2ABF84A0D6BB7742A375C9DA35140008AB_H
#ifndef WORLDCENTERMODE_T53E1430BD989A54F75332A2DA9D61C93545897E6_H
#define WORLDCENTERMODE_T53E1430BD989A54F75332A2DA9D61C93545897E6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaARController/WorldCenterMode
struct  WorldCenterMode_t53E1430BD989A54F75332A2DA9D61C93545897E6 
{
public:
	// System.Int32 Vuforia.VuforiaARController/WorldCenterMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WorldCenterMode_t53E1430BD989A54F75332A2DA9D61C93545897E6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORLDCENTERMODE_T53E1430BD989A54F75332A2DA9D61C93545897E6_H
#ifndef VIDEOBACKGROUNDREFLECTION_TBD028C69522ED582C56ECBB8246555DAFCDDC6EF_H
#define VIDEOBACKGROUNDREFLECTION_TBD028C69522ED582C56ECBB8246555DAFCDDC6EF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRenderer/VideoBackgroundReflection
struct  VideoBackgroundReflection_tBD028C69522ED582C56ECBB8246555DAFCDDC6EF 
{
public:
	// System.Int32 Vuforia.VuforiaRenderer/VideoBackgroundReflection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VideoBackgroundReflection_tBD028C69522ED582C56ECBB8246555DAFCDDC6EF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOBACKGROUNDREFLECTION_TBD028C69522ED582C56ECBB8246555DAFCDDC6EF_H
#ifndef WIN32EXCEPTION_TB05BE97AB4CADD54DF96C0109689F0ECA7517668_H
#define WIN32EXCEPTION_TB05BE97AB4CADD54DF96C0109689F0ECA7517668_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Win32Exception
struct  Win32Exception_tB05BE97AB4CADD54DF96C0109689F0ECA7517668  : public ExternalException_t68841FD169C0CB00CC950EDA7E2A59540D65B1CE
{
public:
	// System.Int32 System.ComponentModel.Win32Exception::nativeErrorCode
	int32_t ___nativeErrorCode_17;

public:
	inline static int32_t get_offset_of_nativeErrorCode_17() { return static_cast<int32_t>(offsetof(Win32Exception_tB05BE97AB4CADD54DF96C0109689F0ECA7517668, ___nativeErrorCode_17)); }
	inline int32_t get_nativeErrorCode_17() const { return ___nativeErrorCode_17; }
	inline int32_t* get_address_of_nativeErrorCode_17() { return &___nativeErrorCode_17; }
	inline void set_nativeErrorCode_17(int32_t value)
	{
		___nativeErrorCode_17 = value;
	}
};

struct Win32Exception_tB05BE97AB4CADD54DF96C0109689F0ECA7517668_StaticFields
{
public:
	// System.Boolean System.ComponentModel.Win32Exception::s_ErrorMessagesInitialized
	bool ___s_ErrorMessagesInitialized_18;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.String> System.ComponentModel.Win32Exception::s_ErrorMessage
	Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C * ___s_ErrorMessage_19;

public:
	inline static int32_t get_offset_of_s_ErrorMessagesInitialized_18() { return static_cast<int32_t>(offsetof(Win32Exception_tB05BE97AB4CADD54DF96C0109689F0ECA7517668_StaticFields, ___s_ErrorMessagesInitialized_18)); }
	inline bool get_s_ErrorMessagesInitialized_18() const { return ___s_ErrorMessagesInitialized_18; }
	inline bool* get_address_of_s_ErrorMessagesInitialized_18() { return &___s_ErrorMessagesInitialized_18; }
	inline void set_s_ErrorMessagesInitialized_18(bool value)
	{
		___s_ErrorMessagesInitialized_18 = value;
	}

	inline static int32_t get_offset_of_s_ErrorMessage_19() { return static_cast<int32_t>(offsetof(Win32Exception_tB05BE97AB4CADD54DF96C0109689F0ECA7517668_StaticFields, ___s_ErrorMessage_19)); }
	inline Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C * get_s_ErrorMessage_19() const { return ___s_ErrorMessage_19; }
	inline Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C ** get_address_of_s_ErrorMessage_19() { return &___s_ErrorMessage_19; }
	inline void set_s_ErrorMessage_19(Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C * value)
	{
		___s_ErrorMessage_19 = value;
		Il2CppCodeGenWriteBarrier((&___s_ErrorMessage_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32EXCEPTION_TB05BE97AB4CADD54DF96C0109689F0ECA7517668_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef IPADDRESS_T77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_H
#define IPADDRESS_T77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.IPAddress
struct  IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE  : public RuntimeObject
{
public:
	// System.Int64 System.Net.IPAddress::m_Address
	int64_t ___m_Address_5;
	// System.String System.Net.IPAddress::m_ToString
	String_t* ___m_ToString_6;
	// System.Net.Sockets.AddressFamily System.Net.IPAddress::m_Family
	int32_t ___m_Family_10;
	// System.UInt16[] System.Net.IPAddress::m_Numbers
	UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* ___m_Numbers_11;
	// System.Int64 System.Net.IPAddress::m_ScopeId
	int64_t ___m_ScopeId_12;
	// System.Int32 System.Net.IPAddress::m_HashCode
	int32_t ___m_HashCode_13;

public:
	inline static int32_t get_offset_of_m_Address_5() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_Address_5)); }
	inline int64_t get_m_Address_5() const { return ___m_Address_5; }
	inline int64_t* get_address_of_m_Address_5() { return &___m_Address_5; }
	inline void set_m_Address_5(int64_t value)
	{
		___m_Address_5 = value;
	}

	inline static int32_t get_offset_of_m_ToString_6() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_ToString_6)); }
	inline String_t* get_m_ToString_6() const { return ___m_ToString_6; }
	inline String_t** get_address_of_m_ToString_6() { return &___m_ToString_6; }
	inline void set_m_ToString_6(String_t* value)
	{
		___m_ToString_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_ToString_6), value);
	}

	inline static int32_t get_offset_of_m_Family_10() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_Family_10)); }
	inline int32_t get_m_Family_10() const { return ___m_Family_10; }
	inline int32_t* get_address_of_m_Family_10() { return &___m_Family_10; }
	inline void set_m_Family_10(int32_t value)
	{
		___m_Family_10 = value;
	}

	inline static int32_t get_offset_of_m_Numbers_11() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_Numbers_11)); }
	inline UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* get_m_Numbers_11() const { return ___m_Numbers_11; }
	inline UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E** get_address_of_m_Numbers_11() { return &___m_Numbers_11; }
	inline void set_m_Numbers_11(UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* value)
	{
		___m_Numbers_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Numbers_11), value);
	}

	inline static int32_t get_offset_of_m_ScopeId_12() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_ScopeId_12)); }
	inline int64_t get_m_ScopeId_12() const { return ___m_ScopeId_12; }
	inline int64_t* get_address_of_m_ScopeId_12() { return &___m_ScopeId_12; }
	inline void set_m_ScopeId_12(int64_t value)
	{
		___m_ScopeId_12 = value;
	}

	inline static int32_t get_offset_of_m_HashCode_13() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_HashCode_13)); }
	inline int32_t get_m_HashCode_13() const { return ___m_HashCode_13; }
	inline int32_t* get_address_of_m_HashCode_13() { return &___m_HashCode_13; }
	inline void set_m_HashCode_13(int32_t value)
	{
		___m_HashCode_13 = value;
	}
};

struct IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields
{
public:
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___IPv6Any_7;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___IPv6Loopback_8;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___IPv6None_9;

public:
	inline static int32_t get_offset_of_Any_0() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___Any_0)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_Any_0() const { return ___Any_0; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_Any_0() { return &___Any_0; }
	inline void set_Any_0(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___Any_0 = value;
		Il2CppCodeGenWriteBarrier((&___Any_0), value);
	}

	inline static int32_t get_offset_of_Loopback_1() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___Loopback_1)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_Loopback_1() const { return ___Loopback_1; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_Loopback_1() { return &___Loopback_1; }
	inline void set_Loopback_1(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___Loopback_1 = value;
		Il2CppCodeGenWriteBarrier((&___Loopback_1), value);
	}

	inline static int32_t get_offset_of_Broadcast_2() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___Broadcast_2)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_Broadcast_2() const { return ___Broadcast_2; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_Broadcast_2() { return &___Broadcast_2; }
	inline void set_Broadcast_2(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___Broadcast_2 = value;
		Il2CppCodeGenWriteBarrier((&___Broadcast_2), value);
	}

	inline static int32_t get_offset_of_None_3() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___None_3)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_None_3() const { return ___None_3; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_None_3() { return &___None_3; }
	inline void set_None_3(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___None_3 = value;
		Il2CppCodeGenWriteBarrier((&___None_3), value);
	}

	inline static int32_t get_offset_of_IPv6Any_7() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___IPv6Any_7)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_IPv6Any_7() const { return ___IPv6Any_7; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_IPv6Any_7() { return &___IPv6Any_7; }
	inline void set_IPv6Any_7(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___IPv6Any_7 = value;
		Il2CppCodeGenWriteBarrier((&___IPv6Any_7), value);
	}

	inline static int32_t get_offset_of_IPv6Loopback_8() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___IPv6Loopback_8)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_IPv6Loopback_8() const { return ___IPv6Loopback_8; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_IPv6Loopback_8() { return &___IPv6Loopback_8; }
	inline void set_IPv6Loopback_8(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___IPv6Loopback_8 = value;
		Il2CppCodeGenWriteBarrier((&___IPv6Loopback_8), value);
	}

	inline static int32_t get_offset_of_IPv6None_9() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___IPv6None_9)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_IPv6None_9() const { return ___IPv6None_9; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_IPv6None_9() { return &___IPv6None_9; }
	inline void set_IPv6None_9(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___IPv6None_9 = value;
		Il2CppCodeGenWriteBarrier((&___IPv6None_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IPADDRESS_T77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_H
#ifndef SOCKET_T47148BFA7740C9C45A69F2F3722F734B9DCA45D8_H
#define SOCKET_T47148BFA7740C9C45A69F2F3722F734B9DCA45D8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.Socket
struct  Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8  : public RuntimeObject
{
public:
	// System.Boolean System.Net.Sockets.Socket::is_closed
	bool ___is_closed_10;
	// System.Boolean System.Net.Sockets.Socket::is_listening
	bool ___is_listening_11;
	// System.Boolean System.Net.Sockets.Socket::useOverlappedIO
	bool ___useOverlappedIO_12;
	// System.Int32 System.Net.Sockets.Socket::linger_timeout
	int32_t ___linger_timeout_13;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::addressFamily
	int32_t ___addressFamily_14;
	// System.Net.Sockets.SocketType System.Net.Sockets.Socket::socketType
	int32_t ___socketType_15;
	// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::protocolType
	int32_t ___protocolType_16;
	// System.Net.Sockets.SafeSocketHandle System.Net.Sockets.Socket::m_Handle
	SafeSocketHandle_t9A33B4DCE2012075A5D6D355D323A05E7F16329A * ___m_Handle_17;
	// System.Net.EndPoint System.Net.Sockets.Socket::seed_endpoint
	EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * ___seed_endpoint_18;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::ReadSem
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ___ReadSem_19;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::WriteSem
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ___WriteSem_20;
	// System.Boolean System.Net.Sockets.Socket::is_blocking
	bool ___is_blocking_21;
	// System.Boolean System.Net.Sockets.Socket::is_bound
	bool ___is_bound_22;
	// System.Boolean System.Net.Sockets.Socket::is_connected
	bool ___is_connected_23;
	// System.Int32 System.Net.Sockets.Socket::m_IntCleanedUp
	int32_t ___m_IntCleanedUp_24;
	// System.Boolean System.Net.Sockets.Socket::connect_in_progress
	bool ___connect_in_progress_25;

public:
	inline static int32_t get_offset_of_is_closed_10() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___is_closed_10)); }
	inline bool get_is_closed_10() const { return ___is_closed_10; }
	inline bool* get_address_of_is_closed_10() { return &___is_closed_10; }
	inline void set_is_closed_10(bool value)
	{
		___is_closed_10 = value;
	}

	inline static int32_t get_offset_of_is_listening_11() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___is_listening_11)); }
	inline bool get_is_listening_11() const { return ___is_listening_11; }
	inline bool* get_address_of_is_listening_11() { return &___is_listening_11; }
	inline void set_is_listening_11(bool value)
	{
		___is_listening_11 = value;
	}

	inline static int32_t get_offset_of_useOverlappedIO_12() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___useOverlappedIO_12)); }
	inline bool get_useOverlappedIO_12() const { return ___useOverlappedIO_12; }
	inline bool* get_address_of_useOverlappedIO_12() { return &___useOverlappedIO_12; }
	inline void set_useOverlappedIO_12(bool value)
	{
		___useOverlappedIO_12 = value;
	}

	inline static int32_t get_offset_of_linger_timeout_13() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___linger_timeout_13)); }
	inline int32_t get_linger_timeout_13() const { return ___linger_timeout_13; }
	inline int32_t* get_address_of_linger_timeout_13() { return &___linger_timeout_13; }
	inline void set_linger_timeout_13(int32_t value)
	{
		___linger_timeout_13 = value;
	}

	inline static int32_t get_offset_of_addressFamily_14() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___addressFamily_14)); }
	inline int32_t get_addressFamily_14() const { return ___addressFamily_14; }
	inline int32_t* get_address_of_addressFamily_14() { return &___addressFamily_14; }
	inline void set_addressFamily_14(int32_t value)
	{
		___addressFamily_14 = value;
	}

	inline static int32_t get_offset_of_socketType_15() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___socketType_15)); }
	inline int32_t get_socketType_15() const { return ___socketType_15; }
	inline int32_t* get_address_of_socketType_15() { return &___socketType_15; }
	inline void set_socketType_15(int32_t value)
	{
		___socketType_15 = value;
	}

	inline static int32_t get_offset_of_protocolType_16() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___protocolType_16)); }
	inline int32_t get_protocolType_16() const { return ___protocolType_16; }
	inline int32_t* get_address_of_protocolType_16() { return &___protocolType_16; }
	inline void set_protocolType_16(int32_t value)
	{
		___protocolType_16 = value;
	}

	inline static int32_t get_offset_of_m_Handle_17() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___m_Handle_17)); }
	inline SafeSocketHandle_t9A33B4DCE2012075A5D6D355D323A05E7F16329A * get_m_Handle_17() const { return ___m_Handle_17; }
	inline SafeSocketHandle_t9A33B4DCE2012075A5D6D355D323A05E7F16329A ** get_address_of_m_Handle_17() { return &___m_Handle_17; }
	inline void set_m_Handle_17(SafeSocketHandle_t9A33B4DCE2012075A5D6D355D323A05E7F16329A * value)
	{
		___m_Handle_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_Handle_17), value);
	}

	inline static int32_t get_offset_of_seed_endpoint_18() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___seed_endpoint_18)); }
	inline EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * get_seed_endpoint_18() const { return ___seed_endpoint_18; }
	inline EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 ** get_address_of_seed_endpoint_18() { return &___seed_endpoint_18; }
	inline void set_seed_endpoint_18(EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * value)
	{
		___seed_endpoint_18 = value;
		Il2CppCodeGenWriteBarrier((&___seed_endpoint_18), value);
	}

	inline static int32_t get_offset_of_ReadSem_19() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___ReadSem_19)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get_ReadSem_19() const { return ___ReadSem_19; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of_ReadSem_19() { return &___ReadSem_19; }
	inline void set_ReadSem_19(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		___ReadSem_19 = value;
		Il2CppCodeGenWriteBarrier((&___ReadSem_19), value);
	}

	inline static int32_t get_offset_of_WriteSem_20() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___WriteSem_20)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get_WriteSem_20() const { return ___WriteSem_20; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of_WriteSem_20() { return &___WriteSem_20; }
	inline void set_WriteSem_20(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		___WriteSem_20 = value;
		Il2CppCodeGenWriteBarrier((&___WriteSem_20), value);
	}

	inline static int32_t get_offset_of_is_blocking_21() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___is_blocking_21)); }
	inline bool get_is_blocking_21() const { return ___is_blocking_21; }
	inline bool* get_address_of_is_blocking_21() { return &___is_blocking_21; }
	inline void set_is_blocking_21(bool value)
	{
		___is_blocking_21 = value;
	}

	inline static int32_t get_offset_of_is_bound_22() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___is_bound_22)); }
	inline bool get_is_bound_22() const { return ___is_bound_22; }
	inline bool* get_address_of_is_bound_22() { return &___is_bound_22; }
	inline void set_is_bound_22(bool value)
	{
		___is_bound_22 = value;
	}

	inline static int32_t get_offset_of_is_connected_23() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___is_connected_23)); }
	inline bool get_is_connected_23() const { return ___is_connected_23; }
	inline bool* get_address_of_is_connected_23() { return &___is_connected_23; }
	inline void set_is_connected_23(bool value)
	{
		___is_connected_23 = value;
	}

	inline static int32_t get_offset_of_m_IntCleanedUp_24() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___m_IntCleanedUp_24)); }
	inline int32_t get_m_IntCleanedUp_24() const { return ___m_IntCleanedUp_24; }
	inline int32_t* get_address_of_m_IntCleanedUp_24() { return &___m_IntCleanedUp_24; }
	inline void set_m_IntCleanedUp_24(int32_t value)
	{
		___m_IntCleanedUp_24 = value;
	}

	inline static int32_t get_offset_of_connect_in_progress_25() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___connect_in_progress_25)); }
	inline bool get_connect_in_progress_25() const { return ___connect_in_progress_25; }
	inline bool* get_address_of_connect_in_progress_25() { return &___connect_in_progress_25; }
	inline void set_connect_in_progress_25(bool value)
	{
		___connect_in_progress_25 = value;
	}
};

struct Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields
{
public:
	// System.Object System.Net.Sockets.Socket::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_0;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv4
	bool ___s_SupportsIPv4_1;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv6
	bool ___s_SupportsIPv6_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_OSSupportsIPv6
	bool ___s_OSSupportsIPv6_3;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_Initialized
	bool ___s_Initialized_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_LoggingEnabled
	bool ___s_LoggingEnabled_5;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_PerfCountersEnabled
	bool ___s_PerfCountersEnabled_6;
	// System.AsyncCallback System.Net.Sockets.Socket::AcceptAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___AcceptAsyncCallback_26;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginAcceptCallback_27;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptReceiveCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginAcceptReceiveCallback_28;
	// System.AsyncCallback System.Net.Sockets.Socket::ConnectAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___ConnectAsyncCallback_29;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginConnectCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginConnectCallback_30;
	// System.AsyncCallback System.Net.Sockets.Socket::DisconnectAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___DisconnectAsyncCallback_31;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginDisconnectCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginDisconnectCallback_32;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___ReceiveAsyncCallback_33;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginReceiveCallback_34;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveGenericCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginReceiveGenericCallback_35;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveFromAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___ReceiveFromAsyncCallback_36;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveFromCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginReceiveFromCallback_37;
	// System.AsyncCallback System.Net.Sockets.Socket::SendAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___SendAsyncCallback_38;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginSendGenericCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginSendGenericCallback_39;
	// System.AsyncCallback System.Net.Sockets.Socket::SendToAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___SendToAsyncCallback_40;

public:
	inline static int32_t get_offset_of_s_InternalSyncObject_0() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_InternalSyncObject_0)); }
	inline RuntimeObject * get_s_InternalSyncObject_0() const { return ___s_InternalSyncObject_0; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_0() { return &___s_InternalSyncObject_0; }
	inline void set_s_InternalSyncObject_0(RuntimeObject * value)
	{
		___s_InternalSyncObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_InternalSyncObject_0), value);
	}

	inline static int32_t get_offset_of_s_SupportsIPv4_1() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_SupportsIPv4_1)); }
	inline bool get_s_SupportsIPv4_1() const { return ___s_SupportsIPv4_1; }
	inline bool* get_address_of_s_SupportsIPv4_1() { return &___s_SupportsIPv4_1; }
	inline void set_s_SupportsIPv4_1(bool value)
	{
		___s_SupportsIPv4_1 = value;
	}

	inline static int32_t get_offset_of_s_SupportsIPv6_2() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_SupportsIPv6_2)); }
	inline bool get_s_SupportsIPv6_2() const { return ___s_SupportsIPv6_2; }
	inline bool* get_address_of_s_SupportsIPv6_2() { return &___s_SupportsIPv6_2; }
	inline void set_s_SupportsIPv6_2(bool value)
	{
		___s_SupportsIPv6_2 = value;
	}

	inline static int32_t get_offset_of_s_OSSupportsIPv6_3() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_OSSupportsIPv6_3)); }
	inline bool get_s_OSSupportsIPv6_3() const { return ___s_OSSupportsIPv6_3; }
	inline bool* get_address_of_s_OSSupportsIPv6_3() { return &___s_OSSupportsIPv6_3; }
	inline void set_s_OSSupportsIPv6_3(bool value)
	{
		___s_OSSupportsIPv6_3 = value;
	}

	inline static int32_t get_offset_of_s_Initialized_4() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_Initialized_4)); }
	inline bool get_s_Initialized_4() const { return ___s_Initialized_4; }
	inline bool* get_address_of_s_Initialized_4() { return &___s_Initialized_4; }
	inline void set_s_Initialized_4(bool value)
	{
		___s_Initialized_4 = value;
	}

	inline static int32_t get_offset_of_s_LoggingEnabled_5() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_LoggingEnabled_5)); }
	inline bool get_s_LoggingEnabled_5() const { return ___s_LoggingEnabled_5; }
	inline bool* get_address_of_s_LoggingEnabled_5() { return &___s_LoggingEnabled_5; }
	inline void set_s_LoggingEnabled_5(bool value)
	{
		___s_LoggingEnabled_5 = value;
	}

	inline static int32_t get_offset_of_s_PerfCountersEnabled_6() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_PerfCountersEnabled_6)); }
	inline bool get_s_PerfCountersEnabled_6() const { return ___s_PerfCountersEnabled_6; }
	inline bool* get_address_of_s_PerfCountersEnabled_6() { return &___s_PerfCountersEnabled_6; }
	inline void set_s_PerfCountersEnabled_6(bool value)
	{
		___s_PerfCountersEnabled_6 = value;
	}

	inline static int32_t get_offset_of_AcceptAsyncCallback_26() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___AcceptAsyncCallback_26)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_AcceptAsyncCallback_26() const { return ___AcceptAsyncCallback_26; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_AcceptAsyncCallback_26() { return &___AcceptAsyncCallback_26; }
	inline void set_AcceptAsyncCallback_26(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___AcceptAsyncCallback_26 = value;
		Il2CppCodeGenWriteBarrier((&___AcceptAsyncCallback_26), value);
	}

	inline static int32_t get_offset_of_BeginAcceptCallback_27() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginAcceptCallback_27)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginAcceptCallback_27() const { return ___BeginAcceptCallback_27; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginAcceptCallback_27() { return &___BeginAcceptCallback_27; }
	inline void set_BeginAcceptCallback_27(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginAcceptCallback_27 = value;
		Il2CppCodeGenWriteBarrier((&___BeginAcceptCallback_27), value);
	}

	inline static int32_t get_offset_of_BeginAcceptReceiveCallback_28() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginAcceptReceiveCallback_28)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginAcceptReceiveCallback_28() const { return ___BeginAcceptReceiveCallback_28; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginAcceptReceiveCallback_28() { return &___BeginAcceptReceiveCallback_28; }
	inline void set_BeginAcceptReceiveCallback_28(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginAcceptReceiveCallback_28 = value;
		Il2CppCodeGenWriteBarrier((&___BeginAcceptReceiveCallback_28), value);
	}

	inline static int32_t get_offset_of_ConnectAsyncCallback_29() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___ConnectAsyncCallback_29)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_ConnectAsyncCallback_29() const { return ___ConnectAsyncCallback_29; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_ConnectAsyncCallback_29() { return &___ConnectAsyncCallback_29; }
	inline void set_ConnectAsyncCallback_29(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___ConnectAsyncCallback_29 = value;
		Il2CppCodeGenWriteBarrier((&___ConnectAsyncCallback_29), value);
	}

	inline static int32_t get_offset_of_BeginConnectCallback_30() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginConnectCallback_30)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginConnectCallback_30() const { return ___BeginConnectCallback_30; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginConnectCallback_30() { return &___BeginConnectCallback_30; }
	inline void set_BeginConnectCallback_30(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginConnectCallback_30 = value;
		Il2CppCodeGenWriteBarrier((&___BeginConnectCallback_30), value);
	}

	inline static int32_t get_offset_of_DisconnectAsyncCallback_31() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___DisconnectAsyncCallback_31)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_DisconnectAsyncCallback_31() const { return ___DisconnectAsyncCallback_31; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_DisconnectAsyncCallback_31() { return &___DisconnectAsyncCallback_31; }
	inline void set_DisconnectAsyncCallback_31(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___DisconnectAsyncCallback_31 = value;
		Il2CppCodeGenWriteBarrier((&___DisconnectAsyncCallback_31), value);
	}

	inline static int32_t get_offset_of_BeginDisconnectCallback_32() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginDisconnectCallback_32)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginDisconnectCallback_32() const { return ___BeginDisconnectCallback_32; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginDisconnectCallback_32() { return &___BeginDisconnectCallback_32; }
	inline void set_BeginDisconnectCallback_32(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginDisconnectCallback_32 = value;
		Il2CppCodeGenWriteBarrier((&___BeginDisconnectCallback_32), value);
	}

	inline static int32_t get_offset_of_ReceiveAsyncCallback_33() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___ReceiveAsyncCallback_33)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_ReceiveAsyncCallback_33() const { return ___ReceiveAsyncCallback_33; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_ReceiveAsyncCallback_33() { return &___ReceiveAsyncCallback_33; }
	inline void set_ReceiveAsyncCallback_33(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___ReceiveAsyncCallback_33 = value;
		Il2CppCodeGenWriteBarrier((&___ReceiveAsyncCallback_33), value);
	}

	inline static int32_t get_offset_of_BeginReceiveCallback_34() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginReceiveCallback_34)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginReceiveCallback_34() const { return ___BeginReceiveCallback_34; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginReceiveCallback_34() { return &___BeginReceiveCallback_34; }
	inline void set_BeginReceiveCallback_34(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginReceiveCallback_34 = value;
		Il2CppCodeGenWriteBarrier((&___BeginReceiveCallback_34), value);
	}

	inline static int32_t get_offset_of_BeginReceiveGenericCallback_35() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginReceiveGenericCallback_35)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginReceiveGenericCallback_35() const { return ___BeginReceiveGenericCallback_35; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginReceiveGenericCallback_35() { return &___BeginReceiveGenericCallback_35; }
	inline void set_BeginReceiveGenericCallback_35(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginReceiveGenericCallback_35 = value;
		Il2CppCodeGenWriteBarrier((&___BeginReceiveGenericCallback_35), value);
	}

	inline static int32_t get_offset_of_ReceiveFromAsyncCallback_36() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___ReceiveFromAsyncCallback_36)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_ReceiveFromAsyncCallback_36() const { return ___ReceiveFromAsyncCallback_36; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_ReceiveFromAsyncCallback_36() { return &___ReceiveFromAsyncCallback_36; }
	inline void set_ReceiveFromAsyncCallback_36(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___ReceiveFromAsyncCallback_36 = value;
		Il2CppCodeGenWriteBarrier((&___ReceiveFromAsyncCallback_36), value);
	}

	inline static int32_t get_offset_of_BeginReceiveFromCallback_37() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginReceiveFromCallback_37)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginReceiveFromCallback_37() const { return ___BeginReceiveFromCallback_37; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginReceiveFromCallback_37() { return &___BeginReceiveFromCallback_37; }
	inline void set_BeginReceiveFromCallback_37(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginReceiveFromCallback_37 = value;
		Il2CppCodeGenWriteBarrier((&___BeginReceiveFromCallback_37), value);
	}

	inline static int32_t get_offset_of_SendAsyncCallback_38() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___SendAsyncCallback_38)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_SendAsyncCallback_38() const { return ___SendAsyncCallback_38; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_SendAsyncCallback_38() { return &___SendAsyncCallback_38; }
	inline void set_SendAsyncCallback_38(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___SendAsyncCallback_38 = value;
		Il2CppCodeGenWriteBarrier((&___SendAsyncCallback_38), value);
	}

	inline static int32_t get_offset_of_BeginSendGenericCallback_39() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginSendGenericCallback_39)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginSendGenericCallback_39() const { return ___BeginSendGenericCallback_39; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginSendGenericCallback_39() { return &___BeginSendGenericCallback_39; }
	inline void set_BeginSendGenericCallback_39(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginSendGenericCallback_39 = value;
		Il2CppCodeGenWriteBarrier((&___BeginSendGenericCallback_39), value);
	}

	inline static int32_t get_offset_of_SendToAsyncCallback_40() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___SendToAsyncCallback_40)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_SendToAsyncCallback_40() const { return ___SendToAsyncCallback_40; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_SendToAsyncCallback_40() { return &___SendToAsyncCallback_40; }
	inline void set_SendToAsyncCallback_40(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___SendToAsyncCallback_40 = value;
		Il2CppCodeGenWriteBarrier((&___SendToAsyncCallback_40), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKET_T47148BFA7740C9C45A69F2F3722F734B9DCA45D8_H
#ifndef UDPCLIENT_T94741C2FBA0D9E3270ABDDBA57811D00881D5641_H
#define UDPCLIENT_T94741C2FBA0D9E3270ABDDBA57811D00881D5641_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.UdpClient
struct  UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641  : public RuntimeObject
{
public:
	// System.Net.Sockets.Socket System.Net.Sockets.UdpClient::m_ClientSocket
	Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * ___m_ClientSocket_1;
	// System.Boolean System.Net.Sockets.UdpClient::m_Active
	bool ___m_Active_2;
	// System.Byte[] System.Net.Sockets.UdpClient::m_Buffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___m_Buffer_3;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.UdpClient::m_Family
	int32_t ___m_Family_4;
	// System.Boolean System.Net.Sockets.UdpClient::m_CleanedUp
	bool ___m_CleanedUp_5;
	// System.Boolean System.Net.Sockets.UdpClient::m_IsBroadcast
	bool ___m_IsBroadcast_6;

public:
	inline static int32_t get_offset_of_m_ClientSocket_1() { return static_cast<int32_t>(offsetof(UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641, ___m_ClientSocket_1)); }
	inline Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * get_m_ClientSocket_1() const { return ___m_ClientSocket_1; }
	inline Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 ** get_address_of_m_ClientSocket_1() { return &___m_ClientSocket_1; }
	inline void set_m_ClientSocket_1(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * value)
	{
		___m_ClientSocket_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ClientSocket_1), value);
	}

	inline static int32_t get_offset_of_m_Active_2() { return static_cast<int32_t>(offsetof(UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641, ___m_Active_2)); }
	inline bool get_m_Active_2() const { return ___m_Active_2; }
	inline bool* get_address_of_m_Active_2() { return &___m_Active_2; }
	inline void set_m_Active_2(bool value)
	{
		___m_Active_2 = value;
	}

	inline static int32_t get_offset_of_m_Buffer_3() { return static_cast<int32_t>(offsetof(UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641, ___m_Buffer_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_m_Buffer_3() const { return ___m_Buffer_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_m_Buffer_3() { return &___m_Buffer_3; }
	inline void set_m_Buffer_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___m_Buffer_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Buffer_3), value);
	}

	inline static int32_t get_offset_of_m_Family_4() { return static_cast<int32_t>(offsetof(UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641, ___m_Family_4)); }
	inline int32_t get_m_Family_4() const { return ___m_Family_4; }
	inline int32_t* get_address_of_m_Family_4() { return &___m_Family_4; }
	inline void set_m_Family_4(int32_t value)
	{
		___m_Family_4 = value;
	}

	inline static int32_t get_offset_of_m_CleanedUp_5() { return static_cast<int32_t>(offsetof(UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641, ___m_CleanedUp_5)); }
	inline bool get_m_CleanedUp_5() const { return ___m_CleanedUp_5; }
	inline bool* get_address_of_m_CleanedUp_5() { return &___m_CleanedUp_5; }
	inline void set_m_CleanedUp_5(bool value)
	{
		___m_CleanedUp_5 = value;
	}

	inline static int32_t get_offset_of_m_IsBroadcast_6() { return static_cast<int32_t>(offsetof(UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641, ___m_IsBroadcast_6)); }
	inline bool get_m_IsBroadcast_6() const { return ___m_IsBroadcast_6; }
	inline bool* get_address_of_m_IsBroadcast_6() { return &___m_IsBroadcast_6; }
	inline void set_m_IsBroadcast_6(bool value)
	{
		___m_IsBroadcast_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UDPCLIENT_T94741C2FBA0D9E3270ABDDBA57811D00881D5641_H
#ifndef COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#define COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifndef UNITYWEBREQUEST_T9120F5A2C7D43B936B49C0B7E4CA54C822689129_H
#define UNITYWEBREQUEST_T9120F5A2C7D43B936B49C0B7E4CA54C822689129_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.UnityWebRequest
struct  UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_DownloadHandler_1)); }
	inline DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_DownloadHandler_1), value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_UploadHandler_2)); }
	inline UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_UploadHandler_2), value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_CertificateHandler_3)); }
	inline CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_CertificateHandler_3), value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_Uri_4)); }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Uri_4), value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_com* ___m_CertificateHandler_3;
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
#endif // UNITYWEBREQUEST_T9120F5A2C7D43B936B49C0B7E4CA54C822689129_H
#ifndef UNITYWEBREQUESTASYNCOPERATION_T726E134F16701A2671D40BEBE22110DC57156353_H
#define UNITYWEBREQUESTASYNCOPERATION_T726E134F16701A2671D40BEBE22110DC57156353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct  UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353  : public AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * ___U3CwebRequestU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CwebRequestU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353, ___U3CwebRequestU3Ek__BackingField_2)); }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * get_U3CwebRequestU3Ek__BackingField_2() const { return ___U3CwebRequestU3Ek__BackingField_2; }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 ** get_address_of_U3CwebRequestU3Ek__BackingField_2() { return &___U3CwebRequestU3Ek__BackingField_2; }
	inline void set_U3CwebRequestU3Ek__BackingField_2(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * value)
	{
		___U3CwebRequestU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CwebRequestU3Ek__BackingField_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353_marshaled_pinvoke : public AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_pinvoke
{
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353_marshaled_com : public AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_com
{
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};
#endif // UNITYWEBREQUESTASYNCOPERATION_T726E134F16701A2671D40BEBE22110DC57156353_H
#ifndef CAMERADEVICE_TC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B_H
#define CAMERADEVICE_TC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice
struct  CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image> Vuforia.CameraDevice::mCameraImages
	Dictionary_2_t49253736D56E3666B7CCAAE565D303EDEC7C3EF2 * ___mCameraImages_1;
	// System.Collections.Generic.List`1<Vuforia.Image/PIXEL_FORMAT> Vuforia.CameraDevice::mForcedCameraFormats
	List_1_tCEBB35CD33D4B0F0D274B18B37FF981021B62739 * ___mForcedCameraFormats_2;
	// System.Boolean Vuforia.CameraDevice::mCameraReady
	bool ___mCameraReady_4;
	// System.Boolean Vuforia.CameraDevice::mIsDirty
	bool ___mIsDirty_5;
	// Vuforia.CameraDevice/CameraDirection Vuforia.CameraDevice::mActualCameraDirection
	int32_t ___mActualCameraDirection_6;
	// Vuforia.CameraDevice/CameraDirection Vuforia.CameraDevice::mSelectedCameraDirection
	int32_t ___mSelectedCameraDirection_7;
	// Vuforia.CameraDevice/CameraDeviceMode Vuforia.CameraDevice::mCameraDeviceMode
	int32_t ___mCameraDeviceMode_8;
	// Vuforia.CameraDevice/VideoModeData Vuforia.CameraDevice::mVideoModeData
	VideoModeData_t7BC59F654FEA6A276ACE52D08AA89A8438698C3D  ___mVideoModeData_9;
	// System.Boolean Vuforia.CameraDevice::mVideoModeDataNeedsUpdate
	bool ___mVideoModeDataNeedsUpdate_10;
	// System.Boolean Vuforia.CameraDevice::mHasCameraDeviceModeBeenSet
	bool ___mHasCameraDeviceModeBeenSet_11;
	// System.Boolean Vuforia.CameraDevice::mCameraActive
	bool ___mCameraActive_12;
	// System.Boolean Vuforia.CameraDevice::mIsCameraMocked
	bool ___mIsCameraMocked_13;

public:
	inline static int32_t get_offset_of_mCameraImages_1() { return static_cast<int32_t>(offsetof(CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B, ___mCameraImages_1)); }
	inline Dictionary_2_t49253736D56E3666B7CCAAE565D303EDEC7C3EF2 * get_mCameraImages_1() const { return ___mCameraImages_1; }
	inline Dictionary_2_t49253736D56E3666B7CCAAE565D303EDEC7C3EF2 ** get_address_of_mCameraImages_1() { return &___mCameraImages_1; }
	inline void set_mCameraImages_1(Dictionary_2_t49253736D56E3666B7CCAAE565D303EDEC7C3EF2 * value)
	{
		___mCameraImages_1 = value;
		Il2CppCodeGenWriteBarrier((&___mCameraImages_1), value);
	}

	inline static int32_t get_offset_of_mForcedCameraFormats_2() { return static_cast<int32_t>(offsetof(CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B, ___mForcedCameraFormats_2)); }
	inline List_1_tCEBB35CD33D4B0F0D274B18B37FF981021B62739 * get_mForcedCameraFormats_2() const { return ___mForcedCameraFormats_2; }
	inline List_1_tCEBB35CD33D4B0F0D274B18B37FF981021B62739 ** get_address_of_mForcedCameraFormats_2() { return &___mForcedCameraFormats_2; }
	inline void set_mForcedCameraFormats_2(List_1_tCEBB35CD33D4B0F0D274B18B37FF981021B62739 * value)
	{
		___mForcedCameraFormats_2 = value;
		Il2CppCodeGenWriteBarrier((&___mForcedCameraFormats_2), value);
	}

	inline static int32_t get_offset_of_mCameraReady_4() { return static_cast<int32_t>(offsetof(CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B, ___mCameraReady_4)); }
	inline bool get_mCameraReady_4() const { return ___mCameraReady_4; }
	inline bool* get_address_of_mCameraReady_4() { return &___mCameraReady_4; }
	inline void set_mCameraReady_4(bool value)
	{
		___mCameraReady_4 = value;
	}

	inline static int32_t get_offset_of_mIsDirty_5() { return static_cast<int32_t>(offsetof(CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B, ___mIsDirty_5)); }
	inline bool get_mIsDirty_5() const { return ___mIsDirty_5; }
	inline bool* get_address_of_mIsDirty_5() { return &___mIsDirty_5; }
	inline void set_mIsDirty_5(bool value)
	{
		___mIsDirty_5 = value;
	}

	inline static int32_t get_offset_of_mActualCameraDirection_6() { return static_cast<int32_t>(offsetof(CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B, ___mActualCameraDirection_6)); }
	inline int32_t get_mActualCameraDirection_6() const { return ___mActualCameraDirection_6; }
	inline int32_t* get_address_of_mActualCameraDirection_6() { return &___mActualCameraDirection_6; }
	inline void set_mActualCameraDirection_6(int32_t value)
	{
		___mActualCameraDirection_6 = value;
	}

	inline static int32_t get_offset_of_mSelectedCameraDirection_7() { return static_cast<int32_t>(offsetof(CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B, ___mSelectedCameraDirection_7)); }
	inline int32_t get_mSelectedCameraDirection_7() const { return ___mSelectedCameraDirection_7; }
	inline int32_t* get_address_of_mSelectedCameraDirection_7() { return &___mSelectedCameraDirection_7; }
	inline void set_mSelectedCameraDirection_7(int32_t value)
	{
		___mSelectedCameraDirection_7 = value;
	}

	inline static int32_t get_offset_of_mCameraDeviceMode_8() { return static_cast<int32_t>(offsetof(CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B, ___mCameraDeviceMode_8)); }
	inline int32_t get_mCameraDeviceMode_8() const { return ___mCameraDeviceMode_8; }
	inline int32_t* get_address_of_mCameraDeviceMode_8() { return &___mCameraDeviceMode_8; }
	inline void set_mCameraDeviceMode_8(int32_t value)
	{
		___mCameraDeviceMode_8 = value;
	}

	inline static int32_t get_offset_of_mVideoModeData_9() { return static_cast<int32_t>(offsetof(CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B, ___mVideoModeData_9)); }
	inline VideoModeData_t7BC59F654FEA6A276ACE52D08AA89A8438698C3D  get_mVideoModeData_9() const { return ___mVideoModeData_9; }
	inline VideoModeData_t7BC59F654FEA6A276ACE52D08AA89A8438698C3D * get_address_of_mVideoModeData_9() { return &___mVideoModeData_9; }
	inline void set_mVideoModeData_9(VideoModeData_t7BC59F654FEA6A276ACE52D08AA89A8438698C3D  value)
	{
		___mVideoModeData_9 = value;
	}

	inline static int32_t get_offset_of_mVideoModeDataNeedsUpdate_10() { return static_cast<int32_t>(offsetof(CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B, ___mVideoModeDataNeedsUpdate_10)); }
	inline bool get_mVideoModeDataNeedsUpdate_10() const { return ___mVideoModeDataNeedsUpdate_10; }
	inline bool* get_address_of_mVideoModeDataNeedsUpdate_10() { return &___mVideoModeDataNeedsUpdate_10; }
	inline void set_mVideoModeDataNeedsUpdate_10(bool value)
	{
		___mVideoModeDataNeedsUpdate_10 = value;
	}

	inline static int32_t get_offset_of_mHasCameraDeviceModeBeenSet_11() { return static_cast<int32_t>(offsetof(CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B, ___mHasCameraDeviceModeBeenSet_11)); }
	inline bool get_mHasCameraDeviceModeBeenSet_11() const { return ___mHasCameraDeviceModeBeenSet_11; }
	inline bool* get_address_of_mHasCameraDeviceModeBeenSet_11() { return &___mHasCameraDeviceModeBeenSet_11; }
	inline void set_mHasCameraDeviceModeBeenSet_11(bool value)
	{
		___mHasCameraDeviceModeBeenSet_11 = value;
	}

	inline static int32_t get_offset_of_mCameraActive_12() { return static_cast<int32_t>(offsetof(CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B, ___mCameraActive_12)); }
	inline bool get_mCameraActive_12() const { return ___mCameraActive_12; }
	inline bool* get_address_of_mCameraActive_12() { return &___mCameraActive_12; }
	inline void set_mCameraActive_12(bool value)
	{
		___mCameraActive_12 = value;
	}

	inline static int32_t get_offset_of_mIsCameraMocked_13() { return static_cast<int32_t>(offsetof(CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B, ___mIsCameraMocked_13)); }
	inline bool get_mIsCameraMocked_13() const { return ___mIsCameraMocked_13; }
	inline bool* get_address_of_mIsCameraMocked_13() { return &___mIsCameraMocked_13; }
	inline void set_mIsCameraMocked_13(bool value)
	{
		___mIsCameraMocked_13 = value;
	}
};

struct CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B_StaticFields
{
public:
	// Vuforia.CameraDevice Vuforia.CameraDevice::mInstance
	CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B * ___mInstance_0;
	// Vuforia.IWebCam Vuforia.CameraDevice::mWebCam
	RuntimeObject* ___mWebCam_3;

public:
	inline static int32_t get_offset_of_mInstance_0() { return static_cast<int32_t>(offsetof(CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B_StaticFields, ___mInstance_0)); }
	inline CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B * get_mInstance_0() const { return ___mInstance_0; }
	inline CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B ** get_address_of_mInstance_0() { return &___mInstance_0; }
	inline void set_mInstance_0(CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B * value)
	{
		___mInstance_0 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_0), value);
	}

	inline static int32_t get_offset_of_mWebCam_3() { return static_cast<int32_t>(offsetof(CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B_StaticFields, ___mWebCam_3)); }
	inline RuntimeObject* get_mWebCam_3() const { return ___mWebCam_3; }
	inline RuntimeObject** get_address_of_mWebCam_3() { return &___mWebCam_3; }
	inline void set_mWebCam_3(RuntimeObject* value)
	{
		___mWebCam_3 = value;
		Il2CppCodeGenWriteBarrier((&___mWebCam_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERADEVICE_TC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B_H
#ifndef MIXEDREALITYCONTROLLER_T140A79CE6381E61D93A6C265DCC7A50522A901BE_H
#define MIXEDREALITYCONTROLLER_T140A79CE6381E61D93A6C265DCC7A50522A901BE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.MixedRealityController
struct  MixedRealityController_t140A79CE6381E61D93A6C265DCC7A50522A901BE  : public RuntimeObject
{
public:
	// Vuforia.VuforiaARController Vuforia.MixedRealityController::mVuforiaBehaviour
	VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876 * ___mVuforiaBehaviour_2;
	// Vuforia.DigitalEyewearARController Vuforia.MixedRealityController::mDigitalEyewearBehaviour
	DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4 * ___mDigitalEyewearBehaviour_3;
	// Vuforia.VideoBackgroundManager Vuforia.MixedRealityController::mVideoBackgroundManager
	VideoBackgroundManager_tDCE9A898A17B3C5ED63C8BDE29A4455C4074BD50 * ___mVideoBackgroundManager_4;
	// System.Boolean Vuforia.MixedRealityController::mViewerHasBeenSetExternally
	bool ___mViewerHasBeenSetExternally_5;
	// Vuforia.IViewerParameters Vuforia.MixedRealityController::mViewerParameters
	RuntimeObject* ___mViewerParameters_6;
	// System.Boolean Vuforia.MixedRealityController::mFrameWorkHasBeenSetExternally
	bool ___mFrameWorkHasBeenSetExternally_7;
	// Vuforia.DigitalEyewearARController/StereoFramework Vuforia.MixedRealityController::mStereoFramework
	int32_t ___mStereoFramework_8;
	// System.Boolean Vuforia.MixedRealityController::mObjectTrackerStopped
	bool ___mObjectTrackerStopped_9;
	// System.Boolean Vuforia.MixedRealityController::mAutoStopCameraIfNotRequired
	bool ___mAutoStopCameraIfNotRequired_10;

public:
	inline static int32_t get_offset_of_mVuforiaBehaviour_2() { return static_cast<int32_t>(offsetof(MixedRealityController_t140A79CE6381E61D93A6C265DCC7A50522A901BE, ___mVuforiaBehaviour_2)); }
	inline VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876 * get_mVuforiaBehaviour_2() const { return ___mVuforiaBehaviour_2; }
	inline VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876 ** get_address_of_mVuforiaBehaviour_2() { return &___mVuforiaBehaviour_2; }
	inline void set_mVuforiaBehaviour_2(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876 * value)
	{
		___mVuforiaBehaviour_2 = value;
		Il2CppCodeGenWriteBarrier((&___mVuforiaBehaviour_2), value);
	}

	inline static int32_t get_offset_of_mDigitalEyewearBehaviour_3() { return static_cast<int32_t>(offsetof(MixedRealityController_t140A79CE6381E61D93A6C265DCC7A50522A901BE, ___mDigitalEyewearBehaviour_3)); }
	inline DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4 * get_mDigitalEyewearBehaviour_3() const { return ___mDigitalEyewearBehaviour_3; }
	inline DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4 ** get_address_of_mDigitalEyewearBehaviour_3() { return &___mDigitalEyewearBehaviour_3; }
	inline void set_mDigitalEyewearBehaviour_3(DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4 * value)
	{
		___mDigitalEyewearBehaviour_3 = value;
		Il2CppCodeGenWriteBarrier((&___mDigitalEyewearBehaviour_3), value);
	}

	inline static int32_t get_offset_of_mVideoBackgroundManager_4() { return static_cast<int32_t>(offsetof(MixedRealityController_t140A79CE6381E61D93A6C265DCC7A50522A901BE, ___mVideoBackgroundManager_4)); }
	inline VideoBackgroundManager_tDCE9A898A17B3C5ED63C8BDE29A4455C4074BD50 * get_mVideoBackgroundManager_4() const { return ___mVideoBackgroundManager_4; }
	inline VideoBackgroundManager_tDCE9A898A17B3C5ED63C8BDE29A4455C4074BD50 ** get_address_of_mVideoBackgroundManager_4() { return &___mVideoBackgroundManager_4; }
	inline void set_mVideoBackgroundManager_4(VideoBackgroundManager_tDCE9A898A17B3C5ED63C8BDE29A4455C4074BD50 * value)
	{
		___mVideoBackgroundManager_4 = value;
		Il2CppCodeGenWriteBarrier((&___mVideoBackgroundManager_4), value);
	}

	inline static int32_t get_offset_of_mViewerHasBeenSetExternally_5() { return static_cast<int32_t>(offsetof(MixedRealityController_t140A79CE6381E61D93A6C265DCC7A50522A901BE, ___mViewerHasBeenSetExternally_5)); }
	inline bool get_mViewerHasBeenSetExternally_5() const { return ___mViewerHasBeenSetExternally_5; }
	inline bool* get_address_of_mViewerHasBeenSetExternally_5() { return &___mViewerHasBeenSetExternally_5; }
	inline void set_mViewerHasBeenSetExternally_5(bool value)
	{
		___mViewerHasBeenSetExternally_5 = value;
	}

	inline static int32_t get_offset_of_mViewerParameters_6() { return static_cast<int32_t>(offsetof(MixedRealityController_t140A79CE6381E61D93A6C265DCC7A50522A901BE, ___mViewerParameters_6)); }
	inline RuntimeObject* get_mViewerParameters_6() const { return ___mViewerParameters_6; }
	inline RuntimeObject** get_address_of_mViewerParameters_6() { return &___mViewerParameters_6; }
	inline void set_mViewerParameters_6(RuntimeObject* value)
	{
		___mViewerParameters_6 = value;
		Il2CppCodeGenWriteBarrier((&___mViewerParameters_6), value);
	}

	inline static int32_t get_offset_of_mFrameWorkHasBeenSetExternally_7() { return static_cast<int32_t>(offsetof(MixedRealityController_t140A79CE6381E61D93A6C265DCC7A50522A901BE, ___mFrameWorkHasBeenSetExternally_7)); }
	inline bool get_mFrameWorkHasBeenSetExternally_7() const { return ___mFrameWorkHasBeenSetExternally_7; }
	inline bool* get_address_of_mFrameWorkHasBeenSetExternally_7() { return &___mFrameWorkHasBeenSetExternally_7; }
	inline void set_mFrameWorkHasBeenSetExternally_7(bool value)
	{
		___mFrameWorkHasBeenSetExternally_7 = value;
	}

	inline static int32_t get_offset_of_mStereoFramework_8() { return static_cast<int32_t>(offsetof(MixedRealityController_t140A79CE6381E61D93A6C265DCC7A50522A901BE, ___mStereoFramework_8)); }
	inline int32_t get_mStereoFramework_8() const { return ___mStereoFramework_8; }
	inline int32_t* get_address_of_mStereoFramework_8() { return &___mStereoFramework_8; }
	inline void set_mStereoFramework_8(int32_t value)
	{
		___mStereoFramework_8 = value;
	}

	inline static int32_t get_offset_of_mObjectTrackerStopped_9() { return static_cast<int32_t>(offsetof(MixedRealityController_t140A79CE6381E61D93A6C265DCC7A50522A901BE, ___mObjectTrackerStopped_9)); }
	inline bool get_mObjectTrackerStopped_9() const { return ___mObjectTrackerStopped_9; }
	inline bool* get_address_of_mObjectTrackerStopped_9() { return &___mObjectTrackerStopped_9; }
	inline void set_mObjectTrackerStopped_9(bool value)
	{
		___mObjectTrackerStopped_9 = value;
	}

	inline static int32_t get_offset_of_mAutoStopCameraIfNotRequired_10() { return static_cast<int32_t>(offsetof(MixedRealityController_t140A79CE6381E61D93A6C265DCC7A50522A901BE, ___mAutoStopCameraIfNotRequired_10)); }
	inline bool get_mAutoStopCameraIfNotRequired_10() const { return ___mAutoStopCameraIfNotRequired_10; }
	inline bool* get_address_of_mAutoStopCameraIfNotRequired_10() { return &___mAutoStopCameraIfNotRequired_10; }
	inline void set_mAutoStopCameraIfNotRequired_10(bool value)
	{
		___mAutoStopCameraIfNotRequired_10 = value;
	}
};

struct MixedRealityController_t140A79CE6381E61D93A6C265DCC7A50522A901BE_StaticFields
{
public:
	// Vuforia.MixedRealityController Vuforia.MixedRealityController::mInstance
	MixedRealityController_t140A79CE6381E61D93A6C265DCC7A50522A901BE * ___mInstance_1;

public:
	inline static int32_t get_offset_of_mInstance_1() { return static_cast<int32_t>(offsetof(MixedRealityController_t140A79CE6381E61D93A6C265DCC7A50522A901BE_StaticFields, ___mInstance_1)); }
	inline MixedRealityController_t140A79CE6381E61D93A6C265DCC7A50522A901BE * get_mInstance_1() const { return ___mInstance_1; }
	inline MixedRealityController_t140A79CE6381E61D93A6C265DCC7A50522A901BE ** get_address_of_mInstance_1() { return &___mInstance_1; }
	inline void set_mInstance_1(MixedRealityController_t140A79CE6381E61D93A6C265DCC7A50522A901BE * value)
	{
		___mInstance_1 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYCONTROLLER_T140A79CE6381E61D93A6C265DCC7A50522A901BE_H
#ifndef VUFORIAARCONTROLLER_T7732FFB77105A2F5BBEA40E3CECC5C15DA624876_H
#define VUFORIAARCONTROLLER_T7732FFB77105A2F5BBEA40E3CECC5C15DA624876_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaARController
struct  VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876  : public ARController_tBCF5CBE22AE2AD3FF6DCAC88E78FF7C929D91293
{
public:
	// Vuforia.CameraDevice/CameraDeviceMode Vuforia.VuforiaARController::CameraDeviceModeSetting
	int32_t ___CameraDeviceModeSetting_1;
	// System.Int32 Vuforia.VuforiaARController::MaxSimultaneousImageTargets
	int32_t ___MaxSimultaneousImageTargets_2;
	// System.Int32 Vuforia.VuforiaARController::MaxSimultaneousObjectTargets
	int32_t ___MaxSimultaneousObjectTargets_3;
	// System.Boolean Vuforia.VuforiaARController::UseDelayedLoadingObjectTargets
	bool ___UseDelayedLoadingObjectTargets_4;
	// Vuforia.CameraDevice/CameraDirection Vuforia.VuforiaARController::CameraDirection
	int32_t ___CameraDirection_5;
	// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaARController::MirrorVideoBackground
	int32_t ___MirrorVideoBackground_6;
	// Vuforia.VuforiaARController/WorldCenterMode Vuforia.VuforiaARController::mWorldCenterMode
	int32_t ___mWorldCenterMode_7;
	// Vuforia.TrackableBehaviour Vuforia.VuforiaARController::mWorldCenter
	TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4 * ___mWorldCenter_8;
	// System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler> Vuforia.VuforiaARController::mVideoBgEventHandlers
	List_1_t1314A3DDAE2D8AD81F9403BD961C3CC0530B04A9 * ___mVideoBgEventHandlers_9;
	// System.Action Vuforia.VuforiaARController::mOnBeforeVuforiaTrackersInitialized
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___mOnBeforeVuforiaTrackersInitialized_10;
	// System.Action Vuforia.VuforiaARController::mOnVuforiaInitialized
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___mOnVuforiaInitialized_11;
	// System.Action Vuforia.VuforiaARController::mOnVuforiaStarted
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___mOnVuforiaStarted_12;
	// System.Action Vuforia.VuforiaARController::mOnVuforiaDeinitialized
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___mOnVuforiaDeinitialized_13;
	// System.Action Vuforia.VuforiaARController::mOnTrackablesUpdated
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___mOnTrackablesUpdated_14;
	// System.Action Vuforia.VuforiaARController::mRenderOnUpdate
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___mRenderOnUpdate_15;
	// System.Action`1<System.Boolean> Vuforia.VuforiaARController::mOnPause
	Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___mOnPause_16;
	// System.Boolean Vuforia.VuforiaARController::mPaused
	bool ___mPaused_17;
	// System.Action Vuforia.VuforiaARController::mOnBackgroundTextureChanged
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___mOnBackgroundTextureChanged_18;
	// System.Boolean Vuforia.VuforiaARController::mStartHasBeenInvoked
	bool ___mStartHasBeenInvoked_19;
	// System.Boolean Vuforia.VuforiaARController::mHasStarted
	bool ___mHasStarted_20;
	// Vuforia.ICameraConfiguration Vuforia.VuforiaARController::mCameraConfiguration
	RuntimeObject* ___mCameraConfiguration_21;
	// Vuforia.DigitalEyewearARController Vuforia.VuforiaARController::mEyewearBehaviour
	DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4 * ___mEyewearBehaviour_22;
	// System.Boolean Vuforia.VuforiaARController::mCheckStopCamera
	bool ___mCheckStopCamera_23;
	// UnityEngine.Material Vuforia.VuforiaARController::mClearMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___mClearMaterial_24;
	// System.Boolean Vuforia.VuforiaARController::mMetalRendering
	bool ___mMetalRendering_25;
	// System.Boolean Vuforia.VuforiaARController::mHasStartedOnce
	bool ___mHasStartedOnce_26;
	// System.Boolean Vuforia.VuforiaARController::mWasEnabledBeforePause
	bool ___mWasEnabledBeforePause_27;
	// System.Boolean Vuforia.VuforiaARController::mObjectTrackerWasActiveBeforePause
	bool ___mObjectTrackerWasActiveBeforePause_28;
	// System.Boolean Vuforia.VuforiaARController::mObjectTrackerWasActiveBeforeDisabling
	bool ___mObjectTrackerWasActiveBeforeDisabling_29;
	// System.Int32 Vuforia.VuforiaARController::mLastUpdatedFrame
	int32_t ___mLastUpdatedFrame_30;

public:
	inline static int32_t get_offset_of_CameraDeviceModeSetting_1() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___CameraDeviceModeSetting_1)); }
	inline int32_t get_CameraDeviceModeSetting_1() const { return ___CameraDeviceModeSetting_1; }
	inline int32_t* get_address_of_CameraDeviceModeSetting_1() { return &___CameraDeviceModeSetting_1; }
	inline void set_CameraDeviceModeSetting_1(int32_t value)
	{
		___CameraDeviceModeSetting_1 = value;
	}

	inline static int32_t get_offset_of_MaxSimultaneousImageTargets_2() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___MaxSimultaneousImageTargets_2)); }
	inline int32_t get_MaxSimultaneousImageTargets_2() const { return ___MaxSimultaneousImageTargets_2; }
	inline int32_t* get_address_of_MaxSimultaneousImageTargets_2() { return &___MaxSimultaneousImageTargets_2; }
	inline void set_MaxSimultaneousImageTargets_2(int32_t value)
	{
		___MaxSimultaneousImageTargets_2 = value;
	}

	inline static int32_t get_offset_of_MaxSimultaneousObjectTargets_3() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___MaxSimultaneousObjectTargets_3)); }
	inline int32_t get_MaxSimultaneousObjectTargets_3() const { return ___MaxSimultaneousObjectTargets_3; }
	inline int32_t* get_address_of_MaxSimultaneousObjectTargets_3() { return &___MaxSimultaneousObjectTargets_3; }
	inline void set_MaxSimultaneousObjectTargets_3(int32_t value)
	{
		___MaxSimultaneousObjectTargets_3 = value;
	}

	inline static int32_t get_offset_of_UseDelayedLoadingObjectTargets_4() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___UseDelayedLoadingObjectTargets_4)); }
	inline bool get_UseDelayedLoadingObjectTargets_4() const { return ___UseDelayedLoadingObjectTargets_4; }
	inline bool* get_address_of_UseDelayedLoadingObjectTargets_4() { return &___UseDelayedLoadingObjectTargets_4; }
	inline void set_UseDelayedLoadingObjectTargets_4(bool value)
	{
		___UseDelayedLoadingObjectTargets_4 = value;
	}

	inline static int32_t get_offset_of_CameraDirection_5() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___CameraDirection_5)); }
	inline int32_t get_CameraDirection_5() const { return ___CameraDirection_5; }
	inline int32_t* get_address_of_CameraDirection_5() { return &___CameraDirection_5; }
	inline void set_CameraDirection_5(int32_t value)
	{
		___CameraDirection_5 = value;
	}

	inline static int32_t get_offset_of_MirrorVideoBackground_6() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___MirrorVideoBackground_6)); }
	inline int32_t get_MirrorVideoBackground_6() const { return ___MirrorVideoBackground_6; }
	inline int32_t* get_address_of_MirrorVideoBackground_6() { return &___MirrorVideoBackground_6; }
	inline void set_MirrorVideoBackground_6(int32_t value)
	{
		___MirrorVideoBackground_6 = value;
	}

	inline static int32_t get_offset_of_mWorldCenterMode_7() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___mWorldCenterMode_7)); }
	inline int32_t get_mWorldCenterMode_7() const { return ___mWorldCenterMode_7; }
	inline int32_t* get_address_of_mWorldCenterMode_7() { return &___mWorldCenterMode_7; }
	inline void set_mWorldCenterMode_7(int32_t value)
	{
		___mWorldCenterMode_7 = value;
	}

	inline static int32_t get_offset_of_mWorldCenter_8() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___mWorldCenter_8)); }
	inline TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4 * get_mWorldCenter_8() const { return ___mWorldCenter_8; }
	inline TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4 ** get_address_of_mWorldCenter_8() { return &___mWorldCenter_8; }
	inline void set_mWorldCenter_8(TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4 * value)
	{
		___mWorldCenter_8 = value;
		Il2CppCodeGenWriteBarrier((&___mWorldCenter_8), value);
	}

	inline static int32_t get_offset_of_mVideoBgEventHandlers_9() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___mVideoBgEventHandlers_9)); }
	inline List_1_t1314A3DDAE2D8AD81F9403BD961C3CC0530B04A9 * get_mVideoBgEventHandlers_9() const { return ___mVideoBgEventHandlers_9; }
	inline List_1_t1314A3DDAE2D8AD81F9403BD961C3CC0530B04A9 ** get_address_of_mVideoBgEventHandlers_9() { return &___mVideoBgEventHandlers_9; }
	inline void set_mVideoBgEventHandlers_9(List_1_t1314A3DDAE2D8AD81F9403BD961C3CC0530B04A9 * value)
	{
		___mVideoBgEventHandlers_9 = value;
		Il2CppCodeGenWriteBarrier((&___mVideoBgEventHandlers_9), value);
	}

	inline static int32_t get_offset_of_mOnBeforeVuforiaTrackersInitialized_10() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___mOnBeforeVuforiaTrackersInitialized_10)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_mOnBeforeVuforiaTrackersInitialized_10() const { return ___mOnBeforeVuforiaTrackersInitialized_10; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_mOnBeforeVuforiaTrackersInitialized_10() { return &___mOnBeforeVuforiaTrackersInitialized_10; }
	inline void set_mOnBeforeVuforiaTrackersInitialized_10(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___mOnBeforeVuforiaTrackersInitialized_10 = value;
		Il2CppCodeGenWriteBarrier((&___mOnBeforeVuforiaTrackersInitialized_10), value);
	}

	inline static int32_t get_offset_of_mOnVuforiaInitialized_11() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___mOnVuforiaInitialized_11)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_mOnVuforiaInitialized_11() const { return ___mOnVuforiaInitialized_11; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_mOnVuforiaInitialized_11() { return &___mOnVuforiaInitialized_11; }
	inline void set_mOnVuforiaInitialized_11(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___mOnVuforiaInitialized_11 = value;
		Il2CppCodeGenWriteBarrier((&___mOnVuforiaInitialized_11), value);
	}

	inline static int32_t get_offset_of_mOnVuforiaStarted_12() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___mOnVuforiaStarted_12)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_mOnVuforiaStarted_12() const { return ___mOnVuforiaStarted_12; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_mOnVuforiaStarted_12() { return &___mOnVuforiaStarted_12; }
	inline void set_mOnVuforiaStarted_12(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___mOnVuforiaStarted_12 = value;
		Il2CppCodeGenWriteBarrier((&___mOnVuforiaStarted_12), value);
	}

	inline static int32_t get_offset_of_mOnVuforiaDeinitialized_13() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___mOnVuforiaDeinitialized_13)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_mOnVuforiaDeinitialized_13() const { return ___mOnVuforiaDeinitialized_13; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_mOnVuforiaDeinitialized_13() { return &___mOnVuforiaDeinitialized_13; }
	inline void set_mOnVuforiaDeinitialized_13(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___mOnVuforiaDeinitialized_13 = value;
		Il2CppCodeGenWriteBarrier((&___mOnVuforiaDeinitialized_13), value);
	}

	inline static int32_t get_offset_of_mOnTrackablesUpdated_14() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___mOnTrackablesUpdated_14)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_mOnTrackablesUpdated_14() const { return ___mOnTrackablesUpdated_14; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_mOnTrackablesUpdated_14() { return &___mOnTrackablesUpdated_14; }
	inline void set_mOnTrackablesUpdated_14(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___mOnTrackablesUpdated_14 = value;
		Il2CppCodeGenWriteBarrier((&___mOnTrackablesUpdated_14), value);
	}

	inline static int32_t get_offset_of_mRenderOnUpdate_15() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___mRenderOnUpdate_15)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_mRenderOnUpdate_15() const { return ___mRenderOnUpdate_15; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_mRenderOnUpdate_15() { return &___mRenderOnUpdate_15; }
	inline void set_mRenderOnUpdate_15(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___mRenderOnUpdate_15 = value;
		Il2CppCodeGenWriteBarrier((&___mRenderOnUpdate_15), value);
	}

	inline static int32_t get_offset_of_mOnPause_16() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___mOnPause_16)); }
	inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * get_mOnPause_16() const { return ___mOnPause_16; }
	inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD ** get_address_of_mOnPause_16() { return &___mOnPause_16; }
	inline void set_mOnPause_16(Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * value)
	{
		___mOnPause_16 = value;
		Il2CppCodeGenWriteBarrier((&___mOnPause_16), value);
	}

	inline static int32_t get_offset_of_mPaused_17() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___mPaused_17)); }
	inline bool get_mPaused_17() const { return ___mPaused_17; }
	inline bool* get_address_of_mPaused_17() { return &___mPaused_17; }
	inline void set_mPaused_17(bool value)
	{
		___mPaused_17 = value;
	}

	inline static int32_t get_offset_of_mOnBackgroundTextureChanged_18() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___mOnBackgroundTextureChanged_18)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_mOnBackgroundTextureChanged_18() const { return ___mOnBackgroundTextureChanged_18; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_mOnBackgroundTextureChanged_18() { return &___mOnBackgroundTextureChanged_18; }
	inline void set_mOnBackgroundTextureChanged_18(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___mOnBackgroundTextureChanged_18 = value;
		Il2CppCodeGenWriteBarrier((&___mOnBackgroundTextureChanged_18), value);
	}

	inline static int32_t get_offset_of_mStartHasBeenInvoked_19() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___mStartHasBeenInvoked_19)); }
	inline bool get_mStartHasBeenInvoked_19() const { return ___mStartHasBeenInvoked_19; }
	inline bool* get_address_of_mStartHasBeenInvoked_19() { return &___mStartHasBeenInvoked_19; }
	inline void set_mStartHasBeenInvoked_19(bool value)
	{
		___mStartHasBeenInvoked_19 = value;
	}

	inline static int32_t get_offset_of_mHasStarted_20() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___mHasStarted_20)); }
	inline bool get_mHasStarted_20() const { return ___mHasStarted_20; }
	inline bool* get_address_of_mHasStarted_20() { return &___mHasStarted_20; }
	inline void set_mHasStarted_20(bool value)
	{
		___mHasStarted_20 = value;
	}

	inline static int32_t get_offset_of_mCameraConfiguration_21() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___mCameraConfiguration_21)); }
	inline RuntimeObject* get_mCameraConfiguration_21() const { return ___mCameraConfiguration_21; }
	inline RuntimeObject** get_address_of_mCameraConfiguration_21() { return &___mCameraConfiguration_21; }
	inline void set_mCameraConfiguration_21(RuntimeObject* value)
	{
		___mCameraConfiguration_21 = value;
		Il2CppCodeGenWriteBarrier((&___mCameraConfiguration_21), value);
	}

	inline static int32_t get_offset_of_mEyewearBehaviour_22() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___mEyewearBehaviour_22)); }
	inline DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4 * get_mEyewearBehaviour_22() const { return ___mEyewearBehaviour_22; }
	inline DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4 ** get_address_of_mEyewearBehaviour_22() { return &___mEyewearBehaviour_22; }
	inline void set_mEyewearBehaviour_22(DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4 * value)
	{
		___mEyewearBehaviour_22 = value;
		Il2CppCodeGenWriteBarrier((&___mEyewearBehaviour_22), value);
	}

	inline static int32_t get_offset_of_mCheckStopCamera_23() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___mCheckStopCamera_23)); }
	inline bool get_mCheckStopCamera_23() const { return ___mCheckStopCamera_23; }
	inline bool* get_address_of_mCheckStopCamera_23() { return &___mCheckStopCamera_23; }
	inline void set_mCheckStopCamera_23(bool value)
	{
		___mCheckStopCamera_23 = value;
	}

	inline static int32_t get_offset_of_mClearMaterial_24() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___mClearMaterial_24)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_mClearMaterial_24() const { return ___mClearMaterial_24; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_mClearMaterial_24() { return &___mClearMaterial_24; }
	inline void set_mClearMaterial_24(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___mClearMaterial_24 = value;
		Il2CppCodeGenWriteBarrier((&___mClearMaterial_24), value);
	}

	inline static int32_t get_offset_of_mMetalRendering_25() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___mMetalRendering_25)); }
	inline bool get_mMetalRendering_25() const { return ___mMetalRendering_25; }
	inline bool* get_address_of_mMetalRendering_25() { return &___mMetalRendering_25; }
	inline void set_mMetalRendering_25(bool value)
	{
		___mMetalRendering_25 = value;
	}

	inline static int32_t get_offset_of_mHasStartedOnce_26() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___mHasStartedOnce_26)); }
	inline bool get_mHasStartedOnce_26() const { return ___mHasStartedOnce_26; }
	inline bool* get_address_of_mHasStartedOnce_26() { return &___mHasStartedOnce_26; }
	inline void set_mHasStartedOnce_26(bool value)
	{
		___mHasStartedOnce_26 = value;
	}

	inline static int32_t get_offset_of_mWasEnabledBeforePause_27() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___mWasEnabledBeforePause_27)); }
	inline bool get_mWasEnabledBeforePause_27() const { return ___mWasEnabledBeforePause_27; }
	inline bool* get_address_of_mWasEnabledBeforePause_27() { return &___mWasEnabledBeforePause_27; }
	inline void set_mWasEnabledBeforePause_27(bool value)
	{
		___mWasEnabledBeforePause_27 = value;
	}

	inline static int32_t get_offset_of_mObjectTrackerWasActiveBeforePause_28() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___mObjectTrackerWasActiveBeforePause_28)); }
	inline bool get_mObjectTrackerWasActiveBeforePause_28() const { return ___mObjectTrackerWasActiveBeforePause_28; }
	inline bool* get_address_of_mObjectTrackerWasActiveBeforePause_28() { return &___mObjectTrackerWasActiveBeforePause_28; }
	inline void set_mObjectTrackerWasActiveBeforePause_28(bool value)
	{
		___mObjectTrackerWasActiveBeforePause_28 = value;
	}

	inline static int32_t get_offset_of_mObjectTrackerWasActiveBeforeDisabling_29() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___mObjectTrackerWasActiveBeforeDisabling_29)); }
	inline bool get_mObjectTrackerWasActiveBeforeDisabling_29() const { return ___mObjectTrackerWasActiveBeforeDisabling_29; }
	inline bool* get_address_of_mObjectTrackerWasActiveBeforeDisabling_29() { return &___mObjectTrackerWasActiveBeforeDisabling_29; }
	inline void set_mObjectTrackerWasActiveBeforeDisabling_29(bool value)
	{
		___mObjectTrackerWasActiveBeforeDisabling_29 = value;
	}

	inline static int32_t get_offset_of_mLastUpdatedFrame_30() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876, ___mLastUpdatedFrame_30)); }
	inline int32_t get_mLastUpdatedFrame_30() const { return ___mLastUpdatedFrame_30; }
	inline int32_t* get_address_of_mLastUpdatedFrame_30() { return &___mLastUpdatedFrame_30; }
	inline void set_mLastUpdatedFrame_30(int32_t value)
	{
		___mLastUpdatedFrame_30 = value;
	}
};

struct VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876_StaticFields
{
public:
	// Vuforia.VuforiaARController Vuforia.VuforiaARController::mInstance
	VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876 * ___mInstance_31;
	// System.Object Vuforia.VuforiaARController::mPadlock
	RuntimeObject * ___mPadlock_32;

public:
	inline static int32_t get_offset_of_mInstance_31() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876_StaticFields, ___mInstance_31)); }
	inline VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876 * get_mInstance_31() const { return ___mInstance_31; }
	inline VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876 ** get_address_of_mInstance_31() { return &___mInstance_31; }
	inline void set_mInstance_31(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876 * value)
	{
		___mInstance_31 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_31), value);
	}

	inline static int32_t get_offset_of_mPadlock_32() { return static_cast<int32_t>(offsetof(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876_StaticFields, ___mPadlock_32)); }
	inline RuntimeObject * get_mPadlock_32() const { return ___mPadlock_32; }
	inline RuntimeObject ** get_address_of_mPadlock_32() { return &___mPadlock_32; }
	inline void set_mPadlock_32(RuntimeObject * value)
	{
		___mPadlock_32 = value;
		Il2CppCodeGenWriteBarrier((&___mPadlock_32), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIAARCONTROLLER_T7732FFB77105A2F5BBEA40E3CECC5C15DA624876_H
#ifndef ONMESSAGERECIEVED_T836C6FE1A364160E42F697B50208F369179B07F4_H
#define ONMESSAGERECIEVED_T836C6FE1A364160E42F697B50208F369179B07F4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RecieveMessages/OnMessageRecieved
struct  OnMessageRecieved_t836C6FE1A364160E42F697B50208F369179B07F4  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONMESSAGERECIEVED_T836C6FE1A364160E42F697B50208F369179B07F4_H
#ifndef ACTION_T591D2A86165F896B4B800BB5C25CE18672A55579_H
#define ACTION_T591D2A86165F896B4B800BB5C25CE18672A55579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action
struct  Action_t591D2A86165F896B4B800BB5C25CE18672A55579  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_T591D2A86165F896B4B800BB5C25CE18672A55579_H
#ifndef ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#define ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#ifndef FUNC_2_T2545C65108613DA6ADF0E4952F253E2BC3F65ED3_H
#define FUNC_2_T2545C65108613DA6ADF0E4952F253E2BC3F65ED3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<VideoInfo,System.Boolean>
struct  Func_2_t2545C65108613DA6ADF0E4952F253E2BC3F65ED3  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T2545C65108613DA6ADF0E4952F253E2BC3F65ED3_H
#ifndef SOCKETEXCEPTION_T75481CF49BCAF5685A5A9E6933909E0B65E7E0A5_H
#define SOCKETEXCEPTION_T75481CF49BCAF5685A5A9E6933909E0B65E7E0A5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketException
struct  SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5  : public Win32Exception_tB05BE97AB4CADD54DF96C0109689F0ECA7517668
{
public:
	// System.Net.EndPoint System.Net.Sockets.SocketException::m_EndPoint
	EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * ___m_EndPoint_20;

public:
	inline static int32_t get_offset_of_m_EndPoint_20() { return static_cast<int32_t>(offsetof(SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5, ___m_EndPoint_20)); }
	inline EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * get_m_EndPoint_20() const { return ___m_EndPoint_20; }
	inline EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 ** get_address_of_m_EndPoint_20() { return &___m_EndPoint_20; }
	inline void set_m_EndPoint_20(EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * value)
	{
		___m_EndPoint_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_EndPoint_20), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKETEXCEPTION_T75481CF49BCAF5685A5A9E6933909E0B65E7E0A5_H
#ifndef BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#define BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifndef TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#define TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifndef MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#define MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifndef VIDEOPLAYER_TFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2_H
#define VIDEOPLAYER_TFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Video.VideoPlayer
struct  VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::prepareCompleted
	EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * ___prepareCompleted_4;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::loopPointReached
	EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * ___loopPointReached_5;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::started
	EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * ___started_6;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::frameDropped
	EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * ___frameDropped_7;
	// UnityEngine.Video.VideoPlayer/ErrorEventHandler UnityEngine.Video.VideoPlayer::errorReceived
	ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 * ___errorReceived_8;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::seekCompleted
	EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * ___seekCompleted_9;
	// UnityEngine.Video.VideoPlayer/TimeEventHandler UnityEngine.Video.VideoPlayer::clockResyncOccurred
	TimeEventHandler_tDD815DAABFADDD98C8993B2A97A2FCE858266BC1 * ___clockResyncOccurred_10;
	// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler UnityEngine.Video.VideoPlayer::frameReady
	FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 * ___frameReady_11;

public:
	inline static int32_t get_offset_of_prepareCompleted_4() { return static_cast<int32_t>(offsetof(VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2, ___prepareCompleted_4)); }
	inline EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * get_prepareCompleted_4() const { return ___prepareCompleted_4; }
	inline EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 ** get_address_of_prepareCompleted_4() { return &___prepareCompleted_4; }
	inline void set_prepareCompleted_4(EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * value)
	{
		___prepareCompleted_4 = value;
		Il2CppCodeGenWriteBarrier((&___prepareCompleted_4), value);
	}

	inline static int32_t get_offset_of_loopPointReached_5() { return static_cast<int32_t>(offsetof(VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2, ___loopPointReached_5)); }
	inline EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * get_loopPointReached_5() const { return ___loopPointReached_5; }
	inline EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 ** get_address_of_loopPointReached_5() { return &___loopPointReached_5; }
	inline void set_loopPointReached_5(EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * value)
	{
		___loopPointReached_5 = value;
		Il2CppCodeGenWriteBarrier((&___loopPointReached_5), value);
	}

	inline static int32_t get_offset_of_started_6() { return static_cast<int32_t>(offsetof(VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2, ___started_6)); }
	inline EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * get_started_6() const { return ___started_6; }
	inline EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 ** get_address_of_started_6() { return &___started_6; }
	inline void set_started_6(EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * value)
	{
		___started_6 = value;
		Il2CppCodeGenWriteBarrier((&___started_6), value);
	}

	inline static int32_t get_offset_of_frameDropped_7() { return static_cast<int32_t>(offsetof(VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2, ___frameDropped_7)); }
	inline EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * get_frameDropped_7() const { return ___frameDropped_7; }
	inline EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 ** get_address_of_frameDropped_7() { return &___frameDropped_7; }
	inline void set_frameDropped_7(EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * value)
	{
		___frameDropped_7 = value;
		Il2CppCodeGenWriteBarrier((&___frameDropped_7), value);
	}

	inline static int32_t get_offset_of_errorReceived_8() { return static_cast<int32_t>(offsetof(VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2, ___errorReceived_8)); }
	inline ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 * get_errorReceived_8() const { return ___errorReceived_8; }
	inline ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 ** get_address_of_errorReceived_8() { return &___errorReceived_8; }
	inline void set_errorReceived_8(ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 * value)
	{
		___errorReceived_8 = value;
		Il2CppCodeGenWriteBarrier((&___errorReceived_8), value);
	}

	inline static int32_t get_offset_of_seekCompleted_9() { return static_cast<int32_t>(offsetof(VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2, ___seekCompleted_9)); }
	inline EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * get_seekCompleted_9() const { return ___seekCompleted_9; }
	inline EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 ** get_address_of_seekCompleted_9() { return &___seekCompleted_9; }
	inline void set_seekCompleted_9(EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * value)
	{
		___seekCompleted_9 = value;
		Il2CppCodeGenWriteBarrier((&___seekCompleted_9), value);
	}

	inline static int32_t get_offset_of_clockResyncOccurred_10() { return static_cast<int32_t>(offsetof(VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2, ___clockResyncOccurred_10)); }
	inline TimeEventHandler_tDD815DAABFADDD98C8993B2A97A2FCE858266BC1 * get_clockResyncOccurred_10() const { return ___clockResyncOccurred_10; }
	inline TimeEventHandler_tDD815DAABFADDD98C8993B2A97A2FCE858266BC1 ** get_address_of_clockResyncOccurred_10() { return &___clockResyncOccurred_10; }
	inline void set_clockResyncOccurred_10(TimeEventHandler_tDD815DAABFADDD98C8993B2A97A2FCE858266BC1 * value)
	{
		___clockResyncOccurred_10 = value;
		Il2CppCodeGenWriteBarrier((&___clockResyncOccurred_10), value);
	}

	inline static int32_t get_offset_of_frameReady_11() { return static_cast<int32_t>(offsetof(VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2, ___frameReady_11)); }
	inline FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 * get_frameReady_11() const { return ___frameReady_11; }
	inline FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 ** get_address_of_frameReady_11() { return &___frameReady_11; }
	inline void set_frameReady_11(FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 * value)
	{
		___frameReady_11 = value;
		Il2CppCodeGenWriteBarrier((&___frameReady_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOPLAYER_TFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2_H
#ifndef INTERFACECONTROLLER_T023AB28D3794FDF27110D9676E4D5834A8A434CF_H
#define INTERFACECONTROLLER_T023AB28D3794FDF27110D9676E4D5834A8A434CF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InterfaceController
struct  InterfaceController_t023AB28D3794FDF27110D9676E4D5834A8A434CF  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERFACECONTROLLER_T023AB28D3794FDF27110D9676E4D5834A8A434CF_H
#ifndef MENUELEMENT_T9A7B58726866102A8F63B3393AF9300404D1B0AE_H
#define MENUELEMENT_T9A7B58726866102A8F63B3393AF9300404D1B0AE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MenuElement
struct  MenuElement_t9A7B58726866102A8F63B3393AF9300404D1B0AE  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Events.UnityEvent MenuElement::StartEvent
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___StartEvent_4;
	// UnityEngine.Events.UnityEvent MenuElement::EndEvent
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___EndEvent_5;
	// UnityEngine.Vector3 MenuElement::startSize
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___startSize_6;
	// UnityEngine.Vector3 MenuElement::desiredScale
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___desiredScale_7;
	// UnityEngine.Vector3 MenuElement::startPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___startPosition_8;
	// UnityEngine.Vector3 MenuElement::desiredPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___desiredPosition_9;
	// System.Single MenuElement::moveSpeed
	float ___moveSpeed_10;

public:
	inline static int32_t get_offset_of_StartEvent_4() { return static_cast<int32_t>(offsetof(MenuElement_t9A7B58726866102A8F63B3393AF9300404D1B0AE, ___StartEvent_4)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_StartEvent_4() const { return ___StartEvent_4; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_StartEvent_4() { return &___StartEvent_4; }
	inline void set_StartEvent_4(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___StartEvent_4 = value;
		Il2CppCodeGenWriteBarrier((&___StartEvent_4), value);
	}

	inline static int32_t get_offset_of_EndEvent_5() { return static_cast<int32_t>(offsetof(MenuElement_t9A7B58726866102A8F63B3393AF9300404D1B0AE, ___EndEvent_5)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_EndEvent_5() const { return ___EndEvent_5; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_EndEvent_5() { return &___EndEvent_5; }
	inline void set_EndEvent_5(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___EndEvent_5 = value;
		Il2CppCodeGenWriteBarrier((&___EndEvent_5), value);
	}

	inline static int32_t get_offset_of_startSize_6() { return static_cast<int32_t>(offsetof(MenuElement_t9A7B58726866102A8F63B3393AF9300404D1B0AE, ___startSize_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_startSize_6() const { return ___startSize_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_startSize_6() { return &___startSize_6; }
	inline void set_startSize_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___startSize_6 = value;
	}

	inline static int32_t get_offset_of_desiredScale_7() { return static_cast<int32_t>(offsetof(MenuElement_t9A7B58726866102A8F63B3393AF9300404D1B0AE, ___desiredScale_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_desiredScale_7() const { return ___desiredScale_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_desiredScale_7() { return &___desiredScale_7; }
	inline void set_desiredScale_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___desiredScale_7 = value;
	}

	inline static int32_t get_offset_of_startPosition_8() { return static_cast<int32_t>(offsetof(MenuElement_t9A7B58726866102A8F63B3393AF9300404D1B0AE, ___startPosition_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_startPosition_8() const { return ___startPosition_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_startPosition_8() { return &___startPosition_8; }
	inline void set_startPosition_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___startPosition_8 = value;
	}

	inline static int32_t get_offset_of_desiredPosition_9() { return static_cast<int32_t>(offsetof(MenuElement_t9A7B58726866102A8F63B3393AF9300404D1B0AE, ___desiredPosition_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_desiredPosition_9() const { return ___desiredPosition_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_desiredPosition_9() { return &___desiredPosition_9; }
	inline void set_desiredPosition_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___desiredPosition_9 = value;
	}

	inline static int32_t get_offset_of_moveSpeed_10() { return static_cast<int32_t>(offsetof(MenuElement_t9A7B58726866102A8F63B3393AF9300404D1B0AE, ___moveSpeed_10)); }
	inline float get_moveSpeed_10() const { return ___moveSpeed_10; }
	inline float* get_address_of_moveSpeed_10() { return &___moveSpeed_10; }
	inline void set_moveSpeed_10(float value)
	{
		___moveSpeed_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MENUELEMENT_T9A7B58726866102A8F63B3393AF9300404D1B0AE_H
#ifndef RECIEVEMESSAGES_T9C8D088B2F3A1B105AE49106201BE53BE69A52EB_H
#define RECIEVEMESSAGES_T9C8D088B2F3A1B105AE49106201BE53BE69A52EB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RecieveMessages
struct  RecieveMessages_t9C8D088B2F3A1B105AE49106201BE53BE69A52EB  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Net.Sockets.UdpClient RecieveMessages::receiver
	UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641 * ___receiver_5;

public:
	inline static int32_t get_offset_of_receiver_5() { return static_cast<int32_t>(offsetof(RecieveMessages_t9C8D088B2F3A1B105AE49106201BE53BE69A52EB, ___receiver_5)); }
	inline UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641 * get_receiver_5() const { return ___receiver_5; }
	inline UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641 ** get_address_of_receiver_5() { return &___receiver_5; }
	inline void set_receiver_5(UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641 * value)
	{
		___receiver_5 = value;
		Il2CppCodeGenWriteBarrier((&___receiver_5), value);
	}
};

struct RecieveMessages_t9C8D088B2F3A1B105AE49106201BE53BE69A52EB_StaticFields
{
public:
	// RecieveMessages/OnMessageRecieved RecieveMessages::messageRecieved
	OnMessageRecieved_t836C6FE1A364160E42F697B50208F369179B07F4 * ___messageRecieved_4;

public:
	inline static int32_t get_offset_of_messageRecieved_4() { return static_cast<int32_t>(offsetof(RecieveMessages_t9C8D088B2F3A1B105AE49106201BE53BE69A52EB_StaticFields, ___messageRecieved_4)); }
	inline OnMessageRecieved_t836C6FE1A364160E42F697B50208F369179B07F4 * get_messageRecieved_4() const { return ___messageRecieved_4; }
	inline OnMessageRecieved_t836C6FE1A364160E42F697B50208F369179B07F4 ** get_address_of_messageRecieved_4() { return &___messageRecieved_4; }
	inline void set_messageRecieved_4(OnMessageRecieved_t836C6FE1A364160E42F697B50208F369179B07F4 * value)
	{
		___messageRecieved_4 = value;
		Il2CppCodeGenWriteBarrier((&___messageRecieved_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECIEVEMESSAGES_T9C8D088B2F3A1B105AE49106201BE53BE69A52EB_H
#ifndef SENDMESSAGES_T2345EAEF6050E39DAF1727EBDC6325E3604C60F0_H
#define SENDMESSAGES_T2345EAEF6050E39DAF1727EBDC6325E3604C60F0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SendMessages
struct  SendMessages_t2345EAEF6050E39DAF1727EBDC6325E3604C60F0  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Net.IPAddress SendMessages::serverAddr
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___serverAddr_7;
	// System.Net.IPEndPoint SendMessages::endPoint
	IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * ___endPoint_8;
	// System.Net.Sockets.Socket SendMessages::sock
	Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * ___sock_9;
	// System.Byte[] SendMessages::send_buffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___send_buffer_10;

public:
	inline static int32_t get_offset_of_serverAddr_7() { return static_cast<int32_t>(offsetof(SendMessages_t2345EAEF6050E39DAF1727EBDC6325E3604C60F0, ___serverAddr_7)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_serverAddr_7() const { return ___serverAddr_7; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_serverAddr_7() { return &___serverAddr_7; }
	inline void set_serverAddr_7(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___serverAddr_7 = value;
		Il2CppCodeGenWriteBarrier((&___serverAddr_7), value);
	}

	inline static int32_t get_offset_of_endPoint_8() { return static_cast<int32_t>(offsetof(SendMessages_t2345EAEF6050E39DAF1727EBDC6325E3604C60F0, ___endPoint_8)); }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * get_endPoint_8() const { return ___endPoint_8; }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F ** get_address_of_endPoint_8() { return &___endPoint_8; }
	inline void set_endPoint_8(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * value)
	{
		___endPoint_8 = value;
		Il2CppCodeGenWriteBarrier((&___endPoint_8), value);
	}

	inline static int32_t get_offset_of_sock_9() { return static_cast<int32_t>(offsetof(SendMessages_t2345EAEF6050E39DAF1727EBDC6325E3604C60F0, ___sock_9)); }
	inline Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * get_sock_9() const { return ___sock_9; }
	inline Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 ** get_address_of_sock_9() { return &___sock_9; }
	inline void set_sock_9(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * value)
	{
		___sock_9 = value;
		Il2CppCodeGenWriteBarrier((&___sock_9), value);
	}

	inline static int32_t get_offset_of_send_buffer_10() { return static_cast<int32_t>(offsetof(SendMessages_t2345EAEF6050E39DAF1727EBDC6325E3604C60F0, ___send_buffer_10)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_send_buffer_10() const { return ___send_buffer_10; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_send_buffer_10() { return &___send_buffer_10; }
	inline void set_send_buffer_10(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___send_buffer_10 = value;
		Il2CppCodeGenWriteBarrier((&___send_buffer_10), value);
	}
};

struct SendMessages_t2345EAEF6050E39DAF1727EBDC6325E3604C60F0_StaticFields
{
public:
	// SendMessages SendMessages::<Instance>k__BackingField
	SendMessages_t2345EAEF6050E39DAF1727EBDC6325E3604C60F0 * ___U3CInstanceU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SendMessages_t2345EAEF6050E39DAF1727EBDC6325E3604C60F0_StaticFields, ___U3CInstanceU3Ek__BackingField_6)); }
	inline SendMessages_t2345EAEF6050E39DAF1727EBDC6325E3604C60F0 * get_U3CInstanceU3Ek__BackingField_6() const { return ___U3CInstanceU3Ek__BackingField_6; }
	inline SendMessages_t2345EAEF6050E39DAF1727EBDC6325E3604C60F0 ** get_address_of_U3CInstanceU3Ek__BackingField_6() { return &___U3CInstanceU3Ek__BackingField_6; }
	inline void set_U3CInstanceU3Ek__BackingField_6(SendMessages_t2345EAEF6050E39DAF1727EBDC6325E3604C60F0 * value)
	{
		___U3CInstanceU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CInstanceU3Ek__BackingField_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDMESSAGES_T2345EAEF6050E39DAF1727EBDC6325E3604C60F0_H
#ifndef VUFORIASETTINGS_T659607A555136BCAFCBBD550710B74B8704C047C_H
#define VUFORIASETTINGS_T659607A555136BCAFCBBD550710B74B8704C047C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VuforiaSettings
struct  VuforiaSettings_t659607A555136BCAFCBBD550710B74B8704C047C  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIASETTINGS_T659607A555136BCAFCBBD550710B74B8704C047C_H
#ifndef YOUTUBEAPI_T77BD34FB90DF0001C2B731FB6F07502995C16897_H
#define YOUTUBEAPI_T77BD34FB90DF0001C2B731FB6F07502995C16897_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YouTubeAPI
struct  YouTubeAPI_t77BD34FB90DF0001C2B731FB6F07502995C16897  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.String YouTubeAPI::YouTubeURL
	String_t* ___YouTubeURL_5;
	// UnityEngine.Video.VideoPlayer YouTubeAPI::videoPlayer
	VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * ___videoPlayer_6;

public:
	inline static int32_t get_offset_of_YouTubeURL_5() { return static_cast<int32_t>(offsetof(YouTubeAPI_t77BD34FB90DF0001C2B731FB6F07502995C16897, ___YouTubeURL_5)); }
	inline String_t* get_YouTubeURL_5() const { return ___YouTubeURL_5; }
	inline String_t** get_address_of_YouTubeURL_5() { return &___YouTubeURL_5; }
	inline void set_YouTubeURL_5(String_t* value)
	{
		___YouTubeURL_5 = value;
		Il2CppCodeGenWriteBarrier((&___YouTubeURL_5), value);
	}

	inline static int32_t get_offset_of_videoPlayer_6() { return static_cast<int32_t>(offsetof(YouTubeAPI_t77BD34FB90DF0001C2B731FB6F07502995C16897, ___videoPlayer_6)); }
	inline VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * get_videoPlayer_6() const { return ___videoPlayer_6; }
	inline VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 ** get_address_of_videoPlayer_6() { return &___videoPlayer_6; }
	inline void set_videoPlayer_6(VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * value)
	{
		___videoPlayer_6 = value;
		Il2CppCodeGenWriteBarrier((&___videoPlayer_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // YOUTUBEAPI_T77BD34FB90DF0001C2B731FB6F07502995C16897_H
#ifndef HUDCONTROLLER_T5A0777F909E0550E5C6337C48E82A5AD555350F4_H
#define HUDCONTROLLER_T5A0777F909E0550E5C6337C48E82A5AD555350F4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// hudController
struct  hudController_t5A0777F909E0550E5C6337C48E82A5AD555350F4  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// MenuElement hudController::web
	MenuElement_t9A7B58726866102A8F63B3393AF9300404D1B0AE * ___web_4;
	// MenuElement hudController::music
	MenuElement_t9A7B58726866102A8F63B3393AF9300404D1B0AE * ___music_5;
	// MenuElement hudController::weather
	MenuElement_t9A7B58726866102A8F63B3393AF9300404D1B0AE * ___weather_6;

public:
	inline static int32_t get_offset_of_web_4() { return static_cast<int32_t>(offsetof(hudController_t5A0777F909E0550E5C6337C48E82A5AD555350F4, ___web_4)); }
	inline MenuElement_t9A7B58726866102A8F63B3393AF9300404D1B0AE * get_web_4() const { return ___web_4; }
	inline MenuElement_t9A7B58726866102A8F63B3393AF9300404D1B0AE ** get_address_of_web_4() { return &___web_4; }
	inline void set_web_4(MenuElement_t9A7B58726866102A8F63B3393AF9300404D1B0AE * value)
	{
		___web_4 = value;
		Il2CppCodeGenWriteBarrier((&___web_4), value);
	}

	inline static int32_t get_offset_of_music_5() { return static_cast<int32_t>(offsetof(hudController_t5A0777F909E0550E5C6337C48E82A5AD555350F4, ___music_5)); }
	inline MenuElement_t9A7B58726866102A8F63B3393AF9300404D1B0AE * get_music_5() const { return ___music_5; }
	inline MenuElement_t9A7B58726866102A8F63B3393AF9300404D1B0AE ** get_address_of_music_5() { return &___music_5; }
	inline void set_music_5(MenuElement_t9A7B58726866102A8F63B3393AF9300404D1B0AE * value)
	{
		___music_5 = value;
		Il2CppCodeGenWriteBarrier((&___music_5), value);
	}

	inline static int32_t get_offset_of_weather_6() { return static_cast<int32_t>(offsetof(hudController_t5A0777F909E0550E5C6337C48E82A5AD555350F4, ___weather_6)); }
	inline MenuElement_t9A7B58726866102A8F63B3393AF9300404D1B0AE * get_weather_6() const { return ___weather_6; }
	inline MenuElement_t9A7B58726866102A8F63B3393AF9300404D1B0AE ** get_address_of_weather_6() { return &___weather_6; }
	inline void set_weather_6(MenuElement_t9A7B58726866102A8F63B3393AF9300404D1B0AE * value)
	{
		___weather_6 = value;
		Il2CppCodeGenWriteBarrier((&___weather_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HUDCONTROLLER_T5A0777F909E0550E5C6337C48E82A5AD555350F4_H
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// VideoInfo[]
struct VideoInfoU5BU5D_t1892A039097B71C8907A8741BD3FF91B756BDC8F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) VideoInfo_t7E5A38A250D6E27C985A55FC8F4BB36C4211B16F * m_Items[1];

public:
	inline VideoInfo_t7E5A38A250D6E27C985A55FC8F4BB36C4211B16F * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline VideoInfo_t7E5A38A250D6E27C985A55FC8F4BB36C4211B16F ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, VideoInfo_t7E5A38A250D6E27C985A55FC8F4BB36C4211B16F * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline VideoInfo_t7E5A38A250D6E27C985A55FC8F4BB36C4211B16F * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline VideoInfo_t7E5A38A250D6E27C985A55FC8F4BB36C4211B16F ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, VideoInfo_t7E5A38A250D6E27C985A55FC8F4BB36C4211B16F * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// MenuElement[]
struct MenuElementU5BU5D_t417DEB593746AC5F4A6EC8B98C72EAB40B827434  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MenuElement_t9A7B58726866102A8F63B3393AF9300404D1B0AE * m_Items[1];

public:
	inline MenuElement_t9A7B58726866102A8F63B3393AF9300404D1B0AE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MenuElement_t9A7B58726866102A8F63B3393AF9300404D1B0AE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MenuElement_t9A7B58726866102A8F63B3393AF9300404D1B0AE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline MenuElement_t9A7B58726866102A8F63B3393AF9300404D1B0AE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MenuElement_t9A7B58726866102A8F63B3393AF9300404D1B0AE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MenuElement_t9A7B58726866102A8F63B3393AF9300404D1B0AE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * JsonUtility_FromJson_TisRuntimeObject_m2597682B0DDA25AD5310A52CBBA88D8DD8DFBAC0_gshared (String_t* p0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Func_2__ctor_m5153AE6EE06BA488EF3D92A0DCF7E4EF530961B5_gshared (Func_2_t7EE965B791A606D187CCB69569A433D4CBB36879 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m77C4748BC22520E365AB1F6A46B2C8A8BF525492_gshared (RuntimeObject* p0, Func_2_t7EE965B791A606D187CCB69569A433D4CBB36879 * p1, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_FirstOrDefault_TisRuntimeObject_m34755B88A64047EB791ABB74DC457232386D7E0A_gshared (RuntimeObject* p0, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<System.Object>()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Object_FindObjectsOfType_TisRuntimeObject_m09CD1D2122B5C7EEABEF526D870B66379AA59F1C_gshared (const RuntimeMethod* method);

// SendMessages SendMessages::get_Instance()
extern "C" IL2CPP_METHOD_ATTR SendMessages_t2345EAEF6050E39DAF1727EBDC6325E3604C60F0 * SendMessages_get_Instance_m2DB8C71F2D6F4C4EAEDF5D9F1F934CD1817D3034 (const RuntimeMethod* method);
// System.Void SendMessages::SendPacket(System.String)
extern "C" IL2CPP_METHOD_ATTR void SendMessages_SendPacket_m3F22B8610D333EAF4B3B3D8D2BB765DAE87EE027 (SendMessages_t2345EAEF6050E39DAF1727EBDC6325E3604C60F0 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String System.Single::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Single_ToString_m2B1556CFBBD088D285A0B0EA280F82D3A4344DC3 (float* __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::Invoke()
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mB2FA1C76256FE34D5E7F84ABE528AC61CE8A0325 (UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
extern "C" IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mA9E2F96E98E71AE7ACCE74766D700D41F0404806 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// System.Void MenuElement::Close()
extern "C" IL2CPP_METHOD_ATTR void MenuElement_Close_mE01247A45B262B529BC1142F71A95EE1AAE6C493 (MenuElement_t9A7B58726866102A8F63B3393AF9300404D1B0AE * __this, const RuntimeMethod* method);
// System.Void MenuElement::Open()
extern "C" IL2CPP_METHOD_ATTR void MenuElement_Open_m16409C74A1314A74F647FF29EA9D991CD1A4C12D (MenuElement_t9A7B58726866102A8F63B3393AF9300404D1B0AE * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.UdpClient::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void UdpClient__ctor_m16B5D497B74A33323D10285538BF31147B2E5984 (UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.AsyncCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void AsyncCallback__ctor_m36AEE927E6AFEE950656BC5F7841682D23DE2EBB (AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.IAsyncResult System.Net.Sockets.UdpClient::BeginReceive(System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UdpClient_BeginReceive_mDC4D583BBB1375CF5C3085FEDD92BB6921E21302 (UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641 * __this, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Net.Sockets.UdpClient::Close()
extern "C" IL2CPP_METHOD_ATTR void UdpClient_Close_mA85B745647A63FDF485BEF7C5E59567C0430695E (UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641 * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.UdpClient::Dispose()
extern "C" IL2CPP_METHOD_ATTR void UdpClient_Dispose_mA3999F7BD0780AECDC27B2274BFC61B56C163ADB (UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641 * __this, const RuntimeMethod* method);
// System.Void System.Net.IPEndPoint::.ctor(System.Net.IPAddress,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void IPEndPoint__ctor_m1C90FD0534415E17207A0BBC05CD381335089845 (IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * __this, IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * p0, int32_t p1, const RuntimeMethod* method);
// System.Byte[] System.Net.Sockets.UdpClient::EndReceive(System.IAsyncResult,System.Net.IPEndPoint&)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* UdpClient_EndReceive_mF25D1BFECC2581E32DB6A1202EA4670B20580A4F (UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641 * __this, RuntimeObject* p0, IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F ** p1, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
extern "C" IL2CPP_METHOD_ATTR Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9 (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void RecieveMessages/OnMessageRecieved::Invoke(System.String)
extern "C" IL2CPP_METHOD_ATTR void OnMessageRecieved_Invoke_mC75987CF58790F73DFE779269A962F5FCDAC3E0D (OnMessageRecieved_t836C6FE1A364160E42F697B50208F369179B07F4 * __this, String_t* ___result0, const RuntimeMethod* method);
// System.Void SendMessages::set_Instance(SendMessages)
extern "C" IL2CPP_METHOD_ATTR void SendMessages_set_Instance_mA3149BD54BE651AD560A6C6D4D40F4D5C903D62B (SendMessages_t2345EAEF6050E39DAF1727EBDC6325E3604C60F0 * ___value0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType)
extern "C" IL2CPP_METHOD_ATTR void Socket__ctor_mE89CA86721C20DB5F3D00D3E6340A17C039A8F83 (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::set_EnableBroadcast(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Socket_set_EnableBroadcast_mAF6DE2B827F1D6D57C53981CB89C708B08D80626 (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, bool p0, const RuntimeMethod* method);
// System.Net.IPAddress System.Net.IPAddress::Parse(System.String)
extern "C" IL2CPP_METHOD_ATTR IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * IPAddress_Parse_mB8537FC76C7BA7482713F289B4EC4C3ED919D273 (String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour_print_m171D860AF3370C46648FE8F3EE3E0E6535E1C774 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Socket_Dispose_m34C079AE162CF588FB9FFA9F76B010DF337DE362 (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::Close()
extern "C" IL2CPP_METHOD_ATTR void Socket_Close_mBB794B7D2AEC0A2478540381D6CA7F6DB4913D09 (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_ASCII()
extern "C" IL2CPP_METHOD_ATTR Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * Encoding_get_ASCII_m9B673AE3152AB04D07CADE6E5E142C785B5BC94E (const RuntimeMethod* method);
// System.Int32 System.Net.Sockets.Socket::SendTo(System.Byte[],System.Net.EndPoint)
extern "C" IL2CPP_METHOD_ATTR int32_t Socket_SendTo_mF55C570D2F372EDC3331DDCFF6CE16B1AB2FDBB5 (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* p0, EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * p1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// Vuforia.VuforiaARController Vuforia.VuforiaARController::get_Instance()
extern "C" IL2CPP_METHOD_ATTR VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876 * VuforiaARController_get_Instance_m88278E3FE64C49BDDF48D5A6F7627654B7747A9D (const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760 (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void Vuforia.VuforiaARController::RegisterVuforiaStartedCallback(System.Action)
extern "C" IL2CPP_METHOD_ATTR void VuforiaARController_RegisterVuforiaStartedCallback_mE46BE54BC019AB67362EEE516E6225F2192D19E3 (VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876 * __this, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * p0, const RuntimeMethod* method);
// System.Void Vuforia.VuforiaARController::UnregisterVuforiaStartedCallback(System.Action)
extern "C" IL2CPP_METHOD_ATTR void VuforiaARController_UnregisterVuforiaStartedCallback_mC133F11878820C84277FD24D7DDB9402E9F721AA (VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876 * __this, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * p0, const RuntimeMethod* method);
// Vuforia.CameraDevice Vuforia.CameraDevice::get_Instance()
extern "C" IL2CPP_METHOD_ATTR CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B * CameraDevice_get_Instance_m0B0568E489617394A6BCA95F4AAE7D884912C330 (const RuntimeMethod* method);
// System.Boolean Vuforia.CameraDevice::SetFocusMode(Vuforia.CameraDevice/FocusMode)
extern "C" IL2CPP_METHOD_ATTR bool CameraDevice_SetFocusMode_m34A2BBE1DF0908E996C9A38C03DA190208ED349D (CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B * __this, int32_t p0, const RuntimeMethod* method);
// System.Collections.IEnumerator VuforiaSettings::DelaySetupRoutine()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* VuforiaSettings_DelaySetupRoutine_mCB2A50D0DAC82CF66123DAD0D18B7ED295F23592 (VuforiaSettings_t659607A555136BCAFCBBD550710B74B8704C047C * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void VuforiaSettings/<DelaySetupRoutine>d__3::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CDelaySetupRoutineU3Ed__3__ctor_m46AB7768462FAA58667EE77A5720D8B161E3DD3B (U3CDelaySetupRoutineU3Ed__3_tC6689361693EFAEAE05D5C215F789EAE750CA969 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559 (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * __this, float p0, const RuntimeMethod* method);
// Vuforia.MixedRealityController Vuforia.MixedRealityController::get_Instance()
extern "C" IL2CPP_METHOD_ATTR MixedRealityController_t140A79CE6381E61D93A6C265DCC7A50522A901BE * MixedRealityController_get_Instance_m248BC55FA8BABF362E3C985D8BB400FD7D1DD0C7 (const RuntimeMethod* method);
// System.Boolean Vuforia.MixedRealityController::SetMode(Vuforia.MixedRealityController/Mode)
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityController_SetMode_mB2605D249B4EADB2926C0BEEC03CE0EC9CB3DACA (MixedRealityController_t140A79CE6381E61D93A6C265DCC7A50522A901BE * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Video.VideoPlayer>()
inline VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * Component_GetComponent_TisVideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2_m8BD724EFE5F13D9F3164EA576D0914D714758959 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// System.Void YouTubeAPI::GetLink(System.String)
extern "C" IL2CPP_METHOD_ATTR void YouTubeAPI_GetLink_mA718B5EA8B577AA23B7F48E2AA1B40BC1E4F3D4B (YouTubeAPI_t77BD34FB90DF0001C2B731FB6F07502995C16897 * __this, String_t* ___url0, const RuntimeMethod* method);
// System.Collections.IEnumerator YouTubeAPI::GetYouTubeLinkRoutine(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* YouTubeAPI_GetYouTubeLinkRoutine_mFE937D625BAEA209C1061A2CA048A8385B0BDA18 (YouTubeAPI_t77BD34FB90DF0001C2B731FB6F07502995C16897 * __this, String_t* ___url0, const RuntimeMethod* method);
// System.Void YouTubeAPI/<GetYouTubeLinkRoutine>d__5::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CGetYouTubeLinkRoutineU3Ed__5__ctor_mBBF750CC8DB635A66D7F09E2BF07A82EAFEF5B05 (U3CGetYouTubeLinkRoutineU3Ed__5_t9813147061324262BA459D775E1DE964C601EC11 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void YouTubeAPI/<>c::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m973EE14584F99998C3EC5966D3D86E3CEC0098E4 (U3CU3Ec_tBC09F3698A728D2527404129B64CD4BD6EAD73CF * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Boolean System.String::Contains(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_Contains_m4488034AF8CB3EEA9A205EB8A1F25D438FF8704B (String_t* __this, String_t* p0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Get(System.String)
extern "C" IL2CPP_METHOD_ATTR UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * UnityWebRequest_Get_mF4E12AA47AAF25221AD738B434B0EA8D40659B18 (String_t* p0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
extern "C" IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353 * UnityWebRequest_SendWebRequest_mF536CB2A0A39354A54B555B66B017816C5833EBD (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
extern "C" IL2CPP_METHOD_ATTR DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * UnityWebRequest_get_downloadHandler_m83044026479E6B4B2739DCE9EEA8A0FAE7D9AF41 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.DownloadHandler::get_text()
extern "C" IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_m1D707E375899B4F4F0434B79AB8D57ADFE5424FF (DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<VideoInfoCollection>(System.String)
inline VideoInfoCollection_t72B0AF865AEE1D9CF2CE38DC82CB4DCCD97182C6 * JsonUtility_FromJson_TisVideoInfoCollection_t72B0AF865AEE1D9CF2CE38DC82CB4DCCD97182C6_m0605452C1DD9890AC0B2B06C4ECB38722906CE50 (String_t* p0, const RuntimeMethod* method)
{
	return ((  VideoInfoCollection_t72B0AF865AEE1D9CF2CE38DC82CB4DCCD97182C6 * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m2597682B0DDA25AD5310A52CBBA88D8DD8DFBAC0_gshared)(p0, method);
}
// System.Void System.Func`2<VideoInfo,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m3A75FAE579E7C61A9DED00E5BEBE6F62E44889F4 (Func_2_t2545C65108613DA6ADF0E4952F253E2BC3F65ED3 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t2545C65108613DA6ADF0E4952F253E2BC3F65ED3 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m5153AE6EE06BA488EF3D92A0DCF7E4EF530961B5_gshared)(__this, p0, p1, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<VideoInfo>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisVideoInfo_t7E5A38A250D6E27C985A55FC8F4BB36C4211B16F_m2CE5D6F18B362D17F65C166044ACC0EB2D2CE830 (RuntimeObject* p0, Func_2_t2545C65108613DA6ADF0E4952F253E2BC3F65ED3 * p1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t2545C65108613DA6ADF0E4952F253E2BC3F65ED3 *, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m77C4748BC22520E365AB1F6A46B2C8A8BF525492_gshared)(p0, p1, method);
}
// !!0 System.Linq.Enumerable::FirstOrDefault<VideoInfo>(System.Collections.Generic.IEnumerable`1<!!0>)
inline VideoInfo_t7E5A38A250D6E27C985A55FC8F4BB36C4211B16F * Enumerable_FirstOrDefault_TisVideoInfo_t7E5A38A250D6E27C985A55FC8F4BB36C4211B16F_mE2819188F6B1C4E1454619C63D5E367F492BB679 (RuntimeObject* p0, const RuntimeMethod* method)
{
	return ((  VideoInfo_t7E5A38A250D6E27C985A55FC8F4BB36C4211B16F * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_m34755B88A64047EB791ABB74DC457232386D7E0A_gshared)(p0, method);
}
// System.Void UnityEngine.Video.VideoPlayer::set_url(System.String)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_set_url_m076BC425E754574E8DFCDFA7AC2A37A3EFD5AF21 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::Prepare()
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_Prepare_m32AB43745A92A6762D570E60975AD69DB8FFF566 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method);
// System.Void RecieveMessages/OnMessageRecieved::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnMessageRecieved__ctor_m3715799340A34E2153D9DBA3E47FD2222BDD0173 (OnMessageRecieved_t836C6FE1A364160E42F697B50208F369179B07F4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1 (Delegate_t * p0, Delegate_t * p1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D (Delegate_t * p0, Delegate_t * p1, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<MenuElement>()
inline MenuElementU5BU5D_t417DEB593746AC5F4A6EC8B98C72EAB40B827434* Object_FindObjectsOfType_TisMenuElement_t9A7B58726866102A8F63B3393AF9300404D1B0AE_m8623AEB12C23565869CCA2D5B638BC1EA5095ABD (const RuntimeMethod* method)
{
	return ((  MenuElementU5BU5D_t417DEB593746AC5F4A6EC8B98C72EAB40B827434* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m09CD1D2122B5C7EEABEF526D870B66379AA59F1C_gshared)(method);
}
// System.String UnityEngine.Object::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void hudController::DisableOtherWindows(System.String)
extern "C" IL2CPP_METHOD_ATTR void hudController_DisableOtherWindows_m46F4E71C94921BEDDE58B7E4BFF74F3AADC01A51 (hudController_t5A0777F909E0550E5C6337C48E82A5AD555350F4 * __this, String_t* ___currName0, const RuntimeMethod* method);
// System.Void MenuElement::ToggleState()
extern "C" IL2CPP_METHOD_ATTR void MenuElement_ToggleState_m2DC0D5E78D71C8F2CA3D573A3E04FFD58EA0C08F (MenuElement_t9A7B58726866102A8F63B3393AF9300404D1B0AE * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void InterfaceController::GenericButtonDown(System.String)
extern "C" IL2CPP_METHOD_ATTR void InterfaceController_GenericButtonDown_m7FF64ED5783787AEF02CF77AA86AA839495A45EF (InterfaceController_t023AB28D3794FDF27110D9676E4D5834A8A434CF * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		// SendMessages.Instance.SendPacket(name);
		SendMessages_t2345EAEF6050E39DAF1727EBDC6325E3604C60F0 * L_0 = SendMessages_get_Instance_m2DB8C71F2D6F4C4EAEDF5D9F1F934CD1817D3034(/*hidden argument*/NULL);
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		SendMessages_SendPacket_m3F22B8610D333EAF4B3B3D8D2BB765DAE87EE027(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void InterfaceController::SliderValueChanged(System.Single)
extern "C" IL2CPP_METHOD_ATTR void InterfaceController_SliderValueChanged_m403949566991844C6FAFA1D6B40595D85442452A (InterfaceController_t023AB28D3794FDF27110D9676E4D5834A8A434CF * __this, float ___val0, const RuntimeMethod* method)
{
	{
		// SendMessages.Instance.SendPacket(val.ToString());
		SendMessages_t2345EAEF6050E39DAF1727EBDC6325E3604C60F0 * L_0 = SendMessages_get_Instance_m2DB8C71F2D6F4C4EAEDF5D9F1F934CD1817D3034(/*hidden argument*/NULL);
		String_t* L_1 = Single_ToString_m2B1556CFBBD088D285A0B0EA280F82D3A4344DC3((float*)(&___val0), /*hidden argument*/NULL);
		NullCheck(L_0);
		SendMessages_SendPacket_m3F22B8610D333EAF4B3B3D8D2BB765DAE87EE027(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void InterfaceController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void InterfaceController__ctor_mDEA8CB49107FF6D02DD29CFB439F0FBEF6CD94DE (InterfaceController_t023AB28D3794FDF27110D9676E4D5834A8A434CF * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MenuElement::Start()
extern "C" IL2CPP_METHOD_ATTR void MenuElement_Start_m676715FFDBA0BB921F8B159227227E780284EFA6 (MenuElement_t9A7B58726866102A8F63B3393AF9300404D1B0AE * __this, const RuntimeMethod* method)
{
	{
		// startPosition = transform.localPosition;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_0, /*hidden argument*/NULL);
		__this->set_startPosition_8(L_1);
		// desiredPosition = startPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = __this->get_startPosition_8();
		__this->set_desiredPosition_9(L_2);
		// desiredPosition.y = 0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_3 = __this->get_address_of_desiredPosition_9();
		L_3->set_y_3((0.0f));
		// startSize = transform.localScale;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_4, /*hidden argument*/NULL);
		__this->set_startSize_6(L_5);
		// EndEvent.Invoke();
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_6 = __this->get_EndEvent_5();
		NullCheck(L_6);
		UnityEvent_Invoke_mB2FA1C76256FE34D5E7F84ABE528AC61CE8A0325(L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuElement::Update()
extern "C" IL2CPP_METHOD_ATTR void MenuElement_Update_m41FEF7783B1BA5C21D19B3EDCB333B43F9B31E48 (MenuElement_t9A7B58726866102A8F63B3393AF9300404D1B0AE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuElement_Update_m41FEF7783B1BA5C21D19B3EDCB333B43F9B31E48_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.localScale = Vector3.Lerp(transform.localScale, desiredScale, Time.deltaTime * moveSpeed);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_1, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = __this->get_desiredScale_7();
		float L_4 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		float L_5 = __this->get_moveSpeed_10();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(L_2, L_3, ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_0, L_6, /*hidden argument*/NULL);
		// transform.localPosition = Vector3.Lerp(transform.localPosition, desiredPosition, Time.deltaTime * moveSpeed);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_8, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = __this->get_desiredPosition_9();
		float L_11 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		float L_12 = __this->get_moveSpeed_10();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(L_9, L_10, ((float)il2cpp_codegen_multiply((float)L_11, (float)L_12)), /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_7, L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuElement::Close()
extern "C" IL2CPP_METHOD_ATTR void MenuElement_Close_mE01247A45B262B529BC1142F71A95EE1AAE6C493 (MenuElement_t9A7B58726866102A8F63B3393AF9300404D1B0AE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuElement_Close_mE01247A45B262B529BC1142F71A95EE1AAE6C493_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// desiredScale = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_desiredScale_7(L_0);
		// desiredPosition.y = 0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_1 = __this->get_address_of_desiredPosition_9();
		L_1->set_y_3((0.0f));
		// moveSpeed = 11f;
		__this->set_moveSpeed_10((11.0f));
		// EndEvent.Invoke();
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_2 = __this->get_EndEvent_5();
		NullCheck(L_2);
		UnityEvent_Invoke_mB2FA1C76256FE34D5E7F84ABE528AC61CE8A0325(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuElement::Open()
extern "C" IL2CPP_METHOD_ATTR void MenuElement_Open_m16409C74A1314A74F647FF29EA9D991CD1A4C12D (MenuElement_t9A7B58726866102A8F63B3393AF9300404D1B0AE * __this, const RuntimeMethod* method)
{
	{
		// desiredScale = startSize;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_startSize_6();
		__this->set_desiredScale_7(L_0);
		// desiredPosition = startPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = __this->get_startPosition_8();
		__this->set_desiredPosition_9(L_1);
		// moveSpeed = 7f;
		__this->set_moveSpeed_10((7.0f));
		// StartEvent.Invoke();
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_2 = __this->get_StartEvent_4();
		NullCheck(L_2);
		UnityEvent_Invoke_mB2FA1C76256FE34D5E7F84ABE528AC61CE8A0325(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuElement::ToggleState()
extern "C" IL2CPP_METHOD_ATTR void MenuElement_ToggleState_m2DC0D5E78D71C8F2CA3D573A3E04FFD58EA0C08F (MenuElement_t9A7B58726866102A8F63B3393AF9300404D1B0AE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuElement_ToggleState_m2DC0D5E78D71C8F2CA3D573A3E04FFD58EA0C08F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (desiredScale == startSize) {
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_desiredScale_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = __this->get_startSize_6();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		bool L_2 = Vector3_op_Equality_mA9E2F96E98E71AE7ACCE74766D700D41F0404806(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// Close();
		MenuElement_Close_mE01247A45B262B529BC1142F71A95EE1AAE6C493(__this, /*hidden argument*/NULL);
		goto IL_002a;
	}

IL_0021:
	{
		// Open();
		MenuElement_Open_m16409C74A1314A74F647FF29EA9D991CD1A4C12D(__this, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void MenuElement::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MenuElement__ctor_m7DA621C702C45E0EE6E9241C079149E48768A6FD (MenuElement_t9A7B58726866102A8F63B3393AF9300404D1B0AE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuElement__ctor_m7DA621C702C45E0EE6E9241C079149E48768A6FD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Vector3 startSize = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_startSize_6(L_0);
		// Vector3 desiredScale = Vector3.zero;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_desiredScale_7(L_1);
		// float moveSpeed = 7f;
		__this->set_moveSpeed_10((7.0f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RecieveMessages::Start()
extern "C" IL2CPP_METHOD_ATTR void RecieveMessages_Start_m6E9228D8D449B5D9D04899A2878D3890DC30B593 (RecieveMessages_t9C8D088B2F3A1B105AE49106201BE53BE69A52EB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecieveMessages_Start_m6E9228D8D449B5D9D04899A2878D3890DC30B593_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int receiverPort = 1998;
		V_0 = ((int32_t)1998);
		// receiver = new UdpClient(receiverPort);
		int32_t L_0 = V_0;
		UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641 * L_1 = (UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641 *)il2cpp_codegen_object_new(UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641_il2cpp_TypeInfo_var);
		UdpClient__ctor_m16B5D497B74A33323D10285538BF31147B2E5984(L_1, L_0, /*hidden argument*/NULL);
		__this->set_receiver_5(L_1);
		// receiver.BeginReceive(DataReceived, receiver);
		UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641 * L_2 = __this->get_receiver_5();
		AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * L_3 = (AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 *)il2cpp_codegen_object_new(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_il2cpp_TypeInfo_var);
		AsyncCallback__ctor_m36AEE927E6AFEE950656BC5F7841682D23DE2EBB(L_3, __this, (intptr_t)((intptr_t)RecieveMessages_DataReceived_m6A9E67738B75216C2F6A24298CE277D5229E69C8_RuntimeMethod_var), /*hidden argument*/NULL);
		UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641 * L_4 = __this->get_receiver_5();
		NullCheck(L_2);
		UdpClient_BeginReceive_mDC4D583BBB1375CF5C3085FEDD92BB6921E21302(L_2, L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RecieveMessages::OnApplicationQuit()
extern "C" IL2CPP_METHOD_ATTR void RecieveMessages_OnApplicationQuit_m54F87F2B749A99961A48B36D31C3168005F4707B (RecieveMessages_t9C8D088B2F3A1B105AE49106201BE53BE69A52EB * __this, const RuntimeMethod* method)
{
	{
		// receiver.Close();
		UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641 * L_0 = __this->get_receiver_5();
		NullCheck(L_0);
		UdpClient_Close_mA85B745647A63FDF485BEF7C5E59567C0430695E(L_0, /*hidden argument*/NULL);
		// receiver.Dispose();
		UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641 * L_1 = __this->get_receiver_5();
		NullCheck(L_1);
		UdpClient_Dispose_mA3999F7BD0780AECDC27B2274BFC61B56C163ADB(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RecieveMessages::DataReceived(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void RecieveMessages_DataReceived_m6A9E67738B75216C2F6A24298CE277D5229E69C8 (RecieveMessages_t9C8D088B2F3A1B105AE49106201BE53BE69A52EB * __this, RuntimeObject* ___ar0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecieveMessages_DataReceived_m6A9E67738B75216C2F6A24298CE277D5229E69C8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641 * V_0 = NULL;
	IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * V_1 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_2 = NULL;
	String_t* V_3 = NULL;
	OnMessageRecieved_t836C6FE1A364160E42F697B50208F369179B07F4 * G_B2_0 = NULL;
	OnMessageRecieved_t836C6FE1A364160E42F697B50208F369179B07F4 * G_B1_0 = NULL;
	{
		// UdpClient c = (UdpClient)ar.AsyncState;
		RuntimeObject* L_0 = ___ar0;
		NullCheck(L_0);
		RuntimeObject * L_1 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(2 /* System.Object System.IAsyncResult::get_AsyncState() */, IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598_il2cpp_TypeInfo_var, L_0);
		V_0 = ((UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641 *)CastclassClass((RuntimeObject*)L_1, UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641_il2cpp_TypeInfo_var));
		// IPEndPoint receivedIpEndPoint = new IPEndPoint(IPAddress.Any, 0);
		IL2CPP_RUNTIME_CLASS_INIT(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_il2cpp_TypeInfo_var);
		IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_2 = ((IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_il2cpp_TypeInfo_var))->get_Any_0();
		IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * L_3 = (IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F *)il2cpp_codegen_object_new(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_il2cpp_TypeInfo_var);
		IPEndPoint__ctor_m1C90FD0534415E17207A0BBC05CD381335089845(L_3, L_2, 0, /*hidden argument*/NULL);
		V_1 = L_3;
		// Byte[] receivedBytes = c.EndReceive(ar, ref receivedIpEndPoint);
		UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641 * L_4 = V_0;
		RuntimeObject* L_5 = ___ar0;
		NullCheck(L_4);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = UdpClient_EndReceive_mF25D1BFECC2581E32DB6A1202EA4670B20580A4F(L_4, L_5, (IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F **)(&V_1), /*hidden argument*/NULL);
		V_2 = L_6;
		// string currPacket = System.Text.Encoding.UTF8.GetString(receivedBytes);
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_7 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = V_2;
		NullCheck(L_7);
		String_t* L_9 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(32 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_7, L_8);
		V_3 = L_9;
		// Debug.Log(currPacket);
		String_t* L_10 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_10, /*hidden argument*/NULL);
		// messageRecieved?.Invoke(currPacket);
		OnMessageRecieved_t836C6FE1A364160E42F697B50208F369179B07F4 * L_11 = ((RecieveMessages_t9C8D088B2F3A1B105AE49106201BE53BE69A52EB_StaticFields*)il2cpp_codegen_static_fields_for(RecieveMessages_t9C8D088B2F3A1B105AE49106201BE53BE69A52EB_il2cpp_TypeInfo_var))->get_messageRecieved_4();
		OnMessageRecieved_t836C6FE1A364160E42F697B50208F369179B07F4 * L_12 = L_11;
		G_B1_0 = L_12;
		if (L_12)
		{
			G_B2_0 = L_12;
			goto IL_0041;
		}
	}
	{
		goto IL_0048;
	}

IL_0041:
	{
		String_t* L_13 = V_3;
		NullCheck(G_B2_0);
		OnMessageRecieved_Invoke_mC75987CF58790F73DFE779269A962F5FCDAC3E0D(G_B2_0, L_13, /*hidden argument*/NULL);
	}

IL_0048:
	{
		// c.BeginReceive(DataReceived, ar.AsyncState);
		UdpClient_t94741C2FBA0D9E3270ABDDBA57811D00881D5641 * L_14 = V_0;
		AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * L_15 = (AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 *)il2cpp_codegen_object_new(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_il2cpp_TypeInfo_var);
		AsyncCallback__ctor_m36AEE927E6AFEE950656BC5F7841682D23DE2EBB(L_15, __this, (intptr_t)((intptr_t)RecieveMessages_DataReceived_m6A9E67738B75216C2F6A24298CE277D5229E69C8_RuntimeMethod_var), /*hidden argument*/NULL);
		RuntimeObject* L_16 = ___ar0;
		NullCheck(L_16);
		RuntimeObject * L_17 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(2 /* System.Object System.IAsyncResult::get_AsyncState() */, IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598_il2cpp_TypeInfo_var, L_16);
		NullCheck(L_14);
		UdpClient_BeginReceive_mDC4D583BBB1375CF5C3085FEDD92BB6921E21302(L_14, L_15, L_17, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RecieveMessages::.ctor()
extern "C" IL2CPP_METHOD_ATTR void RecieveMessages__ctor_mC69E752EAB9E6A15A41A79D42817A1FF3416550B (RecieveMessages_t9C8D088B2F3A1B105AE49106201BE53BE69A52EB * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_OnMessageRecieved_t836C6FE1A364160E42F697B50208F369179B07F4 (OnMessageRecieved_t836C6FE1A364160E42F697B50208F369179B07F4 * __this, String_t* ___result0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___result0' to native representation
	char* ____result0_marshaled = NULL;
	____result0_marshaled = il2cpp_codegen_marshal_string(___result0);

	// Native function invocation
	il2cppPInvokeFunc(____result0_marshaled);

	// Marshaling cleanup of parameter '___result0' native representation
	il2cpp_codegen_marshal_free(____result0_marshaled);
	____result0_marshaled = NULL;

}
// System.Void RecieveMessages/OnMessageRecieved::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnMessageRecieved__ctor_m3715799340A34E2153D9DBA3E47FD2222BDD0173 (OnMessageRecieved_t836C6FE1A364160E42F697B50208F369179B07F4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void RecieveMessages/OnMessageRecieved::Invoke(System.String)
extern "C" IL2CPP_METHOD_ATTR void OnMessageRecieved_Invoke_mC75987CF58790F73DFE779269A962F5FCDAC3E0D (OnMessageRecieved_t836C6FE1A364160E42F697B50208F369179B07F4 * __this, String_t* ___result0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 1)
				{
					// open
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___result0, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
				}
			}
			else if (___parameterCount != 1)
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker0::Invoke(targetMethod, ___result0);
							else
								GenericVirtActionInvoker0::Invoke(targetMethod, ___result0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___result0);
							else
								VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___result0);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___result0, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___result0, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___result0);
							else
								GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___result0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___result0);
							else
								VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___result0);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___result0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker0::Invoke(targetMethod, ___result0);
						else
							GenericVirtActionInvoker0::Invoke(targetMethod, ___result0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___result0);
						else
							VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___result0);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___result0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___result0, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___result0);
						else
							GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___result0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___result0);
						else
							VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___result0);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult RecieveMessages/OnMessageRecieved::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* OnMessageRecieved_BeginInvoke_m4E25A791947A1EE15F2C172388306954C56B2FBE (OnMessageRecieved_t836C6FE1A364160E42F697B50208F369179B07F4 * __this, String_t* ___result0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___result0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void RecieveMessages/OnMessageRecieved::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void OnMessageRecieved_EndInvoke_m7105D78DF3FB45473BD7CDA8806769646C4B322F (OnMessageRecieved_t836C6FE1A364160E42F697B50208F369179B07F4 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// SendMessages SendMessages::get_Instance()
extern "C" IL2CPP_METHOD_ATTR SendMessages_t2345EAEF6050E39DAF1727EBDC6325E3604C60F0 * SendMessages_get_Instance_m2DB8C71F2D6F4C4EAEDF5D9F1F934CD1817D3034 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SendMessages_get_Instance_m2DB8C71F2D6F4C4EAEDF5D9F1F934CD1817D3034_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static SendMessages Instance { get; private set; }
		SendMessages_t2345EAEF6050E39DAF1727EBDC6325E3604C60F0 * L_0 = ((SendMessages_t2345EAEF6050E39DAF1727EBDC6325E3604C60F0_StaticFields*)il2cpp_codegen_static_fields_for(SendMessages_t2345EAEF6050E39DAF1727EBDC6325E3604C60F0_il2cpp_TypeInfo_var))->get_U3CInstanceU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void SendMessages::set_Instance(SendMessages)
extern "C" IL2CPP_METHOD_ATTR void SendMessages_set_Instance_mA3149BD54BE651AD560A6C6D4D40F4D5C903D62B (SendMessages_t2345EAEF6050E39DAF1727EBDC6325E3604C60F0 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SendMessages_set_Instance_mA3149BD54BE651AD560A6C6D4D40F4D5C903D62B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static SendMessages Instance { get; private set; }
		SendMessages_t2345EAEF6050E39DAF1727EBDC6325E3604C60F0 * L_0 = ___value0;
		((SendMessages_t2345EAEF6050E39DAF1727EBDC6325E3604C60F0_StaticFields*)il2cpp_codegen_static_fields_for(SendMessages_t2345EAEF6050E39DAF1727EBDC6325E3604C60F0_il2cpp_TypeInfo_var))->set_U3CInstanceU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Void SendMessages::Awake()
extern "C" IL2CPP_METHOD_ATTR void SendMessages_Awake_m3A064024DCC6544653CDACDCA4C442A871E44DB0 (SendMessages_t2345EAEF6050E39DAF1727EBDC6325E3604C60F0 * __this, const RuntimeMethod* method)
{
	{
		// Instance = this;
		SendMessages_set_Instance_mA3149BD54BE651AD560A6C6D4D40F4D5C903D62B(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SendMessages::Start()
extern "C" IL2CPP_METHOD_ATTR void SendMessages_Start_m91B82CAA202EB8265A88B157673B1ECE6568995A (SendMessages_t2345EAEF6050E39DAF1727EBDC6325E3604C60F0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SendMessages_Start_m91B82CAA202EB8265A88B157673B1ECE6568995A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sock = new Socket(AddressFamily.InterNetwork, SocketType.Dgram, ProtocolType.Udp);
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_0 = (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 *)il2cpp_codegen_object_new(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_il2cpp_TypeInfo_var);
		Socket__ctor_mE89CA86721C20DB5F3D00D3E6340A17C039A8F83(L_0, 2, 2, ((int32_t)17), /*hidden argument*/NULL);
		__this->set_sock_9(L_0);
		// sock.EnableBroadcast = true;
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_1 = __this->get_sock_9();
		NullCheck(L_1);
		Socket_set_EnableBroadcast_mAF6DE2B827F1D6D57C53981CB89C708B08D80626(L_1, (bool)1, /*hidden argument*/NULL);
		// serverAddr = IPAddress.Parse(IP);
		IL2CPP_RUNTIME_CLASS_INIT(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_il2cpp_TypeInfo_var);
		IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_2 = IPAddress_Parse_mB8537FC76C7BA7482713F289B4EC4C3ED919D273(_stringLiteralD6A4EED80594F0806043581292D64483EBC5D34F, /*hidden argument*/NULL);
		__this->set_serverAddr_7(L_2);
		// print(serverAddr);
		IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_3 = __this->get_serverAddr_7();
		MonoBehaviour_print_m171D860AF3370C46648FE8F3EE3E0E6535E1C774(L_3, /*hidden argument*/NULL);
		// endPoint = new IPEndPoint(serverAddr, PORT_NUM);
		IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_4 = __this->get_serverAddr_7();
		IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * L_5 = (IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F *)il2cpp_codegen_object_new(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_il2cpp_TypeInfo_var);
		IPEndPoint__ctor_m1C90FD0534415E17207A0BBC05CD381335089845(L_5, L_4, ((int32_t)1998), /*hidden argument*/NULL);
		__this->set_endPoint_8(L_5);
		// }
		return;
	}
}
// System.Void SendMessages::OnApplicationQuit()
extern "C" IL2CPP_METHOD_ATTR void SendMessages_OnApplicationQuit_mA81FE7A713ADC6393212E48EEEE2638E8F4E073B (SendMessages_t2345EAEF6050E39DAF1727EBDC6325E3604C60F0 * __this, const RuntimeMethod* method)
{
	{
		// sock.Dispose();
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_0 = __this->get_sock_9();
		NullCheck(L_0);
		Socket_Dispose_m34C079AE162CF588FB9FFA9F76B010DF337DE362(L_0, /*hidden argument*/NULL);
		// sock.Close();
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_1 = __this->get_sock_9();
		NullCheck(L_1);
		Socket_Close_mBB794B7D2AEC0A2478540381D6CA7F6DB4913D09(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SendMessages::SendPacket(System.String)
extern "C" IL2CPP_METHOD_ATTR void SendMessages_SendPacket_m3F22B8610D333EAF4B3B3D8D2BB765DAE87EE027 (SendMessages_t2345EAEF6050E39DAF1727EBDC6325E3604C60F0 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SendMessages_SendPacket_m3F22B8610D333EAF4B3B3D8D2BB765DAE87EE027_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5 * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		// send_buffer = Encoding.ASCII.GetBytes(message);
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_0 = Encoding_get_ASCII_m9B673AE3152AB04D07CADE6E5E142C785B5BC94E(/*hidden argument*/NULL);
		String_t* L_1 = ___message0;
		NullCheck(L_0);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		__this->set_send_buffer_10(L_2);
		// sock.SendTo(send_buffer, endPoint);
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_3 = __this->get_sock_9();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = __this->get_send_buffer_10();
		IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * L_5 = __this->get_endPoint_8();
		NullCheck(L_3);
		Socket_SendTo_mF55C570D2F372EDC3331DDCFF6CE16B1AB2FDBB5(L_3, L_4, L_5, /*hidden argument*/NULL);
		goto IL_003a;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_002e;
		throw e;
	}

CATCH_002e:
	{ // begin catch(System.Net.Sockets.SocketException)
		// } catch (SocketException s) {
		V_0 = ((SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5 *)__exception_local);
		// Debug.Log(s);
		SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5 * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_6, /*hidden argument*/NULL);
		goto IL_003a;
	} // end catch (depth: 1)

IL_003a:
	{
		// Debug.Log(message);
		String_t* L_7 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SendMessages::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SendMessages__ctor_m5C864D3AF0F6D904703980C70EFB2B00D0757C5B (SendMessages_t2345EAEF6050E39DAF1727EBDC6325E3604C60F0 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VideoInfo::.ctor()
extern "C" IL2CPP_METHOD_ATTR void VideoInfo__ctor_m30936290F5037F9FD1B8A2784AAAF937D8BBC019 (VideoInfo_t7E5A38A250D6E27C985A55FC8F4BB36C4211B16F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VideoInfoCollection::.ctor()
extern "C" IL2CPP_METHOD_ATTR void VideoInfoCollection__ctor_mF023BF10B2EF89846FE090546FD29D2B270D8C29 (VideoInfoCollection_t72B0AF865AEE1D9CF2CE38DC82CB4DCCD97182C6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VuforiaSettings::Start()
extern "C" IL2CPP_METHOD_ATTR void VuforiaSettings_Start_m618FA6573759668F85C9E883C3A06C717FA11122 (VuforiaSettings_t659607A555136BCAFCBBD550710B74B8704C047C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaSettings_Start_m618FA6573759668F85C9E883C3A06C717FA11122_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// VuforiaARController.Instance.RegisterVuforiaStartedCallback(OnVuforiaStarted);
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876_il2cpp_TypeInfo_var);
		VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876 * L_0 = VuforiaARController_get_Instance_m88278E3FE64C49BDDF48D5A6F7627654B7747A9D(/*hidden argument*/NULL);
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_1 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_1, __this, (intptr_t)((intptr_t)VuforiaSettings_OnVuforiaStarted_m0472302C5BF4D7C7E37090C0387E7E44F49081F5_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		VuforiaARController_RegisterVuforiaStartedCallback_mE46BE54BC019AB67362EEE516E6225F2192D19E3(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VuforiaSettings::OnDisable()
extern "C" IL2CPP_METHOD_ATTR void VuforiaSettings_OnDisable_m62394B616324402A403DC326304E48A82A5BA73D (VuforiaSettings_t659607A555136BCAFCBBD550710B74B8704C047C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaSettings_OnDisable_m62394B616324402A403DC326304E48A82A5BA73D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// VuforiaARController.Instance.UnregisterVuforiaStartedCallback(OnVuforiaStarted);
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876_il2cpp_TypeInfo_var);
		VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876 * L_0 = VuforiaARController_get_Instance_m88278E3FE64C49BDDF48D5A6F7627654B7747A9D(/*hidden argument*/NULL);
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_1 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_1, __this, (intptr_t)((intptr_t)VuforiaSettings_OnVuforiaStarted_m0472302C5BF4D7C7E37090C0387E7E44F49081F5_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		VuforiaARController_UnregisterVuforiaStartedCallback_mC133F11878820C84277FD24D7DDB9402E9F721AA(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VuforiaSettings::OnVuforiaStarted()
extern "C" IL2CPP_METHOD_ATTR void VuforiaSettings_OnVuforiaStarted_m0472302C5BF4D7C7E37090C0387E7E44F49081F5 (VuforiaSettings_t659607A555136BCAFCBBD550710B74B8704C047C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaSettings_OnVuforiaStarted_m0472302C5BF4D7C7E37090C0387E7E44F49081F5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CameraDevice.Instance.SetFocusMode(CameraDevice.FocusMode.FOCUS_MODE_CONTINUOUSAUTO);
		IL2CPP_RUNTIME_CLASS_INIT(CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B_il2cpp_TypeInfo_var);
		CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B * L_0 = CameraDevice_get_Instance_m0B0568E489617394A6BCA95F4AAE7D884912C330(/*hidden argument*/NULL);
		NullCheck(L_0);
		CameraDevice_SetFocusMode_m34A2BBE1DF0908E996C9A38C03DA190208ED349D(L_0, 2, /*hidden argument*/NULL);
		// Debug.Log("Setting focus mode: Continuous auto");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral534F9694C951C3DC862CAABA8AD8CB9C896F18EB, /*hidden argument*/NULL);
		// StartCoroutine(DelaySetupRoutine());
		RuntimeObject* L_1 = VuforiaSettings_DelaySetupRoutine_mCB2A50D0DAC82CF66123DAD0D18B7ED295F23592(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator VuforiaSettings::DelaySetupRoutine()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* VuforiaSettings_DelaySetupRoutine_mCB2A50D0DAC82CF66123DAD0D18B7ED295F23592 (VuforiaSettings_t659607A555136BCAFCBBD550710B74B8704C047C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaSettings_DelaySetupRoutine_mCB2A50D0DAC82CF66123DAD0D18B7ED295F23592_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDelaySetupRoutineU3Ed__3_tC6689361693EFAEAE05D5C215F789EAE750CA969 * L_0 = (U3CDelaySetupRoutineU3Ed__3_tC6689361693EFAEAE05D5C215F789EAE750CA969 *)il2cpp_codegen_object_new(U3CDelaySetupRoutineU3Ed__3_tC6689361693EFAEAE05D5C215F789EAE750CA969_il2cpp_TypeInfo_var);
		U3CDelaySetupRoutineU3Ed__3__ctor_m46AB7768462FAA58667EE77A5720D8B161E3DD3B(L_0, 0, /*hidden argument*/NULL);
		U3CDelaySetupRoutineU3Ed__3_tC6689361693EFAEAE05D5C215F789EAE750CA969 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void VuforiaSettings::.ctor()
extern "C" IL2CPP_METHOD_ATTR void VuforiaSettings__ctor_m007645F08194E7FAA85F3C42365442207721664D (VuforiaSettings_t659607A555136BCAFCBBD550710B74B8704C047C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VuforiaSettings/<DelaySetupRoutine>d__3::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CDelaySetupRoutineU3Ed__3__ctor_m46AB7768462FAA58667EE77A5720D8B161E3DD3B (U3CDelaySetupRoutineU3Ed__3_tC6689361693EFAEAE05D5C215F789EAE750CA969 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void VuforiaSettings/<DelaySetupRoutine>d__3::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CDelaySetupRoutineU3Ed__3_System_IDisposable_Dispose_m639A617D56F60EA24A7DFFDCD1C3D8B416C3BBD6 (U3CDelaySetupRoutineU3Ed__3_tC6689361693EFAEAE05D5C215F789EAE750CA969 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean VuforiaSettings/<DelaySetupRoutine>d__3::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CDelaySetupRoutineU3Ed__3_MoveNext_mFA8E54AFE093DCA8D082226AE56E6804BA49122B (U3CDelaySetupRoutineU3Ed__3_tC6689361693EFAEAE05D5C215F789EAE750CA969 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDelaySetupRoutineU3Ed__3_MoveNext_mFA8E54AFE093DCA8D082226AE56E6804BA49122B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0039;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(.5f);
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_3 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_3, (0.5f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0039:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Debug.Log("SETTING Viewer AR mode");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral467E09595712EBBF4948285A2996E57B12481C0A, /*hidden argument*/NULL);
		// MixedRealityController.Instance.SetMode(MixedRealityController.Mode.VIEWER_AR);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityController_t140A79CE6381E61D93A6C265DCC7A50522A901BE_il2cpp_TypeInfo_var);
		MixedRealityController_t140A79CE6381E61D93A6C265DCC7A50522A901BE * L_4 = MixedRealityController_get_Instance_m248BC55FA8BABF362E3C985D8BB400FD7D1DD0C7(/*hidden argument*/NULL);
		NullCheck(L_4);
		MixedRealityController_SetMode_mB2605D249B4EADB2926C0BEEC03CE0EC9CB3DACA(L_4, 4, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object VuforiaSettings/<DelaySetupRoutine>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CDelaySetupRoutineU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD2ABBB85428F611B761CFF0F8ECAFB918FFCDE60 (U3CDelaySetupRoutineU3Ed__3_tC6689361693EFAEAE05D5C215F789EAE750CA969 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void VuforiaSettings/<DelaySetupRoutine>d__3::System.Collections.IEnumerator.Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CDelaySetupRoutineU3Ed__3_System_Collections_IEnumerator_Reset_m97C211F508F9F32A85B0D33725E869E96D40EDEC (U3CDelaySetupRoutineU3Ed__3_tC6689361693EFAEAE05D5C215F789EAE750CA969 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDelaySetupRoutineU3Ed__3_System_Collections_IEnumerator_Reset_m97C211F508F9F32A85B0D33725E869E96D40EDEC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CDelaySetupRoutineU3Ed__3_System_Collections_IEnumerator_Reset_m97C211F508F9F32A85B0D33725E869E96D40EDEC_RuntimeMethod_var);
	}
}
// System.Object VuforiaSettings/<DelaySetupRoutine>d__3::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CDelaySetupRoutineU3Ed__3_System_Collections_IEnumerator_get_Current_m3DC0E50B4387001D219ED6323C1B46C50E4A6DCE (U3CDelaySetupRoutineU3Ed__3_tC6689361693EFAEAE05D5C215F789EAE750CA969 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void YouTubeAPI::Start()
extern "C" IL2CPP_METHOD_ATTR void YouTubeAPI_Start_m3303B9FF9FEAC15216CE25CD83D41CB33DD8DDC9 (YouTubeAPI_t77BD34FB90DF0001C2B731FB6F07502995C16897 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (YouTubeAPI_Start_m3303B9FF9FEAC15216CE25CD83D41CB33DD8DDC9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// videoPlayer = GetComponent<VideoPlayer>();
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_0 = Component_GetComponent_TisVideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2_m8BD724EFE5F13D9F3164EA576D0914D714758959(__this, /*hidden argument*/Component_GetComponent_TisVideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2_m8BD724EFE5F13D9F3164EA576D0914D714758959_RuntimeMethod_var);
		__this->set_videoPlayer_6(L_0);
		// GetLink(YouTubeURL);
		String_t* L_1 = __this->get_YouTubeURL_5();
		YouTubeAPI_GetLink_mA718B5EA8B577AA23B7F48E2AA1B40BC1E4F3D4B(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void YouTubeAPI::GetLink(System.String)
extern "C" IL2CPP_METHOD_ATTR void YouTubeAPI_GetLink_mA718B5EA8B577AA23B7F48E2AA1B40BC1E4F3D4B (YouTubeAPI_t77BD34FB90DF0001C2B731FB6F07502995C16897 * __this, String_t* ___url0, const RuntimeMethod* method)
{
	{
		// StartCoroutine(GetYouTubeLinkRoutine(url));
		String_t* L_0 = ___url0;
		RuntimeObject* L_1 = YouTubeAPI_GetYouTubeLinkRoutine_mFE937D625BAEA209C1061A2CA048A8385B0BDA18(__this, L_0, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator YouTubeAPI::GetYouTubeLinkRoutine(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* YouTubeAPI_GetYouTubeLinkRoutine_mFE937D625BAEA209C1061A2CA048A8385B0BDA18 (YouTubeAPI_t77BD34FB90DF0001C2B731FB6F07502995C16897 * __this, String_t* ___url0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (YouTubeAPI_GetYouTubeLinkRoutine_mFE937D625BAEA209C1061A2CA048A8385B0BDA18_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetYouTubeLinkRoutineU3Ed__5_t9813147061324262BA459D775E1DE964C601EC11 * L_0 = (U3CGetYouTubeLinkRoutineU3Ed__5_t9813147061324262BA459D775E1DE964C601EC11 *)il2cpp_codegen_object_new(U3CGetYouTubeLinkRoutineU3Ed__5_t9813147061324262BA459D775E1DE964C601EC11_il2cpp_TypeInfo_var);
		U3CGetYouTubeLinkRoutineU3Ed__5__ctor_mBBF750CC8DB635A66D7F09E2BF07A82EAFEF5B05(L_0, 0, /*hidden argument*/NULL);
		U3CGetYouTubeLinkRoutineU3Ed__5_t9813147061324262BA459D775E1DE964C601EC11 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		U3CGetYouTubeLinkRoutineU3Ed__5_t9813147061324262BA459D775E1DE964C601EC11 * L_2 = L_1;
		String_t* L_3 = ___url0;
		NullCheck(L_2);
		L_2->set_url_2(L_3);
		return L_2;
	}
}
// System.Void YouTubeAPI::.ctor()
extern "C" IL2CPP_METHOD_ATTR void YouTubeAPI__ctor_mEB72DEBEE29C96E1F7F4FFF88EEFED97527DED96 (YouTubeAPI_t77BD34FB90DF0001C2B731FB6F07502995C16897 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void YouTubeAPI/<>c::.cctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mB055568A7736B1C6CAE987DCF8BFFA05E917C6A5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_mB055568A7736B1C6CAE987DCF8BFFA05E917C6A5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tBC09F3698A728D2527404129B64CD4BD6EAD73CF * L_0 = (U3CU3Ec_tBC09F3698A728D2527404129B64CD4BD6EAD73CF *)il2cpp_codegen_object_new(U3CU3Ec_tBC09F3698A728D2527404129B64CD4BD6EAD73CF_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m973EE14584F99998C3EC5966D3D86E3CEC0098E4(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tBC09F3698A728D2527404129B64CD4BD6EAD73CF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBC09F3698A728D2527404129B64CD4BD6EAD73CF_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void YouTubeAPI/<>c::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m973EE14584F99998C3EC5966D3D86E3CEC0098E4 (U3CU3Ec_tBC09F3698A728D2527404129B64CD4BD6EAD73CF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean YouTubeAPI/<>c::<GetYouTubeLinkRoutine>b__5_0(VideoInfo)
extern "C" IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetYouTubeLinkRoutineU3Eb__5_0_m010FE3A545CBB3C934944B44CF95F5F5B49F5BE7 (U3CU3Ec_tBC09F3698A728D2527404129B64CD4BD6EAD73CF * __this, VideoInfo_t7E5A38A250D6E27C985A55FC8F4BB36C4211B16F * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CGetYouTubeLinkRoutineU3Eb__5_0_m010FE3A545CBB3C934944B44CF95F5F5B49F5BE7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		// item => item.quality == "medium" && item.type.Contains("mp4")).FirstOrDefault();
		VideoInfo_t7E5A38A250D6E27C985A55FC8F4BB36C4211B16F * L_0 = ___item0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_quality_0();
		bool L_2 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_1, _stringLiteral20AF418657698863DB8D966F4B42ED8DC7D0BD54, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		VideoInfo_t7E5A38A250D6E27C985A55FC8F4BB36C4211B16F * L_3 = ___item0;
		NullCheck(L_3);
		String_t* L_4 = L_3->get_type_3();
		NullCheck(L_4);
		bool L_5 = String_Contains_m4488034AF8CB3EEA9A205EB8A1F25D438FF8704B(L_4, _stringLiteralE84C77E5D289D099D81227C74C42514EA206FD79, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0025;
	}

IL_0024:
	{
		G_B3_0 = 0;
	}

IL_0025:
	{
		return (bool)G_B3_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void YouTubeAPI/<GetYouTubeLinkRoutine>d__5::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CGetYouTubeLinkRoutineU3Ed__5__ctor_mBBF750CC8DB635A66D7F09E2BF07A82EAFEF5B05 (U3CGetYouTubeLinkRoutineU3Ed__5_t9813147061324262BA459D775E1DE964C601EC11 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void YouTubeAPI/<GetYouTubeLinkRoutine>d__5::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CGetYouTubeLinkRoutineU3Ed__5_System_IDisposable_Dispose_mBB25D71C5C1728B2472B6053E07507E3A4B19C78 (U3CGetYouTubeLinkRoutineU3Ed__5_t9813147061324262BA459D775E1DE964C601EC11 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean YouTubeAPI/<GetYouTubeLinkRoutine>d__5::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CGetYouTubeLinkRoutineU3Ed__5_MoveNext_m128FB3F0E78E92827E656896F531FB828A38AC1C (U3CGetYouTubeLinkRoutineU3Ed__5_t9813147061324262BA459D775E1DE964C601EC11 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetYouTubeLinkRoutineU3Ed__5_MoveNext_m128FB3F0E78E92827E656896F531FB828A38AC1C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Func_2_t2545C65108613DA6ADF0E4952F253E2BC3F65ED3 * G_B10_0 = NULL;
	VideoInfoU5BU5D_t1892A039097B71C8907A8741BD3FF91B756BDC8F* G_B10_1 = NULL;
	U3CGetYouTubeLinkRoutineU3Ed__5_t9813147061324262BA459D775E1DE964C601EC11 * G_B10_2 = NULL;
	Func_2_t2545C65108613DA6ADF0E4952F253E2BC3F65ED3 * G_B9_0 = NULL;
	VideoInfoU5BU5D_t1892A039097B71C8907A8741BD3FF91B756BDC8F* G_B9_1 = NULL;
	U3CGetYouTubeLinkRoutineU3Ed__5_t9813147061324262BA459D775E1DE964C601EC11 * G_B9_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0055;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->set_U3CU3E1__state_0((-1));
		// UnityWebRequest www = UnityWebRequest.Get(API_ENDPOINT + url);
		String_t* L_3 = __this->get_url_2();
		String_t* L_4 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral55589E9E8FD977449720E69BD41D7DB873245356, L_3, /*hidden argument*/NULL);
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_5 = UnityWebRequest_Get_mF4E12AA47AAF25221AD738B434B0EA8D40659B18(L_4, /*hidden argument*/NULL);
		__this->set_U3CwwwU3E5__1_4(L_5);
		// yield return www.SendWebRequest();
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_6 = __this->get_U3CwwwU3E5__1_4();
		NullCheck(L_6);
		UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353 * L_7 = UnityWebRequest_SendWebRequest_mF536CB2A0A39354A54B555B66B017816C5833EBD(L_6, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_7);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0055:
	{
		__this->set_U3CU3E1__state_0((-1));
		// VideoInfo[] videoArray = JsonUtility.FromJson<VideoInfoCollection>(
		// "{\"videoInfoCollection\":" + www.downloadHandler.text + "}").videoInfoCollection;
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_8 = __this->get_U3CwwwU3E5__1_4();
		NullCheck(L_8);
		DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * L_9 = UnityWebRequest_get_downloadHandler_m83044026479E6B4B2739DCE9EEA8A0FAE7D9AF41(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		String_t* L_10 = DownloadHandler_get_text_m1D707E375899B4F4F0434B79AB8D57ADFE5424FF(L_9, /*hidden argument*/NULL);
		String_t* L_11 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral928D2B35E90A67FBBF9F74671185EE7E0E5DE70C, L_10, _stringLiteralC2B7DF6201FDD3362399091F0A29550DF3505B6A, /*hidden argument*/NULL);
		VideoInfoCollection_t72B0AF865AEE1D9CF2CE38DC82CB4DCCD97182C6 * L_12 = JsonUtility_FromJson_TisVideoInfoCollection_t72B0AF865AEE1D9CF2CE38DC82CB4DCCD97182C6_m0605452C1DD9890AC0B2B06C4ECB38722906CE50(L_11, /*hidden argument*/JsonUtility_FromJson_TisVideoInfoCollection_t72B0AF865AEE1D9CF2CE38DC82CB4DCCD97182C6_m0605452C1DD9890AC0B2B06C4ECB38722906CE50_RuntimeMethod_var);
		NullCheck(L_12);
		VideoInfoU5BU5D_t1892A039097B71C8907A8741BD3FF91B756BDC8F* L_13 = L_12->get_videoInfoCollection_0();
		__this->set_U3CvideoArrayU3E5__2_5(L_13);
		// VideoInfo videoInfo = videoArray.Where(
		// item => item.quality == "medium" && item.type.Contains("mp4")).FirstOrDefault();
		VideoInfoU5BU5D_t1892A039097B71C8907A8741BD3FF91B756BDC8F* L_14 = __this->get_U3CvideoArrayU3E5__2_5();
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tBC09F3698A728D2527404129B64CD4BD6EAD73CF_il2cpp_TypeInfo_var);
		Func_2_t2545C65108613DA6ADF0E4952F253E2BC3F65ED3 * L_15 = ((U3CU3Ec_tBC09F3698A728D2527404129B64CD4BD6EAD73CF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBC09F3698A728D2527404129B64CD4BD6EAD73CF_il2cpp_TypeInfo_var))->get_U3CU3E9__5_0_1();
		Func_2_t2545C65108613DA6ADF0E4952F253E2BC3F65ED3 * L_16 = L_15;
		G_B9_0 = L_16;
		G_B9_1 = L_14;
		G_B9_2 = __this;
		if (L_16)
		{
			G_B10_0 = L_16;
			G_B10_1 = L_14;
			G_B10_2 = __this;
			goto IL_00b1;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tBC09F3698A728D2527404129B64CD4BD6EAD73CF_il2cpp_TypeInfo_var);
		U3CU3Ec_tBC09F3698A728D2527404129B64CD4BD6EAD73CF * L_17 = ((U3CU3Ec_tBC09F3698A728D2527404129B64CD4BD6EAD73CF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBC09F3698A728D2527404129B64CD4BD6EAD73CF_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t2545C65108613DA6ADF0E4952F253E2BC3F65ED3 * L_18 = (Func_2_t2545C65108613DA6ADF0E4952F253E2BC3F65ED3 *)il2cpp_codegen_object_new(Func_2_t2545C65108613DA6ADF0E4952F253E2BC3F65ED3_il2cpp_TypeInfo_var);
		Func_2__ctor_m3A75FAE579E7C61A9DED00E5BEBE6F62E44889F4(L_18, L_17, (intptr_t)((intptr_t)U3CU3Ec_U3CGetYouTubeLinkRoutineU3Eb__5_0_m010FE3A545CBB3C934944B44CF95F5F5B49F5BE7_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m3A75FAE579E7C61A9DED00E5BEBE6F62E44889F4_RuntimeMethod_var);
		Func_2_t2545C65108613DA6ADF0E4952F253E2BC3F65ED3 * L_19 = L_18;
		((U3CU3Ec_tBC09F3698A728D2527404129B64CD4BD6EAD73CF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBC09F3698A728D2527404129B64CD4BD6EAD73CF_il2cpp_TypeInfo_var))->set_U3CU3E9__5_0_1(L_19);
		G_B10_0 = L_19;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
	}

IL_00b1:
	{
		RuntimeObject* L_20 = Enumerable_Where_TisVideoInfo_t7E5A38A250D6E27C985A55FC8F4BB36C4211B16F_m2CE5D6F18B362D17F65C166044ACC0EB2D2CE830((RuntimeObject*)(RuntimeObject*)G_B10_1, G_B10_0, /*hidden argument*/Enumerable_Where_TisVideoInfo_t7E5A38A250D6E27C985A55FC8F4BB36C4211B16F_m2CE5D6F18B362D17F65C166044ACC0EB2D2CE830_RuntimeMethod_var);
		VideoInfo_t7E5A38A250D6E27C985A55FC8F4BB36C4211B16F * L_21 = Enumerable_FirstOrDefault_TisVideoInfo_t7E5A38A250D6E27C985A55FC8F4BB36C4211B16F_mE2819188F6B1C4E1454619C63D5E367F492BB679(L_20, /*hidden argument*/Enumerable_FirstOrDefault_TisVideoInfo_t7E5A38A250D6E27C985A55FC8F4BB36C4211B16F_mE2819188F6B1C4E1454619C63D5E367F492BB679_RuntimeMethod_var);
		NullCheck(G_B10_2);
		G_B10_2->set_U3CvideoInfoU3E5__3_6(L_21);
		// videoPlayer.url = videoInfo.url;
		YouTubeAPI_t77BD34FB90DF0001C2B731FB6F07502995C16897 * L_22 = __this->get_U3CU3E4__this_3();
		NullCheck(L_22);
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_23 = L_22->get_videoPlayer_6();
		VideoInfo_t7E5A38A250D6E27C985A55FC8F4BB36C4211B16F * L_24 = __this->get_U3CvideoInfoU3E5__3_6();
		NullCheck(L_24);
		String_t* L_25 = L_24->get_url_1();
		NullCheck(L_23);
		VideoPlayer_set_url_m076BC425E754574E8DFCDFA7AC2A37A3EFD5AF21(L_23, L_25, /*hidden argument*/NULL);
		// videoPlayer.Prepare();
		YouTubeAPI_t77BD34FB90DF0001C2B731FB6F07502995C16897 * L_26 = __this->get_U3CU3E4__this_3();
		NullCheck(L_26);
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_27 = L_26->get_videoPlayer_6();
		NullCheck(L_27);
		VideoPlayer_Prepare_m32AB43745A92A6762D570E60975AD69DB8FFF566(L_27, /*hidden argument*/NULL);
		// Debug.Log("Video Loaded");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralBED085B91B8E7EA822B98FBA576E41E25774A72D, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object YouTubeAPI/<GetYouTubeLinkRoutine>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CGetYouTubeLinkRoutineU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE7EF0A1237FF9ABEDA4E691309DFC25EAC8F5B90 (U3CGetYouTubeLinkRoutineU3Ed__5_t9813147061324262BA459D775E1DE964C601EC11 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void YouTubeAPI/<GetYouTubeLinkRoutine>d__5::System.Collections.IEnumerator.Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CGetYouTubeLinkRoutineU3Ed__5_System_Collections_IEnumerator_Reset_m7652F6FF2239E652315EF4C4CB2A8F77E953AED1 (U3CGetYouTubeLinkRoutineU3Ed__5_t9813147061324262BA459D775E1DE964C601EC11 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetYouTubeLinkRoutineU3Ed__5_System_Collections_IEnumerator_Reset_m7652F6FF2239E652315EF4C4CB2A8F77E953AED1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CGetYouTubeLinkRoutineU3Ed__5_System_Collections_IEnumerator_Reset_m7652F6FF2239E652315EF4C4CB2A8F77E953AED1_RuntimeMethod_var);
	}
}
// System.Object YouTubeAPI/<GetYouTubeLinkRoutine>d__5::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CGetYouTubeLinkRoutineU3Ed__5_System_Collections_IEnumerator_get_Current_m39CF9389D595477A2948E5E6FD80C35FF81E227A (U3CGetYouTubeLinkRoutineU3Ed__5_t9813147061324262BA459D775E1DE964C601EC11 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void hudController::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void hudController_OnEnable_mB2BED938CE7D974C206817E6D4811F12166B5F6F (hudController_t5A0777F909E0550E5C6337C48E82A5AD555350F4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (hudController_OnEnable_mB2BED938CE7D974C206817E6D4811F12166B5F6F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RecieveMessages.messageRecieved += MessageRecieved;
		OnMessageRecieved_t836C6FE1A364160E42F697B50208F369179B07F4 * L_0 = ((RecieveMessages_t9C8D088B2F3A1B105AE49106201BE53BE69A52EB_StaticFields*)il2cpp_codegen_static_fields_for(RecieveMessages_t9C8D088B2F3A1B105AE49106201BE53BE69A52EB_il2cpp_TypeInfo_var))->get_messageRecieved_4();
		OnMessageRecieved_t836C6FE1A364160E42F697B50208F369179B07F4 * L_1 = (OnMessageRecieved_t836C6FE1A364160E42F697B50208F369179B07F4 *)il2cpp_codegen_object_new(OnMessageRecieved_t836C6FE1A364160E42F697B50208F369179B07F4_il2cpp_TypeInfo_var);
		OnMessageRecieved__ctor_m3715799340A34E2153D9DBA3E47FD2222BDD0173(L_1, __this, (intptr_t)((intptr_t)hudController_MessageRecieved_mB8F55BFEB20DD2FB4B369C2761EA2C8AEAC65CB0_RuntimeMethod_var), /*hidden argument*/NULL);
		Delegate_t * L_2 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_0, L_1, /*hidden argument*/NULL);
		((RecieveMessages_t9C8D088B2F3A1B105AE49106201BE53BE69A52EB_StaticFields*)il2cpp_codegen_static_fields_for(RecieveMessages_t9C8D088B2F3A1B105AE49106201BE53BE69A52EB_il2cpp_TypeInfo_var))->set_messageRecieved_4(((OnMessageRecieved_t836C6FE1A364160E42F697B50208F369179B07F4 *)CastclassSealed((RuntimeObject*)L_2, OnMessageRecieved_t836C6FE1A364160E42F697B50208F369179B07F4_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void hudController::OnDisable()
extern "C" IL2CPP_METHOD_ATTR void hudController_OnDisable_mD33EC40A7662D4DF9E5EE8DEE55B9D5322792D39 (hudController_t5A0777F909E0550E5C6337C48E82A5AD555350F4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (hudController_OnDisable_mD33EC40A7662D4DF9E5EE8DEE55B9D5322792D39_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RecieveMessages.messageRecieved -= MessageRecieved;
		OnMessageRecieved_t836C6FE1A364160E42F697B50208F369179B07F4 * L_0 = ((RecieveMessages_t9C8D088B2F3A1B105AE49106201BE53BE69A52EB_StaticFields*)il2cpp_codegen_static_fields_for(RecieveMessages_t9C8D088B2F3A1B105AE49106201BE53BE69A52EB_il2cpp_TypeInfo_var))->get_messageRecieved_4();
		OnMessageRecieved_t836C6FE1A364160E42F697B50208F369179B07F4 * L_1 = (OnMessageRecieved_t836C6FE1A364160E42F697B50208F369179B07F4 *)il2cpp_codegen_object_new(OnMessageRecieved_t836C6FE1A364160E42F697B50208F369179B07F4_il2cpp_TypeInfo_var);
		OnMessageRecieved__ctor_m3715799340A34E2153D9DBA3E47FD2222BDD0173(L_1, __this, (intptr_t)((intptr_t)hudController_MessageRecieved_mB8F55BFEB20DD2FB4B369C2761EA2C8AEAC65CB0_RuntimeMethod_var), /*hidden argument*/NULL);
		Delegate_t * L_2 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_0, L_1, /*hidden argument*/NULL);
		((RecieveMessages_t9C8D088B2F3A1B105AE49106201BE53BE69A52EB_StaticFields*)il2cpp_codegen_static_fields_for(RecieveMessages_t9C8D088B2F3A1B105AE49106201BE53BE69A52EB_il2cpp_TypeInfo_var))->set_messageRecieved_4(((OnMessageRecieved_t836C6FE1A364160E42F697B50208F369179B07F4 *)CastclassSealed((RuntimeObject*)L_2, OnMessageRecieved_t836C6FE1A364160E42F697B50208F369179B07F4_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void hudController::DisableOtherWindows(System.String)
extern "C" IL2CPP_METHOD_ATTR void hudController_DisableOtherWindows_m46F4E71C94921BEDDE58B7E4BFF74F3AADC01A51 (hudController_t5A0777F909E0550E5C6337C48E82A5AD555350F4 * __this, String_t* ___currName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (hudController_DisableOtherWindows_m46F4E71C94921BEDDE58B7E4BFF74F3AADC01A51_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MenuElementU5BU5D_t417DEB593746AC5F4A6EC8B98C72EAB40B827434* V_0 = NULL;
	int32_t V_1 = 0;
	MenuElement_t9A7B58726866102A8F63B3393AF9300404D1B0AE * V_2 = NULL;
	bool V_3 = false;
	{
		// foreach (MenuElement element in FindObjectsOfType<MenuElement>()) {
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		MenuElementU5BU5D_t417DEB593746AC5F4A6EC8B98C72EAB40B827434* L_0 = Object_FindObjectsOfType_TisMenuElement_t9A7B58726866102A8F63B3393AF9300404D1B0AE_m8623AEB12C23565869CCA2D5B638BC1EA5095ABD(/*hidden argument*/Object_FindObjectsOfType_TisMenuElement_t9A7B58726866102A8F63B3393AF9300404D1B0AE_m8623AEB12C23565869CCA2D5B638BC1EA5095ABD_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_003b;
	}

IL_000c:
	{
		// foreach (MenuElement element in FindObjectsOfType<MenuElement>()) {
		MenuElementU5BU5D_t417DEB593746AC5F4A6EC8B98C72EAB40B827434* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		MenuElement_t9A7B58726866102A8F63B3393AF9300404D1B0AE * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// if (element.name != currName) {
		MenuElement_t9A7B58726866102A8F63B3393AF9300404D1B0AE * L_5 = V_2;
		NullCheck(L_5);
		String_t* L_6 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_5, /*hidden argument*/NULL);
		String_t* L_7 = ___currName0;
		bool L_8 = String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E(L_6, L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0036;
		}
	}
	{
		// element.Close();
		MenuElement_t9A7B58726866102A8F63B3393AF9300404D1B0AE * L_10 = V_2;
		NullCheck(L_10);
		MenuElement_Close_mE01247A45B262B529BC1142F71A95EE1AAE6C493(L_10, /*hidden argument*/NULL);
		// print(element.name);
		MenuElement_t9A7B58726866102A8F63B3393AF9300404D1B0AE * L_11 = V_2;
		NullCheck(L_11);
		String_t* L_12 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_11, /*hidden argument*/NULL);
		MonoBehaviour_print_m171D860AF3370C46648FE8F3EE3E0E6535E1C774(L_12, /*hidden argument*/NULL);
	}

IL_0036:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_003b:
	{
		// foreach (MenuElement element in FindObjectsOfType<MenuElement>()) {
		int32_t L_14 = V_1;
		MenuElementU5BU5D_t417DEB593746AC5F4A6EC8B98C72EAB40B827434* L_15 = V_0;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length)))))))
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void hudController::MessageRecieved(System.String)
extern "C" IL2CPP_METHOD_ATTR void hudController_MessageRecieved_mB8F55BFEB20DD2FB4B369C2761EA2C8AEAC65CB0 (hudController_t5A0777F909E0550E5C6337C48E82A5AD555350F4 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (hudController_MessageRecieved_mB8F55BFEB20DD2FB4B369C2761EA2C8AEAC65CB0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// Debug.Log("Got Message: " + message);
		String_t* L_0 = ___message0;
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralE7C5C34C8A7FA58139A326D9099A8E4230623D3F, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_1, /*hidden argument*/NULL);
		// DisableOtherWindows(message);
		String_t* L_2 = ___message0;
		hudController_DisableOtherWindows_m46F4E71C94921BEDDE58B7E4BFF74F3AADC01A51(__this, L_2, /*hidden argument*/NULL);
		// switch (message) {
		String_t* L_3 = ___message0;
		V_0 = L_3;
		String_t* L_4 = V_0;
		bool L_5 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_4, _stringLiteralCA84D1343B96BAA8137C943ED1860E522CACB238, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0045;
		}
	}
	{
		String_t* L_6 = V_0;
		bool L_7 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_6, _stringLiteral3A01BE17246D588CAF9A649F8A04E3E5D629DB94, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0053;
		}
	}
	{
		String_t* L_8 = V_0;
		bool L_9 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_8, _stringLiteralF98669CC9B81FEA7BD27F04B1D03B400F511A9DF, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0061;
		}
	}
	{
		goto IL_006f;
	}

IL_0045:
	{
		// web.ToggleState();
		MenuElement_t9A7B58726866102A8F63B3393AF9300404D1B0AE * L_10 = __this->get_web_4();
		NullCheck(L_10);
		MenuElement_ToggleState_m2DC0D5E78D71C8F2CA3D573A3E04FFD58EA0C08F(L_10, /*hidden argument*/NULL);
		// break;
		goto IL_0082;
	}

IL_0053:
	{
		// music.ToggleState();
		MenuElement_t9A7B58726866102A8F63B3393AF9300404D1B0AE * L_11 = __this->get_music_5();
		NullCheck(L_11);
		MenuElement_ToggleState_m2DC0D5E78D71C8F2CA3D573A3E04FFD58EA0C08F(L_11, /*hidden argument*/NULL);
		// break;
		goto IL_0082;
	}

IL_0061:
	{
		// weather.ToggleState();
		MenuElement_t9A7B58726866102A8F63B3393AF9300404D1B0AE * L_12 = __this->get_weather_6();
		NullCheck(L_12);
		MenuElement_ToggleState_m2DC0D5E78D71C8F2CA3D573A3E04FFD58EA0C08F(L_12, /*hidden argument*/NULL);
		// break;
		goto IL_0082;
	}

IL_006f:
	{
		// Debug.Log(message + " not recognized");
		String_t* L_13 = ___message0;
		String_t* L_14 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_13, _stringLiteral53237DF0059BC949FA6FB2C6EC69C9B6B5834C44, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_14, /*hidden argument*/NULL);
		// break;
		goto IL_0082;
	}

IL_0082:
	{
		// }
		return;
	}
}
// System.Void hudController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void hudController__ctor_mB168D52946A36D3E7139409B1BC34A869C69AE51 (hudController_t5A0777F909E0550E5C6337C48E82A5AD555350F4 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
