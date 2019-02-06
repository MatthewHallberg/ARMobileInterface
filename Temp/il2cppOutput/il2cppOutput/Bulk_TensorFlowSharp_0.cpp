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

template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Attribute
struct Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Int32>[]
struct EntryU5BU5D_tAD4FDE2B2578C6625A7296B1C46DCB06DCB45186;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>
struct KeyCollection_t666396E67E50284D48938851873CE562083D67F2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>
struct ValueCollection_t532E2FD863D0D47B87202BE6B4F7C7EDB5DD7CBF;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB;
// System.Collections.Generic.IEnumerable`1<System.Int64>
struct IEnumerable_1_t2F2484A250796B4908E54C6DDE429BF5AE5F5E8A;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t31EF1520A3A805598500BB6033C14ABDA7116D5E;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<TensorFlow.TFOperation>
struct List_1_tEAF690A73881B2E7F4228252014CD0019E2CD185;
// System.Collections.Generic.List`1<TensorFlow.TFOutput>
struct List_1_tE516AA0787AF53AD9B46744F27C8DB56C3B8EDA0;
// System.Collections.Generic.List`1<TensorFlow.TFTensor>
struct List_1_tCE9E75F2489602CA5FDB9FF7C9F9F1C3BF264D30;
// System.Collections.Generic.List`1<TensorFlow.Variable>
struct List_1_t8E1255097D043C459DE21FBFBC286A5B1C83AE66;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.Func`2<System.Int64,System.Object>
struct Func_2_tE728CED8161539FD9F0E5131D871E17D23694574;
// System.Func`2<System.Int64,System.String>
struct Func_2_tFF25CF48F6D2159F721DDFBF4CF812A795D0D7EE;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IFormatProvider
struct IFormatProvider_t4247E13AE2D97A079B88D594B7ABABF313259901;
// System.IO.TextWriter
struct TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Int64[]
struct Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotImplementedException
struct NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4;
// System.ObjectDisposedException
struct ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// TensorFlow.MonoPInvokeCallbackAttribute
struct MonoPInvokeCallbackAttribute_t71D23934CA52D430FCE749ADDC02750E8514BCBB;
// TensorFlow.TFBuffer
struct TFBuffer_t107D496FAB131C30F2347AF49395F61269A56AD0;
// TensorFlow.TFBuffer/BufferReleaseFunc
struct BufferReleaseFunc_t09FD865988CE82E2C864AB6C5C67DFA0D6FE1C2B;
// TensorFlow.TFDisposable
struct TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F;
// TensorFlow.TFException
struct TFException_t7ED9AF8B794AA6A2B22662B556CE78BC47D9093E;
// TensorFlow.TFGraph
struct TFGraph_tC5E8FDE19B464B98CF2CE5B1796B54A13F1814ED;
// TensorFlow.TFImportGraphDefOptions
struct TFImportGraphDefOptions_t2A12B6EA4EBA8DBE8D63864F9C2D8412C35BEAB5;
// TensorFlow.TFOperation
struct TFOperation_tE9B416AFCE4899E889AEAE8D3D8801DFFD43F615;
// TensorFlow.TFOperation[]
struct TFOperationU5BU5D_tF7DF87892D59A6FD3437D40E862AE2C332EC9F9B;
// TensorFlow.TFOutput[]
struct TFOutputU5BU5D_tA3DB26FE6B7447E959D05237B026B16FC60CE7AB;
// TensorFlow.TFSession
struct TFSession_t9F8D2F72C9A312AFE7AA916B198EB5C3430D8A4E;
// TensorFlow.TFSession/Runner
struct Runner_t7C96370DF9B42B7517370D620EBF99B30CDED670;
// TensorFlow.TFSessionOptions
struct TFSessionOptions_t2B25E6648DC2CB98BBAFB84375EFCB5A364A45AF;
// TensorFlow.TFShape
struct TFShape_t269B735A5AB15B4CF59931FBA2A034443E579565;
// TensorFlow.TFShape/<>c
struct U3CU3Ec_t151E28BB9FDE9A0C02BA3C2469448CB0304C7CA7;
// TensorFlow.TFStatus
struct TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48;
// TensorFlow.TFTensor
struct TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88;
// TensorFlow.TFTensor/Deallocator
struct Deallocator_t872E4BEF7439B64305100113566B7EBB163ABCAE;
// TensorFlow.TFTensor[]
struct TFTensorU5BU5D_t4055F1E4DDA39290AFA5D0F331EE4BBF0F857348;

extern RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var;
extern RuntimeClass* BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040_il2cpp_TypeInfo_var;
extern RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
extern RuntimeClass* BufferReleaseFunc_t09FD865988CE82E2C864AB6C5C67DFA0D6FE1C2B_il2cpp_TypeInfo_var;
extern RuntimeClass* ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var;
extern RuntimeClass* Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var;
extern RuntimeClass* ComplexU5BU5D_t4247746C5B1B24482EC5467F023370F3154F84AD_il2cpp_TypeInfo_var;
extern RuntimeClass* Complex_tD3CA17E8417A543F2625EB352AC07C0209D85733_il2cpp_TypeInfo_var;
extern RuntimeClass* Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_il2cpp_TypeInfo_var;
extern RuntimeClass* Deallocator_t872E4BEF7439B64305100113566B7EBB163ABCAE_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB_il2cpp_TypeInfo_var;
extern RuntimeClass* DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D_il2cpp_TypeInfo_var;
extern RuntimeClass* Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_tFF25CF48F6D2159F721DDFBF4CF812A795D0D7EE_il2cpp_TypeInfo_var;
extern RuntimeClass* GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
extern RuntimeClass* Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28_il2cpp_TypeInfo_var;
extern RuntimeClass* Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
extern RuntimeClass* Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F_il2cpp_TypeInfo_var;
extern RuntimeClass* Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var;
extern RuntimeClass* IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD_il2cpp_TypeInfo_var;
extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_tCE9E75F2489602CA5FDB9FF7C9F9F1C3BF264D30_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_tE516AA0787AF53AD9B46744F27C8DB56C3B8EDA0_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_tEAF690A73881B2E7F4228252014CD0019E2CD185_il2cpp_TypeInfo_var;
extern RuntimeClass* Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var;
extern RuntimeClass* NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
extern RuntimeClass* Runner_t7C96370DF9B42B7517370D620EBF99B30CDED670_il2cpp_TypeInfo_var;
extern RuntimeClass* SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889_il2cpp_TypeInfo_var;
extern RuntimeClass* SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_il2cpp_TypeInfo_var;
extern RuntimeClass* SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern RuntimeClass* TFBuffer_t107D496FAB131C30F2347AF49395F61269A56AD0_il2cpp_TypeInfo_var;
extern RuntimeClass* TFCode_t6A126ABE1D332B6882FBC74ABC0EA525ACEF2496_il2cpp_TypeInfo_var;
extern RuntimeClass* TFCore_tC55DAD41B7D558C24E1C178762C7F0CC68D050AA_il2cpp_TypeInfo_var;
extern RuntimeClass* TFDataType_tFC283296F243C465F516D878F9C24DB7B88C19F7_il2cpp_TypeInfo_var;
extern RuntimeClass* TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F_il2cpp_TypeInfo_var;
extern RuntimeClass* TFException_t7ED9AF8B794AA6A2B22662B556CE78BC47D9093E_il2cpp_TypeInfo_var;
extern RuntimeClass* TFImportGraphDefOptions_t2A12B6EA4EBA8DBE8D63864F9C2D8412C35BEAB5_il2cpp_TypeInfo_var;
extern RuntimeClass* TFOperationU5BU5D_tF7DF87892D59A6FD3437D40E862AE2C332EC9F9B_il2cpp_TypeInfo_var;
extern RuntimeClass* TFOperation_tE9B416AFCE4899E889AEAE8D3D8801DFFD43F615_il2cpp_TypeInfo_var;
extern RuntimeClass* TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48_il2cpp_TypeInfo_var;
extern RuntimeClass* TFTensorU5BU5D_t4055F1E4DDA39290AFA5D0F331EE4BBF0F857348_il2cpp_TypeInfo_var;
extern RuntimeClass* TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec_t151E28BB9FDE9A0C02BA3C2469448CB0304C7CA7_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_il2cpp_TypeInfo_var;
extern RuntimeClass* UIntPtr_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral0025C5B18BEAD8250368714610B35B1B4AD12828;
extern String_t* _stringLiteral02CA91E80D9F0B762B9EB552D47A325FE0C207CF;
extern String_t* _stringLiteral11F6AD8EC52A2984ABAAFD7C3B516503785C2072;
extern String_t* _stringLiteral184E6EFA39822CDDB3006BF2F890AF17CA64F278;
extern String_t* _stringLiteral19D10885DFB31877855ADB5D464D892790868239;
extern String_t* _stringLiteral1E5C2F367F02E47A8C160CDA1CD9D91DECBAC441;
extern String_t* _stringLiteral2B020927D3C6EB407223A1BAA3D6CE3597A3F88D;
extern String_t* _stringLiteral37C6A8454A5220C69E65A227A52219329D040B24;
extern String_t* _stringLiteral4525236559D4671B97E7B29C50D4C97F0D16C2E2;
extern String_t* _stringLiteral4FF447B8EF42CA51FA6FB287BED8D40F49BE58F1;
extern String_t* _stringLiteral5080FD62C27826C4BAD11CDABEA225200A35A04C;
extern String_t* _stringLiteral50D8B4A941C26B89482C94AB324B5A274F9CED66;
extern String_t* _stringLiteral513F8DE9259FE7658FE14D1352C54CCF070E911F;
extern String_t* _stringLiteral51DD139783B10775DE022FC5702FDDDDFBB923BB;
extern String_t* _stringLiteral5858C3CEE7EF9B9FB8572ED511646BC18A15A19E;
extern String_t* _stringLiteral5BAB61EB53176449E25C2C82F172B82CB13FFB9D;
extern String_t* _stringLiteral66B0C73B3BA65150E6E97E6F56DABCCA97AE3122;
extern String_t* _stringLiteral725E5ED60EA63B45D2C6610A0F874FD455EE2164;
extern String_t* _stringLiteral8AEC9DA7CF9E1CFA522D239EE62D38E878A94633;
extern String_t* _stringLiteralAB965F703A5D18A7DF7E6360FB82F6C3F0EE36CD;
extern String_t* _stringLiteralB4EBFE34D0FA97F0DD2BB1234FAD8F59805F4E8D;
extern String_t* _stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46;
extern String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
extern String_t* _stringLiteralE53C2EA1FE4BD2B78BF4723C7C155A578E020A25;
extern String_t* _stringLiteralE71003C6B7DD4093CE139AC0C51A6BA38D54A439;
extern String_t* _stringLiteralEE9F38E186BA06F57B7B74D7E626B94E13CE2556;
extern String_t* _stringLiteralF26C47CE17D760EE25A2828BC2D47394063482E8;
extern String_t* _stringLiteralF32B67C7E26342AF42EFABC674D441DCA0A281C5;
extern String_t* _stringLiteralFCB60BC535F44919FB7827A8EF8E2D1B9E17347D;
extern const RuntimeMethod* Dictionary_2__ctor_m20A5B6C6950ACF998FE28F7FACEA19C755593E62_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Select_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_TisString_t_m346A0E4B72871BA4D88B3A298A3630BD4CF0E419_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_mA15EE8A06FB5D3C4082C15C1955C0BCD38AD5A6A_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_mB48FA0C1CC4690D7CF7BF8158AAFF1579748D33F_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_mD272D77CC469569DA3A072C86071F9E8CC63A624_RuntimeMethod_var;
extern const RuntimeMethod* List_1_ToArray_m407D579B5CB90B6E68243D9228DC191DC888DD45_RuntimeMethod_var;
extern const RuntimeMethod* List_1_ToArray_mCAD663E3374DBC330C20E8C374E582247B17B3C5_RuntimeMethod_var;
extern const RuntimeMethod* List_1_ToArray_mE8C9EF301CE61275E1D249A3763255C2B083B3C5_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m34EEB5BF79669F00ABD87F4AC99582DBA5377240_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_mA7A492999D7643B9A4274E3DC07B336EF53E3D02_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_mF85B689AFD4DF20C3412268DBA611875B8F98FA0_RuntimeMethod_var;
extern const RuntimeMethod* Marshal_GetFunctionPointerForDelegate_TisBufferReleaseFunc_t09FD865988CE82E2C864AB6C5C67DFA0D6FE1C2B_mC67D47B648575B70C0F4185965655A27FA291637_RuntimeMethod_var;
extern const RuntimeMethod* Runner_AddInput_m345A4A23D91EF20AA7A6950648EDCBD8272E59C5_RuntimeMethod_var;
extern const RuntimeMethod* TFBuffer_FreeBlock_m901AFC0836B644BFE3E5EE66E467A995F4B8A182_RuntimeMethod_var;
extern const RuntimeMethod* TFBuffer__ctor_m9DA438B58610EDB66559D6714949BA55D373E7D2_RuntimeMethod_var;
extern const RuntimeMethod* TFCore_CheckSize_m56E95114417EE95E2BB74FEAE85459EAAAD27D96_RuntimeMethod_var;
extern const RuntimeMethod* TFDisposable_ObjectDisposedException_m33558ABEC521D5091E71ACA8DB42B3FF89266830_RuntimeMethod_var;
extern const RuntimeMethod* TFGraph_Import_m270774B0913B38CA851E74FA1CACD435C1FB267D_RuntimeMethod_var;
extern const RuntimeMethod* TFGraph_Import_m7B43A8A89D5F493B99BDAE26A8AC78AF49236BAB_RuntimeMethod_var;
extern const RuntimeMethod* TFGraph_Import_mDF59538C2007060B84B2B9AAFBCF921942EA6215_RuntimeMethod_var;
extern const RuntimeMethod* TFOutput__ctor_m99AB28844DF30D78D8BA74313BB7F59055126005_RuntimeMethod_var;
extern const RuntimeMethod* TFSession_Run_m2C5F37E1C1AF93641208749D4371AAB12697A38C_RuntimeMethod_var;
extern const RuntimeMethod* TFStatus_CheckMaybeRaise_mB66AA81C3142A7FAD056BA3032D380ADC2C657EB_RuntimeMethod_var;
extern const RuntimeMethod* TFStatus_ToString_m46CEF6064D185239B1E62CFDB334A7AE56BEDFE5_RuntimeMethod_var;
extern const RuntimeMethod* TFStatus_get_StatusCode_m94D3D7229A39CB84357C77C463450A2AC0E56F97_RuntimeMethod_var;
extern const RuntimeMethod* TFTensor_Copy_m1DE567298D80B0EE29619C114691D477725B7DE5_RuntimeMethod_var;
extern const RuntimeMethod* TFTensor_FetchFlatArray_mD1BB9691E8A1FF44CF524C798B021EBE62340E9C_RuntimeMethod_var;
extern const RuntimeMethod* TFTensor_FetchJaggedArray_m4482BFC2DD2EF569289C79711D5E62CDDCBA9703_RuntimeMethod_var;
extern const RuntimeMethod* TFTensor_FetchMultiDimensionalArray_mC4FD5C1FC31D9C7BC8AD64A8B65F9EBEEE1B5170_RuntimeMethod_var;
extern const RuntimeMethod* TFTensor_FetchSimple_m3DFE21914CA93A499A91D88F59A0EF73709C8377_RuntimeMethod_var;
extern const RuntimeMethod* TFTensor_FreeTensorData_m359E94CFB8A95A9FDB1C82B17A8E3D7C03219106_RuntimeMethod_var;
extern const RuntimeMethod* TFTensor_FreeTensorHandle_m1D03288399D54E806A169E8BB5D867BB3A634002_RuntimeMethod_var;
extern const RuntimeMethod* TFTensor_SetupTensor_mA97E7358E3761FCF9CBBFDBCA5746C51082BFD06_RuntimeMethod_var;
extern const RuntimeMethod* TFTensor_SetupTensor_mD2790633B12A4D8FF778FE8414A0BE5182F409E7_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec_U3CToStringU3Eb__15_0_m75459850E6F606BF92DBE44DC8EF7453F934B83C_RuntimeMethod_var;
extern const RuntimeType* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_0_0_0_var;
extern const RuntimeType* Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_0_0_0_var;
extern const RuntimeType* Complex_tD3CA17E8417A543F2625EB352AC07C0209D85733_0_0_0_var;
extern const RuntimeType* Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_0_0_0_var;
extern const RuntimeType* Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_0_0_0_var;
extern const RuntimeType* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_0_0_0_var;
extern const RuntimeType* Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_0_0_0_var;
extern const RuntimeType* SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_0_0_0_var;
extern const RuntimeType* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_0_0_0_var;
extern const RuntimeType* TFString_tCF78FFE2469215A95DF91742B0DDDAD2B03EC13C_0_0_0_var;
extern const RuntimeType* UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_0_0_0_var;
extern const uint32_t BufferReleaseFunc_BeginInvoke_mAA62D7A37ED172A6D8D7804A851EB608D62E3386_MetadataUsageId;
extern const uint32_t Deallocator_BeginInvoke_m5CFBF15B8E645E051D36D20475FA47A87E51F2AE_MetadataUsageId;
extern const uint32_t NativeBinding_GetStr_mA8D5C8DE250867FA3B79F6DC04FAFDAB101E23B2_MetadataUsageId;
extern const uint32_t Runner_AddInput_m345A4A23D91EF20AA7A6950648EDCBD8272E59C5_MetadataUsageId;
extern const uint32_t Runner_Fetch_mBD65AE4B3034F152ED6288E470F95863C1596B3E_MetadataUsageId;
extern const uint32_t Runner_Run_m77E96F7556E67B33263B2AB01A3ED81C6545F478_MetadataUsageId;
extern const uint32_t Runner__ctor_mB20E3D0ECB64603E67512A2A720EF6BB0A17A58B_MetadataUsageId;
extern const uint32_t TFBuffer_FreeBlock_m901AFC0836B644BFE3E5EE66E467A995F4B8A182_MetadataUsageId;
extern const uint32_t TFBuffer_NativeDispose_m29B7067859AC3CAF1357E84ACA6F51CEA8D86F77_MetadataUsageId;
extern const uint32_t TFBuffer__cctor_m54043D171ECA2358485C1BB768181E7D981DBAD8_MetadataUsageId;
extern const uint32_t TFBuffer__ctor_m00B776872DA3C65BDDFDADC2C38299EFC6C67E97_MetadataUsageId;
extern const uint32_t TFBuffer__ctor_m9DA438B58610EDB66559D6714949BA55D373E7D2_MetadataUsageId;
extern const uint32_t TFCore_CheckSize_m56E95114417EE95E2BB74FEAE85459EAAAD27D96_MetadataUsageId;
extern const uint32_t TFCore_Init_m89C77CEBB85F0D9D649E5AD3B40599913A40012B_MetadataUsageId;
extern const uint32_t TFCore__cctor_m6309234BE2039B560A87CE6FC176E690D98943CD_MetadataUsageId;
extern const uint32_t TFDisposable_Dispose_m2DED82C30456BFB1D26E7D8768B2FD1C993203FB_MetadataUsageId;
extern const uint32_t TFDisposable_Dispose_mC94BDB4773823692201AB60BC57B2D7DD4E13E6F_MetadataUsageId;
extern const uint32_t TFDisposable_ObjectDisposedException_m33558ABEC521D5091E71ACA8DB42B3FF89266830_MetadataUsageId;
extern const uint32_t TFDisposable__cctor_m6BEB29170822C31ED1B575634D396E280435D885_MetadataUsageId;
extern const uint32_t TFException__ctor_m45D3532ABF6007035C33FB30B60772143C03A5DA_MetadataUsageId;
extern const uint32_t TFGraph_Import_m270774B0913B38CA851E74FA1CACD435C1FB267D_MetadataUsageId;
extern const uint32_t TFGraph_Import_m7B43A8A89D5F493B99BDAE26A8AC78AF49236BAB_MetadataUsageId;
extern const uint32_t TFGraph_Import_mDF59538C2007060B84B2B9AAFBCF921942EA6215_MetadataUsageId;
extern const uint32_t TFGraph__ctor_m1216CB636F5690DF4EAC5A48DBCAEFBD7A77829B_MetadataUsageId;
extern const uint32_t TFGraph_get_Item_mB079F37D3B7AF61AB1D244B825BF04D214CC3E92_MetadataUsageId;
extern const uint32_t TFImportGraphDefOptions_SetPrefix_m029E5EE3078522A1C7E13C9E481A9E4C28010C8C_MetadataUsageId;
extern const uint32_t TFImportGraphDefOptions__ctor_mE85F3B3ACBEAC1039C7435292E3C8B76D5456CF8_MetadataUsageId;
extern const uint32_t TFOutput_ToString_m25F4F654A3D1D1F6BFC8553F602FA89AFBB80A55_MetadataUsageId;
extern const uint32_t TFOutput__ctor_m99AB28844DF30D78D8BA74313BB7F59055126005_MetadataUsageId;
extern const uint32_t TFOutput_get_Operation_m535111E5F74957E00953F713FF861A5831637F86_MetadataUsageId;
extern const uint32_t TFOutput_get_OutputType_mB22CA28D0082F0AAA13F30D9A1CFB7203F7E28D3_MetadataUsageId;
extern const uint32_t TFSession_GetRunner_m9B5B8AF16CAF27893C2CA87DD3A8F1B45D90642B_MetadataUsageId;
extern const uint32_t TFSession_NativeDispose_m202637F9D8BC5902A83F97B198AA5A613B5803B7_MetadataUsageId;
extern const uint32_t TFSession_Run_m2C5F37E1C1AF93641208749D4371AAB12697A38C_MetadataUsageId;
extern const uint32_t TFSession__ctor_m79DFFE17B97515D9D53781E26F71363081518E37_MetadataUsageId;
extern const uint32_t TFShape_ToString_m3A3F26DFAB7D96CCC20F5A1338E94407266B0F4E_MetadataUsageId;
extern const uint32_t TFStatus_CheckMaybeRaise_mB66AA81C3142A7FAD056BA3032D380ADC2C657EB_MetadataUsageId;
extern const uint32_t TFStatus_NativeDispose_m533BF4C9BF03EC559E588E2A3499D52350E6C50C_MetadataUsageId;
extern const uint32_t TFStatus_Setup_mC3FC03DF1F0D1A1C0FCAB6B1D369F6E86E693552_MetadataUsageId;
extern const uint32_t TFStatus_ToString_m46CEF6064D185239B1E62CFDB334A7AE56BEDFE5_MetadataUsageId;
extern const uint32_t TFStatus__cctor_m1C415DACA15ED59190A69087875EC2E30752A3EF_MetadataUsageId;
extern const uint32_t TFStatus__ctor_mE7A4D28F26AD208AE216A4A2BD84F23931CBB215_MetadataUsageId;
extern const uint32_t TFStatus_get_StatusCode_m94D3D7229A39CB84357C77C463450A2AC0E56F97_MetadataUsageId;
extern const uint32_t TFStatus_get_StatusMessage_m86243F6E581939F04810CE433B76B2ECE0B485AE_MetadataUsageId;
extern const uint32_t TFTensor_Copy_m1DE567298D80B0EE29619C114691D477725B7DE5_MetadataUsageId;
extern const uint32_t TFTensor_FetchFlatArray_mD1BB9691E8A1FF44CF524C798B021EBE62340E9C_MetadataUsageId;
extern const uint32_t TFTensor_FetchJaggedArray_m4482BFC2DD2EF569289C79711D5E62CDDCBA9703_MetadataUsageId;
extern const uint32_t TFTensor_FetchMultiDimensionalArray_mC4FD5C1FC31D9C7BC8AD64A8B65F9EBEEE1B5170_MetadataUsageId;
extern const uint32_t TFTensor_FetchSimple_m3DFE21914CA93A499A91D88F59A0EF73709C8377_MetadataUsageId;
extern const uint32_t TFTensor_FreeTensorData_m359E94CFB8A95A9FDB1C82B17A8E3D7C03219106_MetadataUsageId;
extern const uint32_t TFTensor_FromBuffer_m7C2365F848E2C8EE1A7517335C5F4E50B12AB332_MetadataUsageId;
extern const uint32_t TFTensor_GetValue_m78B4D81C263F068C80646BEAA761C49393D4ADAD_MetadataUsageId;
extern const uint32_t TFTensor_NativeDispose_m153BD9686C5913D8CF303B78EFDBC9D710EA005E_MetadataUsageId;
extern const uint32_t TFTensor_SetupTensor_mA97E7358E3761FCF9CBBFDBCA5746C51082BFD06_MetadataUsageId;
extern const uint32_t TFTensor_SetupTensor_mD2790633B12A4D8FF778FE8414A0BE5182F409E7_MetadataUsageId;
extern const uint32_t TFTensor_ToString_m01099B3713FC4924F5B11EEA63AF1D400333EAD0_MetadataUsageId;
extern const uint32_t TFTensor_TypeFromTensorType_m44FC8A993EFD91FD797B34660065CE43213C1BCC_MetadataUsageId;
extern const uint32_t TFTensor__cctor_m9994C16032DB9BAB229E073FF01B439F478ADA1C_MetadataUsageId;
extern const uint32_t TFTensor__ctor_m92C59BC7C169ECC52F8A763E5FCB4ECB6A0D5E6B_MetadataUsageId;
extern const uint32_t TFTensor_get_Data_m954A7E19A066DF3C0F0DAA59D94491A7A7C6761B_MetadataUsageId;
extern const uint32_t TFTensor_get_NumDims_m4C10794F0E4E346F02F4BD1F185906314DB0B73A_MetadataUsageId;
extern const uint32_t TFTensor_get_Shape_m7F14D085916C451BE8DE0967FC66B0656879F5D0_MetadataUsageId;
extern const uint32_t TFTensor_get_TensorType_m5321B4DDACD52E9FC8A1A23056DC99A263E6B399_MetadataUsageId;
extern const uint32_t U3CU3Ec_U3CToStringU3Eb__15_0_m75459850E6F606BF92DBE44DC8EF7453F934B83C_MetadataUsageId;
extern const uint32_t U3CU3Ec__cctor_mA0419EA0E047DFCCC044B661AB1A1FA68C6A3FDE_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040;
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D;
struct Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28;
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
struct Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F;
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
struct ComplexU5BU5D_t4247746C5B1B24482EC5467F023370F3154F84AD;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889;
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
struct UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E;
struct TFOperationU5BU5D_tF7DF87892D59A6FD3437D40E862AE2C332EC9F9B;
struct TFOutputU5BU5D_tA3DB26FE6B7447E959D05237B026B16FC60CE7AB;
struct TFTensorU5BU5D_t4055F1E4DDA39290AFA5D0F331EE4BBF0F857348;


#ifndef U3CMODULEU3E_TEB048831D90D03FCC82DD92DC1CC3CF05CCF7430_H
#define U3CMODULEU3E_TEB048831D90D03FCC82DD92DC1CC3CF05CCF7430_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tEB048831D90D03FCC82DD92DC1CC3CF05CCF7430 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_TEB048831D90D03FCC82DD92DC1CC3CF05CCF7430_H
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
#ifndef ATTRIBUTE_TF048C13FB3C8CFCC53F82290E4A3F621089F9A74_H
#define ATTRIBUTE_TF048C13FB3C8CFCC53F82290E4A3F621089F9A74_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_TF048C13FB3C8CFCC53F82290E4A3F621089F9A74_H
#ifndef DICTIONARY_2_TD6E204872BA9FD506A0287EF68E285BEB9EC0DFB_H
#define DICTIONARY_2_TD6E204872BA9FD506A0287EF68E285BEB9EC0DFB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct  Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tAD4FDE2B2578C6625A7296B1C46DCB06DCB45186* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t666396E67E50284D48938851873CE562083D67F2 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t532E2FD863D0D47B87202BE6B4F7C7EDB5DD7CBF * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB, ___entries_1)); }
	inline EntryU5BU5D_tAD4FDE2B2578C6625A7296B1C46DCB06DCB45186* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tAD4FDE2B2578C6625A7296B1C46DCB06DCB45186** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tAD4FDE2B2578C6625A7296B1C46DCB06DCB45186* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB, ___keys_7)); }
	inline KeyCollection_t666396E67E50284D48938851873CE562083D67F2 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t666396E67E50284D48938851873CE562083D67F2 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t666396E67E50284D48938851873CE562083D67F2 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB, ___values_8)); }
	inline ValueCollection_t532E2FD863D0D47B87202BE6B4F7C7EDB5DD7CBF * get_values_8() const { return ___values_8; }
	inline ValueCollection_t532E2FD863D0D47B87202BE6B4F7C7EDB5DD7CBF ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t532E2FD863D0D47B87202BE6B4F7C7EDB5DD7CBF * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_TD6E204872BA9FD506A0287EF68E285BEB9EC0DFB_H
#ifndef LIST_1_TEAF690A73881B2E7F4228252014CD0019E2CD185_H
#define LIST_1_TEAF690A73881B2E7F4228252014CD0019E2CD185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<TensorFlow.TFOperation>
struct  List_1_tEAF690A73881B2E7F4228252014CD0019E2CD185  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TFOperationU5BU5D_tF7DF87892D59A6FD3437D40E862AE2C332EC9F9B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tEAF690A73881B2E7F4228252014CD0019E2CD185, ____items_1)); }
	inline TFOperationU5BU5D_tF7DF87892D59A6FD3437D40E862AE2C332EC9F9B* get__items_1() const { return ____items_1; }
	inline TFOperationU5BU5D_tF7DF87892D59A6FD3437D40E862AE2C332EC9F9B** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TFOperationU5BU5D_tF7DF87892D59A6FD3437D40E862AE2C332EC9F9B* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tEAF690A73881B2E7F4228252014CD0019E2CD185, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tEAF690A73881B2E7F4228252014CD0019E2CD185, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tEAF690A73881B2E7F4228252014CD0019E2CD185, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_tEAF690A73881B2E7F4228252014CD0019E2CD185_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TFOperationU5BU5D_tF7DF87892D59A6FD3437D40E862AE2C332EC9F9B* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tEAF690A73881B2E7F4228252014CD0019E2CD185_StaticFields, ____emptyArray_5)); }
	inline TFOperationU5BU5D_tF7DF87892D59A6FD3437D40E862AE2C332EC9F9B* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TFOperationU5BU5D_tF7DF87892D59A6FD3437D40E862AE2C332EC9F9B** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TFOperationU5BU5D_tF7DF87892D59A6FD3437D40E862AE2C332EC9F9B* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_TEAF690A73881B2E7F4228252014CD0019E2CD185_H
#ifndef LIST_1_TE516AA0787AF53AD9B46744F27C8DB56C3B8EDA0_H
#define LIST_1_TE516AA0787AF53AD9B46744F27C8DB56C3B8EDA0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<TensorFlow.TFOutput>
struct  List_1_tE516AA0787AF53AD9B46744F27C8DB56C3B8EDA0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TFOutputU5BU5D_tA3DB26FE6B7447E959D05237B026B16FC60CE7AB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE516AA0787AF53AD9B46744F27C8DB56C3B8EDA0, ____items_1)); }
	inline TFOutputU5BU5D_tA3DB26FE6B7447E959D05237B026B16FC60CE7AB* get__items_1() const { return ____items_1; }
	inline TFOutputU5BU5D_tA3DB26FE6B7447E959D05237B026B16FC60CE7AB** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TFOutputU5BU5D_tA3DB26FE6B7447E959D05237B026B16FC60CE7AB* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE516AA0787AF53AD9B46744F27C8DB56C3B8EDA0, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE516AA0787AF53AD9B46744F27C8DB56C3B8EDA0, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE516AA0787AF53AD9B46744F27C8DB56C3B8EDA0, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_tE516AA0787AF53AD9B46744F27C8DB56C3B8EDA0_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TFOutputU5BU5D_tA3DB26FE6B7447E959D05237B026B16FC60CE7AB* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE516AA0787AF53AD9B46744F27C8DB56C3B8EDA0_StaticFields, ____emptyArray_5)); }
	inline TFOutputU5BU5D_tA3DB26FE6B7447E959D05237B026B16FC60CE7AB* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TFOutputU5BU5D_tA3DB26FE6B7447E959D05237B026B16FC60CE7AB** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TFOutputU5BU5D_tA3DB26FE6B7447E959D05237B026B16FC60CE7AB* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_TE516AA0787AF53AD9B46744F27C8DB56C3B8EDA0_H
#ifndef LIST_1_TCE9E75F2489602CA5FDB9FF7C9F9F1C3BF264D30_H
#define LIST_1_TCE9E75F2489602CA5FDB9FF7C9F9F1C3BF264D30_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<TensorFlow.TFTensor>
struct  List_1_tCE9E75F2489602CA5FDB9FF7C9F9F1C3BF264D30  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TFTensorU5BU5D_t4055F1E4DDA39290AFA5D0F331EE4BBF0F857348* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tCE9E75F2489602CA5FDB9FF7C9F9F1C3BF264D30, ____items_1)); }
	inline TFTensorU5BU5D_t4055F1E4DDA39290AFA5D0F331EE4BBF0F857348* get__items_1() const { return ____items_1; }
	inline TFTensorU5BU5D_t4055F1E4DDA39290AFA5D0F331EE4BBF0F857348** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TFTensorU5BU5D_t4055F1E4DDA39290AFA5D0F331EE4BBF0F857348* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tCE9E75F2489602CA5FDB9FF7C9F9F1C3BF264D30, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tCE9E75F2489602CA5FDB9FF7C9F9F1C3BF264D30, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tCE9E75F2489602CA5FDB9FF7C9F9F1C3BF264D30, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_tCE9E75F2489602CA5FDB9FF7C9F9F1C3BF264D30_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TFTensorU5BU5D_t4055F1E4DDA39290AFA5D0F331EE4BBF0F857348* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tCE9E75F2489602CA5FDB9FF7C9F9F1C3BF264D30_StaticFields, ____emptyArray_5)); }
	inline TFTensorU5BU5D_t4055F1E4DDA39290AFA5D0F331EE4BBF0F857348* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TFTensorU5BU5D_t4055F1E4DDA39290AFA5D0F331EE4BBF0F857348** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TFTensorU5BU5D_t4055F1E4DDA39290AFA5D0F331EE4BBF0F857348* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_TCE9E75F2489602CA5FDB9FF7C9F9F1C3BF264D30_H
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
#ifndef MARSHALBYREFOBJECT_TC4577953D0A44D0AB8597CFA868E01C858B1C9AF_H
#define MARSHALBYREFOBJECT_TC4577953D0A44D0AB8597CFA868E01C858B1C9AF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};
#endif // MARSHALBYREFOBJECT_TC4577953D0A44D0AB8597CFA868E01C858B1C9AF_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
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
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ChunkChars_0), value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ChunkPrevious_1), value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
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
#ifndef NATIVEBINDING_T6E21478ABAC46CA5E4FEB4299391034A23539508_H
#define NATIVEBINDING_T6E21478ABAC46CA5E4FEB4299391034A23539508_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TensorFlow.NativeBinding
struct  NativeBinding_t6E21478ABAC46CA5E4FEB4299391034A23539508  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEBINDING_T6E21478ABAC46CA5E4FEB4299391034A23539508_H
#ifndef TFCORE_TC55DAD41B7D558C24E1C178762C7F0CC68D050AA_H
#define TFCORE_TC55DAD41B7D558C24E1C178762C7F0CC68D050AA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TensorFlow.TFCore
struct  TFCore_tC55DAD41B7D558C24E1C178762C7F0CC68D050AA  : public RuntimeObject
{
public:

public:
};

struct TFCore_tC55DAD41B7D558C24E1C178762C7F0CC68D050AA_StaticFields
{
public:
	// System.Boolean TensorFlow.TFCore::UseCPU
	bool ___UseCPU_0;

public:
	inline static int32_t get_offset_of_UseCPU_0() { return static_cast<int32_t>(offsetof(TFCore_tC55DAD41B7D558C24E1C178762C7F0CC68D050AA_StaticFields, ___UseCPU_0)); }
	inline bool get_UseCPU_0() const { return ___UseCPU_0; }
	inline bool* get_address_of_UseCPU_0() { return &___UseCPU_0; }
	inline void set_UseCPU_0(bool value)
	{
		___UseCPU_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TFCORE_TC55DAD41B7D558C24E1C178762C7F0CC68D050AA_H
#ifndef RUNNER_T7C96370DF9B42B7517370D620EBF99B30CDED670_H
#define RUNNER_T7C96370DF9B42B7517370D620EBF99B30CDED670_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TensorFlow.TFSession/Runner
struct  Runner_t7C96370DF9B42B7517370D620EBF99B30CDED670  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<TensorFlow.TFOutput> TensorFlow.TFSession/Runner::inputs
	List_1_tE516AA0787AF53AD9B46744F27C8DB56C3B8EDA0 * ___inputs_0;
	// System.Collections.Generic.List`1<TensorFlow.TFOutput> TensorFlow.TFSession/Runner::outputs
	List_1_tE516AA0787AF53AD9B46744F27C8DB56C3B8EDA0 * ___outputs_1;
	// System.Collections.Generic.List`1<TensorFlow.TFTensor> TensorFlow.TFSession/Runner::inputValues
	List_1_tCE9E75F2489602CA5FDB9FF7C9F9F1C3BF264D30 * ___inputValues_2;
	// System.Collections.Generic.List`1<TensorFlow.TFOperation> TensorFlow.TFSession/Runner::targets
	List_1_tEAF690A73881B2E7F4228252014CD0019E2CD185 * ___targets_3;
	// TensorFlow.TFSession TensorFlow.TFSession/Runner::session
	TFSession_t9F8D2F72C9A312AFE7AA916B198EB5C3430D8A4E * ___session_4;
	// TensorFlow.TFBuffer TensorFlow.TFSession/Runner::RunMetadata
	TFBuffer_t107D496FAB131C30F2347AF49395F61269A56AD0 * ___RunMetadata_5;
	// TensorFlow.TFBuffer TensorFlow.TFSession/Runner::RunOptions
	TFBuffer_t107D496FAB131C30F2347AF49395F61269A56AD0 * ___RunOptions_6;

public:
	inline static int32_t get_offset_of_inputs_0() { return static_cast<int32_t>(offsetof(Runner_t7C96370DF9B42B7517370D620EBF99B30CDED670, ___inputs_0)); }
	inline List_1_tE516AA0787AF53AD9B46744F27C8DB56C3B8EDA0 * get_inputs_0() const { return ___inputs_0; }
	inline List_1_tE516AA0787AF53AD9B46744F27C8DB56C3B8EDA0 ** get_address_of_inputs_0() { return &___inputs_0; }
	inline void set_inputs_0(List_1_tE516AA0787AF53AD9B46744F27C8DB56C3B8EDA0 * value)
	{
		___inputs_0 = value;
		Il2CppCodeGenWriteBarrier((&___inputs_0), value);
	}

	inline static int32_t get_offset_of_outputs_1() { return static_cast<int32_t>(offsetof(Runner_t7C96370DF9B42B7517370D620EBF99B30CDED670, ___outputs_1)); }
	inline List_1_tE516AA0787AF53AD9B46744F27C8DB56C3B8EDA0 * get_outputs_1() const { return ___outputs_1; }
	inline List_1_tE516AA0787AF53AD9B46744F27C8DB56C3B8EDA0 ** get_address_of_outputs_1() { return &___outputs_1; }
	inline void set_outputs_1(List_1_tE516AA0787AF53AD9B46744F27C8DB56C3B8EDA0 * value)
	{
		___outputs_1 = value;
		Il2CppCodeGenWriteBarrier((&___outputs_1), value);
	}

	inline static int32_t get_offset_of_inputValues_2() { return static_cast<int32_t>(offsetof(Runner_t7C96370DF9B42B7517370D620EBF99B30CDED670, ___inputValues_2)); }
	inline List_1_tCE9E75F2489602CA5FDB9FF7C9F9F1C3BF264D30 * get_inputValues_2() const { return ___inputValues_2; }
	inline List_1_tCE9E75F2489602CA5FDB9FF7C9F9F1C3BF264D30 ** get_address_of_inputValues_2() { return &___inputValues_2; }
	inline void set_inputValues_2(List_1_tCE9E75F2489602CA5FDB9FF7C9F9F1C3BF264D30 * value)
	{
		___inputValues_2 = value;
		Il2CppCodeGenWriteBarrier((&___inputValues_2), value);
	}

	inline static int32_t get_offset_of_targets_3() { return static_cast<int32_t>(offsetof(Runner_t7C96370DF9B42B7517370D620EBF99B30CDED670, ___targets_3)); }
	inline List_1_tEAF690A73881B2E7F4228252014CD0019E2CD185 * get_targets_3() const { return ___targets_3; }
	inline List_1_tEAF690A73881B2E7F4228252014CD0019E2CD185 ** get_address_of_targets_3() { return &___targets_3; }
	inline void set_targets_3(List_1_tEAF690A73881B2E7F4228252014CD0019E2CD185 * value)
	{
		___targets_3 = value;
		Il2CppCodeGenWriteBarrier((&___targets_3), value);
	}

	inline static int32_t get_offset_of_session_4() { return static_cast<int32_t>(offsetof(Runner_t7C96370DF9B42B7517370D620EBF99B30CDED670, ___session_4)); }
	inline TFSession_t9F8D2F72C9A312AFE7AA916B198EB5C3430D8A4E * get_session_4() const { return ___session_4; }
	inline TFSession_t9F8D2F72C9A312AFE7AA916B198EB5C3430D8A4E ** get_address_of_session_4() { return &___session_4; }
	inline void set_session_4(TFSession_t9F8D2F72C9A312AFE7AA916B198EB5C3430D8A4E * value)
	{
		___session_4 = value;
		Il2CppCodeGenWriteBarrier((&___session_4), value);
	}

	inline static int32_t get_offset_of_RunMetadata_5() { return static_cast<int32_t>(offsetof(Runner_t7C96370DF9B42B7517370D620EBF99B30CDED670, ___RunMetadata_5)); }
	inline TFBuffer_t107D496FAB131C30F2347AF49395F61269A56AD0 * get_RunMetadata_5() const { return ___RunMetadata_5; }
	inline TFBuffer_t107D496FAB131C30F2347AF49395F61269A56AD0 ** get_address_of_RunMetadata_5() { return &___RunMetadata_5; }
	inline void set_RunMetadata_5(TFBuffer_t107D496FAB131C30F2347AF49395F61269A56AD0 * value)
	{
		___RunMetadata_5 = value;
		Il2CppCodeGenWriteBarrier((&___RunMetadata_5), value);
	}

	inline static int32_t get_offset_of_RunOptions_6() { return static_cast<int32_t>(offsetof(Runner_t7C96370DF9B42B7517370D620EBF99B30CDED670, ___RunOptions_6)); }
	inline TFBuffer_t107D496FAB131C30F2347AF49395F61269A56AD0 * get_RunOptions_6() const { return ___RunOptions_6; }
	inline TFBuffer_t107D496FAB131C30F2347AF49395F61269A56AD0 ** get_address_of_RunOptions_6() { return &___RunOptions_6; }
	inline void set_RunOptions_6(TFBuffer_t107D496FAB131C30F2347AF49395F61269A56AD0 * value)
	{
		___RunOptions_6 = value;
		Il2CppCodeGenWriteBarrier((&___RunOptions_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNNER_T7C96370DF9B42B7517370D620EBF99B30CDED670_H
#ifndef TFSHAPE_T269B735A5AB15B4CF59931FBA2A034443E579565_H
#define TFSHAPE_T269B735A5AB15B4CF59931FBA2A034443E579565_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TensorFlow.TFShape
struct  TFShape_t269B735A5AB15B4CF59931FBA2A034443E579565  : public RuntimeObject
{
public:
	// System.Int64[] TensorFlow.TFShape::dims
	Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* ___dims_0;

public:
	inline static int32_t get_offset_of_dims_0() { return static_cast<int32_t>(offsetof(TFShape_t269B735A5AB15B4CF59931FBA2A034443E579565, ___dims_0)); }
	inline Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* get_dims_0() const { return ___dims_0; }
	inline Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F** get_address_of_dims_0() { return &___dims_0; }
	inline void set_dims_0(Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* value)
	{
		___dims_0 = value;
		Il2CppCodeGenWriteBarrier((&___dims_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TFSHAPE_T269B735A5AB15B4CF59931FBA2A034443E579565_H
#ifndef U3CU3EC_T151E28BB9FDE9A0C02BA3C2469448CB0304C7CA7_H
#define U3CU3EC_T151E28BB9FDE9A0C02BA3C2469448CB0304C7CA7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TensorFlow.TFShape/<>c
struct  U3CU3Ec_t151E28BB9FDE9A0C02BA3C2469448CB0304C7CA7  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t151E28BB9FDE9A0C02BA3C2469448CB0304C7CA7_StaticFields
{
public:
	// TensorFlow.TFShape/<>c TensorFlow.TFShape/<>c::<>9
	U3CU3Ec_t151E28BB9FDE9A0C02BA3C2469448CB0304C7CA7 * ___U3CU3E9_0;
	// System.Func`2<System.Int64,System.String> TensorFlow.TFShape/<>c::<>9__15_0
	Func_2_tFF25CF48F6D2159F721DDFBF4CF812A795D0D7EE * ___U3CU3E9__15_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t151E28BB9FDE9A0C02BA3C2469448CB0304C7CA7_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t151E28BB9FDE9A0C02BA3C2469448CB0304C7CA7 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t151E28BB9FDE9A0C02BA3C2469448CB0304C7CA7 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t151E28BB9FDE9A0C02BA3C2469448CB0304C7CA7 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__15_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t151E28BB9FDE9A0C02BA3C2469448CB0304C7CA7_StaticFields, ___U3CU3E9__15_0_1)); }
	inline Func_2_tFF25CF48F6D2159F721DDFBF4CF812A795D0D7EE * get_U3CU3E9__15_0_1() const { return ___U3CU3E9__15_0_1; }
	inline Func_2_tFF25CF48F6D2159F721DDFBF4CF812A795D0D7EE ** get_address_of_U3CU3E9__15_0_1() { return &___U3CU3E9__15_0_1; }
	inline void set_U3CU3E9__15_0_1(Func_2_tFF25CF48F6D2159F721DDFBF4CF812A795D0D7EE * value)
	{
		___U3CU3E9__15_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__15_0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T151E28BB9FDE9A0C02BA3C2469448CB0304C7CA7_H
#ifndef TFSTRING_TCF78FFE2469215A95DF91742B0DDDAD2B03EC13C_H
#define TFSTRING_TCF78FFE2469215A95DF91742B0DDDAD2B03EC13C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TensorFlow.TFString
struct  TFString_tCF78FFE2469215A95DF91742B0DDDAD2B03EC13C  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TFSTRING_TCF78FFE2469215A95DF91742B0DDDAD2B03EC13C_H
#ifndef VARIABLE_T61D75A609FDDE8653620CC867613B6A327C3E2CC_H
#define VARIABLE_T61D75A609FDDE8653620CC867613B6A327C3E2CC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TensorFlow.Variable
struct  Variable_t61D75A609FDDE8653620CC867613B6A327C3E2CC  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VARIABLE_T61D75A609FDDE8653620CC867613B6A327C3E2CC_H
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
#ifndef DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#define DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
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
#ifndef TEXTWRITER_T92451D929322093838C41489883D5B2D7ABAF3F0_H
#define TEXTWRITER_T92451D929322093838C41489883D5B2D7ABAF3F0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextWriter
struct  TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___CoreNewLine_9;
	// System.IFormatProvider System.IO.TextWriter::InternalFormatProvider
	RuntimeObject* ___InternalFormatProvider_10;

public:
	inline static int32_t get_offset_of_CoreNewLine_9() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0, ___CoreNewLine_9)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_CoreNewLine_9() const { return ___CoreNewLine_9; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_CoreNewLine_9() { return &___CoreNewLine_9; }
	inline void set_CoreNewLine_9(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___CoreNewLine_9 = value;
		Il2CppCodeGenWriteBarrier((&___CoreNewLine_9), value);
	}

	inline static int32_t get_offset_of_InternalFormatProvider_10() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0, ___InternalFormatProvider_10)); }
	inline RuntimeObject* get_InternalFormatProvider_10() const { return ___InternalFormatProvider_10; }
	inline RuntimeObject** get_address_of_InternalFormatProvider_10() { return &___InternalFormatProvider_10; }
	inline void set_InternalFormatProvider_10(RuntimeObject* value)
	{
		___InternalFormatProvider_10 = value;
		Il2CppCodeGenWriteBarrier((&___InternalFormatProvider_10), value);
	}
};

struct TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * ___Null_1;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteCharDelegate_2;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteStringDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteStringDelegate_3;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharArrayRangeDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteCharArrayRangeDelegate_4;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteLineCharDelegate_5;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineStringDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteLineStringDelegate_6;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharArrayRangeDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteLineCharArrayRangeDelegate_7;
	// System.Action`1<System.Object> System.IO.TextWriter::_FlushDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____FlushDelegate_8;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ___Null_1)); }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((&___Null_1), value);
	}

	inline static int32_t get_offset_of__WriteCharDelegate_2() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteCharDelegate_2)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteCharDelegate_2() const { return ____WriteCharDelegate_2; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteCharDelegate_2() { return &____WriteCharDelegate_2; }
	inline void set__WriteCharDelegate_2(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteCharDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((&____WriteCharDelegate_2), value);
	}

	inline static int32_t get_offset_of__WriteStringDelegate_3() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteStringDelegate_3)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteStringDelegate_3() const { return ____WriteStringDelegate_3; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteStringDelegate_3() { return &____WriteStringDelegate_3; }
	inline void set__WriteStringDelegate_3(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteStringDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((&____WriteStringDelegate_3), value);
	}

	inline static int32_t get_offset_of__WriteCharArrayRangeDelegate_4() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteCharArrayRangeDelegate_4)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteCharArrayRangeDelegate_4() const { return ____WriteCharArrayRangeDelegate_4; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteCharArrayRangeDelegate_4() { return &____WriteCharArrayRangeDelegate_4; }
	inline void set__WriteCharArrayRangeDelegate_4(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteCharArrayRangeDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((&____WriteCharArrayRangeDelegate_4), value);
	}

	inline static int32_t get_offset_of__WriteLineCharDelegate_5() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteLineCharDelegate_5)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteLineCharDelegate_5() const { return ____WriteLineCharDelegate_5; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteLineCharDelegate_5() { return &____WriteLineCharDelegate_5; }
	inline void set__WriteLineCharDelegate_5(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteLineCharDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((&____WriteLineCharDelegate_5), value);
	}

	inline static int32_t get_offset_of__WriteLineStringDelegate_6() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteLineStringDelegate_6)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteLineStringDelegate_6() const { return ____WriteLineStringDelegate_6; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteLineStringDelegate_6() { return &____WriteLineStringDelegate_6; }
	inline void set__WriteLineStringDelegate_6(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteLineStringDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((&____WriteLineStringDelegate_6), value);
	}

	inline static int32_t get_offset_of__WriteLineCharArrayRangeDelegate_7() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteLineCharArrayRangeDelegate_7)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteLineCharArrayRangeDelegate_7() const { return ____WriteLineCharArrayRangeDelegate_7; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteLineCharArrayRangeDelegate_7() { return &____WriteLineCharArrayRangeDelegate_7; }
	inline void set__WriteLineCharArrayRangeDelegate_7(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteLineCharArrayRangeDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((&____WriteLineCharArrayRangeDelegate_7), value);
	}

	inline static int32_t get_offset_of__FlushDelegate_8() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____FlushDelegate_8)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__FlushDelegate_8() const { return ____FlushDelegate_8; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__FlushDelegate_8() { return &____FlushDelegate_8; }
	inline void set__FlushDelegate_8(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____FlushDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((&____FlushDelegate_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTWRITER_T92451D929322093838C41489883D5B2D7ABAF3F0_H
#ifndef INT16_T823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_H
#define INT16_T823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16_T823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_H
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
#ifndef INT64_T7A386C2FF7B0280A0F516992401DDFCF0FF7B436_H
#define INT64_T7A386C2FF7B0280A0F516992401DDFCF0FF7B436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T7A386C2FF7B0280A0F516992401DDFCF0FF7B436_H
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
#ifndef NULLABLE_1_T0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB_H
#define NULLABLE_1_T0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Int32>
struct  Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB_H
#ifndef COMPLEX_TD3CA17E8417A543F2625EB352AC07C0209D85733_H
#define COMPLEX_TD3CA17E8417A543F2625EB352AC07C0209D85733_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Numerics.Complex
struct  Complex_tD3CA17E8417A543F2625EB352AC07C0209D85733 
{
public:
	// System.Double System.Numerics.Complex::m_real
	double ___m_real_0;
	// System.Double System.Numerics.Complex::m_imaginary
	double ___m_imaginary_1;

public:
	inline static int32_t get_offset_of_m_real_0() { return static_cast<int32_t>(offsetof(Complex_tD3CA17E8417A543F2625EB352AC07C0209D85733, ___m_real_0)); }
	inline double get_m_real_0() const { return ___m_real_0; }
	inline double* get_address_of_m_real_0() { return &___m_real_0; }
	inline void set_m_real_0(double value)
	{
		___m_real_0 = value;
	}

	inline static int32_t get_offset_of_m_imaginary_1() { return static_cast<int32_t>(offsetof(Complex_tD3CA17E8417A543F2625EB352AC07C0209D85733, ___m_imaginary_1)); }
	inline double get_m_imaginary_1() const { return ___m_imaginary_1; }
	inline double* get_address_of_m_imaginary_1() { return &___m_imaginary_1; }
	inline void set_m_imaginary_1(double value)
	{
		___m_imaginary_1 = value;
	}
};

struct Complex_tD3CA17E8417A543F2625EB352AC07C0209D85733_StaticFields
{
public:
	// System.Numerics.Complex System.Numerics.Complex::Zero
	Complex_tD3CA17E8417A543F2625EB352AC07C0209D85733  ___Zero_2;
	// System.Numerics.Complex System.Numerics.Complex::One
	Complex_tD3CA17E8417A543F2625EB352AC07C0209D85733  ___One_3;
	// System.Numerics.Complex System.Numerics.Complex::ImaginaryOne
	Complex_tD3CA17E8417A543F2625EB352AC07C0209D85733  ___ImaginaryOne_4;

public:
	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(Complex_tD3CA17E8417A543F2625EB352AC07C0209D85733_StaticFields, ___Zero_2)); }
	inline Complex_tD3CA17E8417A543F2625EB352AC07C0209D85733  get_Zero_2() const { return ___Zero_2; }
	inline Complex_tD3CA17E8417A543F2625EB352AC07C0209D85733 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(Complex_tD3CA17E8417A543F2625EB352AC07C0209D85733  value)
	{
		___Zero_2 = value;
	}

	inline static int32_t get_offset_of_One_3() { return static_cast<int32_t>(offsetof(Complex_tD3CA17E8417A543F2625EB352AC07C0209D85733_StaticFields, ___One_3)); }
	inline Complex_tD3CA17E8417A543F2625EB352AC07C0209D85733  get_One_3() const { return ___One_3; }
	inline Complex_tD3CA17E8417A543F2625EB352AC07C0209D85733 * get_address_of_One_3() { return &___One_3; }
	inline void set_One_3(Complex_tD3CA17E8417A543F2625EB352AC07C0209D85733  value)
	{
		___One_3 = value;
	}

	inline static int32_t get_offset_of_ImaginaryOne_4() { return static_cast<int32_t>(offsetof(Complex_tD3CA17E8417A543F2625EB352AC07C0209D85733_StaticFields, ___ImaginaryOne_4)); }
	inline Complex_tD3CA17E8417A543F2625EB352AC07C0209D85733  get_ImaginaryOne_4() const { return ___ImaginaryOne_4; }
	inline Complex_tD3CA17E8417A543F2625EB352AC07C0209D85733 * get_address_of_ImaginaryOne_4() { return &___ImaginaryOne_4; }
	inline void set_ImaginaryOne_4(Complex_tD3CA17E8417A543F2625EB352AC07C0209D85733  value)
	{
		___ImaginaryOne_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPLEX_TD3CA17E8417A543F2625EB352AC07C0209D85733_H
#ifndef GCHANDLE_T39FAEE3EA592432C93B574A31DD83B87F1847DE3_H
#define GCHANDLE_T39FAEE3EA592432C93B574A31DD83B87F1847DE3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLE_T39FAEE3EA592432C93B574A31DD83B87F1847DE3_H
#ifndef SBYTE_T9070AEA2966184235653CB9B4D33B149CDA831DF_H
#define SBYTE_T9070AEA2966184235653CB9B4D33B149CDA831DF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SByte
struct  SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTE_T9070AEA2966184235653CB9B4D33B149CDA831DF_H
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
#ifndef UINT16_TAE45CEF73BF720100519F6867F32145D075F928E_H
#define UINT16_TAE45CEF73BF720100519F6867F32145D075F928E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_tAE45CEF73BF720100519F6867F32145D075F928E 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_TAE45CEF73BF720100519F6867F32145D075F928E_H
#ifndef UINT64_TA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_H
#define UINT64_TA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_TA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_H
#ifndef UINTPTR_T_H
#define UINTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UIntPtr
struct  UIntPtr_t 
{
public:
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;

public:
	inline static int32_t get_offset_of__pointer_1() { return static_cast<int32_t>(offsetof(UIntPtr_t, ____pointer_1)); }
	inline void* get__pointer_1() const { return ____pointer_1; }
	inline void** get_address_of__pointer_1() { return &____pointer_1; }
	inline void set__pointer_1(void* value)
	{
		____pointer_1 = value;
	}
};

struct UIntPtr_t_StaticFields
{
public:
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(UIntPtr_t_StaticFields, ___Zero_0)); }
	inline uintptr_t get_Zero_0() const { return ___Zero_0; }
	inline uintptr_t* get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(uintptr_t value)
	{
		___Zero_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINTPTR_T_H
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
#ifndef MONOPINVOKECALLBACKATTRIBUTE_T71D23934CA52D430FCE749ADDC02750E8514BCBB_H
#define MONOPINVOKECALLBACKATTRIBUTE_T71D23934CA52D430FCE749ADDC02750E8514BCBB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TensorFlow.MonoPInvokeCallbackAttribute
struct  MonoPInvokeCallbackAttribute_t71D23934CA52D430FCE749ADDC02750E8514BCBB  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOPINVOKECALLBACKATTRIBUTE_T71D23934CA52D430FCE749ADDC02750E8514BCBB_H
#ifndef TFEXCEPTION_T7ED9AF8B794AA6A2B22662B556CE78BC47D9093E_H
#define TFEXCEPTION_T7ED9AF8B794AA6A2B22662B556CE78BC47D9093E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TensorFlow.TFException
struct  TFException_t7ED9AF8B794AA6A2B22662B556CE78BC47D9093E  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TFEXCEPTION_T7ED9AF8B794AA6A2B22662B556CE78BC47D9093E_H
#ifndef ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#define ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_paramName_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
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
#ifndef INVALIDOPERATIONEXCEPTION_T0530E734D823F78310CAFAFA424CA5164D93A1F1_H
#define INVALIDOPERATIONEXCEPTION_T0530E734D823F78310CAFAFA424CA5164D93A1F1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T0530E734D823F78310CAFAFA424CA5164D93A1F1_H
#ifndef NOTIMPLEMENTEDEXCEPTION_T8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_H
#define NOTIMPLEMENTEDEXCEPTION_T8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotImplementedException
struct  NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIMPLEMENTEDEXCEPTION_T8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_H
#ifndef BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#define BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
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
#endif // BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#ifndef GCHANDLETYPE_T7155EF9CB120186C6753EE17470D37E148CB2EF1_H
#define GCHANDLETYPE_T7155EF9CB120186C6753EE17470D37E148CB2EF1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandleType
struct  GCHandleType_t7155EF9CB120186C6753EE17470D37E148CB2EF1 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandleType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GCHandleType_t7155EF9CB120186C6753EE17470D37E148CB2EF1, ___value___2)); }
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
#endif // GCHANDLETYPE_T7155EF9CB120186C6753EE17470D37E148CB2EF1_H
#ifndef RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#define RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#ifndef LLBUFFER_TABF74829C7C3E0735B735F2BCC0ACE992BE0A2B2_H
#define LLBUFFER_TABF74829C7C3E0735B735F2BCC0ACE992BE0A2B2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TensorFlow.LLBuffer
struct  LLBuffer_tABF74829C7C3E0735B735F2BCC0ACE992BE0A2B2 
{
public:
	// System.IntPtr TensorFlow.LLBuffer::data
	intptr_t ___data_0;
	// System.UIntPtr TensorFlow.LLBuffer::length
	uintptr_t ___length_1;
	// System.IntPtr TensorFlow.LLBuffer::data_deallocator
	intptr_t ___data_deallocator_2;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(LLBuffer_tABF74829C7C3E0735B735F2BCC0ACE992BE0A2B2, ___data_0)); }
	inline intptr_t get_data_0() const { return ___data_0; }
	inline intptr_t* get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(intptr_t value)
	{
		___data_0 = value;
	}

	inline static int32_t get_offset_of_length_1() { return static_cast<int32_t>(offsetof(LLBuffer_tABF74829C7C3E0735B735F2BCC0ACE992BE0A2B2, ___length_1)); }
	inline uintptr_t get_length_1() const { return ___length_1; }
	inline uintptr_t* get_address_of_length_1() { return &___length_1; }
	inline void set_length_1(uintptr_t value)
	{
		___length_1 = value;
	}

	inline static int32_t get_offset_of_data_deallocator_2() { return static_cast<int32_t>(offsetof(LLBuffer_tABF74829C7C3E0735B735F2BCC0ACE992BE0A2B2, ___data_deallocator_2)); }
	inline intptr_t get_data_deallocator_2() const { return ___data_deallocator_2; }
	inline intptr_t* get_address_of_data_deallocator_2() { return &___data_deallocator_2; }
	inline void set_data_deallocator_2(intptr_t value)
	{
		___data_deallocator_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LLBUFFER_TABF74829C7C3E0735B735F2BCC0ACE992BE0A2B2_H
#ifndef TFCODE_T6A126ABE1D332B6882FBC74ABC0EA525ACEF2496_H
#define TFCODE_T6A126ABE1D332B6882FBC74ABC0EA525ACEF2496_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TensorFlow.TFCode
struct  TFCode_t6A126ABE1D332B6882FBC74ABC0EA525ACEF2496 
{
public:
	// System.UInt32 TensorFlow.TFCode::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TFCode_t6A126ABE1D332B6882FBC74ABC0EA525ACEF2496, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TFCODE_T6A126ABE1D332B6882FBC74ABC0EA525ACEF2496_H
#ifndef TFDATATYPE_TFC283296F243C465F516D878F9C24DB7B88C19F7_H
#define TFDATATYPE_TFC283296F243C465F516D878F9C24DB7B88C19F7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TensorFlow.TFDataType
struct  TFDataType_tFC283296F243C465F516D878F9C24DB7B88C19F7 
{
public:
	// System.UInt32 TensorFlow.TFDataType::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TFDataType_tFC283296F243C465F516D878F9C24DB7B88C19F7, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TFDATATYPE_TFC283296F243C465F516D878F9C24DB7B88C19F7_H
#ifndef TFDISPOSABLE_TEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F_H
#define TFDISPOSABLE_TEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TensorFlow.TFDisposable
struct  TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F  : public RuntimeObject
{
public:
	// System.IntPtr TensorFlow.TFDisposable::handle
	intptr_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TFDISPOSABLE_TEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F_H
#ifndef TFOPERATION_TE9B416AFCE4899E889AEAE8D3D8801DFFD43F615_H
#define TFOPERATION_TE9B416AFCE4899E889AEAE8D3D8801DFFD43F615_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TensorFlow.TFOperation
struct  TFOperation_tE9B416AFCE4899E889AEAE8D3D8801DFFD43F615  : public RuntimeObject
{
public:
	// System.IntPtr TensorFlow.TFOperation::handle
	intptr_t ___handle_0;
	// TensorFlow.TFGraph TensorFlow.TFOperation::graph
	TFGraph_tC5E8FDE19B464B98CF2CE5B1796B54A13F1814ED * ___graph_1;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(TFOperation_tE9B416AFCE4899E889AEAE8D3D8801DFFD43F615, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of_graph_1() { return static_cast<int32_t>(offsetof(TFOperation_tE9B416AFCE4899E889AEAE8D3D8801DFFD43F615, ___graph_1)); }
	inline TFGraph_tC5E8FDE19B464B98CF2CE5B1796B54A13F1814ED * get_graph_1() const { return ___graph_1; }
	inline TFGraph_tC5E8FDE19B464B98CF2CE5B1796B54A13F1814ED ** get_address_of_graph_1() { return &___graph_1; }
	inline void set_graph_1(TFGraph_tC5E8FDE19B464B98CF2CE5B1796B54A13F1814ED * value)
	{
		___graph_1 = value;
		Il2CppCodeGenWriteBarrier((&___graph_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TFOPERATION_TE9B416AFCE4899E889AEAE8D3D8801DFFD43F615_H
#ifndef TFOUTPUT_T90A65BA929AEDA082D365E6889144EC3EE1FCEF9_H
#define TFOUTPUT_T90A65BA929AEDA082D365E6889144EC3EE1FCEF9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TensorFlow.TFOutput
struct  TFOutput_t90A65BA929AEDA082D365E6889144EC3EE1FCEF9 
{
public:
	// System.IntPtr TensorFlow.TFOutput::LLOperation
	intptr_t ___LLOperation_0;
	// System.Int32 TensorFlow.TFOutput::Index
	int32_t ___Index_1;

public:
	inline static int32_t get_offset_of_LLOperation_0() { return static_cast<int32_t>(offsetof(TFOutput_t90A65BA929AEDA082D365E6889144EC3EE1FCEF9, ___LLOperation_0)); }
	inline intptr_t get_LLOperation_0() const { return ___LLOperation_0; }
	inline intptr_t* get_address_of_LLOperation_0() { return &___LLOperation_0; }
	inline void set_LLOperation_0(intptr_t value)
	{
		___LLOperation_0 = value;
	}

	inline static int32_t get_offset_of_Index_1() { return static_cast<int32_t>(offsetof(TFOutput_t90A65BA929AEDA082D365E6889144EC3EE1FCEF9, ___Index_1)); }
	inline int32_t get_Index_1() const { return ___Index_1; }
	inline int32_t* get_address_of_Index_1() { return &___Index_1; }
	inline void set_Index_1(int32_t value)
	{
		___Index_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TFOUTPUT_T90A65BA929AEDA082D365E6889144EC3EE1FCEF9_H
#ifndef ARGUMENTNULLEXCEPTION_T581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_H
#define ARGUMENTNULLEXCEPTION_T581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_H
#ifndef ARGUMENTOUTOFRANGEEXCEPTION_T94D19DF918A54511AEDF4784C9A08741BAD1DEDA_H
#define ARGUMENTOUTOFRANGEEXCEPTION_T94D19DF918A54511AEDF4784C9A08741BAD1DEDA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_actualValue_19), value);
	}
};

struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((&____rangeMessage_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTOUTOFRANGEEXCEPTION_T94D19DF918A54511AEDF4784C9A08741BAD1DEDA_H
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
#ifndef OBJECTDISPOSEDEXCEPTION_TF68E471ECD1419AD7C51137B742837395F50B69A_H
#define OBJECTDISPOSEDEXCEPTION_TF68E471ECD1419AD7C51137B742837395F50B69A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ObjectDisposedException
struct  ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A  : public InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1
{
public:
	// System.String System.ObjectDisposedException::objectName
	String_t* ___objectName_17;

public:
	inline static int32_t get_offset_of_objectName_17() { return static_cast<int32_t>(offsetof(ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A, ___objectName_17)); }
	inline String_t* get_objectName_17() const { return ___objectName_17; }
	inline String_t** get_address_of_objectName_17() { return &___objectName_17; }
	inline void set_objectName_17(String_t* value)
	{
		___objectName_17 = value;
		Il2CppCodeGenWriteBarrier((&___objectName_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTDISPOSEDEXCEPTION_TF68E471ECD1419AD7C51137B742837395F50B69A_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_0), value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_1), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_3), value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_5), value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((&___defaultBinder_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef TFBUFFER_T107D496FAB131C30F2347AF49395F61269A56AD0_H
#define TFBUFFER_T107D496FAB131C30F2347AF49395F61269A56AD0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TensorFlow.TFBuffer
struct  TFBuffer_t107D496FAB131C30F2347AF49395F61269A56AD0  : public TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F
{
public:

public:
};

struct TFBuffer_t107D496FAB131C30F2347AF49395F61269A56AD0_StaticFields
{
public:
	// System.IntPtr TensorFlow.TFBuffer::FreeBufferFunc
	intptr_t ___FreeBufferFunc_1;
	// TensorFlow.TFBuffer/BufferReleaseFunc TensorFlow.TFBuffer::FreeBlockDelegate
	BufferReleaseFunc_t09FD865988CE82E2C864AB6C5C67DFA0D6FE1C2B * ___FreeBlockDelegate_2;

public:
	inline static int32_t get_offset_of_FreeBufferFunc_1() { return static_cast<int32_t>(offsetof(TFBuffer_t107D496FAB131C30F2347AF49395F61269A56AD0_StaticFields, ___FreeBufferFunc_1)); }
	inline intptr_t get_FreeBufferFunc_1() const { return ___FreeBufferFunc_1; }
	inline intptr_t* get_address_of_FreeBufferFunc_1() { return &___FreeBufferFunc_1; }
	inline void set_FreeBufferFunc_1(intptr_t value)
	{
		___FreeBufferFunc_1 = value;
	}

	inline static int32_t get_offset_of_FreeBlockDelegate_2() { return static_cast<int32_t>(offsetof(TFBuffer_t107D496FAB131C30F2347AF49395F61269A56AD0_StaticFields, ___FreeBlockDelegate_2)); }
	inline BufferReleaseFunc_t09FD865988CE82E2C864AB6C5C67DFA0D6FE1C2B * get_FreeBlockDelegate_2() const { return ___FreeBlockDelegate_2; }
	inline BufferReleaseFunc_t09FD865988CE82E2C864AB6C5C67DFA0D6FE1C2B ** get_address_of_FreeBlockDelegate_2() { return &___FreeBlockDelegate_2; }
	inline void set_FreeBlockDelegate_2(BufferReleaseFunc_t09FD865988CE82E2C864AB6C5C67DFA0D6FE1C2B * value)
	{
		___FreeBlockDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((&___FreeBlockDelegate_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TFBUFFER_T107D496FAB131C30F2347AF49395F61269A56AD0_H
#ifndef TFGRAPH_TC5E8FDE19B464B98CF2CE5B1796B54A13F1814ED_H
#define TFGRAPH_TC5E8FDE19B464B98CF2CE5B1796B54A13F1814ED_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TensorFlow.TFGraph
struct  TFGraph_tC5E8FDE19B464B98CF2CE5B1796B54A13F1814ED  : public TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F
{
public:
	// System.Collections.Generic.List`1<TensorFlow.TFOperation> TensorFlow.TFGraph::pending_init_variables
	List_1_tEAF690A73881B2E7F4228252014CD0019E2CD185 * ___pending_init_variables_1;
	// System.Collections.Generic.List`1<TensorFlow.Variable> TensorFlow.TFGraph::trainable_variables
	List_1_t8E1255097D043C459DE21FBFBC286A5B1C83AE66 * ___trainable_variables_2;
	// System.Nullable`1<System.Int32> TensorFlow.TFGraph::<Seed>k__BackingField
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___U3CSeedU3Ek__BackingField_3;
	// System.String TensorFlow.TFGraph::<CurrentNameScope>k__BackingField
	String_t* ___U3CCurrentNameScopeU3Ek__BackingField_4;
	// TensorFlow.TFOperation[] TensorFlow.TFGraph::<CurrentDependencies>k__BackingField
	TFOperationU5BU5D_tF7DF87892D59A6FD3437D40E862AE2C332EC9F9B* ___U3CCurrentDependenciesU3Ek__BackingField_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> TensorFlow.TFGraph::values
	Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * ___values_6;
	// System.Int32 TensorFlow.TFGraph::LastId
	int32_t ___LastId_7;

public:
	inline static int32_t get_offset_of_pending_init_variables_1() { return static_cast<int32_t>(offsetof(TFGraph_tC5E8FDE19B464B98CF2CE5B1796B54A13F1814ED, ___pending_init_variables_1)); }
	inline List_1_tEAF690A73881B2E7F4228252014CD0019E2CD185 * get_pending_init_variables_1() const { return ___pending_init_variables_1; }
	inline List_1_tEAF690A73881B2E7F4228252014CD0019E2CD185 ** get_address_of_pending_init_variables_1() { return &___pending_init_variables_1; }
	inline void set_pending_init_variables_1(List_1_tEAF690A73881B2E7F4228252014CD0019E2CD185 * value)
	{
		___pending_init_variables_1 = value;
		Il2CppCodeGenWriteBarrier((&___pending_init_variables_1), value);
	}

	inline static int32_t get_offset_of_trainable_variables_2() { return static_cast<int32_t>(offsetof(TFGraph_tC5E8FDE19B464B98CF2CE5B1796B54A13F1814ED, ___trainable_variables_2)); }
	inline List_1_t8E1255097D043C459DE21FBFBC286A5B1C83AE66 * get_trainable_variables_2() const { return ___trainable_variables_2; }
	inline List_1_t8E1255097D043C459DE21FBFBC286A5B1C83AE66 ** get_address_of_trainable_variables_2() { return &___trainable_variables_2; }
	inline void set_trainable_variables_2(List_1_t8E1255097D043C459DE21FBFBC286A5B1C83AE66 * value)
	{
		___trainable_variables_2 = value;
		Il2CppCodeGenWriteBarrier((&___trainable_variables_2), value);
	}

	inline static int32_t get_offset_of_U3CSeedU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(TFGraph_tC5E8FDE19B464B98CF2CE5B1796B54A13F1814ED, ___U3CSeedU3Ek__BackingField_3)); }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  get_U3CSeedU3Ek__BackingField_3() const { return ___U3CSeedU3Ek__BackingField_3; }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * get_address_of_U3CSeedU3Ek__BackingField_3() { return &___U3CSeedU3Ek__BackingField_3; }
	inline void set_U3CSeedU3Ek__BackingField_3(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  value)
	{
		___U3CSeedU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CCurrentNameScopeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TFGraph_tC5E8FDE19B464B98CF2CE5B1796B54A13F1814ED, ___U3CCurrentNameScopeU3Ek__BackingField_4)); }
	inline String_t* get_U3CCurrentNameScopeU3Ek__BackingField_4() const { return ___U3CCurrentNameScopeU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CCurrentNameScopeU3Ek__BackingField_4() { return &___U3CCurrentNameScopeU3Ek__BackingField_4; }
	inline void set_U3CCurrentNameScopeU3Ek__BackingField_4(String_t* value)
	{
		___U3CCurrentNameScopeU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCurrentNameScopeU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CCurrentDependenciesU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(TFGraph_tC5E8FDE19B464B98CF2CE5B1796B54A13F1814ED, ___U3CCurrentDependenciesU3Ek__BackingField_5)); }
	inline TFOperationU5BU5D_tF7DF87892D59A6FD3437D40E862AE2C332EC9F9B* get_U3CCurrentDependenciesU3Ek__BackingField_5() const { return ___U3CCurrentDependenciesU3Ek__BackingField_5; }
	inline TFOperationU5BU5D_tF7DF87892D59A6FD3437D40E862AE2C332EC9F9B** get_address_of_U3CCurrentDependenciesU3Ek__BackingField_5() { return &___U3CCurrentDependenciesU3Ek__BackingField_5; }
	inline void set_U3CCurrentDependenciesU3Ek__BackingField_5(TFOperationU5BU5D_tF7DF87892D59A6FD3437D40E862AE2C332EC9F9B* value)
	{
		___U3CCurrentDependenciesU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCurrentDependenciesU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_values_6() { return static_cast<int32_t>(offsetof(TFGraph_tC5E8FDE19B464B98CF2CE5B1796B54A13F1814ED, ___values_6)); }
	inline Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * get_values_6() const { return ___values_6; }
	inline Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB ** get_address_of_values_6() { return &___values_6; }
	inline void set_values_6(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * value)
	{
		___values_6 = value;
		Il2CppCodeGenWriteBarrier((&___values_6), value);
	}

	inline static int32_t get_offset_of_LastId_7() { return static_cast<int32_t>(offsetof(TFGraph_tC5E8FDE19B464B98CF2CE5B1796B54A13F1814ED, ___LastId_7)); }
	inline int32_t get_LastId_7() const { return ___LastId_7; }
	inline int32_t* get_address_of_LastId_7() { return &___LastId_7; }
	inline void set_LastId_7(int32_t value)
	{
		___LastId_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TFGRAPH_TC5E8FDE19B464B98CF2CE5B1796B54A13F1814ED_H
#ifndef TFIMPORTGRAPHDEFOPTIONS_T2A12B6EA4EBA8DBE8D63864F9C2D8412C35BEAB5_H
#define TFIMPORTGRAPHDEFOPTIONS_T2A12B6EA4EBA8DBE8D63864F9C2D8412C35BEAB5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TensorFlow.TFImportGraphDefOptions
struct  TFImportGraphDefOptions_t2A12B6EA4EBA8DBE8D63864F9C2D8412C35BEAB5  : public TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TFIMPORTGRAPHDEFOPTIONS_T2A12B6EA4EBA8DBE8D63864F9C2D8412C35BEAB5_H
#ifndef TFSESSION_T9F8D2F72C9A312AFE7AA916B198EB5C3430D8A4E_H
#define TFSESSION_T9F8D2F72C9A312AFE7AA916B198EB5C3430D8A4E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TensorFlow.TFSession
struct  TFSession_t9F8D2F72C9A312AFE7AA916B198EB5C3430D8A4E  : public TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F
{
public:
	// TensorFlow.TFGraph TensorFlow.TFSession::<Graph>k__BackingField
	TFGraph_tC5E8FDE19B464B98CF2CE5B1796B54A13F1814ED * ___U3CGraphU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CGraphU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TFSession_t9F8D2F72C9A312AFE7AA916B198EB5C3430D8A4E, ___U3CGraphU3Ek__BackingField_1)); }
	inline TFGraph_tC5E8FDE19B464B98CF2CE5B1796B54A13F1814ED * get_U3CGraphU3Ek__BackingField_1() const { return ___U3CGraphU3Ek__BackingField_1; }
	inline TFGraph_tC5E8FDE19B464B98CF2CE5B1796B54A13F1814ED ** get_address_of_U3CGraphU3Ek__BackingField_1() { return &___U3CGraphU3Ek__BackingField_1; }
	inline void set_U3CGraphU3Ek__BackingField_1(TFGraph_tC5E8FDE19B464B98CF2CE5B1796B54A13F1814ED * value)
	{
		___U3CGraphU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CGraphU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TFSESSION_T9F8D2F72C9A312AFE7AA916B198EB5C3430D8A4E_H
#ifndef TFSESSIONOPTIONS_T2B25E6648DC2CB98BBAFB84375EFCB5A364A45AF_H
#define TFSESSIONOPTIONS_T2B25E6648DC2CB98BBAFB84375EFCB5A364A45AF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TensorFlow.TFSessionOptions
struct  TFSessionOptions_t2B25E6648DC2CB98BBAFB84375EFCB5A364A45AF  : public TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TFSESSIONOPTIONS_T2B25E6648DC2CB98BBAFB84375EFCB5A364A45AF_H
#ifndef TFSTATUS_TA2230EB50ACF6DC46F22EE44987CB3F8762D4D48_H
#define TFSTATUS_TA2230EB50ACF6DC46F22EE44987CB3F8762D4D48_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TensorFlow.TFStatus
struct  TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48  : public TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F
{
public:

public:
};

struct TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48_ThreadStaticFields
{
public:
	// TensorFlow.TFStatus TensorFlow.TFStatus::Default
	TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48_ThreadStaticFields, ___Default_1)); }
	inline TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * get_Default_1() const { return ___Default_1; }
	inline TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TFSTATUS_TA2230EB50ACF6DC46F22EE44987CB3F8762D4D48_H
#ifndef TFTENSOR_T43C760C30B7777469BE6ABF48ACB2C2264329C88_H
#define TFTENSOR_T43C760C30B7777469BE6ABF48ACB2C2264329C88_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TensorFlow.TFTensor
struct  TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88  : public TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F
{
public:

public:
};

struct TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88_StaticFields
{
public:
	// TensorFlow.TFTensor/Deallocator TensorFlow.TFTensor::FreeTensorDataDelegate
	Deallocator_t872E4BEF7439B64305100113566B7EBB163ABCAE * ___FreeTensorDataDelegate_1;
	// TensorFlow.TFTensor/Deallocator TensorFlow.TFTensor::FreeTensorHandleDelegate
	Deallocator_t872E4BEF7439B64305100113566B7EBB163ABCAE * ___FreeTensorHandleDelegate_2;

public:
	inline static int32_t get_offset_of_FreeTensorDataDelegate_1() { return static_cast<int32_t>(offsetof(TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88_StaticFields, ___FreeTensorDataDelegate_1)); }
	inline Deallocator_t872E4BEF7439B64305100113566B7EBB163ABCAE * get_FreeTensorDataDelegate_1() const { return ___FreeTensorDataDelegate_1; }
	inline Deallocator_t872E4BEF7439B64305100113566B7EBB163ABCAE ** get_address_of_FreeTensorDataDelegate_1() { return &___FreeTensorDataDelegate_1; }
	inline void set_FreeTensorDataDelegate_1(Deallocator_t872E4BEF7439B64305100113566B7EBB163ABCAE * value)
	{
		___FreeTensorDataDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((&___FreeTensorDataDelegate_1), value);
	}

	inline static int32_t get_offset_of_FreeTensorHandleDelegate_2() { return static_cast<int32_t>(offsetof(TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88_StaticFields, ___FreeTensorHandleDelegate_2)); }
	inline Deallocator_t872E4BEF7439B64305100113566B7EBB163ABCAE * get_FreeTensorHandleDelegate_2() const { return ___FreeTensorHandleDelegate_2; }
	inline Deallocator_t872E4BEF7439B64305100113566B7EBB163ABCAE ** get_address_of_FreeTensorHandleDelegate_2() { return &___FreeTensorHandleDelegate_2; }
	inline void set_FreeTensorHandleDelegate_2(Deallocator_t872E4BEF7439B64305100113566B7EBB163ABCAE * value)
	{
		___FreeTensorHandleDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((&___FreeTensorHandleDelegate_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TFTENSOR_T43C760C30B7777469BE6ABF48ACB2C2264329C88_H
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
#ifndef FUNC_2_TFF25CF48F6D2159F721DDFBF4CF812A795D0D7EE_H
#define FUNC_2_TFF25CF48F6D2159F721DDFBF4CF812A795D0D7EE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.Int64,System.String>
struct  Func_2_tFF25CF48F6D2159F721DDFBF4CF812A795D0D7EE  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_TFF25CF48F6D2159F721DDFBF4CF812A795D0D7EE_H
#ifndef BUFFERRELEASEFUNC_T09FD865988CE82E2C864AB6C5C67DFA0D6FE1C2B_H
#define BUFFERRELEASEFUNC_T09FD865988CE82E2C864AB6C5C67DFA0D6FE1C2B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TensorFlow.TFBuffer/BufferReleaseFunc
struct  BufferReleaseFunc_t09FD865988CE82E2C864AB6C5C67DFA0D6FE1C2B  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUFFERRELEASEFUNC_T09FD865988CE82E2C864AB6C5C67DFA0D6FE1C2B_H
#ifndef DEALLOCATOR_T872E4BEF7439B64305100113566B7EBB163ABCAE_H
#define DEALLOCATOR_T872E4BEF7439B64305100113566B7EBB163ABCAE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TensorFlow.TFTensor/Deallocator
struct  Deallocator_t872E4BEF7439B64305100113566B7EBB163ABCAE  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEALLOCATOR_T872E4BEF7439B64305100113566B7EBB163ABCAE_H
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
// TensorFlow.TFOperation[]
struct TFOperationU5BU5D_tF7DF87892D59A6FD3437D40E862AE2C332EC9F9B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TFOperation_tE9B416AFCE4899E889AEAE8D3D8801DFFD43F615 * m_Items[1];

public:
	inline TFOperation_tE9B416AFCE4899E889AEAE8D3D8801DFFD43F615 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TFOperation_tE9B416AFCE4899E889AEAE8D3D8801DFFD43F615 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TFOperation_tE9B416AFCE4899E889AEAE8D3D8801DFFD43F615 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline TFOperation_tE9B416AFCE4899E889AEAE8D3D8801DFFD43F615 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TFOperation_tE9B416AFCE4899E889AEAE8D3D8801DFFD43F615 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TFOperation_tE9B416AFCE4899E889AEAE8D3D8801DFFD43F615 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// TensorFlow.TFOutput[]
struct TFOutputU5BU5D_tA3DB26FE6B7447E959D05237B026B16FC60CE7AB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TFOutput_t90A65BA929AEDA082D365E6889144EC3EE1FCEF9  m_Items[1];

public:
	inline TFOutput_t90A65BA929AEDA082D365E6889144EC3EE1FCEF9  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TFOutput_t90A65BA929AEDA082D365E6889144EC3EE1FCEF9 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TFOutput_t90A65BA929AEDA082D365E6889144EC3EE1FCEF9  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TFOutput_t90A65BA929AEDA082D365E6889144EC3EE1FCEF9  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TFOutput_t90A65BA929AEDA082D365E6889144EC3EE1FCEF9 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TFOutput_t90A65BA929AEDA082D365E6889144EC3EE1FCEF9  value)
	{
		m_Items[index] = value;
	}
};
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) intptr_t m_Items[1];

public:
	inline intptr_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline intptr_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, intptr_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline intptr_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline intptr_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, intptr_t value)
	{
		m_Items[index] = value;
	}
};
// TensorFlow.TFTensor[]
struct TFTensorU5BU5D_t4055F1E4DDA39290AFA5D0F331EE4BBF0F857348  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88 * m_Items[1];

public:
	inline TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Int64[]
struct Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int64_t m_Items[1];

public:
	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.SByte[]
struct SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int8_t m_Items[1];

public:
	inline int8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Boolean[]
struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.UInt16[]
struct UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint16_t m_Items[1];

public:
	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Numerics.Complex[]
struct ComplexU5BU5D_t4247746C5B1B24482EC5467F023370F3154F84AD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Complex_tD3CA17E8417A543F2625EB352AC07C0209D85733  m_Items[1];

public:
	inline Complex_tD3CA17E8417A543F2625EB352AC07C0209D85733  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Complex_tD3CA17E8417A543F2625EB352AC07C0209D85733 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Complex_tD3CA17E8417A543F2625EB352AC07C0209D85733  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Complex_tD3CA17E8417A543F2625EB352AC07C0209D85733  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Complex_tD3CA17E8417A543F2625EB352AC07C0209D85733 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Complex_tD3CA17E8417A543F2625EB352AC07C0209D85733  value)
	{
		m_Items[index] = value;
	}
};
// System.Double[]
struct DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) double m_Items[1];

public:
	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int16[]
struct Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int16_t m_Items[1];

public:
	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};


// System.IntPtr System.Runtime.InteropServices.Marshal::GetFunctionPointerForDelegate<System.Object>(!!0)
extern "C" IL2CPP_METHOD_ATTR intptr_t Marshal_GetFunctionPointerForDelegate_TisRuntimeObject_m9C82C07B1E93B5FFB2119B5414231DDF45006A1E_gshared (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m56FBD260A4D190AD833E9B108B1E80A574AA62C4_gshared (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<TensorFlow.TFOutput>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m34EEB5BF79669F00ABD87F4AC99582DBA5377240_gshared (List_1_tE516AA0787AF53AD9B46744F27C8DB56C3B8EDA0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<TensorFlow.TFOutput>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_mB48FA0C1CC4690D7CF7BF8158AAFF1579748D33F_gshared (List_1_tE516AA0787AF53AD9B46744F27C8DB56C3B8EDA0 * __this, TFOutput_t90A65BA929AEDA082D365E6889144EC3EE1FCEF9  p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<TensorFlow.TFOutput>::ToArray()
extern "C" IL2CPP_METHOD_ATTR TFOutputU5BU5D_tA3DB26FE6B7447E959D05237B026B16FC60CE7AB* List_1_ToArray_mCAD663E3374DBC330C20E8C374E582247B17B3C5_gshared (List_1_tE516AA0787AF53AD9B46744F27C8DB56C3B8EDA0 * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* List_1_ToArray_m801D4DEF3587F60F463F04EEABE5CBE711FE5612_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.Int64,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Func_2__ctor_mDE4F38E30B1FB2E5B064F09885967EC433B403E4_gshared (Func_2_tE728CED8161539FD9F0E5131D871E17D23694574 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Int64,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_TisRuntimeObject_mA4190B86D0F74B37671F074D9FFAB87C121E89FE_gshared (RuntimeObject* p0, Func_2_tE728CED8161539FD9F0E5131D871E17D23694574 * p1, const RuntimeMethod* method);

// System.Void System.Attribute::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0 (Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74 * __this, const RuntimeMethod* method);
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAnsi(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAnsi_mA5D5D1AA7C0EB6A96F92454A8AF9C266E2DF5DA5 (intptr_t p0, const RuntimeMethod* method);
// System.Void TensorFlow.TFBuffer::FreeBlock(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TFBuffer_FreeBlock_m901AFC0836B644BFE3E5EE66E467A995F4B8A182 (intptr_t ___data0, intptr_t ___length1, const RuntimeMethod* method);
// TensorFlow.LLBuffer* TensorFlow.TFBuffer::TF_NewBuffer()
extern "C" IL2CPP_METHOD_ATTR LLBuffer_tABF74829C7C3E0735B735F2BCC0ACE992BE0A2B2 * TFBuffer_TF_NewBuffer_m29F094A5C25CE60A095607C77051F7678D69E965 (const RuntimeMethod* method);
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
extern "C" IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_m7F0C4B884FFB05BD231154CBDAEBCF1917019C21 (void* p0, const RuntimeMethod* method);
// System.Void TensorFlow.TFDisposable::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TFDisposable__ctor_mB21000C375CFF831FD674A6FB7534F22BD9859D1 (TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F * __this, intptr_t ___handle0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::FreeHGlobal(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Marshal_FreeHGlobal_mF098DF00F5341FDE4747A6F2004D5A0C9B03ED85 (intptr_t p0, const RuntimeMethod* method);
// System.Void TensorFlow.TFBuffer/BufferReleaseFunc::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void BufferReleaseFunc__ctor_m13222798F1CDDD3762401D77FED5A6CC59D404A1 (BufferReleaseFunc_t09FD865988CE82E2C864AB6C5C67DFA0D6FE1C2B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.Marshal::GetFunctionPointerForDelegate<TensorFlow.TFBuffer/BufferReleaseFunc>(!!0)
inline intptr_t Marshal_GetFunctionPointerForDelegate_TisBufferReleaseFunc_t09FD865988CE82E2C864AB6C5C67DFA0D6FE1C2B_mC67D47B648575B70C0F4185965655A27FA291637 (BufferReleaseFunc_t09FD865988CE82E2C864AB6C5C67DFA0D6FE1C2B * p0, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (BufferReleaseFunc_t09FD865988CE82E2C864AB6C5C67DFA0D6FE1C2B *, const RuntimeMethod*))Marshal_GetFunctionPointerForDelegate_TisRuntimeObject_m9C82C07B1E93B5FFB2119B5414231DDF45006A1E_gshared)(p0, method);
}
// System.Void TensorFlow.TFBuffer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TFBuffer__ctor_m00B776872DA3C65BDDFDADC2C38299EFC6C67E97 (TFBuffer_t107D496FAB131C30F2347AF49395F61269A56AD0 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* p0, const RuntimeMethod* method);
// TensorFlow.LLBuffer* TensorFlow.TFBuffer::get_LLBuffer()
extern "C" IL2CPP_METHOD_ATTR LLBuffer_tABF74829C7C3E0735B735F2BCC0ACE992BE0A2B2 * TFBuffer_get_LLBuffer_mF90E8DD2AB1F40C22F4854DBEF5BF73616038A40 (TFBuffer_t107D496FAB131C30F2347AF49395F61269A56AD0 * __this, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t Marshal_AllocHGlobal_m3BFCB876D7469108C8676D6DD90D943806C13A58 (int32_t p0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.Byte[],System.Int32,System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Marshal_Copy_m0486DFF229946F0F9E6A04DDDF3BC9E5F1609A5A (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* p0, int32_t p1, intptr_t p2, int32_t p3, const RuntimeMethod* method);
// System.UIntPtr System.UIntPtr::op_Explicit(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR uintptr_t UIntPtr_op_Explicit_m2407113DA21D21EABD35525DB0106B20734929E0 (uint64_t p0, const RuntimeMethod* method);
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027 (intptr_t p0, const RuntimeMethod* method);
// System.Void TensorFlow.TFBuffer::TF_DeleteBuffer(TensorFlow.LLBuffer*)
extern "C" IL2CPP_METHOD_ATTR void TFBuffer_TF_DeleteBuffer_m11326357296D90F199C7AF3109FFEE20164210EA (LLBuffer_tABF74829C7C3E0735B735F2BCC0ACE992BE0A2B2 * ___buffer0, const RuntimeMethod* method);
// System.Void TensorFlow.TFCore::Init()
extern "C" IL2CPP_METHOD_ATTR void TFCore_Init_m89C77CEBB85F0D9D649E5AD3B40599913A40012B (const RuntimeMethod* method);
// System.Void TensorFlow.TFCore::CheckSize()
extern "C" IL2CPP_METHOD_ATTR void TFCore_CheckSize_m56E95114417EE95E2BB74FEAE85459EAAAD27D96 (const RuntimeMethod* method);
// System.IO.TextWriter System.Console::get_Error()
extern "C" IL2CPP_METHOD_ATTR TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * Console_get_Error_mE1078EFC5C7C133964838D2A72B8FB9567E4C98A (const RuntimeMethod* method);
// System.Void System.Exception::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Exception__ctor_m5FEC89FBFACEEDCEE29CCFD44A85D72FC28EB0D1 (Exception_t * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
extern "C" IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
extern "C" IL2CPP_METHOD_ATTR void Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61 (intptr_t p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.ObjectDisposedException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_m8B5D23EA08E42BDE6BC5233CC666295F19BBD2F9 (ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0 (Exception_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor()
inline void Dictionary_2__ctor_m20A5B6C6950ACF998FE28F7FACEA19C755593E62 (Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB *, const RuntimeMethod*))Dictionary_2__ctor_m56FBD260A4D190AD833E9B108B1E80A574AA62C4_gshared)(__this, method);
}
// System.IntPtr TensorFlow.TFGraph::TF_NewGraph()
extern "C" IL2CPP_METHOD_ATTR intptr_t TFGraph_TF_NewGraph_m1AF1D8857795C9D37F9DB1EE40E0ABA6D87C2453 (const RuntimeMethod* method);
// System.Void TensorFlow.TFGraph::TF_DeleteGraph(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TFGraph_TF_DeleteGraph_m4F7D265D31797CE215410F4A2778E4DCF9232D5C (intptr_t ___graph0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934 (intptr_t p0, intptr_t p1, const RuntimeMethod* method);
// System.Void TensorFlow.TFDisposable::ObjectDisposedException()
extern "C" IL2CPP_METHOD_ATTR void TFDisposable_ObjectDisposedException_m33558ABEC521D5091E71ACA8DB42B3FF89266830 (const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* p0, const RuntimeMethod* method);
// TensorFlow.TFStatus TensorFlow.TFStatus::Setup(TensorFlow.TFStatus)
extern "C" IL2CPP_METHOD_ATTR TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * TFStatus_Setup_mC3FC03DF1F0D1A1C0FCAB6B1D369F6E86E693552 (TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * ___incoming0, const RuntimeMethod* method);
// System.Void TensorFlow.TFGraph::TF_GraphImportGraphDef(System.IntPtr,TensorFlow.LLBuffer*,System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TFGraph_TF_GraphImportGraphDef_mF32420F610817F77CF1D3826373E32147348FD7B (intptr_t ___graph0, LLBuffer_tABF74829C7C3E0735B735F2BCC0ACE992BE0A2B2 * ___graph_def1, intptr_t ___options2, intptr_t ___status3, const RuntimeMethod* method);
// System.Boolean TensorFlow.TFStatus::CheckMaybeRaise(TensorFlow.TFStatus,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool TFStatus_CheckMaybeRaise_mB66AA81C3142A7FAD056BA3032D380ADC2C657EB (TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * __this, TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * ___incomingStatus0, bool ___last1, const RuntimeMethod* method);
// System.Void TensorFlow.TFImportGraphDefOptions::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TFImportGraphDefOptions__ctor_mE85F3B3ACBEAC1039C7435292E3C8B76D5456CF8 (TFImportGraphDefOptions_t2A12B6EA4EBA8DBE8D63864F9C2D8412C35BEAB5 * __this, const RuntimeMethod* method);
// System.Void TensorFlow.TFImportGraphDefOptions::SetPrefix(System.String)
extern "C" IL2CPP_METHOD_ATTR void TFImportGraphDefOptions_SetPrefix_m029E5EE3078522A1C7E13C9E481A9E4C28010C8C (TFImportGraphDefOptions_t2A12B6EA4EBA8DBE8D63864F9C2D8412C35BEAB5 * __this, String_t* ___prefix0, const RuntimeMethod* method);
// System.Void TensorFlow.TFGraph::Import(System.Byte[],TensorFlow.TFImportGraphDefOptions,TensorFlow.TFStatus)
extern "C" IL2CPP_METHOD_ATTR void TFGraph_Import_mDF59538C2007060B84B2B9AAFBCF921942EA6215 (TFGraph_tC5E8FDE19B464B98CF2CE5B1796B54A13F1814ED * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, TFImportGraphDefOptions_t2A12B6EA4EBA8DBE8D63864F9C2D8412C35BEAB5 * ___options1, TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * ___status2, const RuntimeMethod* method);
// System.Void TensorFlow.TFBuffer::.ctor(System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TFBuffer__ctor_m9DA438B58610EDB66559D6714949BA55D373E7D2 (TFBuffer_t107D496FAB131C30F2347AF49395F61269A56AD0 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___start1, int32_t ___count2, const RuntimeMethod* method);
// System.Void TensorFlow.TFGraph::Import(TensorFlow.TFBuffer,TensorFlow.TFImportGraphDefOptions,TensorFlow.TFStatus)
extern "C" IL2CPP_METHOD_ATTR void TFGraph_Import_m7B43A8A89D5F493B99BDAE26A8AC78AF49236BAB (TFGraph_tC5E8FDE19B464B98CF2CE5B1796B54A13F1814ED * __this, TFBuffer_t107D496FAB131C30F2347AF49395F61269A56AD0 * ___graphDef0, TFImportGraphDefOptions_t2A12B6EA4EBA8DBE8D63864F9C2D8412C35BEAB5 * ___options1, TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * ___status2, const RuntimeMethod* method);
// System.IntPtr TensorFlow.TFGraph::TF_GraphOperationByName(System.IntPtr,System.String)
extern "C" IL2CPP_METHOD_ATTR intptr_t TFGraph_TF_GraphOperationByName_m5C5724007697E6DAAE0CC8E74E094C424FED4C23 (intptr_t ___graph0, String_t* ___oper_name1, const RuntimeMethod* method);
// System.Void TensorFlow.TFOperation::.ctor(TensorFlow.TFGraph,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TFOperation__ctor_m953DAA34B67B3164A0AC62AEEB65B6077040F8FF (TFOperation_tE9B416AFCE4899E889AEAE8D3D8801DFFD43F615 * __this, TFGraph_tC5E8FDE19B464B98CF2CE5B1796B54A13F1814ED * ___graph0, intptr_t ___handle1, const RuntimeMethod* method);
// System.IntPtr TensorFlow.TFImportGraphDefOptions::TF_NewImportGraphDefOptions()
extern "C" IL2CPP_METHOD_ATTR intptr_t TFImportGraphDefOptions_TF_NewImportGraphDefOptions_mD3CFBFA2E7A3E58718FB60F84F3C0BF1CF7D5E96 (const RuntimeMethod* method);
// System.Void TensorFlow.TFImportGraphDefOptions::TF_DeleteImportGraphDefOptions(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TFImportGraphDefOptions_TF_DeleteImportGraphDefOptions_mC1B3FD5A5659E969D6B39816D076E32642FBFBC0 (intptr_t ___opts0, const RuntimeMethod* method);
// System.Void TensorFlow.TFImportGraphDefOptions::TF_ImportGraphDefOptionsSetPrefix(System.IntPtr,System.String)
extern "C" IL2CPP_METHOD_ATTR void TFImportGraphDefOptions_TF_ImportGraphDefOptionsSetPrefix_mBA0B0A13192EE76148FAC0E70B880BE66714521B (intptr_t ___opts0, String_t* ___prefix1, const RuntimeMethod* method);
// System.Void TensorFlow.TFOutput::.ctor(TensorFlow.TFOperation,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TFOutput__ctor_m99AB28844DF30D78D8BA74313BB7F59055126005 (TFOutput_t90A65BA929AEDA082D365E6889144EC3EE1FCEF9 * __this, TFOperation_tE9B416AFCE4899E889AEAE8D3D8801DFFD43F615 * ___operation0, int32_t ___index1, const RuntimeMethod* method);
// TensorFlow.TFDataType TensorFlow.TFOutput::TF_OperationOutputType(TensorFlow.TFOutput)
extern "C" IL2CPP_METHOD_ATTR uint32_t TFOutput_TF_OperationOutputType_mF88B85DAFAFC8EB0E38412EAC0AC56FDC2350D44 (TFOutput_t90A65BA929AEDA082D365E6889144EC3EE1FCEF9  ___oper_out0, const RuntimeMethod* method);
// TensorFlow.TFDataType TensorFlow.TFOutput::get_OutputType()
extern "C" IL2CPP_METHOD_ATTR uint32_t TFOutput_get_OutputType_mB22CA28D0082F0AAA13F30D9A1CFB7203F7E28D3 (TFOutput_t90A65BA929AEDA082D365E6889144EC3EE1FCEF9 * __this, const RuntimeMethod* method);
// TensorFlow.TFOperation TensorFlow.TFOutput::get_Operation()
extern "C" IL2CPP_METHOD_ATTR TFOperation_tE9B416AFCE4899E889AEAE8D3D8801DFFD43F615 * TFOutput_get_Operation_m535111E5F74957E00953F713FF861A5831637F86 (TFOutput_t90A65BA929AEDA082D365E6889144EC3EE1FCEF9 * __this, const RuntimeMethod* method);
// System.Int64 System.IntPtr::op_Explicit(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int64_t IntPtr_op_Explicit_m254924E8680FCCF870F18064DC0B114445B09172 (intptr_t p0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865 (String_t* p0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* p1, const RuntimeMethod* method);
// System.String TensorFlow.TFOutput::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* TFOutput_ToString_m25F4F654A3D1D1F6BFC8553F602FA89AFBB80A55 (TFOutput_t90A65BA929AEDA082D365E6889144EC3EE1FCEF9 * __this, const RuntimeMethod* method);
// System.Void TensorFlow.TFSession::set_Graph(TensorFlow.TFGraph)
extern "C" IL2CPP_METHOD_ATTR void TFSession_set_Graph_m04E21E24D7E8C9B3F0910B86547EFF9DD4C47C72 (TFSession_t9F8D2F72C9A312AFE7AA916B198EB5C3430D8A4E * __this, TFGraph_tC5E8FDE19B464B98CF2CE5B1796B54A13F1814ED * ___value0, const RuntimeMethod* method);
// System.IntPtr TensorFlow.TFSessionOptions::TF_NewSessionOptions()
extern "C" IL2CPP_METHOD_ATTR intptr_t TFSessionOptions_TF_NewSessionOptions_m778D9BA8AC2654A2FEFDEA82DA96F7C3400FEAE7 (const RuntimeMethod* method);
// System.IntPtr TensorFlow.TFSession::TF_NewSession(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t TFSession_TF_NewSession_m205F278594DA82DA54FD76835C9537844688FFA7 (intptr_t ___graph0, intptr_t ___opts1, intptr_t ___status2, const RuntimeMethod* method);
// System.Void TensorFlow.TFSessionOptions::TF_DeleteSessionOptions(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TFSessionOptions_TF_DeleteSessionOptions_mABF9ED5D9D96983C1C534CDC5EDE356C5D656197 (intptr_t ___options0, const RuntimeMethod* method);
// System.Void TensorFlow.TFStatus::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TFStatus__ctor_mE7A4D28F26AD208AE216A4A2BD84F23931CBB215 (TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * __this, const RuntimeMethod* method);
// System.Void TensorFlow.TFSession::TF_DeleteSession(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TFSession_TF_DeleteSession_mD74CB777A299A1CA6ACCFE38293A2BAAE40C89D1 (intptr_t ___session0, intptr_t ___status1, const RuntimeMethod* method);
// System.Void TensorFlow.TFSession/Runner::.ctor(TensorFlow.TFSession)
extern "C" IL2CPP_METHOD_ATTR void Runner__ctor_mB20E3D0ECB64603E67512A2A720EF6BB0A17A58B (Runner_t7C96370DF9B42B7517370D620EBF99B30CDED670 * __this, TFSession_t9F8D2F72C9A312AFE7AA916B198EB5C3430D8A4E * ___session0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void TensorFlow.TFSession::TF_SessionRun(System.IntPtr,TensorFlow.LLBuffer*,TensorFlow.TFOutput[],System.IntPtr[],System.Int32,TensorFlow.TFOutput[],System.IntPtr[],System.Int32,System.IntPtr[],System.Int32,TensorFlow.LLBuffer*,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TFSession_TF_SessionRun_mF42FC9853EE6EEDDAF2020FD22481F66710A7DD1 (intptr_t ___session0, LLBuffer_tABF74829C7C3E0735B735F2BCC0ACE992BE0A2B2 * ___run_options1, TFOutputU5BU5D_tA3DB26FE6B7447E959D05237B026B16FC60CE7AB* ___inputs2, IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___input_values3, int32_t ___ninputs4, TFOutputU5BU5D_tA3DB26FE6B7447E959D05237B026B16FC60CE7AB* ___outputs5, IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___output_values6, int32_t ___noutputs7, IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___target_opers8, int32_t ___ntargets9, LLBuffer_tABF74829C7C3E0735B735F2BCC0ACE992BE0A2B2 * ___run_metadata10, intptr_t ___status11, const RuntimeMethod* method);
// System.Void TensorFlow.TFTensor::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TFTensor__ctor_m92C59BC7C169ECC52F8A763E5FCB4ECB6A0D5E6B (TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88 * __this, intptr_t ___handle0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<TensorFlow.TFOutput>::.ctor()
inline void List_1__ctor_m34EEB5BF79669F00ABD87F4AC99582DBA5377240 (List_1_tE516AA0787AF53AD9B46744F27C8DB56C3B8EDA0 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE516AA0787AF53AD9B46744F27C8DB56C3B8EDA0 *, const RuntimeMethod*))List_1__ctor_m34EEB5BF79669F00ABD87F4AC99582DBA5377240_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<TensorFlow.TFTensor>::.ctor()
inline void List_1__ctor_mF85B689AFD4DF20C3412268DBA611875B8F98FA0 (List_1_tCE9E75F2489602CA5FDB9FF7C9F9F1C3BF264D30 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCE9E75F2489602CA5FDB9FF7C9F9F1C3BF264D30 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<TensorFlow.TFOperation>::.ctor()
inline void List_1__ctor_mA7A492999D7643B9A4274E3DC07B336EF53E3D02 (List_1_tEAF690A73881B2E7F4228252014CD0019E2CD185 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEAF690A73881B2E7F4228252014CD0019E2CD185 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<TensorFlow.TFOutput>::Add(!0)
inline void List_1_Add_mB48FA0C1CC4690D7CF7BF8158AAFF1579748D33F (List_1_tE516AA0787AF53AD9B46744F27C8DB56C3B8EDA0 * __this, TFOutput_t90A65BA929AEDA082D365E6889144EC3EE1FCEF9  p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE516AA0787AF53AD9B46744F27C8DB56C3B8EDA0 *, TFOutput_t90A65BA929AEDA082D365E6889144EC3EE1FCEF9 , const RuntimeMethod*))List_1_Add_mB48FA0C1CC4690D7CF7BF8158AAFF1579748D33F_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<TensorFlow.TFTensor>::Add(!0)
inline void List_1_Add_mD272D77CC469569DA3A072C86071F9E8CC63A624 (List_1_tCE9E75F2489602CA5FDB9FF7C9F9F1C3BF264D30 * __this, TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCE9E75F2489602CA5FDB9FF7C9F9F1C3BF264D30 *, TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, p0, method);
}
// !0[] System.Collections.Generic.List`1<TensorFlow.TFOutput>::ToArray()
inline TFOutputU5BU5D_tA3DB26FE6B7447E959D05237B026B16FC60CE7AB* List_1_ToArray_mCAD663E3374DBC330C20E8C374E582247B17B3C5 (List_1_tE516AA0787AF53AD9B46744F27C8DB56C3B8EDA0 * __this, const RuntimeMethod* method)
{
	return ((  TFOutputU5BU5D_tA3DB26FE6B7447E959D05237B026B16FC60CE7AB* (*) (List_1_tE516AA0787AF53AD9B46744F27C8DB56C3B8EDA0 *, const RuntimeMethod*))List_1_ToArray_mCAD663E3374DBC330C20E8C374E582247B17B3C5_gshared)(__this, method);
}
// !0[] System.Collections.Generic.List`1<TensorFlow.TFTensor>::ToArray()
inline TFTensorU5BU5D_t4055F1E4DDA39290AFA5D0F331EE4BBF0F857348* List_1_ToArray_mE8C9EF301CE61275E1D249A3763255C2B083B3C5 (List_1_tCE9E75F2489602CA5FDB9FF7C9F9F1C3BF264D30 * __this, const RuntimeMethod* method)
{
	return ((  TFTensorU5BU5D_t4055F1E4DDA39290AFA5D0F331EE4BBF0F857348* (*) (List_1_tCE9E75F2489602CA5FDB9FF7C9F9F1C3BF264D30 *, const RuntimeMethod*))List_1_ToArray_m801D4DEF3587F60F463F04EEABE5CBE711FE5612_gshared)(__this, method);
}
// !0[] System.Collections.Generic.List`1<TensorFlow.TFOperation>::ToArray()
inline TFOperationU5BU5D_tF7DF87892D59A6FD3437D40E862AE2C332EC9F9B* List_1_ToArray_m407D579B5CB90B6E68243D9228DC191DC888DD45 (List_1_tEAF690A73881B2E7F4228252014CD0019E2CD185 * __this, const RuntimeMethod* method)
{
	return ((  TFOperationU5BU5D_tF7DF87892D59A6FD3437D40E862AE2C332EC9F9B* (*) (List_1_tEAF690A73881B2E7F4228252014CD0019E2CD185 *, const RuntimeMethod*))List_1_ToArray_m801D4DEF3587F60F463F04EEABE5CBE711FE5612_gshared)(__this, method);
}
// TensorFlow.TFTensor[] TensorFlow.TFSession::Run(TensorFlow.TFOutput[],TensorFlow.TFTensor[],TensorFlow.TFOutput[],TensorFlow.TFOperation[],TensorFlow.TFBuffer,TensorFlow.TFBuffer,TensorFlow.TFStatus)
extern "C" IL2CPP_METHOD_ATTR TFTensorU5BU5D_t4055F1E4DDA39290AFA5D0F331EE4BBF0F857348* TFSession_Run_m2C5F37E1C1AF93641208749D4371AAB12697A38C (TFSession_t9F8D2F72C9A312AFE7AA916B198EB5C3430D8A4E * __this, TFOutputU5BU5D_tA3DB26FE6B7447E959D05237B026B16FC60CE7AB* ___inputs0, TFTensorU5BU5D_t4055F1E4DDA39290AFA5D0F331EE4BBF0F857348* ___inputValues1, TFOutputU5BU5D_tA3DB26FE6B7447E959D05237B026B16FC60CE7AB* ___outputs2, TFOperationU5BU5D_tF7DF87892D59A6FD3437D40E862AE2C332EC9F9B* ___targetOpers3, TFBuffer_t107D496FAB131C30F2347AF49395F61269A56AD0 * ___runMetadata4, TFBuffer_t107D496FAB131C30F2347AF49395F61269A56AD0 * ___runOptions5, TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * ___status6, const RuntimeMethod* method);
// System.Void System.Func`2<System.Int64,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mA15EE8A06FB5D3C4082C15C1955C0BCD38AD5A6A (Func_2_tFF25CF48F6D2159F721DDFBF4CF812A795D0D7EE * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tFF25CF48F6D2159F721DDFBF4CF812A795D0D7EE *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mDE4F38E30B1FB2E5B064F09885967EC433B403E4_gshared)(__this, p0, p1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Int64,System.String>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_TisString_t_m346A0E4B72871BA4D88B3A298A3630BD4CF0E419 (RuntimeObject* p0, Func_2_tFF25CF48F6D2159F721DDFBF4CF812A795D0D7EE * p1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tFF25CF48F6D2159F721DDFBF4CF812A795D0D7EE *, const RuntimeMethod*))Enumerable_Select_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_TisRuntimeObject_mA4190B86D0F74B37671F074D9FFAB87C121E89FE_gshared)(p0, p1, method);
}
// System.String System.String::Join(System.String,System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Join_m0BBDD1CE798ED3A25EC32BF491C9B46CB81548B9 (String_t* p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.Void TensorFlow.TFShape/<>c::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m855BC795F555C4F0E220294218CF713EABC81A0D (U3CU3Ec_t151E28BB9FDE9A0C02BA3C2469448CB0304C7CA7 * __this, const RuntimeMethod* method);
// System.String System.Int64::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Int64_ToString_m8210E39355A227AE15DD391EB810AA9B6AB8B26C (int64_t* __this, const RuntimeMethod* method);
// System.IntPtr TensorFlow.TFStatus::TF_NewStatus()
extern "C" IL2CPP_METHOD_ATTR intptr_t TFStatus_TF_NewStatus_mB258DBD7FECF5CD7DAC7C81B1498FEE76D76E637 (const RuntimeMethod* method);
// System.Void TensorFlow.TFStatus::TF_DeleteStatus(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TFStatus_TF_DeleteStatus_m7C94C345C8BA7C812BB8A98164ECA3AA6E4E4BCD (intptr_t ___status0, const RuntimeMethod* method);
// TensorFlow.TFCode TensorFlow.TFStatus::TF_GetCode(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR uint32_t TFStatus_TF_GetCode_mC2289275F6E041B92B0B3E95D2518C4BDC69B460 (intptr_t ___s0, const RuntimeMethod* method);
// System.IntPtr TensorFlow.TFStatus::TF_Message(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t TFStatus_TF_Message_mFE496C33D47F7A76995AC75302A04EEC82763A69 (intptr_t ___s0, const RuntimeMethod* method);
// System.String TensorFlow.NativeBinding::GetStr(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR String_t* NativeBinding_GetStr_mA8D5C8DE250867FA3B79F6DC04FAFDAB101E23B2 (intptr_t ___x0, const RuntimeMethod* method);
// TensorFlow.TFCode TensorFlow.TFStatus::get_StatusCode()
extern "C" IL2CPP_METHOD_ATTR uint32_t TFStatus_get_StatusCode_m94D3D7229A39CB84357C77C463450A2AC0E56F97 (TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * __this, const RuntimeMethod* method);
// System.String TensorFlow.TFStatus::get_StatusMessage()
extern "C" IL2CPP_METHOD_ATTR String_t* TFStatus_get_StatusMessage_m86243F6E581939F04810CE433B76B2ECE0B485AE (TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.Void System.Console::WriteLine(System.String)
extern "C" IL2CPP_METHOD_ATTR void Console_WriteLine_mA5F7E391799514350980A0DE16983383542CA820 (String_t* p0, const RuntimeMethod* method);
// System.Void TensorFlow.TFException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void TFException__ctor_m45D3532ABF6007035C33FB30B60772143C03A5DA (TFException_t7ED9AF8B794AA6A2B22662B556CE78BC47D9093E * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void TensorFlow.TFDisposable::Dispose()
extern "C" IL2CPP_METHOD_ATTR void TFDisposable_Dispose_mC94BDB4773823692201AB60BC57B2D7DD4E13E6F (TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F * __this, const RuntimeMethod* method);
// System.Void TensorFlow.TFTensor::FreeTensorData(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TFTensor_FreeTensorData_m359E94CFB8A95A9FDB1C82B17A8E3D7C03219106 (intptr_t ___data0, intptr_t ___len1, intptr_t ___closure2, const RuntimeMethod* method);
// System.Void TensorFlow.TFTensor::FreeTensorHandle(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TFTensor_FreeTensorHandle_m1D03288399D54E806A169E8BB5D867BB3A634002 (intptr_t ___data0, intptr_t ___len1, intptr_t ___closure2, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::FromIntPtr(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  GCHandle_FromIntPtr_mB803C8ECA1D723F1C51A69F7A7E09E269488D36C (intptr_t p0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.GCHandle::Free()
extern "C" IL2CPP_METHOD_ATTR void GCHandle_Free_m392ECC9B1058E35A0FD5CF21A65F212873FC26F0 (GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * __this, const RuntimeMethod* method);
// System.IntPtr TensorFlow.TFTensor::SetupTensor(TensorFlow.TFDataType,TensorFlow.TFShape,System.Array,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t TFTensor_SetupTensor_mA97E7358E3761FCF9CBBFDBCA5746C51082BFD06 (uint32_t ___dt0, TFShape_t269B735A5AB15B4CF59931FBA2A034443E579565 * ___shape1, RuntimeArray * ___data2, int32_t ___start3, int32_t ___count4, int32_t ___size5, const RuntimeMethod* method);
// System.IntPtr TensorFlow.TFTensor::SetupTensor(TensorFlow.TFDataType,System.Int64[],System.Array,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t TFTensor_SetupTensor_mD2790633B12A4D8FF778FE8414A0BE5182F409E7 (uint32_t ___dt0, Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* ___dims1, RuntimeArray * ___data2, int32_t ___start3, int32_t ___count4, int32_t ___size5, const RuntimeMethod* method);
// System.Int32 System.Array::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t Array_get_Length_m2239B6393651C3F4631D900EFC1B05DBE8F5466D (RuntimeArray * __this, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
extern "C" IL2CPP_METHOD_ATTR GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  GCHandle_Alloc_m30DAF14F75E3A692C594965CE6724E2454DE9A2E (RuntimeObject * p0, int32_t p1, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.GCHandle::AddrOfPinnedObject()
extern "C" IL2CPP_METHOD_ATTR intptr_t GCHandle_AddrOfPinnedObject_mA20090CB8274F28D087A6E8AD36D3230B6741EA5 (GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * __this, const RuntimeMethod* method);
// System.IntPtr System.IntPtr::op_Addition(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Addition_mD815D6B36C7DFA1F89481720D3D46A6484BB9644 (intptr_t p0, int32_t p1, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.GCHandle::ToIntPtr(System.Runtime.InteropServices.GCHandle)
extern "C" IL2CPP_METHOD_ATTR intptr_t GCHandle_ToIntPtr_m8CF7D07846B0C741B04A2A4E5E9B5D505F4B3CCE (GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  p0, const RuntimeMethod* method);
// System.IntPtr TensorFlow.TFTensor::TF_NewTensor(TensorFlow.TFDataType,System.IntPtr,System.Int32,System.IntPtr,System.UIntPtr,TensorFlow.TFTensor/Deallocator,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t TFTensor_TF_NewTensor_m923178648F0D46527D4E25A0AC993A12AF69F45A (uint32_t ___dataType0, intptr_t ___zeroDims1, int32_t ___num_dims2, intptr_t ___data3, uintptr_t ___len4, Deallocator_t872E4BEF7439B64305100113566B7EBB163ABCAE * ___deallocator5, intptr_t ___deallocator_arg6, const RuntimeMethod* method);
// System.IntPtr TensorFlow.TFTensor::TF_NewTensor(TensorFlow.TFDataType,System.Int64[],System.Int32,System.IntPtr,System.UIntPtr,TensorFlow.TFTensor/Deallocator,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t TFTensor_TF_NewTensor_m1955ECCB95F204A86EBB290D5D4D6EC6CE1D5878 (uint32_t ___dataType0, Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* ___dims1, int32_t ___num_dims2, intptr_t ___data3, uintptr_t ___len4, Deallocator_t872E4BEF7439B64305100113566B7EBB163ABCAE * ___deallocator5, intptr_t ___deallocator_arg6, const RuntimeMethod* method);
// System.Void TensorFlow.TFTensor::TF_DeleteTensor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TFTensor_TF_DeleteTensor_m20D6598C4C4D61D2DE11547AAD0902EBC0C3213E (intptr_t ___tensor0, const RuntimeMethod* method);
// TensorFlow.TFDataType TensorFlow.TFTensor::TF_TensorType(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR uint32_t TFTensor_TF_TensorType_mA230B9B499E049BA907E34F37B3E5E310D9D1673 (intptr_t ___tensor0, const RuntimeMethod* method);
// System.Int32 TensorFlow.TFTensor::TF_NumDims(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t TFTensor_TF_NumDims_mAFCC93BE15C796E570459E18DC2C56D805875355 (intptr_t ___tensor0, const RuntimeMethod* method);
// System.IntPtr TensorFlow.TFTensor::TF_TensorData(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t TFTensor_TF_TensorData_mB5B581F30210BC374EBE066B91EF37C65D031B92 (intptr_t ___tensor0, const RuntimeMethod* method);
// System.Int64 TensorFlow.TFTensor::TF_Dim(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int64_t TFTensor_TF_Dim_m4EC774170C9DE6E9A1D91DB3FB48C4374D20F1D7 (intptr_t ___tensor0, int32_t ___dim_index1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  p0, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4 (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * __this, const RuntimeMethod* method);
// System.Void System.Buffer::MemoryCopy(System.Void*,System.Void*,System.Int64,System.Int64)
extern "C" IL2CPP_METHOD_ATTR void Buffer_MemoryCopy_mE82F94A8EE03536392E8BDA81A904F82226E879A (void* p0, void* p1, int64_t p2, int64_t p3, const RuntimeMethod* method);
// System.Void TensorFlow.TFTensor::Copy(System.IntPtr,System.Void*,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TFTensor_Copy_m3515C577146C24822A53C37F8332ADE1C319E90F (intptr_t ___src0, void* ___target1, int32_t ___size2, const RuntimeMethod* method);
// System.Array System.Array::CreateInstance(System.Type,System.Int64[])
extern "C" IL2CPP_METHOD_ATTR RuntimeArray * Array_CreateInstance_m0C393096A042F32063355992913947CBE341E311 (Type_t * p0, Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* p1, const RuntimeMethod* method);
// System.Void System.Array::SetValue(System.Object,System.Int64)
extern "C" IL2CPP_METHOD_ATTR void Array_SetValue_mD1677B396331152BA588E2EEF167F04E832F3849 (RuntimeArray * __this, RuntimeObject * p0, int64_t p1, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mEBAED0FCA8B8CCE7E96492474350BA35D14CF59C (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * __this, String_t* p0, const RuntimeMethod* method);
// System.Object TensorFlow.TFTensor::FetchJaggedArray(System.Type,TensorFlow.TFDataType,System.IntPtr&,System.Int64[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * TFTensor_FetchJaggedArray_m4482BFC2DD2EF569289C79711D5E62CDDCBA9703 (Type_t * ___t0, uint32_t ___dt1, intptr_t* ___data2, Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* ___shape3, int32_t ___level4, const RuntimeMethod* method);
// System.Type System.Object::GetType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Array::SetValue(System.Object,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Array_SetValue_m3C6811CE9C45D1E461404B5D2FBD4EC1A054FDCA (RuntimeArray * __this, RuntimeObject * p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6 (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * __this, String_t* p0, const RuntimeMethod* method);
// System.Void TensorFlow.TFTensor::Copy(System.Array,TensorFlow.TFDataType,System.Int64[],System.Int32[],System.Int32,System.IntPtr&)
extern "C" IL2CPP_METHOD_ATTR void TFTensor_Copy_m1DE567298D80B0EE29619C114691D477725B7DE5 (RuntimeArray * ___target0, uint32_t ___dt1, Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* ___shape2, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___idx3, int32_t ___level4, intptr_t* ___data5, const RuntimeMethod* method);
// System.Void System.Array::SetValue(System.Object,System.Int32[])
extern "C" IL2CPP_METHOD_ATTR void Array_SetValue_m0480E07CF9A65B3C2B903CCBF5BAB94F93CF1380 (RuntimeArray * __this, RuntimeObject * p0, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* p1, const RuntimeMethod* method);
// System.Int32 TensorFlow.TFTensor::get_NumDims()
extern "C" IL2CPP_METHOD_ATTR int32_t TFTensor_get_NumDims_m4C10794F0E4E346F02F4BD1F185906314DB0B73A (TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88 * __this, const RuntimeMethod* method);
// TensorFlow.TFDataType TensorFlow.TFTensor::get_TensorType()
extern "C" IL2CPP_METHOD_ATTR uint32_t TFTensor_get_TensorType_m5321B4DDACD52E9FC8A1A23056DC99A263E6B399 (TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88 * __this, const RuntimeMethod* method);
// System.IntPtr TensorFlow.TFTensor::get_Data()
extern "C" IL2CPP_METHOD_ATTR intptr_t TFTensor_get_Data_m954A7E19A066DF3C0F0DAA59D94491A7A7C6761B (TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88 * __this, const RuntimeMethod* method);
// System.Object TensorFlow.TFTensor::FetchSimple(TensorFlow.TFDataType,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * TFTensor_FetchSimple_m3DFE21914CA93A499A91D88F59A0EF73709C8377 (uint32_t ___dt0, intptr_t ___data1, const RuntimeMethod* method);
// System.Type TensorFlow.TFTensor::TypeFromTensorType(TensorFlow.TFDataType)
extern "C" IL2CPP_METHOD_ATTR Type_t * TFTensor_TypeFromTensorType_m44FC8A993EFD91FD797B34660065CE43213C1BCC (uint32_t ___type0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
extern "C" IL2CPP_METHOD_ATTR bool Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8 (Type_t * p0, Type_t * p1, const RuntimeMethod* method);
// System.Int64[] TensorFlow.TFTensor::get_Shape()
extern "C" IL2CPP_METHOD_ATTR Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* TFTensor_get_Shape_m7F14D085916C451BE8DE0967FC66B0656879F5D0 (TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88 * __this, const RuntimeMethod* method);
// System.Void TensorFlow.TFTensor::FetchFlatArray(System.Array,TensorFlow.TFDataType,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TFTensor_FetchFlatArray_mD1BB9691E8A1FF44CF524C798B021EBE62340E9C (RuntimeArray * ___target0, uint32_t ___dt1, intptr_t ___data2, const RuntimeMethod* method);
// System.Void TensorFlow.TFTensor::FetchMultiDimensionalArray(System.Array,TensorFlow.TFDataType,System.IntPtr,System.Int64[])
extern "C" IL2CPP_METHOD_ATTR void TFTensor_FetchMultiDimensionalArray_mC4FD5C1FC31D9C7BC8AD64A8B65F9EBEEE1B5170 (RuntimeArray * ___target0, uint32_t ___dt1, intptr_t ___data2, Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* ___shape3, const RuntimeMethod* method);
// System.Object TensorFlow.TFTensor::GetValue(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * TFTensor_GetValue_m78B4D81C263F068C80646BEAA761C49393D4ADAD (TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88 * __this, bool ___jagged0, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void StringBuilder__ctor_m53E278FB62B3EAEFAF82890C97219B9B5E2A56C3 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int64)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mB2B8807F92F9A75140DC4E431FC1B054FC5C0AA9 (StringBuilder_t * __this, int64_t p0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Void TensorFlow.TFTensor/Deallocator::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Deallocator__ctor_mFC215FCE1F33D9B0DE160B4AD80F2C927E203729 (Deallocator_t872E4BEF7439B64305100113566B7EBB163ABCAE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TensorFlow.MonoPInvokeCallbackAttribute::.ctor(System.Type)
extern "C" IL2CPP_METHOD_ATTR void MonoPInvokeCallbackAttribute__ctor_mB8AEF1BB11F243BDD24A5D65EAC036C7728213C3 (MonoPInvokeCallbackAttribute_t71D23934CA52D430FCE749ADDC02750E8514BCBB * __this, Type_t * ___t0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0(__this, /*hidden argument*/NULL);
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
// System.String TensorFlow.NativeBinding::GetStr(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR String_t* NativeBinding_GetStr_mA8D5C8DE250867FA3B79F6DC04FAFDAB101E23B2 (intptr_t ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeBinding_GetStr_mA8D5C8DE250867FA3B79F6DC04FAFDAB101E23B2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___x0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		String_t* L_1 = Marshal_PtrToStringAnsi_mA5D5D1AA7C0EB6A96F92454A8AF9C266E2DF5DA5((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_TFBuffer_FreeBlock_m901AFC0836B644BFE3E5EE66E467A995F4B8A182(intptr_t ___data0, intptr_t ___length1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	TFBuffer_FreeBlock_m901AFC0836B644BFE3E5EE66E467A995F4B8A182(___data0, ___length1, NULL);

}
extern "C" LLBuffer_tABF74829C7C3E0735B735F2BCC0ACE992BE0A2B2 * DEFAULT_CALL TF_NewBuffer();
// TensorFlow.LLBuffer* TensorFlow.TFBuffer::TF_NewBuffer()
extern "C" IL2CPP_METHOD_ATTR LLBuffer_tABF74829C7C3E0735B735F2BCC0ACE992BE0A2B2 * TFBuffer_TF_NewBuffer_m29F094A5C25CE60A095607C77051F7678D69E965 (const RuntimeMethod* method)
{
	typedef LLBuffer_tABF74829C7C3E0735B735F2BCC0ACE992BE0A2B2 * (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	LLBuffer_tABF74829C7C3E0735B735F2BCC0ACE992BE0A2B2 * returnValue = reinterpret_cast<PInvokeFunc>(TF_NewBuffer)();

	return returnValue;
}
// System.Void TensorFlow.TFBuffer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TFBuffer__ctor_m00B776872DA3C65BDDFDADC2C38299EFC6C67E97 (TFBuffer_t107D496FAB131C30F2347AF49395F61269A56AD0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFBuffer__ctor_m00B776872DA3C65BDDFDADC2C38299EFC6C67E97_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TFBuffer_t107D496FAB131C30F2347AF49395F61269A56AD0_il2cpp_TypeInfo_var);
		LLBuffer_tABF74829C7C3E0735B735F2BCC0ACE992BE0A2B2 * L_0 = TFBuffer_TF_NewBuffer_m29F094A5C25CE60A095607C77051F7678D69E965(/*hidden argument*/NULL);
		intptr_t L_1 = IntPtr_op_Explicit_m7F0C4B884FFB05BD231154CBDAEBCF1917019C21((void*)(void*)L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F_il2cpp_TypeInfo_var);
		TFDisposable__ctor_mB21000C375CFF831FD674A6FB7534F22BD9859D1(__this, (intptr_t)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TensorFlow.TFBuffer::FreeBlock(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TFBuffer_FreeBlock_m901AFC0836B644BFE3E5EE66E467A995F4B8A182 (intptr_t ___data0, intptr_t ___length1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFBuffer_FreeBlock_m901AFC0836B644BFE3E5EE66E467A995F4B8A182_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___data0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_mF098DF00F5341FDE4747A6F2004D5A0C9B03ED85((intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TensorFlow.TFBuffer::.cctor()
extern "C" IL2CPP_METHOD_ATTR void TFBuffer__cctor_m54043D171ECA2358485C1BB768181E7D981DBAD8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFBuffer__cctor_m54043D171ECA2358485C1BB768181E7D981DBAD8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		BufferReleaseFunc_t09FD865988CE82E2C864AB6C5C67DFA0D6FE1C2B * L_0 = (BufferReleaseFunc_t09FD865988CE82E2C864AB6C5C67DFA0D6FE1C2B *)il2cpp_codegen_object_new(BufferReleaseFunc_t09FD865988CE82E2C864AB6C5C67DFA0D6FE1C2B_il2cpp_TypeInfo_var);
		BufferReleaseFunc__ctor_m13222798F1CDDD3762401D77FED5A6CC59D404A1(L_0, NULL, (intptr_t)((intptr_t)TFBuffer_FreeBlock_m901AFC0836B644BFE3E5EE66E467A995F4B8A182_RuntimeMethod_var), /*hidden argument*/NULL);
		((TFBuffer_t107D496FAB131C30F2347AF49395F61269A56AD0_StaticFields*)il2cpp_codegen_static_fields_for(TFBuffer_t107D496FAB131C30F2347AF49395F61269A56AD0_il2cpp_TypeInfo_var))->set_FreeBlockDelegate_2(L_0);
		BufferReleaseFunc_t09FD865988CE82E2C864AB6C5C67DFA0D6FE1C2B * L_1 = ((TFBuffer_t107D496FAB131C30F2347AF49395F61269A56AD0_StaticFields*)il2cpp_codegen_static_fields_for(TFBuffer_t107D496FAB131C30F2347AF49395F61269A56AD0_il2cpp_TypeInfo_var))->get_FreeBlockDelegate_2();
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		intptr_t L_2 = Marshal_GetFunctionPointerForDelegate_TisBufferReleaseFunc_t09FD865988CE82E2C864AB6C5C67DFA0D6FE1C2B_mC67D47B648575B70C0F4185965655A27FA291637(L_1, /*hidden argument*/Marshal_GetFunctionPointerForDelegate_TisBufferReleaseFunc_t09FD865988CE82E2C864AB6C5C67DFA0D6FE1C2B_mC67D47B648575B70C0F4185965655A27FA291637_RuntimeMethod_var);
		((TFBuffer_t107D496FAB131C30F2347AF49395F61269A56AD0_StaticFields*)il2cpp_codegen_static_fields_for(TFBuffer_t107D496FAB131C30F2347AF49395F61269A56AD0_il2cpp_TypeInfo_var))->set_FreeBufferFunc_1((intptr_t)L_2);
		return;
	}
}
// System.Void TensorFlow.TFBuffer::.ctor(System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TFBuffer__ctor_m9DA438B58610EDB66559D6714949BA55D373E7D2 (TFBuffer_t107D496FAB131C30F2347AF49395F61269A56AD0 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___start1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFBuffer__ctor_m9DA438B58610EDB66559D6714949BA55D373E7D2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LLBuffer_tABF74829C7C3E0735B735F2BCC0ACE992BE0A2B2 * V_0 = NULL;
	{
		TFBuffer__ctor_m00B776872DA3C65BDDFDADC2C38299EFC6C67E97(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___start1;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = ___start1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___buffer0;
		NullCheck(L_2);
		if ((((int32_t)L_1) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length)))))))
		{
			goto IL_001b;
		}
	}

IL_0010:
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_3 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_3, _stringLiteral2B020927D3C6EB407223A1BAA3D6CE3597A3F88D, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, TFBuffer__ctor_m9DA438B58610EDB66559D6714949BA55D373E7D2_RuntimeMethod_var);
	}

IL_001b:
	{
		int32_t L_4 = ___count2;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_5 = ___count2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = ___buffer0;
		NullCheck(L_6);
		int32_t L_7 = ___start1;
		if ((((int32_t)L_5) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length)))), (int32_t)L_7)))))
		{
			goto IL_0032;
		}
	}

IL_0027:
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_8 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_8, _stringLiteralEE9F38E186BA06F57B7B74D7E626B94E13CE2556, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NULL, TFBuffer__ctor_m9DA438B58610EDB66559D6714949BA55D373E7D2_RuntimeMethod_var);
	}

IL_0032:
	{
		LLBuffer_tABF74829C7C3E0735B735F2BCC0ACE992BE0A2B2 * L_9 = TFBuffer_get_LLBuffer_mF90E8DD2AB1F40C22F4854DBEF5BF73616038A40(__this, /*hidden argument*/NULL);
		V_0 = (LLBuffer_tABF74829C7C3E0735B735F2BCC0ACE992BE0A2B2 *)L_9;
		LLBuffer_tABF74829C7C3E0735B735F2BCC0ACE992BE0A2B2 * L_10 = V_0;
		int32_t L_11 = ___count2;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		intptr_t L_12 = Marshal_AllocHGlobal_m3BFCB876D7469108C8676D6DD90D943806C13A58(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		L_10->set_data_0((intptr_t)L_12);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_13 = ___buffer0;
		int32_t L_14 = ___start1;
		LLBuffer_tABF74829C7C3E0735B735F2BCC0ACE992BE0A2B2 * L_15 = V_0;
		NullCheck(L_15);
		intptr_t L_16 = L_15->get_data_0();
		int32_t L_17 = ___count2;
		Marshal_Copy_m0486DFF229946F0F9E6A04DDDF3BC9E5F1609A5A(L_13, L_14, (intptr_t)L_16, L_17, /*hidden argument*/NULL);
		LLBuffer_tABF74829C7C3E0735B735F2BCC0ACE992BE0A2B2 * L_18 = V_0;
		int32_t L_19 = ___count2;
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_20 = UIntPtr_op_Explicit_m2407113DA21D21EABD35525DB0106B20734929E0((((int64_t)((int64_t)L_19))), /*hidden argument*/NULL);
		NullCheck(L_18);
		L_18->set_length_1(L_20);
		LLBuffer_tABF74829C7C3E0735B735F2BCC0ACE992BE0A2B2 * L_21 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(TFBuffer_t107D496FAB131C30F2347AF49395F61269A56AD0_il2cpp_TypeInfo_var);
		intptr_t L_22 = ((TFBuffer_t107D496FAB131C30F2347AF49395F61269A56AD0_StaticFields*)il2cpp_codegen_static_fields_for(TFBuffer_t107D496FAB131C30F2347AF49395F61269A56AD0_il2cpp_TypeInfo_var))->get_FreeBufferFunc_1();
		NullCheck(L_21);
		L_21->set_data_deallocator_2((intptr_t)L_22);
		return;
	}
}
// TensorFlow.LLBuffer* TensorFlow.TFBuffer::get_LLBuffer()
extern "C" IL2CPP_METHOD_ATTR LLBuffer_tABF74829C7C3E0735B735F2BCC0ACE992BE0A2B2 * TFBuffer_get_LLBuffer_mF90E8DD2AB1F40C22F4854DBEF5BF73616038A40 (TFBuffer_t107D496FAB131C30F2347AF49395F61269A56AD0 * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ((TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F *)__this)->get_handle_0();
		void* L_1 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_0, /*hidden argument*/NULL);
		return (LLBuffer_tABF74829C7C3E0735B735F2BCC0ACE992BE0A2B2 *)(L_1);
	}
}
extern "C" void DEFAULT_CALL TF_DeleteBuffer(LLBuffer_tABF74829C7C3E0735B735F2BCC0ACE992BE0A2B2 *);
// System.Void TensorFlow.TFBuffer::TF_DeleteBuffer(TensorFlow.LLBuffer*)
extern "C" IL2CPP_METHOD_ATTR void TFBuffer_TF_DeleteBuffer_m11326357296D90F199C7AF3109FFEE20164210EA (LLBuffer_tABF74829C7C3E0735B735F2BCC0ACE992BE0A2B2 * ___buffer0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (LLBuffer_tABF74829C7C3E0735B735F2BCC0ACE992BE0A2B2 *);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(TF_DeleteBuffer)(___buffer0);

}
// System.Void TensorFlow.TFBuffer::NativeDispose(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TFBuffer_NativeDispose_m29B7067859AC3CAF1357E84ACA6F51CEA8D86F77 (TFBuffer_t107D496FAB131C30F2347AF49395F61269A56AD0 * __this, intptr_t ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFBuffer_NativeDispose_m29B7067859AC3CAF1357E84ACA6F51CEA8D86F77_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___handle0;
		void* L_1 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TFBuffer_t107D496FAB131C30F2347AF49395F61269A56AD0_il2cpp_TypeInfo_var);
		TFBuffer_TF_DeleteBuffer_m11326357296D90F199C7AF3109FFEE20164210EA((LLBuffer_tABF74829C7C3E0735B735F2BCC0ACE992BE0A2B2 *)(LLBuffer_tABF74829C7C3E0735B735F2BCC0ACE992BE0A2B2 *)L_1, /*hidden argument*/NULL);
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
extern "C"  void DelegatePInvokeWrapper_BufferReleaseFunc_t09FD865988CE82E2C864AB6C5C67DFA0D6FE1C2B (BufferReleaseFunc_t09FD865988CE82E2C864AB6C5C67DFA0D6FE1C2B * __this, intptr_t ___data0, intptr_t ___lenght1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___data0, ___lenght1);

}
// System.Void TensorFlow.TFBuffer/BufferReleaseFunc::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void BufferReleaseFunc__ctor_m13222798F1CDDD3762401D77FED5A6CC59D404A1 (BufferReleaseFunc_t09FD865988CE82E2C864AB6C5C67DFA0D6FE1C2B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void TensorFlow.TFBuffer/BufferReleaseFunc::Invoke(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void BufferReleaseFunc_Invoke_m1F8D97E2075121FB36C185B322E75082061B1E13 (BufferReleaseFunc_t09FD865988CE82E2C864AB6C5C67DFA0D6FE1C2B * __this, intptr_t ___data0, intptr_t ___lenght1, const RuntimeMethod* method)
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
				if (___parameterCount == 2)
				{
					// open
					typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___data0, ___lenght1, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, ___lenght1, targetMethod);
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
							typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___data0, ___lenght1, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___data0, ___lenght1);
							else
								GenericVirtActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___data0, ___lenght1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___data0, ___lenght1);
							else
								VirtActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___data0, ___lenght1);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, ___lenght1, targetMethod);
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___data0, ___lenght1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, ___lenght1, targetMethod);
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
						typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___data0, ___lenght1, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___data0, ___lenght1);
						else
							GenericVirtActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___data0, ___lenght1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___data0, ___lenght1);
						else
							VirtActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___data0, ___lenght1);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, ___lenght1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult TensorFlow.TFBuffer/BufferReleaseFunc::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* BufferReleaseFunc_BeginInvoke_mAA62D7A37ED172A6D8D7804A851EB608D62E3386 (BufferReleaseFunc_t09FD865988CE82E2C864AB6C5C67DFA0D6FE1C2B * __this, intptr_t ___data0, intptr_t ___lenght1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BufferReleaseFunc_BeginInvoke_mAA62D7A37ED172A6D8D7804A851EB608D62E3386_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___data0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___lenght1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void TensorFlow.TFBuffer/BufferReleaseFunc::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void BufferReleaseFunc_EndInvoke_mDF9B6ED95AFF5909D9076476D5A7BCAE64C71B29 (BufferReleaseFunc_t09FD865988CE82E2C864AB6C5C67DFA0D6FE1C2B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TensorFlow.TFCore::.cctor()
extern "C" IL2CPP_METHOD_ATTR void TFCore__cctor_m6309234BE2039B560A87CE6FC176E690D98943CD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFCore__cctor_m6309234BE2039B560A87CE6FC176E690D98943CD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((TFCore_tC55DAD41B7D558C24E1C178762C7F0CC68D050AA_StaticFields*)il2cpp_codegen_static_fields_for(TFCore_tC55DAD41B7D558C24E1C178762C7F0CC68D050AA_il2cpp_TypeInfo_var))->set_UseCPU_0((bool)1);
		TFCore_Init_m89C77CEBB85F0D9D649E5AD3B40599913A40012B(/*hidden argument*/NULL);
		return;
	}
}
// System.Void TensorFlow.TFCore::Init()
extern "C" IL2CPP_METHOD_ATTR void TFCore_Init_m89C77CEBB85F0D9D649E5AD3B40599913A40012B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFCore_Init_m89C77CEBB85F0D9D649E5AD3B40599913A40012B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TFCore_tC55DAD41B7D558C24E1C178762C7F0CC68D050AA_il2cpp_TypeInfo_var);
		TFCore_CheckSize_m56E95114417EE95E2BB74FEAE85459EAAAD27D96(/*hidden argument*/NULL);
		return;
	}
}
// System.Void TensorFlow.TFCore::CheckSize()
extern "C" IL2CPP_METHOD_ATTR void TFCore_CheckSize_m56E95114417EE95E2BB74FEAE85459EAAAD27D96 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFCore_CheckSize_m56E95114417EE95E2BB74FEAE85459EAAAD27D96_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = sizeof(intptr_t);
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_il2cpp_TypeInfo_var);
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_1 = Console_get_Error_mE1078EFC5C7C133964838D2A72B8FB9567E4C98A(/*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void System.IO.TextWriter::WriteLine(System.String) */, L_1, _stringLiteralAB965F703A5D18A7DF7E6360FB82F6C3F0EE36CD);
		Exception_t * L_2 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m5FEC89FBFACEEDCEE29CCFD44A85D72FC28EB0D1(L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, TFCore_CheckSize_m56E95114417EE95E2BB74FEAE85459EAAAD27D96_RuntimeMethod_var);
	}

IL_001e:
	{
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TensorFlow.TFDisposable::.cctor()
extern "C" IL2CPP_METHOD_ATTR void TFDisposable__cctor_m6BEB29170822C31ED1B575634D396E280435D885 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFDisposable__cctor_m6BEB29170822C31ED1B575634D396E280435D885_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TFCore_tC55DAD41B7D558C24E1C178762C7F0CC68D050AA_il2cpp_TypeInfo_var);
		TFCore_Init_m89C77CEBB85F0D9D649E5AD3B40599913A40012B(/*hidden argument*/NULL);
		return;
	}
}
// System.Void TensorFlow.TFDisposable::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TFDisposable__ctor_mB21000C375CFF831FD674A6FB7534F22BD9859D1 (TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F * __this, intptr_t ___handle0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___handle0;
		__this->set_handle_0((intptr_t)L_0);
		return;
	}
}
// System.Void TensorFlow.TFDisposable::Dispose()
extern "C" IL2CPP_METHOD_ATTR void TFDisposable_Dispose_mC94BDB4773823692201AB60BC57B2D7DD4E13E6F (TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFDisposable_Dispose_mC94BDB4773823692201AB60BC57B2D7DD4E13E6F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtActionInvoker1< bool >::Invoke(6 /* System.Void TensorFlow.TFDisposable::Dispose(System.Boolean) */, __this, (bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TensorFlow.TFDisposable::Finalize()
extern "C" IL2CPP_METHOD_ATTR void TFDisposable_Finalize_mBA5F7581D0C52B8F7449EE0CC9C43709B833ECE7 (TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker1< bool >::Invoke(6 /* System.Void TensorFlow.TFDisposable::Dispose(System.Boolean) */, __this, (bool)0);
		IL2CPP_LEAVE(0x10, FINALLY_0009);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0009;
	}

FINALLY_0009:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(9)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(9)
	{
		IL2CPP_JUMP_TBL(0x10, IL_0010)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0010:
	{
		return;
	}
}
// System.Void TensorFlow.TFDisposable::Dispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void TFDisposable_Dispose_m2DED82C30456BFB1D26E7D8768B2FD1C993203FB (TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFDisposable_Dispose_m2DED82C30456BFB1D26E7D8768B2FD1C993203FB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___disposing0;
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		intptr_t L_1 = __this->get_handle_0();
		bool L_2 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_1, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		intptr_t L_3 = __this->get_handle_0();
		VirtActionInvoker1< intptr_t >::Invoke(5 /* System.Void TensorFlow.TFDisposable::NativeDispose(System.IntPtr) */, __this, (intptr_t)L_3);
	}

IL_0021:
	{
		__this->set_handle_0((intptr_t)(0));
	}

IL_002c:
	{
		return;
	}
}
// System.Void TensorFlow.TFDisposable::ObjectDisposedException()
extern "C" IL2CPP_METHOD_ATTR void TFDisposable_ObjectDisposedException_m33558ABEC521D5091E71ACA8DB42B3FF89266830 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFDisposable_ObjectDisposedException_m33558ABEC521D5091E71ACA8DB42B3FF89266830_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A * L_0 = (ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A *)il2cpp_codegen_object_new(ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m8B5D23EA08E42BDE6BC5233CC666295F19BBD2F9(L_0, _stringLiteral02CA91E80D9F0B762B9EB552D47A325FE0C207CF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, TFDisposable_ObjectDisposedException_m33558ABEC521D5091E71ACA8DB42B3FF89266830_RuntimeMethod_var);
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
// System.Void TensorFlow.TFException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void TFException__ctor_m45D3532ABF6007035C33FB30B60772143C03A5DA (TFException_t7ED9AF8B794AA6A2B22662B556CE78BC47D9093E * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFException__ctor_m45D3532ABF6007035C33FB30B60772143C03A5DA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(__this, L_0, /*hidden argument*/NULL);
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
extern "C" intptr_t DEFAULT_CALL TF_NewGraph();
// System.IntPtr TensorFlow.TFGraph::TF_NewGraph()
extern "C" IL2CPP_METHOD_ATTR intptr_t TFGraph_TF_NewGraph_m1AF1D8857795C9D37F9DB1EE40E0ABA6D87C2453 (const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(TF_NewGraph)();

	return returnValue;
}
// System.Void TensorFlow.TFGraph::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TFGraph__ctor_m1216CB636F5690DF4EAC5A48DBCAEFBD7A77829B (TFGraph_tC5E8FDE19B464B98CF2CE5B1796B54A13F1814ED * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFGraph__ctor_m1216CB636F5690DF4EAC5A48DBCAEFBD7A77829B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CCurrentNameScopeU3Ek__BackingField_4(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		TFOperationU5BU5D_tF7DF87892D59A6FD3437D40E862AE2C332EC9F9B* L_0 = (TFOperationU5BU5D_tF7DF87892D59A6FD3437D40E862AE2C332EC9F9B*)SZArrayNew(TFOperationU5BU5D_tF7DF87892D59A6FD3437D40E862AE2C332EC9F9B_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_U3CCurrentDependenciesU3Ek__BackingField_5(L_0);
		Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * L_1 = (Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB *)il2cpp_codegen_object_new(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m20A5B6C6950ACF998FE28F7FACEA19C755593E62(L_1, /*hidden argument*/Dictionary_2__ctor_m20A5B6C6950ACF998FE28F7FACEA19C755593E62_RuntimeMethod_var);
		__this->set_values_6(L_1);
		intptr_t L_2 = TFGraph_TF_NewGraph_m1AF1D8857795C9D37F9DB1EE40E0ABA6D87C2453(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F_il2cpp_TypeInfo_var);
		TFDisposable__ctor_mB21000C375CFF831FD674A6FB7534F22BD9859D1(__this, (intptr_t)L_2, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL TF_DeleteGraph(intptr_t);
// System.Void TensorFlow.TFGraph::TF_DeleteGraph(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TFGraph_TF_DeleteGraph_m4F7D265D31797CE215410F4A2778E4DCF9232D5C (intptr_t ___graph0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(TF_DeleteGraph)(___graph0);

}
// System.Void TensorFlow.TFGraph::NativeDispose(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TFGraph_NativeDispose_mD7602BA5CC8F964293D4A69EAC4A0803B6CBF128 (TFGraph_tC5E8FDE19B464B98CF2CE5B1796B54A13F1814ED * __this, intptr_t ___handle0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___handle0;
		TFGraph_TF_DeleteGraph_m4F7D265D31797CE215410F4A2778E4DCF9232D5C((intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL TF_GraphImportGraphDef(intptr_t, LLBuffer_tABF74829C7C3E0735B735F2BCC0ACE992BE0A2B2 *, intptr_t, intptr_t);
// System.Void TensorFlow.TFGraph::TF_GraphImportGraphDef(System.IntPtr,TensorFlow.LLBuffer*,System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TFGraph_TF_GraphImportGraphDef_mF32420F610817F77CF1D3826373E32147348FD7B (intptr_t ___graph0, LLBuffer_tABF74829C7C3E0735B735F2BCC0ACE992BE0A2B2 * ___graph_def1, intptr_t ___options2, intptr_t ___status3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, LLBuffer_tABF74829C7C3E0735B735F2BCC0ACE992BE0A2B2 *, intptr_t, intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(TF_GraphImportGraphDef)(___graph0, ___graph_def1, ___options2, ___status3);

}
// System.Void TensorFlow.TFGraph::Import(TensorFlow.TFBuffer,TensorFlow.TFImportGraphDefOptions,TensorFlow.TFStatus)
extern "C" IL2CPP_METHOD_ATTR void TFGraph_Import_m7B43A8A89D5F493B99BDAE26A8AC78AF49236BAB (TFGraph_tC5E8FDE19B464B98CF2CE5B1796B54A13F1814ED * __this, TFBuffer_t107D496FAB131C30F2347AF49395F61269A56AD0 * ___graphDef0, TFImportGraphDefOptions_t2A12B6EA4EBA8DBE8D63864F9C2D8412C35BEAB5 * ___options1, TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * ___status2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFGraph_Import_m7B43A8A89D5F493B99BDAE26A8AC78AF49236BAB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * V_0 = NULL;
	{
		intptr_t L_0 = ((TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F *)__this)->get_handle_0();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F_il2cpp_TypeInfo_var);
		TFDisposable_ObjectDisposedException_m33558ABEC521D5091E71ACA8DB42B3FF89266830(/*hidden argument*/NULL);
	}

IL_0017:
	{
		TFBuffer_t107D496FAB131C30F2347AF49395F61269A56AD0 * L_2 = ___graphDef0;
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_3 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_3, _stringLiteral19D10885DFB31877855ADB5D464D892790868239, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, TFGraph_Import_m7B43A8A89D5F493B99BDAE26A8AC78AF49236BAB_RuntimeMethod_var);
	}

IL_0025:
	{
		TFImportGraphDefOptions_t2A12B6EA4EBA8DBE8D63864F9C2D8412C35BEAB5 * L_4 = ___options1;
		if (L_4)
		{
			goto IL_0033;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_5 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_5, _stringLiteral513F8DE9259FE7658FE14D1352C54CCF070E911F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, TFGraph_Import_m7B43A8A89D5F493B99BDAE26A8AC78AF49236BAB_RuntimeMethod_var);
	}

IL_0033:
	{
		TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * L_6 = ___status2;
		IL2CPP_RUNTIME_CLASS_INIT(TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48_il2cpp_TypeInfo_var);
		TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * L_7 = TFStatus_Setup_mC3FC03DF1F0D1A1C0FCAB6B1D369F6E86E693552(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		intptr_t L_8 = ((TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F *)__this)->get_handle_0();
		TFBuffer_t107D496FAB131C30F2347AF49395F61269A56AD0 * L_9 = ___graphDef0;
		NullCheck(L_9);
		LLBuffer_tABF74829C7C3E0735B735F2BCC0ACE992BE0A2B2 * L_10 = TFBuffer_get_LLBuffer_mF90E8DD2AB1F40C22F4854DBEF5BF73616038A40(L_9, /*hidden argument*/NULL);
		TFImportGraphDefOptions_t2A12B6EA4EBA8DBE8D63864F9C2D8412C35BEAB5 * L_11 = ___options1;
		NullCheck(L_11);
		intptr_t L_12 = ((TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F *)L_11)->get_handle_0();
		TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * L_13 = V_0;
		NullCheck(L_13);
		intptr_t L_14 = ((TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F *)L_13)->get_handle_0();
		TFGraph_TF_GraphImportGraphDef_mF32420F610817F77CF1D3826373E32147348FD7B((intptr_t)L_8, (LLBuffer_tABF74829C7C3E0735B735F2BCC0ACE992BE0A2B2 *)(LLBuffer_tABF74829C7C3E0735B735F2BCC0ACE992BE0A2B2 *)L_10, (intptr_t)L_12, (intptr_t)L_14, /*hidden argument*/NULL);
		TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * L_15 = V_0;
		TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * L_16 = ___status2;
		NullCheck(L_15);
		TFStatus_CheckMaybeRaise_mB66AA81C3142A7FAD056BA3032D380ADC2C657EB(L_15, L_16, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TensorFlow.TFGraph::Import(System.Byte[],System.String,TensorFlow.TFStatus)
extern "C" IL2CPP_METHOD_ATTR void TFGraph_Import_m270774B0913B38CA851E74FA1CACD435C1FB267D (TFGraph_tC5E8FDE19B464B98CF2CE5B1796B54A13F1814ED * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, String_t* ___prefix1, TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * ___status2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFGraph_Import_m270774B0913B38CA851E74FA1CACD435C1FB267D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TFImportGraphDefOptions_t2A12B6EA4EBA8DBE8D63864F9C2D8412C35BEAB5 * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		intptr_t L_0 = ((TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F *)__this)->get_handle_0();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F_il2cpp_TypeInfo_var);
		TFDisposable_ObjectDisposedException_m33558ABEC521D5091E71ACA8DB42B3FF89266830(/*hidden argument*/NULL);
	}

IL_0017:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___buffer0;
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_3 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_3, _stringLiteralE53C2EA1FE4BD2B78BF4723C7C155A578E020A25, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, TFGraph_Import_m270774B0913B38CA851E74FA1CACD435C1FB267D_RuntimeMethod_var);
	}

IL_0025:
	{
		String_t* L_4 = ___prefix1;
		if (L_4)
		{
			goto IL_0033;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_5 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_5, _stringLiteralB4EBFE34D0FA97F0DD2BB1234FAD8F59805F4E8D, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, TFGraph_Import_m270774B0913B38CA851E74FA1CACD435C1FB267D_RuntimeMethod_var);
	}

IL_0033:
	{
		TFImportGraphDefOptions_t2A12B6EA4EBA8DBE8D63864F9C2D8412C35BEAB5 * L_6 = (TFImportGraphDefOptions_t2A12B6EA4EBA8DBE8D63864F9C2D8412C35BEAB5 *)il2cpp_codegen_object_new(TFImportGraphDefOptions_t2A12B6EA4EBA8DBE8D63864F9C2D8412C35BEAB5_il2cpp_TypeInfo_var);
		TFImportGraphDefOptions__ctor_mE85F3B3ACBEAC1039C7435292E3C8B76D5456CF8(L_6, /*hidden argument*/NULL);
		V_0 = L_6;
	}

IL_0039:
	try
	{ // begin try (depth: 1)
		TFImportGraphDefOptions_t2A12B6EA4EBA8DBE8D63864F9C2D8412C35BEAB5 * L_7 = V_0;
		String_t* L_8 = ___prefix1;
		NullCheck(L_7);
		TFImportGraphDefOptions_SetPrefix_m029E5EE3078522A1C7E13C9E481A9E4C28010C8C(L_7, L_8, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = ___buffer0;
		TFImportGraphDefOptions_t2A12B6EA4EBA8DBE8D63864F9C2D8412C35BEAB5 * L_10 = V_0;
		TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * L_11 = ___status2;
		TFGraph_Import_mDF59538C2007060B84B2B9AAFBCF921942EA6215(__this, L_9, L_10, L_11, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x55, FINALLY_004b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004b;
	}

FINALLY_004b:
	{ // begin finally (depth: 1)
		{
			TFImportGraphDefOptions_t2A12B6EA4EBA8DBE8D63864F9C2D8412C35BEAB5 * L_12 = V_0;
			if (!L_12)
			{
				goto IL_0054;
			}
		}

IL_004e:
		{
			TFImportGraphDefOptions_t2A12B6EA4EBA8DBE8D63864F9C2D8412C35BEAB5 * L_13 = V_0;
			NullCheck(L_13);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_13);
		}

IL_0054:
		{
			IL2CPP_END_FINALLY(75)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(75)
	{
		IL2CPP_JUMP_TBL(0x55, IL_0055)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0055:
	{
		return;
	}
}
// System.Void TensorFlow.TFGraph::Import(System.Byte[],TensorFlow.TFImportGraphDefOptions,TensorFlow.TFStatus)
extern "C" IL2CPP_METHOD_ATTR void TFGraph_Import_mDF59538C2007060B84B2B9AAFBCF921942EA6215 (TFGraph_tC5E8FDE19B464B98CF2CE5B1796B54A13F1814ED * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, TFImportGraphDefOptions_t2A12B6EA4EBA8DBE8D63864F9C2D8412C35BEAB5 * ___options1, TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * ___status2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFGraph_Import_mDF59538C2007060B84B2B9AAFBCF921942EA6215_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * V_0 = NULL;
	TFBuffer_t107D496FAB131C30F2347AF49395F61269A56AD0 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		intptr_t L_0 = ((TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F *)__this)->get_handle_0();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F_il2cpp_TypeInfo_var);
		TFDisposable_ObjectDisposedException_m33558ABEC521D5091E71ACA8DB42B3FF89266830(/*hidden argument*/NULL);
	}

IL_0017:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___buffer0;
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_3 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_3, _stringLiteralE53C2EA1FE4BD2B78BF4723C7C155A578E020A25, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, TFGraph_Import_mDF59538C2007060B84B2B9AAFBCF921942EA6215_RuntimeMethod_var);
	}

IL_0025:
	{
		TFImportGraphDefOptions_t2A12B6EA4EBA8DBE8D63864F9C2D8412C35BEAB5 * L_4 = ___options1;
		if (L_4)
		{
			goto IL_0033;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_5 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_5, _stringLiteral513F8DE9259FE7658FE14D1352C54CCF070E911F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, TFGraph_Import_mDF59538C2007060B84B2B9AAFBCF921942EA6215_RuntimeMethod_var);
	}

IL_0033:
	{
		TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * L_6 = ___status2;
		IL2CPP_RUNTIME_CLASS_INIT(TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48_il2cpp_TypeInfo_var);
		TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * L_7 = TFStatus_Setup_mC3FC03DF1F0D1A1C0FCAB6B1D369F6E86E693552(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = ___buffer0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = ___buffer0;
		NullCheck(L_9);
		TFBuffer_t107D496FAB131C30F2347AF49395F61269A56AD0 * L_10 = (TFBuffer_t107D496FAB131C30F2347AF49395F61269A56AD0 *)il2cpp_codegen_object_new(TFBuffer_t107D496FAB131C30F2347AF49395F61269A56AD0_il2cpp_TypeInfo_var);
		TFBuffer__ctor_m9DA438B58610EDB66559D6714949BA55D373E7D2(L_10, L_8, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))), /*hidden argument*/NULL);
		V_1 = L_10;
	}

IL_0045:
	try
	{ // begin try (depth: 1)
		TFBuffer_t107D496FAB131C30F2347AF49395F61269A56AD0 * L_11 = V_1;
		TFImportGraphDefOptions_t2A12B6EA4EBA8DBE8D63864F9C2D8412C35BEAB5 * L_12 = ___options1;
		TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * L_13 = ___status2;
		TFGraph_Import_m7B43A8A89D5F493B99BDAE26A8AC78AF49236BAB(__this, L_11, L_12, L_13, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x5A, FINALLY_0050);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0050;
	}

FINALLY_0050:
	{ // begin finally (depth: 1)
		{
			TFBuffer_t107D496FAB131C30F2347AF49395F61269A56AD0 * L_14 = V_1;
			if (!L_14)
			{
				goto IL_0059;
			}
		}

IL_0053:
		{
			TFBuffer_t107D496FAB131C30F2347AF49395F61269A56AD0 * L_15 = V_1;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_15);
		}

IL_0059:
		{
			IL2CPP_END_FINALLY(80)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(80)
	{
		IL2CPP_JUMP_TBL(0x5A, IL_005a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005a:
	{
		TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * L_16 = V_0;
		TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * L_17 = V_0;
		NullCheck(L_16);
		TFStatus_CheckMaybeRaise_mB66AA81C3142A7FAD056BA3032D380ADC2C657EB(L_16, L_17, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
extern "C" intptr_t DEFAULT_CALL TF_GraphOperationByName(intptr_t, char*);
// System.IntPtr TensorFlow.TFGraph::TF_GraphOperationByName(System.IntPtr,System.String)
extern "C" IL2CPP_METHOD_ATTR intptr_t TFGraph_TF_GraphOperationByName_m5C5724007697E6DAAE0CC8E74E094C424FED4C23 (intptr_t ___graph0, String_t* ___oper_name1, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);

	// Marshaling of parameter '___oper_name1' to native representation
	char* ____oper_name1_marshaled = NULL;
	____oper_name1_marshaled = il2cpp_codegen_marshal_string(___oper_name1);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(TF_GraphOperationByName)(___graph0, ____oper_name1_marshaled);

	// Marshaling cleanup of parameter '___oper_name1' native representation
	il2cpp_codegen_marshal_free(____oper_name1_marshaled);
	____oper_name1_marshaled = NULL;

	return returnValue;
}
// TensorFlow.TFOperation TensorFlow.TFGraph::get_Item(System.String)
extern "C" IL2CPP_METHOD_ATTR TFOperation_tE9B416AFCE4899E889AEAE8D3D8801DFFD43F615 * TFGraph_get_Item_mB079F37D3B7AF61AB1D244B825BF04D214CC3E92 (TFGraph_tC5E8FDE19B464B98CF2CE5B1796B54A13F1814ED * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFGraph_get_Item_mB079F37D3B7AF61AB1D244B825BF04D214CC3E92_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		intptr_t L_0 = ((TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F *)__this)->get_handle_0();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F_il2cpp_TypeInfo_var);
		TFDisposable_ObjectDisposedException_m33558ABEC521D5091E71ACA8DB42B3FF89266830(/*hidden argument*/NULL);
	}

IL_0017:
	{
		intptr_t L_2 = ((TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F *)__this)->get_handle_0();
		String_t* L_3 = ___name0;
		intptr_t L_4 = TFGraph_TF_GraphOperationByName_m5C5724007697E6DAAE0CC8E74E094C424FED4C23((intptr_t)L_2, L_3, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_4;
		intptr_t L_5 = V_0;
		bool L_6 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_5, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		return (TFOperation_tE9B416AFCE4899E889AEAE8D3D8801DFFD43F615 *)NULL;
	}

IL_0033:
	{
		intptr_t L_7 = V_0;
		TFOperation_tE9B416AFCE4899E889AEAE8D3D8801DFFD43F615 * L_8 = (TFOperation_tE9B416AFCE4899E889AEAE8D3D8801DFFD43F615 *)il2cpp_codegen_object_new(TFOperation_tE9B416AFCE4899E889AEAE8D3D8801DFFD43F615_il2cpp_TypeInfo_var);
		TFOperation__ctor_m953DAA34B67B3164A0AC62AEEB65B6077040F8FF(L_8, __this, (intptr_t)L_7, /*hidden argument*/NULL);
		return L_8;
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
extern "C" intptr_t DEFAULT_CALL TF_NewImportGraphDefOptions();
// System.IntPtr TensorFlow.TFImportGraphDefOptions::TF_NewImportGraphDefOptions()
extern "C" IL2CPP_METHOD_ATTR intptr_t TFImportGraphDefOptions_TF_NewImportGraphDefOptions_mD3CFBFA2E7A3E58718FB60F84F3C0BF1CF7D5E96 (const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(TF_NewImportGraphDefOptions)();

	return returnValue;
}
// System.Void TensorFlow.TFImportGraphDefOptions::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TFImportGraphDefOptions__ctor_mE85F3B3ACBEAC1039C7435292E3C8B76D5456CF8 (TFImportGraphDefOptions_t2A12B6EA4EBA8DBE8D63864F9C2D8412C35BEAB5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFImportGraphDefOptions__ctor_mE85F3B3ACBEAC1039C7435292E3C8B76D5456CF8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = TFImportGraphDefOptions_TF_NewImportGraphDefOptions_mD3CFBFA2E7A3E58718FB60F84F3C0BF1CF7D5E96(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F_il2cpp_TypeInfo_var);
		TFDisposable__ctor_mB21000C375CFF831FD674A6FB7534F22BD9859D1(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL TF_DeleteImportGraphDefOptions(intptr_t);
// System.Void TensorFlow.TFImportGraphDefOptions::TF_DeleteImportGraphDefOptions(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TFImportGraphDefOptions_TF_DeleteImportGraphDefOptions_mC1B3FD5A5659E969D6B39816D076E32642FBFBC0 (intptr_t ___opts0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(TF_DeleteImportGraphDefOptions)(___opts0);

}
// System.Void TensorFlow.TFImportGraphDefOptions::NativeDispose(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TFImportGraphDefOptions_NativeDispose_m515A82D64C0F36F148F3A2CE498AA87AE0B46F51 (TFImportGraphDefOptions_t2A12B6EA4EBA8DBE8D63864F9C2D8412C35BEAB5 * __this, intptr_t ___handle0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___handle0;
		TFImportGraphDefOptions_TF_DeleteImportGraphDefOptions_mC1B3FD5A5659E969D6B39816D076E32642FBFBC0((intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL TF_ImportGraphDefOptionsSetPrefix(intptr_t, char*);
// System.Void TensorFlow.TFImportGraphDefOptions::TF_ImportGraphDefOptionsSetPrefix(System.IntPtr,System.String)
extern "C" IL2CPP_METHOD_ATTR void TFImportGraphDefOptions_TF_ImportGraphDefOptionsSetPrefix_mBA0B0A13192EE76148FAC0E70B880BE66714521B (intptr_t ___opts0, String_t* ___prefix1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);

	// Marshaling of parameter '___prefix1' to native representation
	char* ____prefix1_marshaled = NULL;
	____prefix1_marshaled = il2cpp_codegen_marshal_string(___prefix1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(TF_ImportGraphDefOptionsSetPrefix)(___opts0, ____prefix1_marshaled);

	// Marshaling cleanup of parameter '___prefix1' native representation
	il2cpp_codegen_marshal_free(____prefix1_marshaled);
	____prefix1_marshaled = NULL;

}
// System.Void TensorFlow.TFImportGraphDefOptions::SetPrefix(System.String)
extern "C" IL2CPP_METHOD_ATTR void TFImportGraphDefOptions_SetPrefix_m029E5EE3078522A1C7E13C9E481A9E4C28010C8C (TFImportGraphDefOptions_t2A12B6EA4EBA8DBE8D63864F9C2D8412C35BEAB5 * __this, String_t* ___prefix0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFImportGraphDefOptions_SetPrefix_m029E5EE3078522A1C7E13C9E481A9E4C28010C8C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F *)__this)->get_handle_0();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F_il2cpp_TypeInfo_var);
		TFDisposable_ObjectDisposedException_m33558ABEC521D5091E71ACA8DB42B3FF89266830(/*hidden argument*/NULL);
	}

IL_0017:
	{
		intptr_t L_2 = ((TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F *)__this)->get_handle_0();
		String_t* L_3 = ___prefix0;
		TFImportGraphDefOptions_TF_ImportGraphDefOptionsSetPrefix_mBA0B0A13192EE76148FAC0E70B880BE66714521B((intptr_t)L_2, L_3, /*hidden argument*/NULL);
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
// System.Void TensorFlow.TFOperation::.ctor(TensorFlow.TFGraph,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TFOperation__ctor_m953DAA34B67B3164A0AC62AEEB65B6077040F8FF (TFOperation_tE9B416AFCE4899E889AEAE8D3D8801DFFD43F615 * __this, TFGraph_tC5E8FDE19B464B98CF2CE5B1796B54A13F1814ED * ___graph0, intptr_t ___handle1, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___handle1;
		__this->set_handle_0((intptr_t)L_0);
		TFGraph_tC5E8FDE19B464B98CF2CE5B1796B54A13F1814ED * L_1 = ___graph0;
		__this->set_graph_1(L_1);
		return;
	}
}
// TensorFlow.TFOutput TensorFlow.TFOperation::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR TFOutput_t90A65BA929AEDA082D365E6889144EC3EE1FCEF9  TFOperation_get_Item_m2BA31771894D59D6CFFE246D0448DF215B65777E (TFOperation_tE9B416AFCE4899E889AEAE8D3D8801DFFD43F615 * __this, int32_t ___idx0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___idx0;
		TFOutput_t90A65BA929AEDA082D365E6889144EC3EE1FCEF9  L_1;
		memset(&L_1, 0, sizeof(L_1));
		TFOutput__ctor_m99AB28844DF30D78D8BA74313BB7F59055126005((&L_1), __this, L_0, /*hidden argument*/NULL);
		return L_1;
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
extern "C" uint32_t DEFAULT_CALL TF_OperationOutputType(TFOutput_t90A65BA929AEDA082D365E6889144EC3EE1FCEF9 );
// TensorFlow.TFDataType TensorFlow.TFOutput::TF_OperationOutputType(TensorFlow.TFOutput)
extern "C" IL2CPP_METHOD_ATTR uint32_t TFOutput_TF_OperationOutputType_mF88B85DAFAFC8EB0E38412EAC0AC56FDC2350D44 (TFOutput_t90A65BA929AEDA082D365E6889144EC3EE1FCEF9  ___oper_out0, const RuntimeMethod* method)
{
	typedef uint32_t (DEFAULT_CALL *PInvokeFunc) (TFOutput_t90A65BA929AEDA082D365E6889144EC3EE1FCEF9 );

	// Native function invocation
	uint32_t returnValue = reinterpret_cast<PInvokeFunc>(TF_OperationOutputType)(___oper_out0);

	return returnValue;
}
// TensorFlow.TFDataType TensorFlow.TFOutput::get_OutputType()
extern "C" IL2CPP_METHOD_ATTR uint32_t TFOutput_get_OutputType_mB22CA28D0082F0AAA13F30D9A1CFB7203F7E28D3 (TFOutput_t90A65BA929AEDA082D365E6889144EC3EE1FCEF9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFOutput_get_OutputType_mB22CA28D0082F0AAA13F30D9A1CFB7203F7E28D3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_LLOperation_0();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		uint32_t L_2 = TFOutput_TF_OperationOutputType_mF88B85DAFAFC8EB0E38412EAC0AC56FDC2350D44((*(TFOutput_t90A65BA929AEDA082D365E6889144EC3EE1FCEF9 *)__this), /*hidden argument*/NULL);
		return L_2;
	}

IL_001e:
	{
		return (uint32_t)(0);
	}
}
extern "C"  uint32_t TFOutput_get_OutputType_mB22CA28D0082F0AAA13F30D9A1CFB7203F7E28D3_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TFOutput_t90A65BA929AEDA082D365E6889144EC3EE1FCEF9 * _thisAdjusted = reinterpret_cast<TFOutput_t90A65BA929AEDA082D365E6889144EC3EE1FCEF9 *>(__this + 1);
	return TFOutput_get_OutputType_mB22CA28D0082F0AAA13F30D9A1CFB7203F7E28D3(_thisAdjusted, method);
}
// System.Void TensorFlow.TFOutput::.ctor(TensorFlow.TFOperation,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TFOutput__ctor_m99AB28844DF30D78D8BA74313BB7F59055126005 (TFOutput_t90A65BA929AEDA082D365E6889144EC3EE1FCEF9 * __this, TFOperation_tE9B416AFCE4899E889AEAE8D3D8801DFFD43F615 * ___operation0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFOutput__ctor_m99AB28844DF30D78D8BA74313BB7F59055126005_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TFOperation_tE9B416AFCE4899E889AEAE8D3D8801DFFD43F615 * L_0 = ___operation0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteralFCB60BC535F44919FB7827A8EF8E2D1B9E17347D, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, TFOutput__ctor_m99AB28844DF30D78D8BA74313BB7F59055126005_RuntimeMethod_var);
	}

IL_000e:
	{
		TFOperation_tE9B416AFCE4899E889AEAE8D3D8801DFFD43F615 * L_2 = ___operation0;
		NullCheck(L_2);
		intptr_t L_3 = L_2->get_handle_0();
		__this->set_LLOperation_0((intptr_t)L_3);
		int32_t L_4 = ___index1;
		__this->set_Index_1(L_4);
		return;
	}
}
extern "C"  void TFOutput__ctor_m99AB28844DF30D78D8BA74313BB7F59055126005_AdjustorThunk (RuntimeObject * __this, TFOperation_tE9B416AFCE4899E889AEAE8D3D8801DFFD43F615 * ___operation0, int32_t ___index1, const RuntimeMethod* method)
{
	TFOutput_t90A65BA929AEDA082D365E6889144EC3EE1FCEF9 * _thisAdjusted = reinterpret_cast<TFOutput_t90A65BA929AEDA082D365E6889144EC3EE1FCEF9 *>(__this + 1);
	TFOutput__ctor_m99AB28844DF30D78D8BA74313BB7F59055126005(_thisAdjusted, ___operation0, ___index1, method);
}
// TensorFlow.TFOperation TensorFlow.TFOutput::get_Operation()
extern "C" IL2CPP_METHOD_ATTR TFOperation_tE9B416AFCE4899E889AEAE8D3D8801DFFD43F615 * TFOutput_get_Operation_m535111E5F74957E00953F713FF861A5831637F86 (TFOutput_t90A65BA929AEDA082D365E6889144EC3EE1FCEF9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFOutput_get_Operation_m535111E5F74957E00953F713FF861A5831637F86_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_LLOperation_0();
		TFOperation_tE9B416AFCE4899E889AEAE8D3D8801DFFD43F615 * L_1 = (TFOperation_tE9B416AFCE4899E889AEAE8D3D8801DFFD43F615 *)il2cpp_codegen_object_new(TFOperation_tE9B416AFCE4899E889AEAE8D3D8801DFFD43F615_il2cpp_TypeInfo_var);
		TFOperation__ctor_m953DAA34B67B3164A0AC62AEEB65B6077040F8FF(L_1, (TFGraph_tC5E8FDE19B464B98CF2CE5B1796B54A13F1814ED *)NULL, (intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  TFOperation_tE9B416AFCE4899E889AEAE8D3D8801DFFD43F615 * TFOutput_get_Operation_m535111E5F74957E00953F713FF861A5831637F86_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TFOutput_t90A65BA929AEDA082D365E6889144EC3EE1FCEF9 * _thisAdjusted = reinterpret_cast<TFOutput_t90A65BA929AEDA082D365E6889144EC3EE1FCEF9 *>(__this + 1);
	return TFOutput_get_Operation_m535111E5F74957E00953F713FF861A5831637F86(_thisAdjusted, method);
}
// System.String TensorFlow.TFOutput::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* TFOutput_ToString_m25F4F654A3D1D1F6BFC8553F602FA89AFBB80A55 (TFOutput_t90A65BA929AEDA082D365E6889144EC3EE1FCEF9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFOutput_ToString_m25F4F654A3D1D1F6BFC8553F602FA89AFBB80A55_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		intptr_t L_2 = __this->get_LLOperation_0();
		int64_t L_3 = IntPtr_op_Explicit_m254924E8680FCCF870F18064DC0B114445B09172((intptr_t)L_2, /*hidden argument*/NULL);
		int64_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_5);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = L_1;
		int32_t L_7 = __this->get_Index_1();
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_9);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = L_6;
		TFOperation_tE9B416AFCE4899E889AEAE8D3D8801DFFD43F615 * L_11 = TFOutput_get_Operation_m535111E5F74957E00953F713FF861A5831637F86((TFOutput_t90A65BA929AEDA082D365E6889144EC3EE1FCEF9 *)__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_11);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = L_10;
		uint32_t L_13 = TFOutput_get_OutputType_mB22CA28D0082F0AAA13F30D9A1CFB7203F7E28D3((TFOutput_t90A65BA929AEDA082D365E6889144EC3EE1FCEF9 *)__this, /*hidden argument*/NULL);
		uint32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(TFDataType_tFC283296F243C465F516D878F9C24DB7B88C19F7_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_15);
		String_t* L_16 = String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865(_stringLiteral37C6A8454A5220C69E65A227A52219329D040B24, L_12, /*hidden argument*/NULL);
		return L_16;
	}
}
extern "C"  String_t* TFOutput_ToString_m25F4F654A3D1D1F6BFC8553F602FA89AFBB80A55_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TFOutput_t90A65BA929AEDA082D365E6889144EC3EE1FCEF9 * _thisAdjusted = reinterpret_cast<TFOutput_t90A65BA929AEDA082D365E6889144EC3EE1FCEF9 *>(__this + 1);
	return TFOutput_ToString_m25F4F654A3D1D1F6BFC8553F602FA89AFBB80A55(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" intptr_t DEFAULT_CALL TF_NewSession(intptr_t, intptr_t, intptr_t);
// System.IntPtr TensorFlow.TFSession::TF_NewSession(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t TFSession_TF_NewSession_m205F278594DA82DA54FD76835C9537844688FFA7 (intptr_t ___graph0, intptr_t ___opts1, intptr_t ___status2, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, intptr_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(TF_NewSession)(___graph0, ___opts1, ___status2);

	return returnValue;
}
// System.Void TensorFlow.TFSession::set_Graph(TensorFlow.TFGraph)
extern "C" IL2CPP_METHOD_ATTR void TFSession_set_Graph_m04E21E24D7E8C9B3F0910B86547EFF9DD4C47C72 (TFSession_t9F8D2F72C9A312AFE7AA916B198EB5C3430D8A4E * __this, TFGraph_tC5E8FDE19B464B98CF2CE5B1796B54A13F1814ED * ___value0, const RuntimeMethod* method)
{
	{
		TFGraph_tC5E8FDE19B464B98CF2CE5B1796B54A13F1814ED * L_0 = ___value0;
		__this->set_U3CGraphU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void TensorFlow.TFSession::.ctor(TensorFlow.TFGraph,TensorFlow.TFStatus)
extern "C" IL2CPP_METHOD_ATTR void TFSession__ctor_m79DFFE17B97515D9D53781E26F71363081518E37 (TFSession_t9F8D2F72C9A312AFE7AA916B198EB5C3430D8A4E * __this, TFGraph_tC5E8FDE19B464B98CF2CE5B1796B54A13F1814ED * ___graph0, TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * ___status1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFSession__ctor_m79DFFE17B97515D9D53781E26F71363081518E37_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * V_0 = NULL;
	intptr_t V_1;
	memset(&V_1, 0, sizeof(V_1));
	intptr_t V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		IL2CPP_RUNTIME_CLASS_INIT(TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F_il2cpp_TypeInfo_var);
		TFDisposable__ctor_mB21000C375CFF831FD674A6FB7534F22BD9859D1(__this, (intptr_t)(0), /*hidden argument*/NULL);
		TFGraph_tC5E8FDE19B464B98CF2CE5B1796B54A13F1814ED * L_0 = ___graph0;
		TFSession_set_Graph_m04E21E24D7E8C9B3F0910B86547EFF9DD4C47C72(__this, L_0, /*hidden argument*/NULL);
		TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * L_1 = ___status1;
		IL2CPP_RUNTIME_CLASS_INIT(TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48_il2cpp_TypeInfo_var);
		TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * L_2 = TFStatus_Setup_mC3FC03DF1F0D1A1C0FCAB6B1D369F6E86E693552(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		intptr_t L_3 = TFSessionOptions_TF_NewSessionOptions_m778D9BA8AC2654A2FEFDEA82DA96F7C3400FEAE7(/*hidden argument*/NULL);
		V_1 = (intptr_t)L_3;
		TFGraph_tC5E8FDE19B464B98CF2CE5B1796B54A13F1814ED * L_4 = ___graph0;
		NullCheck(L_4);
		intptr_t L_5 = ((TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F *)L_4)->get_handle_0();
		intptr_t L_6 = V_1;
		TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * L_7 = V_0;
		NullCheck(L_7);
		intptr_t L_8 = ((TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F *)L_7)->get_handle_0();
		intptr_t L_9 = TFSession_TF_NewSession_m205F278594DA82DA54FD76835C9537844688FFA7((intptr_t)L_5, (intptr_t)L_6, (intptr_t)L_8, /*hidden argument*/NULL);
		V_2 = (intptr_t)L_9;
		intptr_t L_10 = V_1;
		TFSessionOptions_TF_DeleteSessionOptions_mABF9ED5D9D96983C1C534CDC5EDE356C5D656197((intptr_t)L_10, /*hidden argument*/NULL);
		TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * L_11 = V_0;
		TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * L_12 = ___status1;
		NullCheck(L_11);
		TFStatus_CheckMaybeRaise_mB66AA81C3142A7FAD056BA3032D380ADC2C657EB(L_11, L_12, (bool)1, /*hidden argument*/NULL);
		intptr_t L_13 = V_2;
		((TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F *)__this)->set_handle_0((intptr_t)L_13);
		return;
	}
}
extern "C" void DEFAULT_CALL TF_DeleteSession(intptr_t, intptr_t);
// System.Void TensorFlow.TFSession::TF_DeleteSession(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TFSession_TF_DeleteSession_mD74CB777A299A1CA6ACCFE38293A2BAAE40C89D1 (intptr_t ___session0, intptr_t ___status1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(TF_DeleteSession)(___session0, ___status1);

}
// System.Void TensorFlow.TFSession::NativeDispose(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TFSession_NativeDispose_m202637F9D8BC5902A83F97B198AA5A613B5803B7 (TFSession_t9F8D2F72C9A312AFE7AA916B198EB5C3430D8A4E * __this, intptr_t ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFSession_NativeDispose_m202637F9D8BC5902A83F97B198AA5A613B5803B7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * L_0 = (TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 *)il2cpp_codegen_object_new(TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48_il2cpp_TypeInfo_var);
		TFStatus__ctor_mE7A4D28F26AD208AE216A4A2BD84F23931CBB215(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
	}

IL_0006:
	try
	{ // begin try (depth: 1)
		intptr_t L_1 = ___handle0;
		TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * L_2 = V_0;
		NullCheck(L_2);
		intptr_t L_3 = ((TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F *)L_2)->get_handle_0();
		TFSession_TF_DeleteSession_mD74CB777A299A1CA6ACCFE38293A2BAAE40C89D1((intptr_t)L_1, (intptr_t)L_3, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x1E, FINALLY_0014);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0014;
	}

FINALLY_0014:
	{ // begin finally (depth: 1)
		{
			TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * L_4 = V_0;
			if (!L_4)
			{
				goto IL_001d;
			}
		}

IL_0017:
		{
			TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * L_5 = V_0;
			NullCheck(L_5);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_5);
		}

IL_001d:
		{
			IL2CPP_END_FINALLY(20)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(20)
	{
		IL2CPP_JUMP_TBL(0x1E, IL_001e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_001e:
	{
		return;
	}
}
extern "C" void DEFAULT_CALL TF_SessionRun(intptr_t, LLBuffer_tABF74829C7C3E0735B735F2BCC0ACE992BE0A2B2 *, TFOutput_t90A65BA929AEDA082D365E6889144EC3EE1FCEF9 *, intptr_t*, int32_t, TFOutput_t90A65BA929AEDA082D365E6889144EC3EE1FCEF9 *, intptr_t*, int32_t, intptr_t*, int32_t, LLBuffer_tABF74829C7C3E0735B735F2BCC0ACE992BE0A2B2 *, intptr_t);
// System.Void TensorFlow.TFSession::TF_SessionRun(System.IntPtr,TensorFlow.LLBuffer*,TensorFlow.TFOutput[],System.IntPtr[],System.Int32,TensorFlow.TFOutput[],System.IntPtr[],System.Int32,System.IntPtr[],System.Int32,TensorFlow.LLBuffer*,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TFSession_TF_SessionRun_mF42FC9853EE6EEDDAF2020FD22481F66710A7DD1 (intptr_t ___session0, LLBuffer_tABF74829C7C3E0735B735F2BCC0ACE992BE0A2B2 * ___run_options1, TFOutputU5BU5D_tA3DB26FE6B7447E959D05237B026B16FC60CE7AB* ___inputs2, IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___input_values3, int32_t ___ninputs4, TFOutputU5BU5D_tA3DB26FE6B7447E959D05237B026B16FC60CE7AB* ___outputs5, IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___output_values6, int32_t ___noutputs7, IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___target_opers8, int32_t ___ntargets9, LLBuffer_tABF74829C7C3E0735B735F2BCC0ACE992BE0A2B2 * ___run_metadata10, intptr_t ___status11, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, LLBuffer_tABF74829C7C3E0735B735F2BCC0ACE992BE0A2B2 *, TFOutput_t90A65BA929AEDA082D365E6889144EC3EE1FCEF9 *, intptr_t*, int32_t, TFOutput_t90A65BA929AEDA082D365E6889144EC3EE1FCEF9 *, intptr_t*, int32_t, intptr_t*, int32_t, LLBuffer_tABF74829C7C3E0735B735F2BCC0ACE992BE0A2B2 *, intptr_t);

	// Marshaling of parameter '___inputs2' to native representation
	TFOutput_t90A65BA929AEDA082D365E6889144EC3EE1FCEF9 * ____inputs2_marshaled = NULL;
	if (___inputs2 != NULL)
	{
		____inputs2_marshaled = reinterpret_cast<TFOutput_t90A65BA929AEDA082D365E6889144EC3EE1FCEF9 *>((___inputs2)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___input_values3' to native representation
	intptr_t* ____input_values3_marshaled = NULL;
	if (___input_values3 != NULL)
	{
		____input_values3_marshaled = reinterpret_cast<intptr_t*>((___input_values3)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___outputs5' to native representation
	TFOutput_t90A65BA929AEDA082D365E6889144EC3EE1FCEF9 * ____outputs5_marshaled = NULL;
	if (___outputs5 != NULL)
	{
		____outputs5_marshaled = reinterpret_cast<TFOutput_t90A65BA929AEDA082D365E6889144EC3EE1FCEF9 *>((___outputs5)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___output_values6' to native representation
	intptr_t* ____output_values6_marshaled = NULL;
	if (___output_values6 != NULL)
	{
		____output_values6_marshaled = reinterpret_cast<intptr_t*>((___output_values6)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___target_opers8' to native representation
	intptr_t* ____target_opers8_marshaled = NULL;
	if (___target_opers8 != NULL)
	{
		____target_opers8_marshaled = reinterpret_cast<intptr_t*>((___target_opers8)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(TF_SessionRun)(___session0, ___run_options1, ____inputs2_marshaled, ____input_values3_marshaled, ___ninputs4, ____outputs5_marshaled, ____output_values6_marshaled, ___noutputs7, ____target_opers8_marshaled, ___ntargets9, ___run_metadata10, ___status11);

}
// TensorFlow.TFSession/Runner TensorFlow.TFSession::GetRunner()
extern "C" IL2CPP_METHOD_ATTR Runner_t7C96370DF9B42B7517370D620EBF99B30CDED670 * TFSession_GetRunner_m9B5B8AF16CAF27893C2CA87DD3A8F1B45D90642B (TFSession_t9F8D2F72C9A312AFE7AA916B198EB5C3430D8A4E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFSession_GetRunner_m9B5B8AF16CAF27893C2CA87DD3A8F1B45D90642B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Runner_t7C96370DF9B42B7517370D620EBF99B30CDED670 * L_0 = (Runner_t7C96370DF9B42B7517370D620EBF99B30CDED670 *)il2cpp_codegen_object_new(Runner_t7C96370DF9B42B7517370D620EBF99B30CDED670_il2cpp_TypeInfo_var);
		Runner__ctor_mB20E3D0ECB64603E67512A2A720EF6BB0A17A58B(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// TensorFlow.TFTensor[] TensorFlow.TFSession::Run(TensorFlow.TFOutput[],TensorFlow.TFTensor[],TensorFlow.TFOutput[],TensorFlow.TFOperation[],TensorFlow.TFBuffer,TensorFlow.TFBuffer,TensorFlow.TFStatus)
extern "C" IL2CPP_METHOD_ATTR TFTensorU5BU5D_t4055F1E4DDA39290AFA5D0F331EE4BBF0F857348* TFSession_Run_m2C5F37E1C1AF93641208749D4371AAB12697A38C (TFSession_t9F8D2F72C9A312AFE7AA916B198EB5C3430D8A4E * __this, TFOutputU5BU5D_tA3DB26FE6B7447E959D05237B026B16FC60CE7AB* ___inputs0, TFTensorU5BU5D_t4055F1E4DDA39290AFA5D0F331EE4BBF0F857348* ___inputValues1, TFOutputU5BU5D_tA3DB26FE6B7447E959D05237B026B16FC60CE7AB* ___outputs2, TFOperationU5BU5D_tF7DF87892D59A6FD3437D40E862AE2C332EC9F9B* ___targetOpers3, TFBuffer_t107D496FAB131C30F2347AF49395F61269A56AD0 * ___runMetadata4, TFBuffer_t107D496FAB131C30F2347AF49395F61269A56AD0 * ___runOptions5, TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * ___status6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFSession_Run_m2C5F37E1C1AF93641208749D4371AAB12697A38C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * V_2 = NULL;
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* V_3 = NULL;
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* V_4 = NULL;
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* V_5 = NULL;
	int32_t V_6 = 0;
	TFTensorU5BU5D_t4055F1E4DDA39290AFA5D0F331EE4BBF0F857348* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	intptr_t G_B19_0;
	memset(&G_B19_0, 0, sizeof(G_B19_0));
	intptr_t G_B18_0;
	memset(&G_B18_0, 0, sizeof(G_B18_0));
	uintptr_t G_B20_0;
	memset(&G_B20_0, 0, sizeof(G_B20_0));
	intptr_t G_B20_1;
	memset(&G_B20_1, 0, sizeof(G_B20_1));
	int32_t G_B22_0 = 0;
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* G_B22_1 = NULL;
	int32_t G_B22_2 = 0;
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* G_B22_3 = NULL;
	TFOutputU5BU5D_tA3DB26FE6B7447E959D05237B026B16FC60CE7AB* G_B22_4 = NULL;
	int32_t G_B22_5 = 0;
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* G_B22_6 = NULL;
	TFOutputU5BU5D_tA3DB26FE6B7447E959D05237B026B16FC60CE7AB* G_B22_7 = NULL;
	uintptr_t G_B22_8;
	memset(&G_B22_8, 0, sizeof(G_B22_8));
	intptr_t G_B22_9;
	memset(&G_B22_9, 0, sizeof(G_B22_9));
	int32_t G_B21_0 = 0;
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* G_B21_1 = NULL;
	int32_t G_B21_2 = 0;
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* G_B21_3 = NULL;
	TFOutputU5BU5D_tA3DB26FE6B7447E959D05237B026B16FC60CE7AB* G_B21_4 = NULL;
	int32_t G_B21_5 = 0;
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* G_B21_6 = NULL;
	TFOutputU5BU5D_tA3DB26FE6B7447E959D05237B026B16FC60CE7AB* G_B21_7 = NULL;
	uintptr_t G_B21_8;
	memset(&G_B21_8, 0, sizeof(G_B21_8));
	intptr_t G_B21_9;
	memset(&G_B21_9, 0, sizeof(G_B21_9));
	uintptr_t G_B23_0;
	memset(&G_B23_0, 0, sizeof(G_B23_0));
	int32_t G_B23_1 = 0;
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* G_B23_2 = NULL;
	int32_t G_B23_3 = 0;
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* G_B23_4 = NULL;
	TFOutputU5BU5D_tA3DB26FE6B7447E959D05237B026B16FC60CE7AB* G_B23_5 = NULL;
	int32_t G_B23_6 = 0;
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* G_B23_7 = NULL;
	TFOutputU5BU5D_tA3DB26FE6B7447E959D05237B026B16FC60CE7AB* G_B23_8 = NULL;
	uintptr_t G_B23_9;
	memset(&G_B23_9, 0, sizeof(G_B23_9));
	intptr_t G_B23_10;
	memset(&G_B23_10, 0, sizeof(G_B23_10));
	{
		intptr_t L_0 = ((TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F *)__this)->get_handle_0();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F_il2cpp_TypeInfo_var);
		TFDisposable_ObjectDisposedException_m33558ABEC521D5091E71ACA8DB42B3FF89266830(/*hidden argument*/NULL);
	}

IL_0017:
	{
		TFOutputU5BU5D_tA3DB26FE6B7447E959D05237B026B16FC60CE7AB* L_2 = ___inputs0;
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_3 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_3, _stringLiteral66B0C73B3BA65150E6E97E6F56DABCCA97AE3122, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, TFSession_Run_m2C5F37E1C1AF93641208749D4371AAB12697A38C_RuntimeMethod_var);
	}

IL_0025:
	{
		TFTensorU5BU5D_t4055F1E4DDA39290AFA5D0F331EE4BBF0F857348* L_4 = ___inputValues1;
		if (L_4)
		{
			goto IL_0033;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_5 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_5, _stringLiteralF26C47CE17D760EE25A2828BC2D47394063482E8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, TFSession_Run_m2C5F37E1C1AF93641208749D4371AAB12697A38C_RuntimeMethod_var);
	}

IL_0033:
	{
		TFOutputU5BU5D_tA3DB26FE6B7447E959D05237B026B16FC60CE7AB* L_6 = ___outputs2;
		if (L_6)
		{
			goto IL_0041;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_7 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_7, _stringLiteralE71003C6B7DD4093CE139AC0C51A6BA38D54A439, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, TFSession_Run_m2C5F37E1C1AF93641208749D4371AAB12697A38C_RuntimeMethod_var);
	}

IL_0041:
	{
		TFOutputU5BU5D_tA3DB26FE6B7447E959D05237B026B16FC60CE7AB* L_8 = ___inputs0;
		NullCheck(L_8);
		V_0 = (((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length))));
		int32_t L_9 = V_0;
		TFTensorU5BU5D_t4055F1E4DDA39290AFA5D0F331EE4BBF0F857348* L_10 = ___inputValues1;
		NullCheck(L_10);
		if ((((int32_t)L_9) == ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))))))
		{
			goto IL_005b;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_11 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_11, _stringLiteral0025C5B18BEAD8250368714610B35B1B4AD12828, _stringLiteral66B0C73B3BA65150E6E97E6F56DABCCA97AE3122, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, NULL, TFSession_Run_m2C5F37E1C1AF93641208749D4371AAB12697A38C_RuntimeMethod_var);
	}

IL_005b:
	{
		TFOutputU5BU5D_tA3DB26FE6B7447E959D05237B026B16FC60CE7AB* L_12 = ___outputs2;
		NullCheck(L_12);
		V_1 = (((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length))));
		TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * L_13 = ___status6;
		IL2CPP_RUNTIME_CLASS_INIT(TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48_il2cpp_TypeInfo_var);
		TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * L_14 = TFStatus_Setup_mC3FC03DF1F0D1A1C0FCAB6B1D369F6E86E693552(L_13, /*hidden argument*/NULL);
		V_2 = L_14;
		int32_t L_15 = V_0;
		IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* L_16 = (IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD*)SZArrayNew(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD_il2cpp_TypeInfo_var, (uint32_t)L_15);
		V_3 = L_16;
		V_8 = 0;
		goto IL_0086;
	}

IL_0073:
	{
		IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* L_17 = V_3;
		int32_t L_18 = V_8;
		TFTensorU5BU5D_t4055F1E4DDA39290AFA5D0F331EE4BBF0F857348* L_19 = ___inputValues1;
		int32_t L_20 = V_8;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88 * L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		intptr_t L_23 = ((TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F *)L_22)->get_handle_0();
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (intptr_t)L_23);
		int32_t L_24 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_0086:
	{
		int32_t L_25 = V_8;
		int32_t L_26 = V_0;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0073;
		}
	}
	{
		TFOutputU5BU5D_tA3DB26FE6B7447E959D05237B026B16FC60CE7AB* L_27 = ___outputs2;
		NullCheck(L_27);
		IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* L_28 = (IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD*)SZArrayNew(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_27)->max_length)))));
		V_4 = L_28;
		V_5 = (IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD*)NULL;
		V_6 = 0;
		TFOperationU5BU5D_tF7DF87892D59A6FD3437D40E862AE2C332EC9F9B* L_29 = ___targetOpers3;
		if (!L_29)
		{
			goto IL_00ce;
		}
	}
	{
		TFOperationU5BU5D_tF7DF87892D59A6FD3437D40E862AE2C332EC9F9B* L_30 = ___targetOpers3;
		NullCheck(L_30);
		V_6 = (((int32_t)((int32_t)(((RuntimeArray *)L_30)->max_length))));
		int32_t L_31 = V_6;
		IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* L_32 = (IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD*)SZArrayNew(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD_il2cpp_TypeInfo_var, (uint32_t)L_31);
		V_5 = L_32;
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b3:
	{
		IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* L_33 = V_5;
		int32_t L_34 = V_9;
		TFOperationU5BU5D_tF7DF87892D59A6FD3437D40E862AE2C332EC9F9B* L_35 = ___targetOpers3;
		int32_t L_36 = V_9;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		TFOperation_tE9B416AFCE4899E889AEAE8D3D8801DFFD43F615 * L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		NullCheck(L_38);
		intptr_t L_39 = L_38->get_handle_0();
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (intptr_t)L_39);
		int32_t L_40 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
	}

IL_00c8:
	{
		int32_t L_41 = V_9;
		int32_t L_42 = V_6;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_00b3;
		}
	}

IL_00ce:
	{
		intptr_t L_43 = ((TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F *)__this)->get_handle_0();
		TFBuffer_t107D496FAB131C30F2347AF49395F61269A56AD0 * L_44 = ___runOptions5;
		G_B18_0 = L_43;
		if (!L_44)
		{
			G_B19_0 = L_43;
			goto IL_00e1;
		}
	}
	{
		TFBuffer_t107D496FAB131C30F2347AF49395F61269A56AD0 * L_45 = ___runOptions5;
		NullCheck(L_45);
		LLBuffer_tABF74829C7C3E0735B735F2BCC0ACE992BE0A2B2 * L_46 = TFBuffer_get_LLBuffer_mF90E8DD2AB1F40C22F4854DBEF5BF73616038A40(L_45, /*hidden argument*/NULL);
		G_B20_0 = ((uintptr_t)(intptr_t)(L_46));
		G_B20_1 = G_B18_0;
		goto IL_00e3;
	}

IL_00e1:
	{
		G_B20_0 = (((uintptr_t)0));
		G_B20_1 = G_B19_0;
	}

IL_00e3:
	{
		TFOutputU5BU5D_tA3DB26FE6B7447E959D05237B026B16FC60CE7AB* L_47 = ___inputs0;
		IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* L_48 = V_3;
		int32_t L_49 = V_0;
		TFOutputU5BU5D_tA3DB26FE6B7447E959D05237B026B16FC60CE7AB* L_50 = ___outputs2;
		IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* L_51 = V_4;
		int32_t L_52 = V_1;
		IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* L_53 = V_5;
		int32_t L_54 = V_6;
		TFBuffer_t107D496FAB131C30F2347AF49395F61269A56AD0 * L_55 = ___runMetadata4;
		G_B21_0 = L_54;
		G_B21_1 = L_53;
		G_B21_2 = L_52;
		G_B21_3 = L_51;
		G_B21_4 = L_50;
		G_B21_5 = L_49;
		G_B21_6 = L_48;
		G_B21_7 = L_47;
		G_B21_8 = G_B20_0;
		G_B21_9 = G_B20_1;
		if (!L_55)
		{
			G_B22_0 = L_54;
			G_B22_1 = L_53;
			G_B22_2 = L_52;
			G_B22_3 = L_51;
			G_B22_4 = L_50;
			G_B22_5 = L_49;
			G_B22_6 = L_48;
			G_B22_7 = L_47;
			G_B22_8 = G_B20_0;
			G_B22_9 = G_B20_1;
			goto IL_00fb;
		}
	}
	{
		TFBuffer_t107D496FAB131C30F2347AF49395F61269A56AD0 * L_56 = ___runMetadata4;
		NullCheck(L_56);
		LLBuffer_tABF74829C7C3E0735B735F2BCC0ACE992BE0A2B2 * L_57 = TFBuffer_get_LLBuffer_mF90E8DD2AB1F40C22F4854DBEF5BF73616038A40(L_56, /*hidden argument*/NULL);
		G_B23_0 = ((uintptr_t)(intptr_t)(L_57));
		G_B23_1 = G_B21_0;
		G_B23_2 = G_B21_1;
		G_B23_3 = G_B21_2;
		G_B23_4 = G_B21_3;
		G_B23_5 = G_B21_4;
		G_B23_6 = G_B21_5;
		G_B23_7 = G_B21_6;
		G_B23_8 = G_B21_7;
		G_B23_9 = G_B21_8;
		G_B23_10 = G_B21_9;
		goto IL_00fd;
	}

IL_00fb:
	{
		G_B23_0 = (((uintptr_t)0));
		G_B23_1 = G_B22_0;
		G_B23_2 = G_B22_1;
		G_B23_3 = G_B22_2;
		G_B23_4 = G_B22_3;
		G_B23_5 = G_B22_4;
		G_B23_6 = G_B22_5;
		G_B23_7 = G_B22_6;
		G_B23_8 = G_B22_7;
		G_B23_9 = G_B22_8;
		G_B23_10 = G_B22_9;
	}

IL_00fd:
	{
		TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * L_58 = V_2;
		NullCheck(L_58);
		intptr_t L_59 = ((TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F *)L_58)->get_handle_0();
		TFSession_TF_SessionRun_mF42FC9853EE6EEDDAF2020FD22481F66710A7DD1((intptr_t)G_B23_10, (LLBuffer_tABF74829C7C3E0735B735F2BCC0ACE992BE0A2B2 *)(LLBuffer_tABF74829C7C3E0735B735F2BCC0ACE992BE0A2B2 *)G_B23_9, G_B23_8, G_B23_7, G_B23_6, G_B23_5, G_B23_4, G_B23_3, G_B23_2, G_B23_1, (LLBuffer_tABF74829C7C3E0735B735F2BCC0ACE992BE0A2B2 *)(LLBuffer_tABF74829C7C3E0735B735F2BCC0ACE992BE0A2B2 *)G_B23_0, (intptr_t)L_59, /*hidden argument*/NULL);
		TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * L_60 = V_2;
		TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * L_61 = ___status6;
		NullCheck(L_60);
		TFStatus_CheckMaybeRaise_mB66AA81C3142A7FAD056BA3032D380ADC2C657EB(L_60, L_61, (bool)1, /*hidden argument*/NULL);
		int32_t L_62 = V_1;
		TFTensorU5BU5D_t4055F1E4DDA39290AFA5D0F331EE4BBF0F857348* L_63 = (TFTensorU5BU5D_t4055F1E4DDA39290AFA5D0F331EE4BBF0F857348*)SZArrayNew(TFTensorU5BU5D_t4055F1E4DDA39290AFA5D0F331EE4BBF0F857348_il2cpp_TypeInfo_var, (uint32_t)L_62);
		V_7 = L_63;
		V_10 = 0;
		goto IL_0134;
	}

IL_011f:
	{
		TFTensorU5BU5D_t4055F1E4DDA39290AFA5D0F331EE4BBF0F857348* L_64 = V_7;
		int32_t L_65 = V_10;
		IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* L_66 = V_4;
		int32_t L_67 = V_10;
		NullCheck(L_66);
		int32_t L_68 = L_67;
		intptr_t L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88 * L_70 = (TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88 *)il2cpp_codegen_object_new(TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88_il2cpp_TypeInfo_var);
		TFTensor__ctor_m92C59BC7C169ECC52F8A763E5FCB4ECB6A0D5E6B(L_70, (intptr_t)L_69, /*hidden argument*/NULL);
		NullCheck(L_64);
		ArrayElementTypeCheck (L_64, L_70);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(L_65), (TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88 *)L_70);
		int32_t L_71 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_71, (int32_t)1));
	}

IL_0134:
	{
		int32_t L_72 = V_10;
		int32_t L_73 = V_1;
		if ((((int32_t)L_72) < ((int32_t)L_73)))
		{
			goto IL_011f;
		}
	}
	{
		TFTensorU5BU5D_t4055F1E4DDA39290AFA5D0F331EE4BBF0F857348* L_74 = V_7;
		return L_74;
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
// System.Void TensorFlow.TFSession/Runner::.ctor(TensorFlow.TFSession)
extern "C" IL2CPP_METHOD_ATTR void Runner__ctor_mB20E3D0ECB64603E67512A2A720EF6BB0A17A58B (Runner_t7C96370DF9B42B7517370D620EBF99B30CDED670 * __this, TFSession_t9F8D2F72C9A312AFE7AA916B198EB5C3430D8A4E * ___session0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Runner__ctor_mB20E3D0ECB64603E67512A2A720EF6BB0A17A58B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tE516AA0787AF53AD9B46744F27C8DB56C3B8EDA0 * L_0 = (List_1_tE516AA0787AF53AD9B46744F27C8DB56C3B8EDA0 *)il2cpp_codegen_object_new(List_1_tE516AA0787AF53AD9B46744F27C8DB56C3B8EDA0_il2cpp_TypeInfo_var);
		List_1__ctor_m34EEB5BF79669F00ABD87F4AC99582DBA5377240(L_0, /*hidden argument*/List_1__ctor_m34EEB5BF79669F00ABD87F4AC99582DBA5377240_RuntimeMethod_var);
		__this->set_inputs_0(L_0);
		List_1_tE516AA0787AF53AD9B46744F27C8DB56C3B8EDA0 * L_1 = (List_1_tE516AA0787AF53AD9B46744F27C8DB56C3B8EDA0 *)il2cpp_codegen_object_new(List_1_tE516AA0787AF53AD9B46744F27C8DB56C3B8EDA0_il2cpp_TypeInfo_var);
		List_1__ctor_m34EEB5BF79669F00ABD87F4AC99582DBA5377240(L_1, /*hidden argument*/List_1__ctor_m34EEB5BF79669F00ABD87F4AC99582DBA5377240_RuntimeMethod_var);
		__this->set_outputs_1(L_1);
		List_1_tCE9E75F2489602CA5FDB9FF7C9F9F1C3BF264D30 * L_2 = (List_1_tCE9E75F2489602CA5FDB9FF7C9F9F1C3BF264D30 *)il2cpp_codegen_object_new(List_1_tCE9E75F2489602CA5FDB9FF7C9F9F1C3BF264D30_il2cpp_TypeInfo_var);
		List_1__ctor_mF85B689AFD4DF20C3412268DBA611875B8F98FA0(L_2, /*hidden argument*/List_1__ctor_mF85B689AFD4DF20C3412268DBA611875B8F98FA0_RuntimeMethod_var);
		__this->set_inputValues_2(L_2);
		List_1_tEAF690A73881B2E7F4228252014CD0019E2CD185 * L_3 = (List_1_tEAF690A73881B2E7F4228252014CD0019E2CD185 *)il2cpp_codegen_object_new(List_1_tEAF690A73881B2E7F4228252014CD0019E2CD185_il2cpp_TypeInfo_var);
		List_1__ctor_mA7A492999D7643B9A4274E3DC07B336EF53E3D02(L_3, /*hidden argument*/List_1__ctor_mA7A492999D7643B9A4274E3DC07B336EF53E3D02_RuntimeMethod_var);
		__this->set_targets_3(L_3);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		TFSession_t9F8D2F72C9A312AFE7AA916B198EB5C3430D8A4E * L_4 = ___session0;
		__this->set_session_4(L_4);
		return;
	}
}
// TensorFlow.TFSession/Runner TensorFlow.TFSession/Runner::AddInput(TensorFlow.TFOutput,TensorFlow.TFTensor)
extern "C" IL2CPP_METHOD_ATTR Runner_t7C96370DF9B42B7517370D620EBF99B30CDED670 * Runner_AddInput_m345A4A23D91EF20AA7A6950648EDCBD8272E59C5 (Runner_t7C96370DF9B42B7517370D620EBF99B30CDED670 * __this, TFOutput_t90A65BA929AEDA082D365E6889144EC3EE1FCEF9  ___input0, TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88 * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Runner_AddInput_m345A4A23D91EF20AA7A6950648EDCBD8272E59C5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88 * L_0 = ___value1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteralF32B67C7E26342AF42EFABC674D441DCA0A281C5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Runner_AddInput_m345A4A23D91EF20AA7A6950648EDCBD8272E59C5_RuntimeMethod_var);
	}

IL_000e:
	{
		List_1_tE516AA0787AF53AD9B46744F27C8DB56C3B8EDA0 * L_2 = __this->get_inputs_0();
		TFOutput_t90A65BA929AEDA082D365E6889144EC3EE1FCEF9  L_3 = ___input0;
		NullCheck(L_2);
		List_1_Add_mB48FA0C1CC4690D7CF7BF8158AAFF1579748D33F(L_2, L_3, /*hidden argument*/List_1_Add_mB48FA0C1CC4690D7CF7BF8158AAFF1579748D33F_RuntimeMethod_var);
		List_1_tCE9E75F2489602CA5FDB9FF7C9F9F1C3BF264D30 * L_4 = __this->get_inputValues_2();
		TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88 * L_5 = ___value1;
		NullCheck(L_4);
		List_1_Add_mD272D77CC469569DA3A072C86071F9E8CC63A624(L_4, L_5, /*hidden argument*/List_1_Add_mD272D77CC469569DA3A072C86071F9E8CC63A624_RuntimeMethod_var);
		return __this;
	}
}
// TensorFlow.TFSession/Runner TensorFlow.TFSession/Runner::Fetch(TensorFlow.TFOutput)
extern "C" IL2CPP_METHOD_ATTR Runner_t7C96370DF9B42B7517370D620EBF99B30CDED670 * Runner_Fetch_mBD65AE4B3034F152ED6288E470F95863C1596B3E (Runner_t7C96370DF9B42B7517370D620EBF99B30CDED670 * __this, TFOutput_t90A65BA929AEDA082D365E6889144EC3EE1FCEF9  ___output0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Runner_Fetch_mBD65AE4B3034F152ED6288E470F95863C1596B3E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tE516AA0787AF53AD9B46744F27C8DB56C3B8EDA0 * L_0 = __this->get_outputs_1();
		TFOutput_t90A65BA929AEDA082D365E6889144EC3EE1FCEF9  L_1 = ___output0;
		NullCheck(L_0);
		List_1_Add_mB48FA0C1CC4690D7CF7BF8158AAFF1579748D33F(L_0, L_1, /*hidden argument*/List_1_Add_mB48FA0C1CC4690D7CF7BF8158AAFF1579748D33F_RuntimeMethod_var);
		return __this;
	}
}
// TensorFlow.TFTensor[] TensorFlow.TFSession/Runner::Run(TensorFlow.TFStatus)
extern "C" IL2CPP_METHOD_ATTR TFTensorU5BU5D_t4055F1E4DDA39290AFA5D0F331EE4BBF0F857348* Runner_Run_m77E96F7556E67B33263B2AB01A3ED81C6545F478 (Runner_t7C96370DF9B42B7517370D620EBF99B30CDED670 * __this, TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * ___status0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Runner_Run_m77E96F7556E67B33263B2AB01A3ED81C6545F478_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TFSession_t9F8D2F72C9A312AFE7AA916B198EB5C3430D8A4E * L_0 = __this->get_session_4();
		List_1_tE516AA0787AF53AD9B46744F27C8DB56C3B8EDA0 * L_1 = __this->get_inputs_0();
		NullCheck(L_1);
		TFOutputU5BU5D_tA3DB26FE6B7447E959D05237B026B16FC60CE7AB* L_2 = List_1_ToArray_mCAD663E3374DBC330C20E8C374E582247B17B3C5(L_1, /*hidden argument*/List_1_ToArray_mCAD663E3374DBC330C20E8C374E582247B17B3C5_RuntimeMethod_var);
		List_1_tCE9E75F2489602CA5FDB9FF7C9F9F1C3BF264D30 * L_3 = __this->get_inputValues_2();
		NullCheck(L_3);
		TFTensorU5BU5D_t4055F1E4DDA39290AFA5D0F331EE4BBF0F857348* L_4 = List_1_ToArray_mE8C9EF301CE61275E1D249A3763255C2B083B3C5(L_3, /*hidden argument*/List_1_ToArray_mE8C9EF301CE61275E1D249A3763255C2B083B3C5_RuntimeMethod_var);
		List_1_tE516AA0787AF53AD9B46744F27C8DB56C3B8EDA0 * L_5 = __this->get_outputs_1();
		NullCheck(L_5);
		TFOutputU5BU5D_tA3DB26FE6B7447E959D05237B026B16FC60CE7AB* L_6 = List_1_ToArray_mCAD663E3374DBC330C20E8C374E582247B17B3C5(L_5, /*hidden argument*/List_1_ToArray_mCAD663E3374DBC330C20E8C374E582247B17B3C5_RuntimeMethod_var);
		List_1_tEAF690A73881B2E7F4228252014CD0019E2CD185 * L_7 = __this->get_targets_3();
		NullCheck(L_7);
		TFOperationU5BU5D_tF7DF87892D59A6FD3437D40E862AE2C332EC9F9B* L_8 = List_1_ToArray_m407D579B5CB90B6E68243D9228DC191DC888DD45(L_7, /*hidden argument*/List_1_ToArray_m407D579B5CB90B6E68243D9228DC191DC888DD45_RuntimeMethod_var);
		TFBuffer_t107D496FAB131C30F2347AF49395F61269A56AD0 * L_9 = __this->get_RunMetadata_5();
		TFBuffer_t107D496FAB131C30F2347AF49395F61269A56AD0 * L_10 = __this->get_RunOptions_6();
		TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * L_11 = ___status0;
		NullCheck(L_0);
		TFTensorU5BU5D_t4055F1E4DDA39290AFA5D0F331EE4BBF0F857348* L_12 = TFSession_Run_m2C5F37E1C1AF93641208749D4371AAB12697A38C(L_0, L_2, L_4, L_6, L_8, L_9, L_10, L_11, /*hidden argument*/NULL);
		return L_12;
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
extern "C" intptr_t DEFAULT_CALL TF_NewSessionOptions();
// System.IntPtr TensorFlow.TFSessionOptions::TF_NewSessionOptions()
extern "C" IL2CPP_METHOD_ATTR intptr_t TFSessionOptions_TF_NewSessionOptions_m778D9BA8AC2654A2FEFDEA82DA96F7C3400FEAE7 (const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(TF_NewSessionOptions)();

	return returnValue;
}
extern "C" void DEFAULT_CALL TF_DeleteSessionOptions(intptr_t);
// System.Void TensorFlow.TFSessionOptions::TF_DeleteSessionOptions(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TFSessionOptions_TF_DeleteSessionOptions_mABF9ED5D9D96983C1C534CDC5EDE356C5D656197 (intptr_t ___options0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(TF_DeleteSessionOptions)(___options0);

}
// System.Void TensorFlow.TFSessionOptions::NativeDispose(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TFSessionOptions_NativeDispose_m01F3AC2F77191F602DB9A31D2148ABB4AC3FFB5F (TFSessionOptions_t2B25E6648DC2CB98BBAFB84375EFCB5A364A45AF * __this, intptr_t ___handle0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___handle0;
		TFSessionOptions_TF_DeleteSessionOptions_mABF9ED5D9D96983C1C534CDC5EDE356C5D656197((intptr_t)L_0, /*hidden argument*/NULL);
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
// System.Void TensorFlow.TFShape::.ctor(System.Int64[])
extern "C" IL2CPP_METHOD_ATTR void TFShape__ctor_m37FEE294F67A292B4504A32B6ECA1F48D87D6C47 (TFShape_t269B735A5AB15B4CF59931FBA2A034443E579565 * __this, Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* ___args0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_0 = ___args0;
		__this->set_dims_0(L_0);
		return;
	}
}
// System.String TensorFlow.TFShape::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* TFShape_ToString_m3A3F26DFAB7D96CCC20F5A1338E94407266B0F4E (TFShape_t269B735A5AB15B4CF59931FBA2A034443E579565 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFShape_ToString_m3A3F26DFAB7D96CCC20F5A1338E94407266B0F4E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tFF25CF48F6D2159F721DDFBF4CF812A795D0D7EE * G_B4_0 = NULL;
	Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* G_B4_1 = NULL;
	String_t* G_B4_2 = NULL;
	String_t* G_B4_3 = NULL;
	Func_2_tFF25CF48F6D2159F721DDFBF4CF812A795D0D7EE * G_B3_0 = NULL;
	Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	String_t* G_B3_3 = NULL;
	{
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_0 = __this->get_dims_0();
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		return _stringLiteral50D8B4A941C26B89482C94AB324B5A274F9CED66;
	}

IL_000e:
	{
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_1 = __this->get_dims_0();
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t151E28BB9FDE9A0C02BA3C2469448CB0304C7CA7_il2cpp_TypeInfo_var);
		Func_2_tFF25CF48F6D2159F721DDFBF4CF812A795D0D7EE * L_2 = ((U3CU3Ec_t151E28BB9FDE9A0C02BA3C2469448CB0304C7CA7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t151E28BB9FDE9A0C02BA3C2469448CB0304C7CA7_il2cpp_TypeInfo_var))->get_U3CU3E9__15_0_1();
		Func_2_tFF25CF48F6D2159F721DDFBF4CF812A795D0D7EE * L_3 = L_2;
		G_B3_0 = L_3;
		G_B3_1 = L_1;
		G_B3_2 = _stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46;
		G_B3_3 = _stringLiteral1E5C2F367F02E47A8C160CDA1CD9D91DECBAC441;
		if (L_3)
		{
			G_B4_0 = L_3;
			G_B4_1 = L_1;
			G_B4_2 = _stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46;
			G_B4_3 = _stringLiteral1E5C2F367F02E47A8C160CDA1CD9D91DECBAC441;
			goto IL_003d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t151E28BB9FDE9A0C02BA3C2469448CB0304C7CA7_il2cpp_TypeInfo_var);
		U3CU3Ec_t151E28BB9FDE9A0C02BA3C2469448CB0304C7CA7 * L_4 = ((U3CU3Ec_t151E28BB9FDE9A0C02BA3C2469448CB0304C7CA7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t151E28BB9FDE9A0C02BA3C2469448CB0304C7CA7_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_tFF25CF48F6D2159F721DDFBF4CF812A795D0D7EE * L_5 = (Func_2_tFF25CF48F6D2159F721DDFBF4CF812A795D0D7EE *)il2cpp_codegen_object_new(Func_2_tFF25CF48F6D2159F721DDFBF4CF812A795D0D7EE_il2cpp_TypeInfo_var);
		Func_2__ctor_mA15EE8A06FB5D3C4082C15C1955C0BCD38AD5A6A(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3CToStringU3Eb__15_0_m75459850E6F606BF92DBE44DC8EF7453F934B83C_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mA15EE8A06FB5D3C4082C15C1955C0BCD38AD5A6A_RuntimeMethod_var);
		Func_2_tFF25CF48F6D2159F721DDFBF4CF812A795D0D7EE * L_6 = L_5;
		((U3CU3Ec_t151E28BB9FDE9A0C02BA3C2469448CB0304C7CA7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t151E28BB9FDE9A0C02BA3C2469448CB0304C7CA7_il2cpp_TypeInfo_var))->set_U3CU3E9__15_0_1(L_6);
		G_B4_0 = L_6;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_003d:
	{
		RuntimeObject* L_7 = Enumerable_Select_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_TisString_t_m346A0E4B72871BA4D88B3A298A3630BD4CF0E419((RuntimeObject*)(RuntimeObject*)G_B4_1, G_B4_0, /*hidden argument*/Enumerable_Select_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_TisString_t_m346A0E4B72871BA4D88B3A298A3630BD4CF0E419_RuntimeMethod_var);
		String_t* L_8 = String_Join_m0BBDD1CE798ED3A25EC32BF491C9B46CB81548B9(G_B4_2, L_7, /*hidden argument*/NULL);
		String_t* L_9 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(G_B4_3, L_8, _stringLiteral4FF447B8EF42CA51FA6FB287BED8D40F49BE58F1, /*hidden argument*/NULL);
		return L_9;
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
// System.Void TensorFlow.TFShape/<>c::.cctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA0419EA0E047DFCCC044B661AB1A1FA68C6A3FDE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_mA0419EA0E047DFCCC044B661AB1A1FA68C6A3FDE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t151E28BB9FDE9A0C02BA3C2469448CB0304C7CA7 * L_0 = (U3CU3Ec_t151E28BB9FDE9A0C02BA3C2469448CB0304C7CA7 *)il2cpp_codegen_object_new(U3CU3Ec_t151E28BB9FDE9A0C02BA3C2469448CB0304C7CA7_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m855BC795F555C4F0E220294218CF713EABC81A0D(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t151E28BB9FDE9A0C02BA3C2469448CB0304C7CA7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t151E28BB9FDE9A0C02BA3C2469448CB0304C7CA7_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void TensorFlow.TFShape/<>c::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m855BC795F555C4F0E220294218CF713EABC81A0D (U3CU3Ec_t151E28BB9FDE9A0C02BA3C2469448CB0304C7CA7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String TensorFlow.TFShape/<>c::<ToString>b__15_0(System.Int64)
extern "C" IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CToStringU3Eb__15_0_m75459850E6F606BF92DBE44DC8EF7453F934B83C (U3CU3Ec_t151E28BB9FDE9A0C02BA3C2469448CB0304C7CA7 * __this, int64_t ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CToStringU3Eb__15_0_m75459850E6F606BF92DBE44DC8EF7453F934B83C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = ___x0;
		if ((((int64_t)L_0) == ((int64_t)(((int64_t)((int64_t)(-1)))))))
		{
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = Int64_ToString_m8210E39355A227AE15DD391EB810AA9B6AB8B26C((int64_t*)(&___x0), /*hidden argument*/NULL);
		return L_1;
	}

IL_000d:
	{
		return _stringLiteral5BAB61EB53176449E25C2C82F172B82CB13FFB9D;
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
extern "C" intptr_t DEFAULT_CALL TF_NewStatus();
// System.IntPtr TensorFlow.TFStatus::TF_NewStatus()
extern "C" IL2CPP_METHOD_ATTR intptr_t TFStatus_TF_NewStatus_mB258DBD7FECF5CD7DAC7C81B1498FEE76D76E637 (const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(TF_NewStatus)();

	return returnValue;
}
// System.Void TensorFlow.TFStatus::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TFStatus__ctor_mE7A4D28F26AD208AE216A4A2BD84F23931CBB215 (TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFStatus__ctor_mE7A4D28F26AD208AE216A4A2BD84F23931CBB215_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48_il2cpp_TypeInfo_var);
		intptr_t L_0 = TFStatus_TF_NewStatus_mB258DBD7FECF5CD7DAC7C81B1498FEE76D76E637(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F_il2cpp_TypeInfo_var);
		TFDisposable__ctor_mB21000C375CFF831FD674A6FB7534F22BD9859D1(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL TF_DeleteStatus(intptr_t);
// System.Void TensorFlow.TFStatus::TF_DeleteStatus(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TFStatus_TF_DeleteStatus_m7C94C345C8BA7C812BB8A98164ECA3AA6E4E4BCD (intptr_t ___status0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(TF_DeleteStatus)(___status0);

}
// System.Void TensorFlow.TFStatus::NativeDispose(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TFStatus_NativeDispose_m533BF4C9BF03EC559E588E2A3499D52350E6C50C (TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * __this, intptr_t ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFStatus_NativeDispose_m533BF4C9BF03EC559E588E2A3499D52350E6C50C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___handle0;
		IL2CPP_RUNTIME_CLASS_INIT(TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48_il2cpp_TypeInfo_var);
		TFStatus_TF_DeleteStatus_m7C94C345C8BA7C812BB8A98164ECA3AA6E4E4BCD((intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
extern "C" uint32_t DEFAULT_CALL TF_GetCode(intptr_t);
// TensorFlow.TFCode TensorFlow.TFStatus::TF_GetCode(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR uint32_t TFStatus_TF_GetCode_mC2289275F6E041B92B0B3E95D2518C4BDC69B460 (intptr_t ___s0, const RuntimeMethod* method)
{
	typedef uint32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	uint32_t returnValue = reinterpret_cast<PInvokeFunc>(TF_GetCode)(___s0);

	return returnValue;
}
// TensorFlow.TFCode TensorFlow.TFStatus::get_StatusCode()
extern "C" IL2CPP_METHOD_ATTR uint32_t TFStatus_get_StatusCode_m94D3D7229A39CB84357C77C463450A2AC0E56F97 (TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFStatus_get_StatusCode_m94D3D7229A39CB84357C77C463450A2AC0E56F97_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F *)__this)->get_handle_0();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A * L_2 = (ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A *)il2cpp_codegen_object_new(ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m8B5D23EA08E42BDE6BC5233CC666295F19BBD2F9(L_2, _stringLiteral8AEC9DA7CF9E1CFA522D239EE62D38E878A94633, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, TFStatus_get_StatusCode_m94D3D7229A39CB84357C77C463450A2AC0E56F97_RuntimeMethod_var);
	}

IL_001d:
	{
		intptr_t L_3 = ((TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F *)__this)->get_handle_0();
		IL2CPP_RUNTIME_CLASS_INIT(TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48_il2cpp_TypeInfo_var);
		uint32_t L_4 = TFStatus_TF_GetCode_mC2289275F6E041B92B0B3E95D2518C4BDC69B460((intptr_t)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
extern "C" intptr_t DEFAULT_CALL TF_Message(intptr_t);
// System.IntPtr TensorFlow.TFStatus::TF_Message(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t TFStatus_TF_Message_mFE496C33D47F7A76995AC75302A04EEC82763A69 (intptr_t ___s0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(TF_Message)(___s0);

	return returnValue;
}
// System.String TensorFlow.TFStatus::get_StatusMessage()
extern "C" IL2CPP_METHOD_ATTR String_t* TFStatus_get_StatusMessage_m86243F6E581939F04810CE433B76B2ECE0B485AE (TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFStatus_get_StatusMessage_m86243F6E581939F04810CE433B76B2ECE0B485AE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F *)__this)->get_handle_0();
		IL2CPP_RUNTIME_CLASS_INIT(TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48_il2cpp_TypeInfo_var);
		intptr_t L_1 = TFStatus_TF_Message_mFE496C33D47F7A76995AC75302A04EEC82763A69((intptr_t)L_0, /*hidden argument*/NULL);
		String_t* L_2 = NativeBinding_GetStr_mA8D5C8DE250867FA3B79F6DC04FAFDAB101E23B2((intptr_t)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String TensorFlow.TFStatus::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* TFStatus_ToString_m46CEF6064D185239B1E62CFDB334A7AE56BEDFE5 (TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFStatus_ToString_m46CEF6064D185239B1E62CFDB334A7AE56BEDFE5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F *)__this)->get_handle_0();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A * L_2 = (ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A *)il2cpp_codegen_object_new(ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m8B5D23EA08E42BDE6BC5233CC666295F19BBD2F9(L_2, _stringLiteral8AEC9DA7CF9E1CFA522D239EE62D38E878A94633, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, TFStatus_ToString_m46CEF6064D185239B1E62CFDB334A7AE56BEDFE5_RuntimeMethod_var);
	}

IL_001d:
	{
		uint32_t L_3 = TFStatus_get_StatusCode_m94D3D7229A39CB84357C77C463450A2AC0E56F97(__this, /*hidden argument*/NULL);
		uint32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(TFCode_t6A126ABE1D332B6882FBC74ABC0EA525ACEF2496_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6 = TFStatus_get_StatusMessage_m86243F6E581939F04810CE433B76B2ECE0B485AE(__this, /*hidden argument*/NULL);
		String_t* L_7 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral184E6EFA39822CDDB3006BF2F890AF17CA64F278, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Boolean TensorFlow.TFStatus::CheckMaybeRaise(TensorFlow.TFStatus,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool TFStatus_CheckMaybeRaise_mB66AA81C3142A7FAD056BA3032D380ADC2C657EB (TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * __this, TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * ___incomingStatus0, bool ___last1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFStatus_CheckMaybeRaise_mB66AA81C3142A7FAD056BA3032D380ADC2C657EB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TFException_t7ED9AF8B794AA6A2B22662B556CE78BC47D9093E * G_B6_0 = NULL;
	TFException_t7ED9AF8B794AA6A2B22662B556CE78BC47D9093E * G_B5_0 = NULL;
	{
		TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * L_0 = ___incomingStatus0;
		if (L_0)
		{
			goto IL_0047;
		}
	}
	{
		intptr_t L_1 = ((TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F *)__this)->get_handle_0();
		bool L_2 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_1, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_il2cpp_TypeInfo_var);
		Console_WriteLine_mA5F7E391799514350980A0DE16983383542CA820(_stringLiteral725E5ED60EA63B45D2C6610A0F874FD455EE2164, /*hidden argument*/NULL);
	}

IL_001f:
	{
		uint32_t L_3 = TFStatus_get_StatusCode_m94D3D7229A39CB84357C77C463450A2AC0E56F97(__this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		String_t* L_4 = TFStatus_get_StatusMessage_m86243F6E581939F04810CE433B76B2ECE0B485AE(__this, /*hidden argument*/NULL);
		TFException_t7ED9AF8B794AA6A2B22662B556CE78BC47D9093E * L_5 = (TFException_t7ED9AF8B794AA6A2B22662B556CE78BC47D9093E *)il2cpp_codegen_object_new(TFException_t7ED9AF8B794AA6A2B22662B556CE78BC47D9093E_il2cpp_TypeInfo_var);
		TFException__ctor_m45D3532ABF6007035C33FB30B60772143C03A5DA(L_5, L_4, /*hidden argument*/NULL);
		bool L_6 = ___last1;
		G_B5_0 = L_5;
		if (!L_6)
		{
			G_B6_0 = L_5;
			goto IL_003b;
		}
	}
	{
		TFDisposable_Dispose_mC94BDB4773823692201AB60BC57B2D7DD4E13E6F(__this, /*hidden argument*/NULL);
		G_B6_0 = G_B5_0;
	}

IL_003b:
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(G_B6_0, NULL, TFStatus_CheckMaybeRaise_mB66AA81C3142A7FAD056BA3032D380ADC2C657EB_RuntimeMethod_var);
	}

IL_003c:
	{
		bool L_7 = ___last1;
		if (!L_7)
		{
			goto IL_0045;
		}
	}
	{
		TFDisposable_Dispose_mC94BDB4773823692201AB60BC57B2D7DD4E13E6F(__this, /*hidden argument*/NULL);
	}

IL_0045:
	{
		return (bool)1;
	}

IL_0047:
	{
		uint32_t L_8 = TFStatus_get_StatusCode_m94D3D7229A39CB84357C77C463450A2AC0E56F97(__this, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
	}
}
// TensorFlow.TFStatus TensorFlow.TFStatus::Setup(TensorFlow.TFStatus)
extern "C" IL2CPP_METHOD_ATTR TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * TFStatus_Setup_mC3FC03DF1F0D1A1C0FCAB6B1D369F6E86E693552 (TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * ___incoming0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFStatus_Setup_mC3FC03DF1F0D1A1C0FCAB6B1D369F6E86E693552_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * L_0 = ___incoming0;
		if (!L_0)
		{
			goto IL_0005;
		}
	}
	{
		TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * L_1 = ___incoming0;
		return L_1;
	}

IL_0005:
	{
		TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * L_2 = (TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 *)il2cpp_codegen_object_new(TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48_il2cpp_TypeInfo_var);
		TFStatus__ctor_mE7A4D28F26AD208AE216A4A2BD84F23931CBB215(L_2, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void TensorFlow.TFStatus::.cctor()
extern "C" IL2CPP_METHOD_ATTR void TFStatus__cctor_m1C415DACA15ED59190A69087875EC2E30752A3EF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFStatus__cctor_m1C415DACA15ED59190A69087875EC2E30752A3EF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 * L_0 = (TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48 *)il2cpp_codegen_object_new(TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48_il2cpp_TypeInfo_var);
		TFStatus__ctor_mE7A4D28F26AD208AE216A4A2BD84F23931CBB215(L_0, /*hidden argument*/NULL);
		((TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(TFStatus_tA2230EB50ACF6DC46F22EE44987CB3F8762D4D48_il2cpp_TypeInfo_var))->set_Default_1(L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_TFTensor_FreeTensorData_m359E94CFB8A95A9FDB1C82B17A8E3D7C03219106(intptr_t ___data0, intptr_t ___len1, intptr_t ___closure2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	TFTensor_FreeTensorData_m359E94CFB8A95A9FDB1C82B17A8E3D7C03219106(___data0, ___len1, ___closure2, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_TFTensor_FreeTensorHandle_m1D03288399D54E806A169E8BB5D867BB3A634002(intptr_t ___data0, intptr_t ___len1, intptr_t ___closure2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	TFTensor_FreeTensorHandle_m1D03288399D54E806A169E8BB5D867BB3A634002(___data0, ___len1, ___closure2, NULL);

}
extern "C" intptr_t DEFAULT_CALL TF_NewTensor(uint32_t, int64_t*, int32_t, intptr_t, uintptr_t, Il2CppMethodPointer, intptr_t);
// System.IntPtr TensorFlow.TFTensor::TF_NewTensor(TensorFlow.TFDataType,System.Int64[],System.Int32,System.IntPtr,System.UIntPtr,TensorFlow.TFTensor/Deallocator,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t TFTensor_TF_NewTensor_m1955ECCB95F204A86EBB290D5D4D6EC6CE1D5878 (uint32_t ___dataType0, Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* ___dims1, int32_t ___num_dims2, intptr_t ___data3, uintptr_t ___len4, Deallocator_t872E4BEF7439B64305100113566B7EBB163ABCAE * ___deallocator5, intptr_t ___deallocator_arg6, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (uint32_t, int64_t*, int32_t, intptr_t, uintptr_t, Il2CppMethodPointer, intptr_t);

	// Marshaling of parameter '___dims1' to native representation
	int64_t* ____dims1_marshaled = NULL;
	if (___dims1 != NULL)
	{
		____dims1_marshaled = reinterpret_cast<int64_t*>((___dims1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___deallocator5' to native representation
	Il2CppMethodPointer ____deallocator5_marshaled = NULL;
	____deallocator5_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___deallocator5));

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(TF_NewTensor)(___dataType0, ____dims1_marshaled, ___num_dims2, ___data3, ___len4, ____deallocator5_marshaled, ___deallocator_arg6);

	return returnValue;
}
// System.IntPtr TensorFlow.TFTensor::TF_NewTensor(TensorFlow.TFDataType,System.IntPtr,System.Int32,System.IntPtr,System.UIntPtr,TensorFlow.TFTensor/Deallocator,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t TFTensor_TF_NewTensor_m923178648F0D46527D4E25A0AC993A12AF69F45A (uint32_t ___dataType0, intptr_t ___zeroDims1, int32_t ___num_dims2, intptr_t ___data3, uintptr_t ___len4, Deallocator_t872E4BEF7439B64305100113566B7EBB163ABCAE * ___deallocator5, intptr_t ___deallocator_arg6, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (uint32_t, intptr_t, int32_t, intptr_t, uintptr_t, Il2CppMethodPointer, intptr_t);

	// Marshaling of parameter '___deallocator5' to native representation
	Il2CppMethodPointer ____deallocator5_marshaled = NULL;
	____deallocator5_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___deallocator5));

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(TF_NewTensor)(___dataType0, ___zeroDims1, ___num_dims2, ___data3, ___len4, ____deallocator5_marshaled, ___deallocator_arg6);

	return returnValue;
}
// System.Void TensorFlow.TFTensor::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TFTensor__ctor_m92C59BC7C169ECC52F8A763E5FCB4ECB6A0D5E6B (TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88 * __this, intptr_t ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFTensor__ctor_m92C59BC7C169ECC52F8A763E5FCB4ECB6A0D5E6B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___handle0;
		IL2CPP_RUNTIME_CLASS_INIT(TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F_il2cpp_TypeInfo_var);
		TFDisposable__ctor_mB21000C375CFF831FD674A6FB7534F22BD9859D1(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TensorFlow.TFTensor::FreeTensorData(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TFTensor_FreeTensorData_m359E94CFB8A95A9FDB1C82B17A8E3D7C03219106 (intptr_t ___data0, intptr_t ___len1, intptr_t ___closure2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFTensor_FreeTensorData_m359E94CFB8A95A9FDB1C82B17A8E3D7C03219106_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___data0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_mF098DF00F5341FDE4747A6F2004D5A0C9B03ED85((intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TensorFlow.TFTensor::FreeTensorHandle(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TFTensor_FreeTensorHandle_m1D03288399D54E806A169E8BB5D867BB3A634002 (intptr_t ___data0, intptr_t ___len1, intptr_t ___closure2, const RuntimeMethod* method)
{
	GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		intptr_t L_0 = ___closure2;
		GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  L_1 = GCHandle_FromIntPtr_mB803C8ECA1D723F1C51A69F7A7E09E269488D36C((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		GCHandle_Free_m392ECC9B1058E35A0FD5CF21A65F212873FC26F0((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)(&V_0), /*hidden argument*/NULL);
		return;
	}
}
// TensorFlow.TFTensor TensorFlow.TFTensor::FromBuffer(TensorFlow.TFShape,System.Single[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88 * TFTensor_FromBuffer_m7C2365F848E2C8EE1A7517335C5F4E50B12AB332 (TFShape_t269B735A5AB15B4CF59931FBA2A034443E579565 * ___shape0, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___data1, int32_t ___start2, int32_t ___count3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFTensor_FromBuffer_m7C2365F848E2C8EE1A7517335C5F4E50B12AB332_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TFShape_t269B735A5AB15B4CF59931FBA2A034443E579565 * L_0 = ___shape0;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_1 = ___data1;
		int32_t L_2 = ___start2;
		int32_t L_3 = ___count3;
		IL2CPP_RUNTIME_CLASS_INIT(TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88_il2cpp_TypeInfo_var);
		intptr_t L_4 = TFTensor_SetupTensor_mA97E7358E3761FCF9CBBFDBCA5746C51082BFD06(1, L_0, (RuntimeArray *)(RuntimeArray *)L_1, L_2, L_3, 4, /*hidden argument*/NULL);
		TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88 * L_5 = (TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88 *)il2cpp_codegen_object_new(TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88_il2cpp_TypeInfo_var);
		TFTensor__ctor_m92C59BC7C169ECC52F8A763E5FCB4ECB6A0D5E6B(L_5, (intptr_t)L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.IntPtr TensorFlow.TFTensor::SetupTensor(TensorFlow.TFDataType,TensorFlow.TFShape,System.Array,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t TFTensor_SetupTensor_mA97E7358E3761FCF9CBBFDBCA5746C51082BFD06 (uint32_t ___dt0, TFShape_t269B735A5AB15B4CF59931FBA2A034443E579565 * ___shape1, RuntimeArray * ___data2, int32_t ___start3, int32_t ___count4, int32_t ___size5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFTensor_SetupTensor_mA97E7358E3761FCF9CBBFDBCA5746C51082BFD06_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TFShape_t269B735A5AB15B4CF59931FBA2A034443E579565 * L_0 = ___shape1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteral5080FD62C27826C4BAD11CDABEA225200A35A04C, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, TFTensor_SetupTensor_mA97E7358E3761FCF9CBBFDBCA5746C51082BFD06_RuntimeMethod_var);
	}

IL_000e:
	{
		uint32_t L_2 = ___dt0;
		TFShape_t269B735A5AB15B4CF59931FBA2A034443E579565 * L_3 = ___shape1;
		NullCheck(L_3);
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_4 = L_3->get_dims_0();
		RuntimeArray * L_5 = ___data2;
		int32_t L_6 = ___start3;
		int32_t L_7 = ___count4;
		int32_t L_8 = ___size5;
		IL2CPP_RUNTIME_CLASS_INIT(TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88_il2cpp_TypeInfo_var);
		intptr_t L_9 = TFTensor_SetupTensor_mD2790633B12A4D8FF778FE8414A0BE5182F409E7(L_2, L_4, L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
		return (intptr_t)L_9;
	}
}
// System.IntPtr TensorFlow.TFTensor::SetupTensor(TensorFlow.TFDataType,System.Int64[],System.Array,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t TFTensor_SetupTensor_mD2790633B12A4D8FF778FE8414A0BE5182F409E7 (uint32_t ___dt0, Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* ___dims1, RuntimeArray * ___data2, int32_t ___start3, int32_t ___count4, int32_t ___size5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFTensor_SetupTensor_mD2790633B12A4D8FF778FE8414A0BE5182F409E7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___start3;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = ___start3;
		RuntimeArray * L_2 = ___data2;
		NullCheck(L_2);
		int32_t L_3 = Array_get_Length_m2239B6393651C3F4631D900EFC1B05DBE8F5466D(L_2, /*hidden argument*/NULL);
		int32_t L_4 = ___count4;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)L_4)))))
		{
			goto IL_001b;
		}
	}

IL_0010:
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_5 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_5, _stringLiteral5858C3CEE7EF9B9FB8572ED511646BC18A15A19E, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, TFTensor_SetupTensor_mD2790633B12A4D8FF778FE8414A0BE5182F409E7_RuntimeMethod_var);
	}

IL_001b:
	{
		RuntimeArray * L_6 = ___data2;
		GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  L_7 = GCHandle_Alloc_m30DAF14F75E3A692C594965CE6724E2454DE9A2E(L_6, 3, /*hidden argument*/NULL);
		V_0 = L_7;
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_8 = ___dims1;
		if (L_8)
		{
			goto IL_0059;
		}
	}
	{
		uint32_t L_9 = ___dt0;
		intptr_t L_10 = GCHandle_AddrOfPinnedObject_mA20090CB8274F28D087A6E8AD36D3230B6741EA5((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)(&V_0), /*hidden argument*/NULL);
		int32_t L_11 = ___start3;
		int32_t L_12 = ___size5;
		intptr_t L_13 = IntPtr_op_Addition_mD815D6B36C7DFA1F89481720D3D46A6484BB9644((intptr_t)L_10, ((int32_t)il2cpp_codegen_multiply((int32_t)L_11, (int32_t)L_12)), /*hidden argument*/NULL);
		int32_t L_14 = ___count4;
		int32_t L_15 = ___size5;
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_16 = UIntPtr_op_Explicit_m2407113DA21D21EABD35525DB0106B20734929E0((((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)L_15))))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88_il2cpp_TypeInfo_var);
		Deallocator_t872E4BEF7439B64305100113566B7EBB163ABCAE * L_17 = ((TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88_StaticFields*)il2cpp_codegen_static_fields_for(TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88_il2cpp_TypeInfo_var))->get_FreeTensorHandleDelegate_2();
		GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  L_18 = V_0;
		intptr_t L_19 = GCHandle_ToIntPtr_m8CF7D07846B0C741B04A2A4E5E9B5D505F4B3CCE(L_18, /*hidden argument*/NULL);
		intptr_t L_20 = TFTensor_TF_NewTensor_m923178648F0D46527D4E25A0AC993A12AF69F45A(L_9, (intptr_t)(0), 0, (intptr_t)L_13, L_16, L_17, (intptr_t)L_19, /*hidden argument*/NULL);
		return (intptr_t)L_20;
	}

IL_0059:
	{
		uint32_t L_21 = ___dt0;
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_22 = ___dims1;
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_23 = ___dims1;
		NullCheck(L_23);
		intptr_t L_24 = GCHandle_AddrOfPinnedObject_mA20090CB8274F28D087A6E8AD36D3230B6741EA5((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)(&V_0), /*hidden argument*/NULL);
		int32_t L_25 = ___start3;
		int32_t L_26 = ___size5;
		intptr_t L_27 = IntPtr_op_Addition_mD815D6B36C7DFA1F89481720D3D46A6484BB9644((intptr_t)L_24, ((int32_t)il2cpp_codegen_multiply((int32_t)L_25, (int32_t)L_26)), /*hidden argument*/NULL);
		int32_t L_28 = ___count4;
		int32_t L_29 = ___size5;
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_30 = UIntPtr_op_Explicit_m2407113DA21D21EABD35525DB0106B20734929E0((((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_28, (int32_t)L_29))))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88_il2cpp_TypeInfo_var);
		Deallocator_t872E4BEF7439B64305100113566B7EBB163ABCAE * L_31 = ((TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88_StaticFields*)il2cpp_codegen_static_fields_for(TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88_il2cpp_TypeInfo_var))->get_FreeTensorHandleDelegate_2();
		GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  L_32 = V_0;
		intptr_t L_33 = GCHandle_ToIntPtr_m8CF7D07846B0C741B04A2A4E5E9B5D505F4B3CCE(L_32, /*hidden argument*/NULL);
		intptr_t L_34 = TFTensor_TF_NewTensor_m1955ECCB95F204A86EBB290D5D4D6EC6CE1D5878(L_21, L_22, (((int32_t)((int32_t)(((RuntimeArray *)L_23)->max_length)))), (intptr_t)L_27, L_30, L_31, (intptr_t)L_33, /*hidden argument*/NULL);
		return (intptr_t)L_34;
	}
}
// System.Void TensorFlow.TFTensor::NativeDispose(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TFTensor_NativeDispose_m153BD9686C5913D8CF303B78EFDBC9D710EA005E (TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88 * __this, intptr_t ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFTensor_NativeDispose_m153BD9686C5913D8CF303B78EFDBC9D710EA005E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___handle0;
		IL2CPP_RUNTIME_CLASS_INIT(TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88_il2cpp_TypeInfo_var);
		TFTensor_TF_DeleteTensor_m20D6598C4C4D61D2DE11547AAD0902EBC0C3213E((intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL TF_DeleteTensor(intptr_t);
// System.Void TensorFlow.TFTensor::TF_DeleteTensor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TFTensor_TF_DeleteTensor_m20D6598C4C4D61D2DE11547AAD0902EBC0C3213E (intptr_t ___tensor0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(TF_DeleteTensor)(___tensor0);

}
extern "C" uint32_t DEFAULT_CALL TF_TensorType(intptr_t);
// TensorFlow.TFDataType TensorFlow.TFTensor::TF_TensorType(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR uint32_t TFTensor_TF_TensorType_mA230B9B499E049BA907E34F37B3E5E310D9D1673 (intptr_t ___tensor0, const RuntimeMethod* method)
{
	typedef uint32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	uint32_t returnValue = reinterpret_cast<PInvokeFunc>(TF_TensorType)(___tensor0);

	return returnValue;
}
// TensorFlow.TFDataType TensorFlow.TFTensor::get_TensorType()
extern "C" IL2CPP_METHOD_ATTR uint32_t TFTensor_get_TensorType_m5321B4DDACD52E9FC8A1A23056DC99A263E6B399 (TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFTensor_get_TensorType_m5321B4DDACD52E9FC8A1A23056DC99A263E6B399_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F *)__this)->get_handle_0();
		IL2CPP_RUNTIME_CLASS_INIT(TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88_il2cpp_TypeInfo_var);
		uint32_t L_1 = TFTensor_TF_TensorType_mA230B9B499E049BA907E34F37B3E5E310D9D1673((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C" int32_t DEFAULT_CALL TF_NumDims(intptr_t);
// System.Int32 TensorFlow.TFTensor::TF_NumDims(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t TFTensor_TF_NumDims_mAFCC93BE15C796E570459E18DC2C56D805875355 (intptr_t ___tensor0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(TF_NumDims)(___tensor0);

	return returnValue;
}
// System.Int32 TensorFlow.TFTensor::get_NumDims()
extern "C" IL2CPP_METHOD_ATTR int32_t TFTensor_get_NumDims_m4C10794F0E4E346F02F4BD1F185906314DB0B73A (TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFTensor_get_NumDims_m4C10794F0E4E346F02F4BD1F185906314DB0B73A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F *)__this)->get_handle_0();
		IL2CPP_RUNTIME_CLASS_INIT(TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88_il2cpp_TypeInfo_var);
		int32_t L_1 = TFTensor_TF_NumDims_mAFCC93BE15C796E570459E18DC2C56D805875355((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C" int64_t DEFAULT_CALL TF_Dim(intptr_t, int32_t);
// System.Int64 TensorFlow.TFTensor::TF_Dim(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int64_t TFTensor_TF_Dim_m4EC774170C9DE6E9A1D91DB3FB48C4374D20F1D7 (intptr_t ___tensor0, int32_t ___dim_index1, const RuntimeMethod* method)
{
	typedef int64_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);

	// Native function invocation
	int64_t returnValue = reinterpret_cast<PInvokeFunc>(TF_Dim)(___tensor0, ___dim_index1);

	return returnValue;
}
extern "C" intptr_t DEFAULT_CALL TF_TensorData(intptr_t);
// System.IntPtr TensorFlow.TFTensor::TF_TensorData(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t TFTensor_TF_TensorData_mB5B581F30210BC374EBE066B91EF37C65D031B92 (intptr_t ___tensor0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(TF_TensorData)(___tensor0);

	return returnValue;
}
// System.IntPtr TensorFlow.TFTensor::get_Data()
extern "C" IL2CPP_METHOD_ATTR intptr_t TFTensor_get_Data_m954A7E19A066DF3C0F0DAA59D94491A7A7C6761B (TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFTensor_get_Data_m954A7E19A066DF3C0F0DAA59D94491A7A7C6761B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F *)__this)->get_handle_0();
		IL2CPP_RUNTIME_CLASS_INIT(TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88_il2cpp_TypeInfo_var);
		intptr_t L_1 = TFTensor_TF_TensorData_mB5B581F30210BC374EBE066B91EF37C65D031B92((intptr_t)L_0, /*hidden argument*/NULL);
		return (intptr_t)L_1;
	}
}
// System.Int64[] TensorFlow.TFTensor::get_Shape()
extern "C" IL2CPP_METHOD_ATTR Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* TFTensor_get_Shape_m7F14D085916C451BE8DE0967FC66B0656879F5D0 (TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFTensor_get_Shape_m7F14D085916C451BE8DE0967FC66B0656879F5D0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* V_0 = NULL;
	int32_t V_1 = 0;
	{
		intptr_t L_0 = ((TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F *)__this)->get_handle_0();
		IL2CPP_RUNTIME_CLASS_INIT(TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88_il2cpp_TypeInfo_var);
		int32_t L_1 = TFTensor_TF_NumDims_mAFCC93BE15C796E570459E18DC2C56D805875355((intptr_t)L_0, /*hidden argument*/NULL);
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_2 = (Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F*)SZArrayNew(Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_0 = L_2;
		V_1 = 0;
		goto IL_002a;
	}

IL_0015:
	{
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_3 = V_0;
		int32_t L_4 = V_1;
		intptr_t L_5 = ((TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F *)__this)->get_handle_0();
		int32_t L_6 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88_il2cpp_TypeInfo_var);
		int64_t L_7 = TFTensor_TF_Dim_m4EC774170C9DE6E9A1D91DB3FB48C4374D20F1D7((intptr_t)L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)L_7)))))));
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_002a:
	{
		int32_t L_9 = V_1;
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))))))
		{
			goto IL_0015;
		}
	}
	{
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_11 = V_0;
		return L_11;
	}
}
// System.Type TensorFlow.TFTensor::TypeFromTensorType(TensorFlow.TFDataType)
extern "C" IL2CPP_METHOD_ATTR Type_t * TFTensor_TypeFromTensorType_m44FC8A993EFD91FD797B34660065CE43213C1BCC (uint32_t ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFTensor_TypeFromTensorType_m44FC8A993EFD91FD797B34660065CE43213C1BCC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ___type0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0052;
			}
			case 1:
			{
				goto IL_005d;
			}
			case 2:
			{
				goto IL_0068;
			}
			case 3:
			{
				goto IL_0073;
			}
			case 4:
			{
				goto IL_007e;
			}
			case 5:
			{
				goto IL_0089;
			}
			case 6:
			{
				goto IL_0094;
			}
			case 7:
			{
				goto IL_00cb;
			}
			case 8:
			{
				goto IL_009f;
			}
			case 9:
			{
				goto IL_00aa;
			}
			case 10:
			{
				goto IL_00cb;
			}
			case 11:
			{
				goto IL_00cb;
			}
			case 12:
			{
				goto IL_00cb;
			}
			case 13:
			{
				goto IL_00cb;
			}
			case 14:
			{
				goto IL_00cb;
			}
			case 15:
			{
				goto IL_00cb;
			}
			case 16:
			{
				goto IL_00b5;
			}
			case 17:
			{
				goto IL_00c0;
			}
		}
	}
	{
		goto IL_00cb;
	}

IL_0052:
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_1 = { reinterpret_cast<intptr_t> (Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_005d:
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_3 = { reinterpret_cast<intptr_t> (Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0068:
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_5 = { reinterpret_cast<intptr_t> (Int32_t585191389E07734F19F3156FF88FB3EF4800D102_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0073:
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_7 = { reinterpret_cast<intptr_t> (Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_007e:
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_9 = { reinterpret_cast<intptr_t> (Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_0089:
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_11 = { reinterpret_cast<intptr_t> (SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_0094:
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_13 = { reinterpret_cast<intptr_t> (TFString_tCF78FFE2469215A95DF91742B0DDDAD2B03EC13C_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_009f:
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_15 = { reinterpret_cast<intptr_t> (Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_16 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_15, /*hidden argument*/NULL);
		return L_16;
	}

IL_00aa:
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_17 = { reinterpret_cast<intptr_t> (Boolean_tB53F6830F670160873277339AA58F15CAED4399C_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_18 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_17, /*hidden argument*/NULL);
		return L_18;
	}

IL_00b5:
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_19 = { reinterpret_cast<intptr_t> (UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_19, /*hidden argument*/NULL);
		return L_20;
	}

IL_00c0:
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_21 = { reinterpret_cast<intptr_t> (Complex_tD3CA17E8417A543F2625EB352AC07C0209D85733_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_22 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_21, /*hidden argument*/NULL);
		return L_22;
	}

IL_00cb:
	{
		return (Type_t *)NULL;
	}
}
// System.Object TensorFlow.TFTensor::FetchSimple(TensorFlow.TFDataType,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * TFTensor_FetchSimple_m3DFE21914CA93A499A91D88F59A0EF73709C8377 (uint32_t ___dt0, intptr_t ___data1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFTensor_FetchSimple_m3DFE21914CA93A499A91D88F59A0EF73709C8377_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ___dt0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0055;
			}
			case 1:
			{
				goto IL_0062;
			}
			case 2:
			{
				goto IL_006f;
			}
			case 3:
			{
				goto IL_007c;
			}
			case 4:
			{
				goto IL_0089;
			}
			case 5:
			{
				goto IL_0096;
			}
			case 6:
			{
				goto IL_00a3;
			}
			case 7:
			{
				goto IL_00e1;
			}
			case 8:
			{
				goto IL_00a9;
			}
			case 9:
			{
				goto IL_00b6;
			}
			case 10:
			{
				goto IL_00e1;
			}
			case 11:
			{
				goto IL_00e1;
			}
			case 12:
			{
				goto IL_00e1;
			}
			case 13:
			{
				goto IL_00e1;
			}
			case 14:
			{
				goto IL_00e1;
			}
			case 15:
			{
				goto IL_00e1;
			}
			case 16:
			{
				goto IL_00c3;
			}
			case 17:
			{
				goto IL_00d0;
			}
		}
	}
	{
		goto IL_00e1;
	}

IL_0055:
	{
		intptr_t L_1 = ___data1;
		void* L_2 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_1, /*hidden argument*/NULL);
		float L_3 = *((float*)L_2);
		float L_4 = L_3;
		RuntimeObject * L_5 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_4);
		return L_5;
	}

IL_0062:
	{
		intptr_t L_6 = ___data1;
		void* L_7 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_6, /*hidden argument*/NULL);
		double L_8 = *((double*)L_7);
		double L_9 = L_8;
		RuntimeObject * L_10 = Box(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var, &L_9);
		return L_10;
	}

IL_006f:
	{
		intptr_t L_11 = ___data1;
		void* L_12 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_11, /*hidden argument*/NULL);
		int32_t L_13 = *((int32_t*)L_12);
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_14);
		return L_15;
	}

IL_007c:
	{
		intptr_t L_16 = ___data1;
		void* L_17 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_16, /*hidden argument*/NULL);
		int32_t L_18 = *((uint8_t*)L_17);
		uint8_t L_19 = ((uint8_t)L_18);
		RuntimeObject * L_20 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_19);
		return L_20;
	}

IL_0089:
	{
		intptr_t L_21 = ___data1;
		void* L_22 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_21, /*hidden argument*/NULL);
		int32_t L_23 = *((int16_t*)L_22);
		int16_t L_24 = ((int16_t)L_23);
		RuntimeObject * L_25 = Box(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_il2cpp_TypeInfo_var, &L_24);
		return L_25;
	}

IL_0096:
	{
		intptr_t L_26 = ___data1;
		void* L_27 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_26, /*hidden argument*/NULL);
		int32_t L_28 = *((int8_t*)L_27);
		int8_t L_29 = ((int8_t)L_28);
		RuntimeObject * L_30 = Box(SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_il2cpp_TypeInfo_var, &L_29);
		return L_30;
	}

IL_00a3:
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_31 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_31, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, NULL, TFTensor_FetchSimple_m3DFE21914CA93A499A91D88F59A0EF73709C8377_RuntimeMethod_var);
	}

IL_00a9:
	{
		intptr_t L_32 = ___data1;
		void* L_33 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_32, /*hidden argument*/NULL);
		int64_t L_34 = *((int64_t*)L_33);
		int64_t L_35 = L_34;
		RuntimeObject * L_36 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_35);
		return L_36;
	}

IL_00b6:
	{
		intptr_t L_37 = ___data1;
		void* L_38 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_37, /*hidden argument*/NULL);
		int32_t L_39 = *((uint8_t*)L_38);
		bool L_40 = ((bool)L_39);
		RuntimeObject * L_41 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_40);
		return L_41;
	}

IL_00c3:
	{
		intptr_t L_42 = ___data1;
		void* L_43 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_42, /*hidden argument*/NULL);
		int32_t L_44 = *((uint16_t*)L_43);
		uint16_t L_45 = ((uint16_t)L_44);
		RuntimeObject * L_46 = Box(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_il2cpp_TypeInfo_var, &L_45);
		return L_46;
	}

IL_00d0:
	{
		intptr_t L_47 = ___data1;
		void* L_48 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_47, /*hidden argument*/NULL);
		Complex_tD3CA17E8417A543F2625EB352AC07C0209D85733  L_49 = (*(Complex_tD3CA17E8417A543F2625EB352AC07C0209D85733 *)L_48);
		RuntimeObject * L_50 = Box(Complex_tD3CA17E8417A543F2625EB352AC07C0209D85733_il2cpp_TypeInfo_var, &L_49);
		return L_50;
	}

IL_00e1:
	{
		return NULL;
	}
}
// System.Void TensorFlow.TFTensor::Copy(System.IntPtr,System.Void*,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TFTensor_Copy_m3515C577146C24822A53C37F8332ADE1C319E90F (intptr_t ___src0, void* ___target1, int32_t ___size2, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___src0;
		void* L_1 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_0, /*hidden argument*/NULL);
		void* L_2 = ___target1;
		int32_t L_3 = ___size2;
		int32_t L_4 = ___size2;
		Buffer_MemoryCopy_mE82F94A8EE03536392E8BDA81A904F82226E879A((void*)(void*)L_1, (void*)(void*)L_2, (((int64_t)((int64_t)L_3))), (((int64_t)((int64_t)L_4))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void TensorFlow.TFTensor::FetchFlatArray(System.Array,TensorFlow.TFDataType,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TFTensor_FetchFlatArray_mD1BB9691E8A1FF44CF524C798B021EBE62340E9C (RuntimeArray * ___target0, uint32_t ___dt1, intptr_t ___data2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFTensor_FetchFlatArray_mD1BB9691E8A1FF44CF524C798B021EBE62340E9C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int8_t* V_1 = NULL;
	bool* V_2 = NULL;
	uint16_t* V_3 = NULL;
	Complex_tD3CA17E8417A543F2625EB352AC07C0209D85733 * V_4 = NULL;
	float* V_5 = NULL;
	double* V_6 = NULL;
	int32_t* V_7 = NULL;
	uint8_t* V_8 = NULL;
	int16_t* V_9 = NULL;
	int64_t* V_10 = NULL;
	{
		RuntimeArray * L_0 = ___target0;
		NullCheck(L_0);
		int32_t L_1 = Array_get_Length_m2239B6393651C3F4631D900EFC1B05DBE8F5466D(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		uint32_t L_2 = ___dt1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)))
		{
			case 0:
			{
				goto IL_00d0;
			}
			case 1:
			{
				goto IL_00ef;
			}
			case 2:
			{
				goto IL_010e;
			}
			case 3:
			{
				goto IL_012d;
			}
			case 4:
			{
				goto IL_014a;
			}
			case 5:
			{
				goto IL_005c;
			}
			case 6:
			{
				goto IL_0188;
			}
			case 7:
			{
				goto IL_018e;
			}
			case 8:
			{
				goto IL_0169;
			}
			case 9:
			{
				goto IL_0076;
			}
			case 10:
			{
				goto IL_018e;
			}
			case 11:
			{
				goto IL_018e;
			}
			case 12:
			{
				goto IL_018e;
			}
			case 13:
			{
				goto IL_018e;
			}
			case 14:
			{
				goto IL_018e;
			}
			case 15:
			{
				goto IL_018e;
			}
			case 16:
			{
				goto IL_0090;
			}
			case 17:
			{
				goto IL_00ac;
			}
		}
	}
	{
		goto IL_018e;
	}

IL_005c:
	{
		RuntimeArray * L_3 = ___target0;
		NullCheck(((SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889*)Castclass((RuntimeObject*)L_3, SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889_il2cpp_TypeInfo_var)));
		V_1 = (int8_t*)((((SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889*)Castclass((RuntimeObject*)L_3, SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889_il2cpp_TypeInfo_var)))->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		intptr_t L_4 = ___data2;
		int8_t* L_5 = V_1;
		int32_t L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88_il2cpp_TypeInfo_var);
		TFTensor_Copy_m3515C577146C24822A53C37F8332ADE1C319E90F((intptr_t)L_4, (void*)(void*)(((intptr_t)L_5)), L_6, /*hidden argument*/NULL);
		V_1 = (int8_t*)(((uintptr_t)0));
		return;
	}

IL_0076:
	{
		RuntimeArray * L_7 = ___target0;
		NullCheck(((BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040*)Castclass((RuntimeObject*)L_7, BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040_il2cpp_TypeInfo_var)));
		V_2 = (bool*)((((BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040*)Castclass((RuntimeObject*)L_7, BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040_il2cpp_TypeInfo_var)))->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		intptr_t L_8 = ___data2;
		bool* L_9 = V_2;
		int32_t L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88_il2cpp_TypeInfo_var);
		TFTensor_Copy_m3515C577146C24822A53C37F8332ADE1C319E90F((intptr_t)L_8, (void*)(void*)(((intptr_t)L_9)), L_10, /*hidden argument*/NULL);
		V_2 = (bool*)(((uintptr_t)0));
		return;
	}

IL_0090:
	{
		RuntimeArray * L_11 = ___target0;
		NullCheck(((UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E*)Castclass((RuntimeObject*)L_11, UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E_il2cpp_TypeInfo_var)));
		V_3 = (uint16_t*)((((UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E*)Castclass((RuntimeObject*)L_11, UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E_il2cpp_TypeInfo_var)))->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		intptr_t L_12 = ___data2;
		uint16_t* L_13 = V_3;
		int32_t L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88_il2cpp_TypeInfo_var);
		TFTensor_Copy_m3515C577146C24822A53C37F8332ADE1C319E90F((intptr_t)L_12, (void*)(void*)(((intptr_t)L_13)), ((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)2)), /*hidden argument*/NULL);
		V_3 = (uint16_t*)(((uintptr_t)0));
		return;
	}

IL_00ac:
	{
		RuntimeArray * L_15 = ___target0;
		NullCheck(((ComplexU5BU5D_t4247746C5B1B24482EC5467F023370F3154F84AD*)Castclass((RuntimeObject*)L_15, ComplexU5BU5D_t4247746C5B1B24482EC5467F023370F3154F84AD_il2cpp_TypeInfo_var)));
		V_4 = (Complex_tD3CA17E8417A543F2625EB352AC07C0209D85733 *)((((ComplexU5BU5D_t4247746C5B1B24482EC5467F023370F3154F84AD*)Castclass((RuntimeObject*)L_15, ComplexU5BU5D_t4247746C5B1B24482EC5467F023370F3154F84AD_il2cpp_TypeInfo_var)))->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		intptr_t L_16 = ___data2;
		Complex_tD3CA17E8417A543F2625EB352AC07C0209D85733 * L_17 = V_4;
		int32_t L_18 = V_0;
		uint32_t L_19 = sizeof(Complex_tD3CA17E8417A543F2625EB352AC07C0209D85733 );
		IL2CPP_RUNTIME_CLASS_INIT(TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88_il2cpp_TypeInfo_var);
		TFTensor_Copy_m3515C577146C24822A53C37F8332ADE1C319E90F((intptr_t)L_16, (void*)(void*)(((intptr_t)L_17)), ((int32_t)il2cpp_codegen_multiply((int32_t)L_18, (int32_t)L_19)), /*hidden argument*/NULL);
		V_4 = (Complex_tD3CA17E8417A543F2625EB352AC07C0209D85733 *)(((uintptr_t)0));
		return;
	}

IL_00d0:
	{
		RuntimeArray * L_20 = ___target0;
		NullCheck(((SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)Castclass((RuntimeObject*)L_20, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var)));
		V_5 = (float*)((((SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)Castclass((RuntimeObject*)L_20, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var)))->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		intptr_t L_21 = ___data2;
		float* L_22 = V_5;
		int32_t L_23 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88_il2cpp_TypeInfo_var);
		TFTensor_Copy_m3515C577146C24822A53C37F8332ADE1C319E90F((intptr_t)L_21, (void*)(void*)(((intptr_t)L_22)), ((int32_t)il2cpp_codegen_multiply((int32_t)L_23, (int32_t)4)), /*hidden argument*/NULL);
		V_5 = (float*)(((uintptr_t)0));
		return;
	}

IL_00ef:
	{
		RuntimeArray * L_24 = ___target0;
		NullCheck(((DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D*)Castclass((RuntimeObject*)L_24, DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D_il2cpp_TypeInfo_var)));
		V_6 = (double*)((((DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D*)Castclass((RuntimeObject*)L_24, DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D_il2cpp_TypeInfo_var)))->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		intptr_t L_25 = ___data2;
		double* L_26 = V_6;
		int32_t L_27 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88_il2cpp_TypeInfo_var);
		TFTensor_Copy_m3515C577146C24822A53C37F8332ADE1C319E90F((intptr_t)L_25, (void*)(void*)(((intptr_t)L_26)), ((int32_t)il2cpp_codegen_multiply((int32_t)L_27, (int32_t)8)), /*hidden argument*/NULL);
		V_6 = (double*)(((uintptr_t)0));
		return;
	}

IL_010e:
	{
		RuntimeArray * L_28 = ___target0;
		NullCheck(((Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)Castclass((RuntimeObject*)L_28, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var)));
		V_7 = (int32_t*)((((Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)Castclass((RuntimeObject*)L_28, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var)))->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		intptr_t L_29 = ___data2;
		int32_t* L_30 = V_7;
		int32_t L_31 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88_il2cpp_TypeInfo_var);
		TFTensor_Copy_m3515C577146C24822A53C37F8332ADE1C319E90F((intptr_t)L_29, (void*)(void*)(((intptr_t)L_30)), ((int32_t)il2cpp_codegen_multiply((int32_t)L_31, (int32_t)8)), /*hidden argument*/NULL);
		V_7 = (int32_t*)(((uintptr_t)0));
		return;
	}

IL_012d:
	{
		RuntimeArray * L_32 = ___target0;
		NullCheck(((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)Castclass((RuntimeObject*)L_32, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var)));
		V_8 = (uint8_t*)((((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)Castclass((RuntimeObject*)L_32, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var)))->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		intptr_t L_33 = ___data2;
		uint8_t* L_34 = V_8;
		int32_t L_35 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88_il2cpp_TypeInfo_var);
		TFTensor_Copy_m3515C577146C24822A53C37F8332ADE1C319E90F((intptr_t)L_33, (void*)(void*)(((intptr_t)L_34)), L_35, /*hidden argument*/NULL);
		V_8 = (uint8_t*)(((uintptr_t)0));
		return;
	}

IL_014a:
	{
		RuntimeArray * L_36 = ___target0;
		NullCheck(((Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28*)Castclass((RuntimeObject*)L_36, Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28_il2cpp_TypeInfo_var)));
		V_9 = (int16_t*)((((Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28*)Castclass((RuntimeObject*)L_36, Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28_il2cpp_TypeInfo_var)))->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		intptr_t L_37 = ___data2;
		int16_t* L_38 = V_9;
		int32_t L_39 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88_il2cpp_TypeInfo_var);
		TFTensor_Copy_m3515C577146C24822A53C37F8332ADE1C319E90F((intptr_t)L_37, (void*)(void*)(((intptr_t)L_38)), ((int32_t)il2cpp_codegen_multiply((int32_t)L_39, (int32_t)2)), /*hidden argument*/NULL);
		V_9 = (int16_t*)(((uintptr_t)0));
		return;
	}

IL_0169:
	{
		RuntimeArray * L_40 = ___target0;
		NullCheck(((Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F*)Castclass((RuntimeObject*)L_40, Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F_il2cpp_TypeInfo_var)));
		V_10 = (int64_t*)((((Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F*)Castclass((RuntimeObject*)L_40, Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F_il2cpp_TypeInfo_var)))->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		intptr_t L_41 = ___data2;
		int64_t* L_42 = V_10;
		int32_t L_43 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88_il2cpp_TypeInfo_var);
		TFTensor_Copy_m3515C577146C24822A53C37F8332ADE1C319E90F((intptr_t)L_41, (void*)(void*)(((intptr_t)L_42)), ((int32_t)il2cpp_codegen_multiply((int32_t)L_43, (int32_t)8)), /*hidden argument*/NULL);
		V_10 = (int64_t*)(((uintptr_t)0));
		return;
	}

IL_0188:
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_44 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_44, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, NULL, TFTensor_FetchFlatArray_mD1BB9691E8A1FF44CF524C798B021EBE62340E9C_RuntimeMethod_var);
	}

IL_018e:
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_45 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_45, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_45, NULL, TFTensor_FetchFlatArray_mD1BB9691E8A1FF44CF524C798B021EBE62340E9C_RuntimeMethod_var);
	}
}
// System.Object TensorFlow.TFTensor::FetchJaggedArray(System.Type,TensorFlow.TFDataType,System.IntPtr&,System.Int64[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * TFTensor_FetchJaggedArray_m4482BFC2DD2EF569289C79711D5E62CDDCBA9703 (Type_t * ___t0, uint32_t ___dt1, intptr_t* ___data2, Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* ___shape3, int32_t ___level4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFTensor_FetchJaggedArray_m4482BFC2DD2EF569289C79711D5E62CDDCBA9703_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeArray * V_0 = NULL;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	RuntimeObject * V_5 = NULL;
	int64_t V_6 = 0;
	RuntimeObject * V_7 = NULL;
	{
		int32_t L_0 = ___level4;
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_1 = ___shape3;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))), (int32_t)1))))))
		{
			goto IL_01da;
		}
	}
	{
		Type_t * L_2 = ___t0;
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_3 = (Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F*)SZArrayNew(Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F_il2cpp_TypeInfo_var, (uint32_t)1);
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_4 = L_3;
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_5 = ___shape3;
		int32_t L_6 = ___level4;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		int64_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (int64_t)L_8);
		RuntimeArray * L_9 = Array_CreateInstance_m0C393096A042F32063355992913947CBE341E311(L_2, L_4, /*hidden argument*/NULL);
		V_0 = L_9;
		V_1 = (((int64_t)((int64_t)0)));
		goto IL_01cb;
	}

IL_0028:
	{
		uint32_t L_10 = ___dt1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1)))
		{
			case 0:
			{
				goto IL_007d;
			}
			case 1:
			{
				goto IL_00a0;
			}
			case 2:
			{
				goto IL_00c3;
			}
			case 3:
			{
				goto IL_00e6;
			}
			case 4:
			{
				goto IL_0109;
			}
			case 5:
			{
				goto IL_012c;
			}
			case 6:
			{
				goto IL_01b5;
			}
			case 7:
			{
				goto IL_01c0;
			}
			case 8:
			{
				goto IL_014c;
			}
			case 9:
			{
				goto IL_016c;
			}
			case 10:
			{
				goto IL_01c0;
			}
			case 11:
			{
				goto IL_01c0;
			}
			case 12:
			{
				goto IL_01c0;
			}
			case 13:
			{
				goto IL_01c0;
			}
			case 14:
			{
				goto IL_01c0;
			}
			case 15:
			{
				goto IL_01c0;
			}
			case 16:
			{
				goto IL_01c0;
			}
			case 17:
			{
				goto IL_018c;
			}
		}
	}
	{
		goto IL_01c0;
	}

IL_007d:
	{
		RuntimeArray * L_11 = V_0;
		intptr_t* L_12 = ___data2;
		void* L_13 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)((*(L_12))), /*hidden argument*/NULL);
		float L_14 = *((float*)L_13);
		float L_15 = L_14;
		RuntimeObject * L_16 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_15);
		int64_t L_17 = V_1;
		NullCheck(L_11);
		Array_SetValue_mD1677B396331152BA588E2EEF167F04E832F3849(L_11, L_16, L_17, /*hidden argument*/NULL);
		intptr_t* L_18 = ___data2;
		intptr_t* L_19 = ___data2;
		intptr_t L_20 = IntPtr_op_Addition_mD815D6B36C7DFA1F89481720D3D46A6484BB9644((intptr_t)((*(L_19))), 4, /*hidden argument*/NULL);
		*((intptr_t*)L_18) = (intptr_t)L_20;
		goto IL_01c6;
	}

IL_00a0:
	{
		RuntimeArray * L_21 = V_0;
		intptr_t* L_22 = ___data2;
		void* L_23 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)((*(L_22))), /*hidden argument*/NULL);
		double L_24 = *((double*)L_23);
		double L_25 = L_24;
		RuntimeObject * L_26 = Box(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var, &L_25);
		int64_t L_27 = V_1;
		NullCheck(L_21);
		Array_SetValue_mD1677B396331152BA588E2EEF167F04E832F3849(L_21, L_26, L_27, /*hidden argument*/NULL);
		intptr_t* L_28 = ___data2;
		intptr_t* L_29 = ___data2;
		intptr_t L_30 = IntPtr_op_Addition_mD815D6B36C7DFA1F89481720D3D46A6484BB9644((intptr_t)((*(L_29))), 8, /*hidden argument*/NULL);
		*((intptr_t*)L_28) = (intptr_t)L_30;
		goto IL_01c6;
	}

IL_00c3:
	{
		RuntimeArray * L_31 = V_0;
		intptr_t* L_32 = ___data2;
		void* L_33 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)((*(L_32))), /*hidden argument*/NULL);
		int32_t L_34 = *((int32_t*)L_33);
		int32_t L_35 = L_34;
		RuntimeObject * L_36 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_35);
		int64_t L_37 = V_1;
		NullCheck(L_31);
		Array_SetValue_mD1677B396331152BA588E2EEF167F04E832F3849(L_31, L_36, L_37, /*hidden argument*/NULL);
		intptr_t* L_38 = ___data2;
		intptr_t* L_39 = ___data2;
		intptr_t L_40 = IntPtr_op_Addition_mD815D6B36C7DFA1F89481720D3D46A6484BB9644((intptr_t)((*(L_39))), 4, /*hidden argument*/NULL);
		*((intptr_t*)L_38) = (intptr_t)L_40;
		goto IL_01c6;
	}

IL_00e6:
	{
		RuntimeArray * L_41 = V_0;
		intptr_t* L_42 = ___data2;
		void* L_43 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)((*(L_42))), /*hidden argument*/NULL);
		int32_t L_44 = *((uint8_t*)L_43);
		uint8_t L_45 = ((uint8_t)L_44);
		RuntimeObject * L_46 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_45);
		int64_t L_47 = V_1;
		NullCheck(L_41);
		Array_SetValue_mD1677B396331152BA588E2EEF167F04E832F3849(L_41, L_46, L_47, /*hidden argument*/NULL);
		intptr_t* L_48 = ___data2;
		intptr_t* L_49 = ___data2;
		intptr_t L_50 = IntPtr_op_Addition_mD815D6B36C7DFA1F89481720D3D46A6484BB9644((intptr_t)((*(L_49))), 1, /*hidden argument*/NULL);
		*((intptr_t*)L_48) = (intptr_t)L_50;
		goto IL_01c6;
	}

IL_0109:
	{
		RuntimeArray * L_51 = V_0;
		intptr_t* L_52 = ___data2;
		void* L_53 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)((*(L_52))), /*hidden argument*/NULL);
		int32_t L_54 = *((int16_t*)L_53);
		int16_t L_55 = ((int16_t)L_54);
		RuntimeObject * L_56 = Box(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_il2cpp_TypeInfo_var, &L_55);
		int64_t L_57 = V_1;
		NullCheck(L_51);
		Array_SetValue_mD1677B396331152BA588E2EEF167F04E832F3849(L_51, L_56, L_57, /*hidden argument*/NULL);
		intptr_t* L_58 = ___data2;
		intptr_t* L_59 = ___data2;
		intptr_t L_60 = IntPtr_op_Addition_mD815D6B36C7DFA1F89481720D3D46A6484BB9644((intptr_t)((*(L_59))), 2, /*hidden argument*/NULL);
		*((intptr_t*)L_58) = (intptr_t)L_60;
		goto IL_01c6;
	}

IL_012c:
	{
		RuntimeArray * L_61 = V_0;
		intptr_t* L_62 = ___data2;
		void* L_63 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)((*(L_62))), /*hidden argument*/NULL);
		int32_t L_64 = *((int8_t*)L_63);
		int8_t L_65 = ((int8_t)L_64);
		RuntimeObject * L_66 = Box(SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_il2cpp_TypeInfo_var, &L_65);
		int64_t L_67 = V_1;
		NullCheck(L_61);
		Array_SetValue_mD1677B396331152BA588E2EEF167F04E832F3849(L_61, L_66, L_67, /*hidden argument*/NULL);
		intptr_t* L_68 = ___data2;
		intptr_t* L_69 = ___data2;
		intptr_t L_70 = IntPtr_op_Addition_mD815D6B36C7DFA1F89481720D3D46A6484BB9644((intptr_t)((*(L_69))), 1, /*hidden argument*/NULL);
		*((intptr_t*)L_68) = (intptr_t)L_70;
		goto IL_01c6;
	}

IL_014c:
	{
		RuntimeArray * L_71 = V_0;
		intptr_t* L_72 = ___data2;
		void* L_73 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)((*(L_72))), /*hidden argument*/NULL);
		int64_t L_74 = *((int64_t*)L_73);
		int64_t L_75 = L_74;
		RuntimeObject * L_76 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_75);
		int64_t L_77 = V_1;
		NullCheck(L_71);
		Array_SetValue_mD1677B396331152BA588E2EEF167F04E832F3849(L_71, L_76, L_77, /*hidden argument*/NULL);
		intptr_t* L_78 = ___data2;
		intptr_t* L_79 = ___data2;
		intptr_t L_80 = IntPtr_op_Addition_mD815D6B36C7DFA1F89481720D3D46A6484BB9644((intptr_t)((*(L_79))), 8, /*hidden argument*/NULL);
		*((intptr_t*)L_78) = (intptr_t)L_80;
		goto IL_01c6;
	}

IL_016c:
	{
		RuntimeArray * L_81 = V_0;
		intptr_t* L_82 = ___data2;
		void* L_83 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)((*(L_82))), /*hidden argument*/NULL);
		int32_t L_84 = *((uint8_t*)L_83);
		bool L_85 = ((bool)L_84);
		RuntimeObject * L_86 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_85);
		int64_t L_87 = V_1;
		NullCheck(L_81);
		Array_SetValue_mD1677B396331152BA588E2EEF167F04E832F3849(L_81, L_86, L_87, /*hidden argument*/NULL);
		intptr_t* L_88 = ___data2;
		intptr_t* L_89 = ___data2;
		intptr_t L_90 = IntPtr_op_Addition_mD815D6B36C7DFA1F89481720D3D46A6484BB9644((intptr_t)((*(L_89))), 1, /*hidden argument*/NULL);
		*((intptr_t*)L_88) = (intptr_t)L_90;
		goto IL_01c6;
	}

IL_018c:
	{
		RuntimeArray * L_91 = V_0;
		intptr_t* L_92 = ___data2;
		void* L_93 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)((*(L_92))), /*hidden argument*/NULL);
		Complex_tD3CA17E8417A543F2625EB352AC07C0209D85733  L_94 = (*(Complex_tD3CA17E8417A543F2625EB352AC07C0209D85733 *)L_93);
		RuntimeObject * L_95 = Box(Complex_tD3CA17E8417A543F2625EB352AC07C0209D85733_il2cpp_TypeInfo_var, &L_94);
		int64_t L_96 = V_1;
		NullCheck(L_91);
		Array_SetValue_mD1677B396331152BA588E2EEF167F04E832F3849(L_91, L_95, L_96, /*hidden argument*/NULL);
		intptr_t* L_97 = ___data2;
		intptr_t* L_98 = ___data2;
		uint32_t L_99 = sizeof(Complex_tD3CA17E8417A543F2625EB352AC07C0209D85733 );
		intptr_t L_100 = IntPtr_op_Addition_mD815D6B36C7DFA1F89481720D3D46A6484BB9644((intptr_t)((*(L_98))), L_99, /*hidden argument*/NULL);
		*((intptr_t*)L_97) = (intptr_t)L_100;
		goto IL_01c6;
	}

IL_01b5:
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_101 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_mEBAED0FCA8B8CCE7E96492474350BA35D14CF59C(L_101, _stringLiteral51DD139783B10775DE022FC5702FDDDDFBB923BB, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_101, NULL, TFTensor_FetchJaggedArray_m4482BFC2DD2EF569289C79711D5E62CDDCBA9703_RuntimeMethod_var);
	}

IL_01c0:
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_102 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_102, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_102, NULL, TFTensor_FetchJaggedArray_m4482BFC2DD2EF569289C79711D5E62CDDCBA9703_RuntimeMethod_var);
	}

IL_01c6:
	{
		int64_t L_103 = V_1;
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_103, (int64_t)(((int64_t)((int64_t)1)))));
	}

IL_01cb:
	{
		int64_t L_104 = V_1;
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_105 = ___shape3;
		int32_t L_106 = ___level4;
		NullCheck(L_105);
		int32_t L_107 = L_106;
		int64_t L_108 = (L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		if ((((int64_t)L_104) < ((int64_t)L_108)))
		{
			goto IL_0028;
		}
	}
	{
		goto IL_027f;
	}

IL_01da:
	{
		V_0 = (RuntimeArray *)NULL;
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_109 = ___shape3;
		int32_t L_110 = ___level4;
		NullCheck(L_109);
		int32_t L_111 = L_110;
		int64_t L_112 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		V_2 = L_112;
		int64_t L_113 = V_2;
		if ((((int64_t)L_113) >= ((int64_t)(((int64_t)((int64_t)((int32_t)2147483647LL)))))))
		{
			goto IL_0235;
		}
	}
	{
		int64_t L_114 = V_2;
		V_3 = (((int32_t)((int32_t)L_114)));
		V_4 = 0;
		goto IL_022e;
	}

IL_01f2:
	{
		Type_t * L_115 = ___t0;
		uint32_t L_116 = ___dt1;
		intptr_t* L_117 = ___data2;
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_118 = ___shape3;
		int32_t L_119 = ___level4;
		IL2CPP_RUNTIME_CLASS_INIT(TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88_il2cpp_TypeInfo_var);
		RuntimeObject * L_120 = TFTensor_FetchJaggedArray_m4482BFC2DD2EF569289C79711D5E62CDDCBA9703(L_115, L_116, (intptr_t*)L_117, L_118, ((int32_t)il2cpp_codegen_add((int32_t)L_119, (int32_t)1)), /*hidden argument*/NULL);
		V_5 = L_120;
		RuntimeArray * L_121 = V_0;
		if (L_121)
		{
			goto IL_021e;
		}
	}
	{
		RuntimeObject * L_122 = V_5;
		NullCheck(L_122);
		Type_t * L_123 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_122, /*hidden argument*/NULL);
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_124 = (Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F*)SZArrayNew(Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F_il2cpp_TypeInfo_var, (uint32_t)1);
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_125 = L_124;
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_126 = ___shape3;
		int32_t L_127 = ___level4;
		NullCheck(L_126);
		int32_t L_128 = L_127;
		int64_t L_129 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		NullCheck(L_125);
		(L_125)->SetAt(static_cast<il2cpp_array_size_t>(0), (int64_t)L_129);
		RuntimeArray * L_130 = Array_CreateInstance_m0C393096A042F32063355992913947CBE341E311(L_123, L_125, /*hidden argument*/NULL);
		V_0 = L_130;
	}

IL_021e:
	{
		RuntimeArray * L_131 = V_0;
		RuntimeObject * L_132 = V_5;
		int32_t L_133 = V_4;
		NullCheck(L_131);
		Array_SetValue_m3C6811CE9C45D1E461404B5D2FBD4EC1A054FDCA(L_131, L_132, L_133, /*hidden argument*/NULL);
		int32_t L_134 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_134, (int32_t)1));
	}

IL_022e:
	{
		int32_t L_135 = V_4;
		int32_t L_136 = V_3;
		if ((((int32_t)L_135) < ((int32_t)L_136)))
		{
			goto IL_01f2;
		}
	}
	{
		goto IL_027d;
	}

IL_0235:
	{
		V_6 = (((int64_t)((int64_t)0)));
		goto IL_0278;
	}

IL_023b:
	{
		Type_t * L_137 = ___t0;
		uint32_t L_138 = ___dt1;
		intptr_t* L_139 = ___data2;
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_140 = ___shape3;
		int32_t L_141 = ___level4;
		IL2CPP_RUNTIME_CLASS_INIT(TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88_il2cpp_TypeInfo_var);
		RuntimeObject * L_142 = TFTensor_FetchJaggedArray_m4482BFC2DD2EF569289C79711D5E62CDDCBA9703(L_137, L_138, (intptr_t*)L_139, L_140, ((int32_t)il2cpp_codegen_add((int32_t)L_141, (int32_t)1)), /*hidden argument*/NULL);
		V_7 = L_142;
		RuntimeArray * L_143 = V_0;
		if (L_143)
		{
			goto IL_0267;
		}
	}
	{
		RuntimeObject * L_144 = V_7;
		NullCheck(L_144);
		Type_t * L_145 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_144, /*hidden argument*/NULL);
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_146 = (Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F*)SZArrayNew(Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F_il2cpp_TypeInfo_var, (uint32_t)1);
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_147 = L_146;
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_148 = ___shape3;
		int32_t L_149 = ___level4;
		NullCheck(L_148);
		int32_t L_150 = L_149;
		int64_t L_151 = (L_148)->GetAt(static_cast<il2cpp_array_size_t>(L_150));
		NullCheck(L_147);
		(L_147)->SetAt(static_cast<il2cpp_array_size_t>(0), (int64_t)L_151);
		RuntimeArray * L_152 = Array_CreateInstance_m0C393096A042F32063355992913947CBE341E311(L_145, L_147, /*hidden argument*/NULL);
		V_0 = L_152;
	}

IL_0267:
	{
		RuntimeArray * L_153 = V_0;
		RuntimeObject * L_154 = V_7;
		int64_t L_155 = V_6;
		NullCheck(L_153);
		Array_SetValue_mD1677B396331152BA588E2EEF167F04E832F3849(L_153, L_154, L_155, /*hidden argument*/NULL);
		int64_t L_156 = V_6;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_156, (int64_t)(((int64_t)((int64_t)1)))));
	}

IL_0278:
	{
		int64_t L_157 = V_6;
		int64_t L_158 = V_2;
		if ((((int64_t)L_157) < ((int64_t)L_158)))
		{
			goto IL_023b;
		}
	}

IL_027d:
	{
		RuntimeArray * L_159 = V_0;
		return L_159;
	}

IL_027f:
	{
		RuntimeArray * L_160 = V_0;
		return L_160;
	}
}
// System.Void TensorFlow.TFTensor::FetchMultiDimensionalArray(System.Array,TensorFlow.TFDataType,System.IntPtr,System.Int64[])
extern "C" IL2CPP_METHOD_ATTR void TFTensor_FetchMultiDimensionalArray_mC4FD5C1FC31D9C7BC8AD64A8B65F9EBEEE1B5170 (RuntimeArray * ___target0, uint32_t ___dt1, intptr_t ___data2, Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* ___shape3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFTensor_FetchMultiDimensionalArray_mC4FD5C1FC31D9C7BC8AD64A8B65F9EBEEE1B5170_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_0 = ___shape3;
		NullCheck(L_0);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_1 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))));
		V_0 = L_1;
		V_1 = 0;
		goto IL_0027;
	}

IL_000d:
	{
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_2 = ___shape3;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int64_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		if ((((int64_t)L_5) <= ((int64_t)(((int64_t)((int64_t)((int32_t)2147483647LL)))))))
		{
			goto IL_0023;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_6 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_6, _stringLiteral4525236559D4671B97E7B29C50D4C97F0D16C2E2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, TFTensor_FetchMultiDimensionalArray_mC4FD5C1FC31D9C7BC8AD64A8B65F9EBEEE1B5170_RuntimeMethod_var);
	}

IL_0023:
	{
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0027:
	{
		int32_t L_8 = V_1;
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_9 = ___shape3;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))))))
		{
			goto IL_000d;
		}
	}
	{
		RuntimeArray * L_10 = ___target0;
		uint32_t L_11 = ___dt1;
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_12 = ___shape3;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88_il2cpp_TypeInfo_var);
		TFTensor_Copy_m1DE567298D80B0EE29619C114691D477725B7DE5(L_10, L_11, L_12, L_13, 0, (intptr_t*)(&___data2), /*hidden argument*/NULL);
		return;
	}
}
// System.Void TensorFlow.TFTensor::Copy(System.Array,TensorFlow.TFDataType,System.Int64[],System.Int32[],System.Int32,System.IntPtr&)
extern "C" IL2CPP_METHOD_ATTR void TFTensor_Copy_m1DE567298D80B0EE29619C114691D477725B7DE5 (RuntimeArray * ___target0, uint32_t ___dt1, Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* ___shape2, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___idx3, int32_t ___level4, intptr_t* ___data5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFTensor_Copy_m1DE567298D80B0EE29619C114691D477725B7DE5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___level4;
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_1 = ___shape2;
		NullCheck(L_1);
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))), (int32_t)1)))))
		{
			goto IL_0038;
		}
	}
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_2 = ___idx3;
		int32_t L_3 = ___level4;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (int32_t)0);
		goto IL_002c;
	}

IL_0010:
	{
		RuntimeArray * L_4 = ___target0;
		uint32_t L_5 = ___dt1;
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_6 = ___shape2;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_7 = ___idx3;
		int32_t L_8 = ___level4;
		intptr_t* L_9 = ___data5;
		IL2CPP_RUNTIME_CLASS_INIT(TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88_il2cpp_TypeInfo_var);
		TFTensor_Copy_m1DE567298D80B0EE29619C114691D477725B7DE5(L_4, L_5, L_6, L_7, ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)), (intptr_t*)L_9, /*hidden argument*/NULL);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_10 = ___idx3;
		int32_t L_11 = ___level4;
		NullCheck(L_10);
		int32_t* L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)));
		int32_t L_13 = *((int32_t*)L_12);
		*((int32_t*)L_12) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_002c:
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_14 = ___idx3;
		int32_t L_15 = ___level4;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_18 = ___shape2;
		int32_t L_19 = ___level4;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		int64_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		if ((((int64_t)(((int64_t)((int64_t)L_17)))) < ((int64_t)L_21)))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0038:
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_22 = ___idx3;
		int32_t L_23 = ___level4;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (int32_t)0);
		goto IL_020b;
	}

IL_0042:
	{
		uint32_t L_24 = ___dt1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0097;
			}
			case 1:
			{
				goto IL_00bd;
			}
			case 2:
			{
				goto IL_00e3;
			}
			case 3:
			{
				goto IL_0109;
			}
			case 4:
			{
				goto IL_012f;
			}
			case 5:
			{
				goto IL_0155;
			}
			case 6:
			{
				goto IL_01ed;
			}
			case 7:
			{
				goto IL_01f8;
			}
			case 8:
			{
				goto IL_017b;
			}
			case 9:
			{
				goto IL_019e;
			}
			case 10:
			{
				goto IL_01f8;
			}
			case 11:
			{
				goto IL_01f8;
			}
			case 12:
			{
				goto IL_01f8;
			}
			case 13:
			{
				goto IL_01f8;
			}
			case 14:
			{
				goto IL_01f8;
			}
			case 15:
			{
				goto IL_01f8;
			}
			case 16:
			{
				goto IL_01f8;
			}
			case 17:
			{
				goto IL_01c1;
			}
		}
	}
	{
		goto IL_01f8;
	}

IL_0097:
	{
		RuntimeArray * L_25 = ___target0;
		intptr_t* L_26 = ___data5;
		void* L_27 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)((*(L_26))), /*hidden argument*/NULL);
		float L_28 = *((float*)L_27);
		float L_29 = L_28;
		RuntimeObject * L_30 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_29);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_31 = ___idx3;
		NullCheck(L_25);
		Array_SetValue_m0480E07CF9A65B3C2B903CCBF5BAB94F93CF1380(L_25, L_30, L_31, /*hidden argument*/NULL);
		intptr_t* L_32 = ___data5;
		intptr_t* L_33 = ___data5;
		intptr_t L_34 = IntPtr_op_Addition_mD815D6B36C7DFA1F89481720D3D46A6484BB9644((intptr_t)((*(L_33))), 4, /*hidden argument*/NULL);
		*((intptr_t*)L_32) = (intptr_t)L_34;
		goto IL_01fe;
	}

IL_00bd:
	{
		RuntimeArray * L_35 = ___target0;
		intptr_t* L_36 = ___data5;
		void* L_37 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)((*(L_36))), /*hidden argument*/NULL);
		double L_38 = *((double*)L_37);
		double L_39 = L_38;
		RuntimeObject * L_40 = Box(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var, &L_39);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_41 = ___idx3;
		NullCheck(L_35);
		Array_SetValue_m0480E07CF9A65B3C2B903CCBF5BAB94F93CF1380(L_35, L_40, L_41, /*hidden argument*/NULL);
		intptr_t* L_42 = ___data5;
		intptr_t* L_43 = ___data5;
		intptr_t L_44 = IntPtr_op_Addition_mD815D6B36C7DFA1F89481720D3D46A6484BB9644((intptr_t)((*(L_43))), 8, /*hidden argument*/NULL);
		*((intptr_t*)L_42) = (intptr_t)L_44;
		goto IL_01fe;
	}

IL_00e3:
	{
		RuntimeArray * L_45 = ___target0;
		intptr_t* L_46 = ___data5;
		void* L_47 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)((*(L_46))), /*hidden argument*/NULL);
		int32_t L_48 = *((int32_t*)L_47);
		int32_t L_49 = L_48;
		RuntimeObject * L_50 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_49);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_51 = ___idx3;
		NullCheck(L_45);
		Array_SetValue_m0480E07CF9A65B3C2B903CCBF5BAB94F93CF1380(L_45, L_50, L_51, /*hidden argument*/NULL);
		intptr_t* L_52 = ___data5;
		intptr_t* L_53 = ___data5;
		intptr_t L_54 = IntPtr_op_Addition_mD815D6B36C7DFA1F89481720D3D46A6484BB9644((intptr_t)((*(L_53))), 4, /*hidden argument*/NULL);
		*((intptr_t*)L_52) = (intptr_t)L_54;
		goto IL_01fe;
	}

IL_0109:
	{
		RuntimeArray * L_55 = ___target0;
		intptr_t* L_56 = ___data5;
		void* L_57 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)((*(L_56))), /*hidden argument*/NULL);
		int32_t L_58 = *((uint8_t*)L_57);
		uint8_t L_59 = ((uint8_t)L_58);
		RuntimeObject * L_60 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_59);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_61 = ___idx3;
		NullCheck(L_55);
		Array_SetValue_m0480E07CF9A65B3C2B903CCBF5BAB94F93CF1380(L_55, L_60, L_61, /*hidden argument*/NULL);
		intptr_t* L_62 = ___data5;
		intptr_t* L_63 = ___data5;
		intptr_t L_64 = IntPtr_op_Addition_mD815D6B36C7DFA1F89481720D3D46A6484BB9644((intptr_t)((*(L_63))), 1, /*hidden argument*/NULL);
		*((intptr_t*)L_62) = (intptr_t)L_64;
		goto IL_01fe;
	}

IL_012f:
	{
		RuntimeArray * L_65 = ___target0;
		intptr_t* L_66 = ___data5;
		void* L_67 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)((*(L_66))), /*hidden argument*/NULL);
		int32_t L_68 = *((int16_t*)L_67);
		int16_t L_69 = ((int16_t)L_68);
		RuntimeObject * L_70 = Box(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_il2cpp_TypeInfo_var, &L_69);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_71 = ___idx3;
		NullCheck(L_65);
		Array_SetValue_m0480E07CF9A65B3C2B903CCBF5BAB94F93CF1380(L_65, L_70, L_71, /*hidden argument*/NULL);
		intptr_t* L_72 = ___data5;
		intptr_t* L_73 = ___data5;
		intptr_t L_74 = IntPtr_op_Addition_mD815D6B36C7DFA1F89481720D3D46A6484BB9644((intptr_t)((*(L_73))), 2, /*hidden argument*/NULL);
		*((intptr_t*)L_72) = (intptr_t)L_74;
		goto IL_01fe;
	}

IL_0155:
	{
		RuntimeArray * L_75 = ___target0;
		intptr_t* L_76 = ___data5;
		void* L_77 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)((*(L_76))), /*hidden argument*/NULL);
		int32_t L_78 = *((int8_t*)L_77);
		int8_t L_79 = ((int8_t)L_78);
		RuntimeObject * L_80 = Box(SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_il2cpp_TypeInfo_var, &L_79);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_81 = ___idx3;
		NullCheck(L_75);
		Array_SetValue_m0480E07CF9A65B3C2B903CCBF5BAB94F93CF1380(L_75, L_80, L_81, /*hidden argument*/NULL);
		intptr_t* L_82 = ___data5;
		intptr_t* L_83 = ___data5;
		intptr_t L_84 = IntPtr_op_Addition_mD815D6B36C7DFA1F89481720D3D46A6484BB9644((intptr_t)((*(L_83))), 1, /*hidden argument*/NULL);
		*((intptr_t*)L_82) = (intptr_t)L_84;
		goto IL_01fe;
	}

IL_017b:
	{
		RuntimeArray * L_85 = ___target0;
		intptr_t* L_86 = ___data5;
		void* L_87 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)((*(L_86))), /*hidden argument*/NULL);
		int64_t L_88 = *((int64_t*)L_87);
		int64_t L_89 = L_88;
		RuntimeObject * L_90 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_89);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_91 = ___idx3;
		NullCheck(L_85);
		Array_SetValue_m0480E07CF9A65B3C2B903CCBF5BAB94F93CF1380(L_85, L_90, L_91, /*hidden argument*/NULL);
		intptr_t* L_92 = ___data5;
		intptr_t* L_93 = ___data5;
		intptr_t L_94 = IntPtr_op_Addition_mD815D6B36C7DFA1F89481720D3D46A6484BB9644((intptr_t)((*(L_93))), 8, /*hidden argument*/NULL);
		*((intptr_t*)L_92) = (intptr_t)L_94;
		goto IL_01fe;
	}

IL_019e:
	{
		RuntimeArray * L_95 = ___target0;
		intptr_t* L_96 = ___data5;
		void* L_97 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)((*(L_96))), /*hidden argument*/NULL);
		int32_t L_98 = *((uint8_t*)L_97);
		bool L_99 = ((bool)L_98);
		RuntimeObject * L_100 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_99);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_101 = ___idx3;
		NullCheck(L_95);
		Array_SetValue_m0480E07CF9A65B3C2B903CCBF5BAB94F93CF1380(L_95, L_100, L_101, /*hidden argument*/NULL);
		intptr_t* L_102 = ___data5;
		intptr_t* L_103 = ___data5;
		intptr_t L_104 = IntPtr_op_Addition_mD815D6B36C7DFA1F89481720D3D46A6484BB9644((intptr_t)((*(L_103))), 1, /*hidden argument*/NULL);
		*((intptr_t*)L_102) = (intptr_t)L_104;
		goto IL_01fe;
	}

IL_01c1:
	{
		RuntimeArray * L_105 = ___target0;
		intptr_t* L_106 = ___data5;
		void* L_107 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)((*(L_106))), /*hidden argument*/NULL);
		Complex_tD3CA17E8417A543F2625EB352AC07C0209D85733  L_108 = (*(Complex_tD3CA17E8417A543F2625EB352AC07C0209D85733 *)L_107);
		RuntimeObject * L_109 = Box(Complex_tD3CA17E8417A543F2625EB352AC07C0209D85733_il2cpp_TypeInfo_var, &L_108);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_110 = ___idx3;
		NullCheck(L_105);
		Array_SetValue_m0480E07CF9A65B3C2B903CCBF5BAB94F93CF1380(L_105, L_109, L_110, /*hidden argument*/NULL);
		intptr_t* L_111 = ___data5;
		intptr_t* L_112 = ___data5;
		uint32_t L_113 = sizeof(Complex_tD3CA17E8417A543F2625EB352AC07C0209D85733 );
		intptr_t L_114 = IntPtr_op_Addition_mD815D6B36C7DFA1F89481720D3D46A6484BB9644((intptr_t)((*(L_112))), L_113, /*hidden argument*/NULL);
		*((intptr_t*)L_111) = (intptr_t)L_114;
		goto IL_01fe;
	}

IL_01ed:
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_115 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_mEBAED0FCA8B8CCE7E96492474350BA35D14CF59C(L_115, _stringLiteral51DD139783B10775DE022FC5702FDDDDFBB923BB, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_115, NULL, TFTensor_Copy_m1DE567298D80B0EE29619C114691D477725B7DE5_RuntimeMethod_var);
	}

IL_01f8:
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_116 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_116, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_116, NULL, TFTensor_Copy_m1DE567298D80B0EE29619C114691D477725B7DE5_RuntimeMethod_var);
	}

IL_01fe:
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_117 = ___idx3;
		int32_t L_118 = ___level4;
		NullCheck(L_117);
		int32_t* L_119 = ((L_117)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_118)));
		int32_t L_120 = *((int32_t*)L_119);
		*((int32_t*)L_119) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_120, (int32_t)1));
	}

IL_020b:
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_121 = ___idx3;
		int32_t L_122 = ___level4;
		NullCheck(L_121);
		int32_t L_123 = L_122;
		int32_t L_124 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_125 = ___shape2;
		int32_t L_126 = ___level4;
		NullCheck(L_125);
		int32_t L_127 = L_126;
		int64_t L_128 = (L_125)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		if ((((int64_t)(((int64_t)((int64_t)L_124)))) < ((int64_t)L_128)))
		{
			goto IL_0042;
		}
	}
	{
		return;
	}
}
// System.Object TensorFlow.TFTensor::GetValue(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * TFTensor_GetValue_m78B4D81C263F068C80646BEAA761C49393D4ADAD (TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88 * __this, bool ___jagged0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFTensor_GetValue_m78B4D81C263F068C80646BEAA761C49393D4ADAD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Type_t * V_1 = NULL;
	intptr_t V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		int32_t L_0 = TFTensor_get_NumDims_m4C10794F0E4E346F02F4BD1F185906314DB0B73A(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		uint32_t L_2 = TFTensor_get_TensorType_m5321B4DDACD52E9FC8A1A23056DC99A263E6B399(__this, /*hidden argument*/NULL);
		intptr_t L_3 = TFTensor_get_Data_m954A7E19A066DF3C0F0DAA59D94491A7A7C6761B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88_il2cpp_TypeInfo_var);
		RuntimeObject * L_4 = TFTensor_FetchSimple_m3DFE21914CA93A499A91D88F59A0EF73709C8377(L_2, (intptr_t)L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_001c:
	{
		uint32_t L_5 = TFTensor_get_TensorType_m5321B4DDACD52E9FC8A1A23056DC99A263E6B399(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88_il2cpp_TypeInfo_var);
		Type_t * L_6 = TFTensor_TypeFromTensorType_m44FC8A993EFD91FD797B34660065CE43213C1BCC(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		Type_t * L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_8 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_7, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0033;
		}
	}
	{
		return NULL;
	}

IL_0033:
	{
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_0061;
		}
	}
	{
		Type_t * L_10 = V_1;
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_11 = (Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F*)SZArrayNew(Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F_il2cpp_TypeInfo_var, (uint32_t)1);
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_12 = L_11;
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_13 = TFTensor_get_Shape_m7F14D085916C451BE8DE0967FC66B0656879F5D0(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		int32_t L_14 = 0;
		int64_t L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (int64_t)L_15);
		RuntimeArray * L_16 = Array_CreateInstance_m0C393096A042F32063355992913947CBE341E311(L_10, L_12, /*hidden argument*/NULL);
		RuntimeArray * L_17 = L_16;
		uint32_t L_18 = TFTensor_get_TensorType_m5321B4DDACD52E9FC8A1A23056DC99A263E6B399(__this, /*hidden argument*/NULL);
		intptr_t L_19 = TFTensor_get_Data_m954A7E19A066DF3C0F0DAA59D94491A7A7C6761B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88_il2cpp_TypeInfo_var);
		TFTensor_FetchFlatArray_mD1BB9691E8A1FF44CF524C798B021EBE62340E9C(L_17, L_18, (intptr_t)L_19, /*hidden argument*/NULL);
		return L_17;
	}

IL_0061:
	{
		bool L_20 = ___jagged0;
		if (!L_20)
		{
			goto IL_0081;
		}
	}
	{
		intptr_t L_21 = TFTensor_get_Data_m954A7E19A066DF3C0F0DAA59D94491A7A7C6761B(__this, /*hidden argument*/NULL);
		V_2 = (intptr_t)L_21;
		Type_t * L_22 = V_1;
		uint32_t L_23 = TFTensor_get_TensorType_m5321B4DDACD52E9FC8A1A23056DC99A263E6B399(__this, /*hidden argument*/NULL);
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_24 = TFTensor_get_Shape_m7F14D085916C451BE8DE0967FC66B0656879F5D0(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88_il2cpp_TypeInfo_var);
		RuntimeObject * L_25 = TFTensor_FetchJaggedArray_m4482BFC2DD2EF569289C79711D5E62CDDCBA9703(L_22, L_23, (intptr_t*)(&V_2), L_24, 0, /*hidden argument*/NULL);
		return L_25;
	}

IL_0081:
	{
		Type_t * L_26 = V_1;
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_27 = TFTensor_get_Shape_m7F14D085916C451BE8DE0967FC66B0656879F5D0(__this, /*hidden argument*/NULL);
		RuntimeArray * L_28 = Array_CreateInstance_m0C393096A042F32063355992913947CBE341E311(L_26, L_27, /*hidden argument*/NULL);
		RuntimeArray * L_29 = L_28;
		uint32_t L_30 = TFTensor_get_TensorType_m5321B4DDACD52E9FC8A1A23056DC99A263E6B399(__this, /*hidden argument*/NULL);
		intptr_t L_31 = TFTensor_get_Data_m954A7E19A066DF3C0F0DAA59D94491A7A7C6761B(__this, /*hidden argument*/NULL);
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_32 = TFTensor_get_Shape_m7F14D085916C451BE8DE0967FC66B0656879F5D0(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88_il2cpp_TypeInfo_var);
		TFTensor_FetchMultiDimensionalArray_mC4FD5C1FC31D9C7BC8AD64A8B65F9EBEEE1B5170(L_29, L_30, (intptr_t)L_31, L_32, /*hidden argument*/NULL);
		return L_29;
	}
}
// System.String TensorFlow.TFTensor::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* TFTensor_ToString_m01099B3713FC4924F5B11EEA63AF1D400333EAD0 (TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFTensor_ToString_m01099B3713FC4924F5B11EEA63AF1D400333EAD0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StringBuilder_t * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = TFTensor_get_NumDims_m4C10794F0E4E346F02F4BD1F185906314DB0B73A(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject * L_2 = TFTensor_GetValue_m78B4D81C263F068C80646BEAA761C49393D4ADAD(__this, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		return L_3;
	}

IL_0017:
	{
		StringBuilder_t * L_4 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m53E278FB62B3EAEFAF82890C97219B9B5E2A56C3(L_4, _stringLiteral1E5C2F367F02E47A8C160CDA1CD9D91DECBAC441, /*hidden argument*/NULL);
		V_1 = L_4;
		V_2 = 0;
		goto IL_004f;
	}

IL_0026:
	{
		StringBuilder_t * L_5 = V_1;
		intptr_t L_6 = ((TFDisposable_tEA52A9CFC3B97B1B38C7F4E1E4A5A2FBEB76598F *)__this)->get_handle_0();
		int32_t L_7 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88_il2cpp_TypeInfo_var);
		int64_t L_8 = TFTensor_TF_Dim_m4EC774170C9DE6E9A1D91DB3FB48C4374D20F1D7((intptr_t)L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		StringBuilder_Append_mB2B8807F92F9A75140DC4E431FC1B054FC5C0AA9(L_5, L_8, /*hidden argument*/NULL);
		int32_t L_9 = V_2;
		int32_t L_10 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1))) >= ((int32_t)L_10)))
		{
			goto IL_004b;
		}
	}
	{
		StringBuilder_t * L_11 = V_1;
		NullCheck(L_11);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_11, _stringLiteral11F6AD8EC52A2984ABAAFD7C3B516503785C2072, /*hidden argument*/NULL);
	}

IL_004b:
	{
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_004f:
	{
		int32_t L_13 = V_2;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0026;
		}
	}
	{
		StringBuilder_t * L_15 = V_1;
		NullCheck(L_15);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_15, _stringLiteral4FF447B8EF42CA51FA6FB287BED8D40F49BE58F1, /*hidden argument*/NULL);
		StringBuilder_t * L_16 = V_1;
		NullCheck(L_16);
		String_t* L_17 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_16);
		return L_17;
	}
}
// System.Void TensorFlow.TFTensor::.cctor()
extern "C" IL2CPP_METHOD_ATTR void TFTensor__cctor_m9994C16032DB9BAB229E073FF01B439F478ADA1C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TFTensor__cctor_m9994C16032DB9BAB229E073FF01B439F478ADA1C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Deallocator_t872E4BEF7439B64305100113566B7EBB163ABCAE * L_0 = (Deallocator_t872E4BEF7439B64305100113566B7EBB163ABCAE *)il2cpp_codegen_object_new(Deallocator_t872E4BEF7439B64305100113566B7EBB163ABCAE_il2cpp_TypeInfo_var);
		Deallocator__ctor_mFC215FCE1F33D9B0DE160B4AD80F2C927E203729(L_0, NULL, (intptr_t)((intptr_t)TFTensor_FreeTensorData_m359E94CFB8A95A9FDB1C82B17A8E3D7C03219106_RuntimeMethod_var), /*hidden argument*/NULL);
		((TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88_StaticFields*)il2cpp_codegen_static_fields_for(TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88_il2cpp_TypeInfo_var))->set_FreeTensorDataDelegate_1(L_0);
		Deallocator_t872E4BEF7439B64305100113566B7EBB163ABCAE * L_1 = (Deallocator_t872E4BEF7439B64305100113566B7EBB163ABCAE *)il2cpp_codegen_object_new(Deallocator_t872E4BEF7439B64305100113566B7EBB163ABCAE_il2cpp_TypeInfo_var);
		Deallocator__ctor_mFC215FCE1F33D9B0DE160B4AD80F2C927E203729(L_1, NULL, (intptr_t)((intptr_t)TFTensor_FreeTensorHandle_m1D03288399D54E806A169E8BB5D867BB3A634002_RuntimeMethod_var), /*hidden argument*/NULL);
		((TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88_StaticFields*)il2cpp_codegen_static_fields_for(TFTensor_t43C760C30B7777469BE6ABF48ACB2C2264329C88_il2cpp_TypeInfo_var))->set_FreeTensorHandleDelegate_2(L_1);
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
extern "C"  void DelegatePInvokeWrapper_Deallocator_t872E4BEF7439B64305100113566B7EBB163ABCAE (Deallocator_t872E4BEF7439B64305100113566B7EBB163ABCAE * __this, intptr_t ___data0, intptr_t ___size1, intptr_t ___deallocatorData2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___data0, ___size1, ___deallocatorData2);

}
// System.Void TensorFlow.TFTensor/Deallocator::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Deallocator__ctor_mFC215FCE1F33D9B0DE160B4AD80F2C927E203729 (Deallocator_t872E4BEF7439B64305100113566B7EBB163ABCAE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void TensorFlow.TFTensor/Deallocator::Invoke(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Deallocator_Invoke_mF7A7B8E51970B25D110C49FF12E3B72BDA486B6D (Deallocator_t872E4BEF7439B64305100113566B7EBB163ABCAE * __this, intptr_t ___data0, intptr_t ___size1, intptr_t ___deallocatorData2, const RuntimeMethod* method)
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
				if (___parameterCount == 3)
				{
					// open
					typedef void (*FunctionPointerType) (intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___data0, ___size1, ___deallocatorData2, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, ___size1, ___deallocatorData2, targetMethod);
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
							typedef void (*FunctionPointerType) (intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___data0, ___size1, ___deallocatorData2, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___data0, ___size1, ___deallocatorData2);
							else
								GenericVirtActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___data0, ___size1, ___deallocatorData2);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___data0, ___size1, ___deallocatorData2);
							else
								VirtActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___data0, ___size1, ___deallocatorData2);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, ___size1, ___deallocatorData2, targetMethod);
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
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___data0, ___size1, ___deallocatorData2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, ___size1, ___deallocatorData2, targetMethod);
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
						typedef void (*FunctionPointerType) (intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___data0, ___size1, ___deallocatorData2, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___data0, ___size1, ___deallocatorData2);
						else
							GenericVirtActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___data0, ___size1, ___deallocatorData2);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___data0, ___size1, ___deallocatorData2);
						else
							VirtActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___data0, ___size1, ___deallocatorData2);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, ___size1, ___deallocatorData2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult TensorFlow.TFTensor/Deallocator::BeginInvoke(System.IntPtr,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Deallocator_BeginInvoke_m5CFBF15B8E645E051D36D20475FA47A87E51F2AE (Deallocator_t872E4BEF7439B64305100113566B7EBB163ABCAE * __this, intptr_t ___data0, intptr_t ___size1, intptr_t ___deallocatorData2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Deallocator_BeginInvoke_m5CFBF15B8E645E051D36D20475FA47A87E51F2AE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___data0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___size1);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___deallocatorData2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void TensorFlow.TFTensor/Deallocator::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void Deallocator_EndInvoke_mF337751643DF9D758E544848CD64A72CAE069F9D (Deallocator_t872E4BEF7439B64305100113566B7EBB163ABCAE * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
