﻿#include "il2cpp-config.h"

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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// Mono.Security.ASN1
struct ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E;
// Mono.Security.Cryptography.DSAManaged
struct DSAManaged_tB329E8EFCE56CF874A8EEAC16BEAC13146F47FEA;
// Mono.Security.Cryptography.KeyPairPersistence
struct KeyPairPersistence_t5C070E8D158094F7D0CC5D591F30EDFFB39849A2;
// Mono.Security.Cryptography.RSAManaged
struct RSAManaged_t7FC74A986C888D9301EC82EBE4A37C293CDA963A;
// Mono.Security.X509.SafeBag
struct SafeBag_t46FE0281DC1D6CAB5FD08FCDB3E57C2EA1859726;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A;
// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator
struct X509CertificateEnumerator_t1CBC050F10F4BE1E2A8552A1F22E705013EBF505;
// Mono.Security.X509.X509Extension
struct X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19;
// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.ArrayList
struct ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4;
// System.Collections.CollectionBase
struct CollectionBase_tF5D4583FF325726066A9803839A04E9C0084ED01;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB;
// System.Collections.Hashtable
struct Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.Globalization.Calendar
struct Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB;
// System.Globalization.CompareInfo
struct CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1;
// System.Globalization.CultureData
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD;
// System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8;
// System.Globalization.TextInfo
struct TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8;
// System.IFormatProvider
struct IFormatProvider_t4247E13AE2D97A079B88D594B7ABABF313259901;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_tC3280D64D358F47EA4DAF1A65609BA0FC081888A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26;
// System.Security.Cryptography.CryptographicException
struct CryptographicException_t67ABE4FAB48298C9DF4C5E37E4C8F20AA601F15A;
// System.Security.Cryptography.DSA
struct DSA_t932F4A94DD2B782BFFC197544398826E6CDB64CF;
// System.Security.Cryptography.DSACryptoServiceProvider
struct DSACryptoServiceProvider_t2F04D5DDEC979A82A4FE89530F0F712DFE12D6C8;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t934CCA482596402177BAF86727F169872D74934E;
// System.Security.Cryptography.RSA
struct RSA_tB6C4B434B2AC02E3F8981DB2908C2018E251D145;
// System.Security.Cryptography.RSACryptoServiceProvider
struct RSACryptoServiceProvider_t6DC0FC3205BA6CDCA4FF2AEEF566D8F0CCE26AD4;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.DecoderFallback
struct DecoderFallback_t128445EB7676870485230893338EF044F6B72F60;
// System.Text.EncoderFallback
struct EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;

extern RuntimeClass* ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
extern RuntimeClass* ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var;
extern RuntimeClass* CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var;
extern RuntimeClass* Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var;
extern RuntimeClass* CryptographicException_t67ABE4FAB48298C9DF4C5E37E4C8F20AA601F15A_il2cpp_TypeInfo_var;
extern RuntimeClass* CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var;
extern RuntimeClass* DSACryptoServiceProvider_t2F04D5DDEC979A82A4FE89530F0F712DFE12D6C8_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
extern RuntimeClass* RSACryptoServiceProvider_t6DC0FC3205BA6CDCA4FF2AEEF566D8F0CCE26AD4_il2cpp_TypeInfo_var;
extern RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern RuntimeClass* X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_il2cpp_TypeInfo_var;
extern RuntimeClass* X509CertificateEnumerator_t1CBC050F10F4BE1E2A8552A1F22E705013EBF505_il2cpp_TypeInfo_var;
extern RuntimeClass* X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B_il2cpp_TypeInfo_var;
extern RuntimeClass* X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19_il2cpp_TypeInfo_var;
extern RuntimeClass* X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF_il2cpp_TypeInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA____12D04472A8285260EA12FD3813CDFA9F2D2B548C_0_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA____13A35EF1A549297C70E2AD46045BBD2ECA17852D_1_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA____1A84029C80CB5518379F199F53FF08A7B764F8FD_3_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA____235D99572263B22ADFEE10FDA0C25E12F4D94FFC_4_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA____2D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_5_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA____3E3442C7396F3F2BB4C7348F4A2074C7DC677D68_7_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA____56DFA5053B3131883637F53219E7D88CCEF35949_9_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA____6D49C9D487D7AD3491ECE08732D68A593CC2038D_10_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA____736D39815215889F11249D9958F6ED12D37B9F57_13_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA____86F4F563FA2C61798AE6238D789139739428463A_14_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA____97FB30C84FF4A41CD4625B44B2940BFC8DB43003_15_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA____9BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_17_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA____A323DB0813C4D072957BA6FDA79D9776674CD06B_18_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA____BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_21_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA____EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_26_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA____EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_27_FieldInfo_var;
extern String_t* _stringLiteral019A3223E819F9804E2A27B7FED3A7D841457746;
extern String_t* _stringLiteral088FB1A4AB057F4FCF7D487006499060C7FE5773;
extern String_t* _stringLiteral09064C8431C9942F09D36EE43DACB440E8B42B8F;
extern String_t* _stringLiteral099600A10A944114AAC406D136B625FB416DD779;
extern String_t* _stringLiteral0F55C3EB87ABA7E522BE619EF498B24F3B66D357;
extern String_t* _stringLiteral21606782C65E44CAC7AFBB90977D8B6F82140E76;
extern String_t* _stringLiteral28B3D69739B57CAF199F039988DB6DFEA93AC5CE;
extern String_t* _stringLiteral2ACE62C1BEFA19E3EA37DD52BE9F6D508C5163E6;
extern String_t* _stringLiteral2DA88E03A81D77B573503F53B6D5FF0C6CFAD459;
extern String_t* _stringLiteral36DC074F734611AC43ECA91F89189DB7BF0C9C20;
extern String_t* _stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727;
extern String_t* _stringLiteral3D40DBB928A5C7B5821BA584FE0E47297DFAA72C;
extern String_t* _stringLiteral4D01C38D447D39747350F6F29B3DC073CF36EB69;
extern String_t* _stringLiteral4EDE3DBE3842E4E897B27DE36AB7E2BA1F056615;
extern String_t* _stringLiteral5E930233E7755E8AABF4429C153DFCE37500C051;
extern String_t* _stringLiteral69B85846222F763F537AAE189724E50D8A16971F;
extern String_t* _stringLiteral7B152A24BBC8DB09B568453879784A9FBD2A9FFC;
extern String_t* _stringLiteral8D357A0A6981BFB00B37DF4E165A0DBFB637E034;
extern String_t* _stringLiteral93E119B1853ED8810093C33F265CF1B1A0A6B1A2;
extern String_t* _stringLiteral9F792B61D0EC544D91E7AFF34E2E99EE3CF2B313;
extern String_t* _stringLiteralA79BB3C5466E1747E27A4D48E271565C77423F5C;
extern String_t* _stringLiteralAAF41204BECC9AE2723473273563ACB861046064;
extern String_t* _stringLiteralAF3660C744976107BED8FC205296D903AFBCF8D5;
extern String_t* _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6;
extern String_t* _stringLiteralB906B1C4E8EC693BD44787748A9C6EB47D96A6F3;
extern String_t* _stringLiteralB9D719400551A68010930DED96BD8F5C0A8FFE51;
extern String_t* _stringLiteralCDA87E8FAD2300F90D5D664EDD42E9364EDDB3D1;
extern String_t* _stringLiteralCE15802A8C5E8E9DB0FFAF10130EF265296E9EA4;
extern String_t* _stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46;
extern String_t* _stringLiteralF2507A133F1CDD66D4A6B0DC9A0A6F4558D39AB7;
extern String_t* _stringLiteralF32B67C7E26342AF42EFABC674D441DCA0A281C5;
extern String_t* _stringLiteralF4A57516EE55A1A8F06B82FEAA340CC2841AB009;
extern String_t* _stringLiteralFAE7183D72E2D922886D89549E9DC0AA31A04226;
extern String_t* _stringLiteralFD916A733B7A811CD35B7057C8AF918C5FA637EB;
extern String_t* _stringLiteralFFD87CEDA20B4534B76315088FAE09B20B741846;
extern const RuntimeMethod* Array_Reverse_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mC6D04DB36698F31262134DEEF6B9C03026200F13_RuntimeMethod_var;
extern const RuntimeMethod* X509CertificateCollection_Add_mC060190867D9C5D182236A313FE912DFCCE1F785_RuntimeMethod_var;
extern const RuntimeMethod* X509Certificate_Parse_m5CB2F316EC4BC08A3714213C103E3C8689F2E8E0_RuntimeMethod_var;
extern const RuntimeMethod* X509Certificate__ctor_mE2BC6649D450A36E902A2D6BEB50C49130411129_RuntimeMethod_var;
extern const RuntimeMethod* X509Certificate_get_DSA_m7C3868DFAC7C067D09A324C348D7461D70E10F7F_RuntimeMethod_var;
extern const RuntimeMethod* X509ExtensionCollection__ctor_mE4744D19F24BBC5F7FE1EE171FD5C301B38A9662_RuntimeMethod_var;
extern const RuntimeMethod* X509Extension__ctor_mDEE4DCDDDD91D3C1DD2FDF3D793AD447D86C4F37_RuntimeMethod_var;
extern const uint32_t X501_AppendEntry_m4309ECCC58A9C96B7039249F97E9020963C6C630_MetadataUsageId;
extern const uint32_t X501_ToString_m4BB9988001C8AA907F7FB24BF0062158B10F6000_MetadataUsageId;
extern const uint32_t X501_ToString_mE788B3F7AB241FD8F736D7FACE2ABF10C8023132_MetadataUsageId;
extern const uint32_t X501__cctor_mE908E9BDA852AB25BFF1244017919DE3DBA44D4C_MetadataUsageId;
extern const uint32_t X509CertificateCollection_Add_mC060190867D9C5D182236A313FE912DFCCE1F785_MetadataUsageId;
extern const uint32_t X509CertificateCollection_GetEnumerator_mE786AA0C41503620161D81E4D9172932564BAB4C_MetadataUsageId;
extern const uint32_t X509CertificateCollection_get_Item_m158B7010FAC060435225725336AD53D2B3CC5359_MetadataUsageId;
extern const uint32_t X509CertificateEnumerator_MoveNext_m9E88A7C9685146F7E558267D7D828711C5E898F4_MetadataUsageId;
extern const uint32_t X509CertificateEnumerator_System_Collections_IEnumerator_MoveNext_m5A4EC92045952FE946B64B22EF2AB3B819E7F7F9_MetadataUsageId;
extern const uint32_t X509CertificateEnumerator_System_Collections_IEnumerator_Reset_m0DC0B0E3F02675E4815703748AAD8E7F9277ED75_MetadataUsageId;
extern const uint32_t X509CertificateEnumerator_System_Collections_IEnumerator_get_Current_mC3AF6C0A357F9080FF968652C79701F0B5878BD3_MetadataUsageId;
extern const uint32_t X509CertificateEnumerator__ctor_m6D622EC72DC9F698B6674D0D940C9BE62DD9AB68_MetadataUsageId;
extern const uint32_t X509CertificateEnumerator_get_Current_m68306EF52C95B315E36054119C0422ACAF95C09F_MetadataUsageId;
extern const uint32_t X509Certificate_GetObjectData_m208AB9EAADD6CD1FD5C585012572572B32600D1F_MetadataUsageId;
extern const uint32_t X509Certificate_GetUnsignedBigInteger_mD00F44BA5EC7109B54BB43083AC1BB9F531C0FDD_MetadataUsageId;
extern const uint32_t X509Certificate_PEM_m1C6DE4765B36C1EE23F33E74F1E10609004C9CE2_MetadataUsageId;
extern const uint32_t X509Certificate_Parse_m5CB2F316EC4BC08A3714213C103E3C8689F2E8E0_MetadataUsageId;
extern const uint32_t X509Certificate__cctor_mF0876223092F847F21251E6A6347AEA3E61C3763_MetadataUsageId;
extern const uint32_t X509Certificate__ctor_mE2BC6649D450A36E902A2D6BEB50C49130411129_MetadataUsageId;
extern const uint32_t X509Certificate_get_DSA_m7C3868DFAC7C067D09A324C348D7461D70E10F7F_MetadataUsageId;
extern const uint32_t X509Certificate_get_KeyAlgorithmParameters_mBAB6E750097D8F9E4607E8CD14CF3B4DF9DF3D0B_MetadataUsageId;
extern const uint32_t X509Certificate_get_PublicKey_mC506F699EDCF690B6B7FFF4DA4F7A11C47688E30_MetadataUsageId;
extern const uint32_t X509Certificate_get_RSA_mE0259FE7B339032FDEA29171D3866F176E1D06B8_MetadataUsageId;
extern const uint32_t X509Certificate_get_RawData_m6C746AB63B60A13BC37E9E8A9B9C649EE9BF0F74_MetadataUsageId;
extern const uint32_t X509Certificate_get_SerialNumber_mFCB78C242B8CA78F6813753022856056FFC48859_MetadataUsageId;
extern const uint32_t X509ExtensionCollection__ctor_mE4744D19F24BBC5F7FE1EE171FD5C301B38A9662_MetadataUsageId;
extern const uint32_t X509Extension_Equals_m142690BDE93BA49B3EF04CDF1F14A51D274F38FD_MetadataUsageId;
extern const uint32_t X509Extension_ToString_m6E272E5A762E6CC4AE476A5AF8627D164308C3A5_MetadataUsageId;
extern const uint32_t X509Extension_WriteLine_m3C538A06F19ABFD9F3BC9F531C8CA96329E8EFF2_MetadataUsageId;
extern const uint32_t X509Extension__ctor_mDEE4DCDDDD91D3C1DD2FDF3D793AD447D86C4F37_MetadataUsageId;
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_com;
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_pinvoke;
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com;
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;


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
#ifndef ASN1_T2B883D12D3493F8395B31D1F0ABD93F43948B27E_H
#define ASN1_T2B883D12D3493F8395B31D1F0ABD93F43948B27E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.ASN1
struct  ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E  : public RuntimeObject
{
public:
	// System.Byte Mono.Security.ASN1::m_nTag
	uint8_t ___m_nTag_0;
	// System.Byte[] Mono.Security.ASN1::m_aValue
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___m_aValue_1;
	// System.Collections.ArrayList Mono.Security.ASN1::elist
	ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * ___elist_2;

public:
	inline static int32_t get_offset_of_m_nTag_0() { return static_cast<int32_t>(offsetof(ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E, ___m_nTag_0)); }
	inline uint8_t get_m_nTag_0() const { return ___m_nTag_0; }
	inline uint8_t* get_address_of_m_nTag_0() { return &___m_nTag_0; }
	inline void set_m_nTag_0(uint8_t value)
	{
		___m_nTag_0 = value;
	}

	inline static int32_t get_offset_of_m_aValue_1() { return static_cast<int32_t>(offsetof(ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E, ___m_aValue_1)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_m_aValue_1() const { return ___m_aValue_1; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_m_aValue_1() { return &___m_aValue_1; }
	inline void set_m_aValue_1(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___m_aValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_aValue_1), value);
	}

	inline static int32_t get_offset_of_elist_2() { return static_cast<int32_t>(offsetof(ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E, ___elist_2)); }
	inline ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * get_elist_2() const { return ___elist_2; }
	inline ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 ** get_address_of_elist_2() { return &___elist_2; }
	inline void set_elist_2(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * value)
	{
		___elist_2 = value;
		Il2CppCodeGenWriteBarrier((&___elist_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASN1_T2B883D12D3493F8395B31D1F0ABD93F43948B27E_H
#ifndef SAFEBAG_T46FE0281DC1D6CAB5FD08FCDB3E57C2EA1859726_H
#define SAFEBAG_T46FE0281DC1D6CAB5FD08FCDB3E57C2EA1859726_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.SafeBag
struct  SafeBag_t46FE0281DC1D6CAB5FD08FCDB3E57C2EA1859726  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.SafeBag::_bagOID
	String_t* ____bagOID_0;
	// Mono.Security.ASN1 Mono.Security.X509.SafeBag::_asn1
	ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * ____asn1_1;

public:
	inline static int32_t get_offset_of__bagOID_0() { return static_cast<int32_t>(offsetof(SafeBag_t46FE0281DC1D6CAB5FD08FCDB3E57C2EA1859726, ____bagOID_0)); }
	inline String_t* get__bagOID_0() const { return ____bagOID_0; }
	inline String_t** get_address_of__bagOID_0() { return &____bagOID_0; }
	inline void set__bagOID_0(String_t* value)
	{
		____bagOID_0 = value;
		Il2CppCodeGenWriteBarrier((&____bagOID_0), value);
	}

	inline static int32_t get_offset_of__asn1_1() { return static_cast<int32_t>(offsetof(SafeBag_t46FE0281DC1D6CAB5FD08FCDB3E57C2EA1859726, ____asn1_1)); }
	inline ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * get__asn1_1() const { return ____asn1_1; }
	inline ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E ** get_address_of__asn1_1() { return &____asn1_1; }
	inline void set__asn1_1(ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * value)
	{
		____asn1_1 = value;
		Il2CppCodeGenWriteBarrier((&____asn1_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEBAG_T46FE0281DC1D6CAB5FD08FCDB3E57C2EA1859726_H
#ifndef X501_TA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_H
#define X501_TA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X501
struct  X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F  : public RuntimeObject
{
public:

public:
};

struct X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_StaticFields
{
public:
	// System.Byte[] Mono.Security.X509.X501::countryName
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___countryName_0;
	// System.Byte[] Mono.Security.X509.X501::organizationName
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___organizationName_1;
	// System.Byte[] Mono.Security.X509.X501::organizationalUnitName
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___organizationalUnitName_2;
	// System.Byte[] Mono.Security.X509.X501::commonName
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___commonName_3;
	// System.Byte[] Mono.Security.X509.X501::localityName
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___localityName_4;
	// System.Byte[] Mono.Security.X509.X501::stateOrProvinceName
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___stateOrProvinceName_5;
	// System.Byte[] Mono.Security.X509.X501::streetAddress
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___streetAddress_6;
	// System.Byte[] Mono.Security.X509.X501::domainComponent
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___domainComponent_7;
	// System.Byte[] Mono.Security.X509.X501::userid
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___userid_8;
	// System.Byte[] Mono.Security.X509.X501::email
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___email_9;
	// System.Byte[] Mono.Security.X509.X501::dnQualifier
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___dnQualifier_10;
	// System.Byte[] Mono.Security.X509.X501::title
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___title_11;
	// System.Byte[] Mono.Security.X509.X501::surname
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___surname_12;
	// System.Byte[] Mono.Security.X509.X501::givenName
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___givenName_13;
	// System.Byte[] Mono.Security.X509.X501::initial
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___initial_14;

public:
	inline static int32_t get_offset_of_countryName_0() { return static_cast<int32_t>(offsetof(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_StaticFields, ___countryName_0)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_countryName_0() const { return ___countryName_0; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_countryName_0() { return &___countryName_0; }
	inline void set_countryName_0(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___countryName_0 = value;
		Il2CppCodeGenWriteBarrier((&___countryName_0), value);
	}

	inline static int32_t get_offset_of_organizationName_1() { return static_cast<int32_t>(offsetof(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_StaticFields, ___organizationName_1)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_organizationName_1() const { return ___organizationName_1; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_organizationName_1() { return &___organizationName_1; }
	inline void set_organizationName_1(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___organizationName_1 = value;
		Il2CppCodeGenWriteBarrier((&___organizationName_1), value);
	}

	inline static int32_t get_offset_of_organizationalUnitName_2() { return static_cast<int32_t>(offsetof(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_StaticFields, ___organizationalUnitName_2)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_organizationalUnitName_2() const { return ___organizationalUnitName_2; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_organizationalUnitName_2() { return &___organizationalUnitName_2; }
	inline void set_organizationalUnitName_2(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___organizationalUnitName_2 = value;
		Il2CppCodeGenWriteBarrier((&___organizationalUnitName_2), value);
	}

	inline static int32_t get_offset_of_commonName_3() { return static_cast<int32_t>(offsetof(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_StaticFields, ___commonName_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_commonName_3() const { return ___commonName_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_commonName_3() { return &___commonName_3; }
	inline void set_commonName_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___commonName_3 = value;
		Il2CppCodeGenWriteBarrier((&___commonName_3), value);
	}

	inline static int32_t get_offset_of_localityName_4() { return static_cast<int32_t>(offsetof(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_StaticFields, ___localityName_4)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_localityName_4() const { return ___localityName_4; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_localityName_4() { return &___localityName_4; }
	inline void set_localityName_4(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___localityName_4 = value;
		Il2CppCodeGenWriteBarrier((&___localityName_4), value);
	}

	inline static int32_t get_offset_of_stateOrProvinceName_5() { return static_cast<int32_t>(offsetof(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_StaticFields, ___stateOrProvinceName_5)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_stateOrProvinceName_5() const { return ___stateOrProvinceName_5; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_stateOrProvinceName_5() { return &___stateOrProvinceName_5; }
	inline void set_stateOrProvinceName_5(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___stateOrProvinceName_5 = value;
		Il2CppCodeGenWriteBarrier((&___stateOrProvinceName_5), value);
	}

	inline static int32_t get_offset_of_streetAddress_6() { return static_cast<int32_t>(offsetof(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_StaticFields, ___streetAddress_6)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_streetAddress_6() const { return ___streetAddress_6; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_streetAddress_6() { return &___streetAddress_6; }
	inline void set_streetAddress_6(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___streetAddress_6 = value;
		Il2CppCodeGenWriteBarrier((&___streetAddress_6), value);
	}

	inline static int32_t get_offset_of_domainComponent_7() { return static_cast<int32_t>(offsetof(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_StaticFields, ___domainComponent_7)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_domainComponent_7() const { return ___domainComponent_7; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_domainComponent_7() { return &___domainComponent_7; }
	inline void set_domainComponent_7(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___domainComponent_7 = value;
		Il2CppCodeGenWriteBarrier((&___domainComponent_7), value);
	}

	inline static int32_t get_offset_of_userid_8() { return static_cast<int32_t>(offsetof(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_StaticFields, ___userid_8)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_userid_8() const { return ___userid_8; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_userid_8() { return &___userid_8; }
	inline void set_userid_8(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___userid_8 = value;
		Il2CppCodeGenWriteBarrier((&___userid_8), value);
	}

	inline static int32_t get_offset_of_email_9() { return static_cast<int32_t>(offsetof(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_StaticFields, ___email_9)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_email_9() const { return ___email_9; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_email_9() { return &___email_9; }
	inline void set_email_9(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___email_9 = value;
		Il2CppCodeGenWriteBarrier((&___email_9), value);
	}

	inline static int32_t get_offset_of_dnQualifier_10() { return static_cast<int32_t>(offsetof(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_StaticFields, ___dnQualifier_10)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_dnQualifier_10() const { return ___dnQualifier_10; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_dnQualifier_10() { return &___dnQualifier_10; }
	inline void set_dnQualifier_10(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___dnQualifier_10 = value;
		Il2CppCodeGenWriteBarrier((&___dnQualifier_10), value);
	}

	inline static int32_t get_offset_of_title_11() { return static_cast<int32_t>(offsetof(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_StaticFields, ___title_11)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_title_11() const { return ___title_11; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_title_11() { return &___title_11; }
	inline void set_title_11(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___title_11 = value;
		Il2CppCodeGenWriteBarrier((&___title_11), value);
	}

	inline static int32_t get_offset_of_surname_12() { return static_cast<int32_t>(offsetof(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_StaticFields, ___surname_12)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_surname_12() const { return ___surname_12; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_surname_12() { return &___surname_12; }
	inline void set_surname_12(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___surname_12 = value;
		Il2CppCodeGenWriteBarrier((&___surname_12), value);
	}

	inline static int32_t get_offset_of_givenName_13() { return static_cast<int32_t>(offsetof(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_StaticFields, ___givenName_13)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_givenName_13() const { return ___givenName_13; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_givenName_13() { return &___givenName_13; }
	inline void set_givenName_13(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___givenName_13 = value;
		Il2CppCodeGenWriteBarrier((&___givenName_13), value);
	}

	inline static int32_t get_offset_of_initial_14() { return static_cast<int32_t>(offsetof(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_StaticFields, ___initial_14)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_initial_14() const { return ___initial_14; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_initial_14() { return &___initial_14; }
	inline void set_initial_14(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___initial_14 = value;
		Il2CppCodeGenWriteBarrier((&___initial_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X501_TA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_H
#ifndef X509CERTIFICATEENUMERATOR_T1CBC050F10F4BE1E2A8552A1F22E705013EBF505_H
#define X509CERTIFICATEENUMERATOR_T1CBC050F10F4BE1E2A8552A1F22E705013EBF505_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator
struct  X509CertificateEnumerator_t1CBC050F10F4BE1E2A8552A1F22E705013EBF505  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::enumerator
	RuntimeObject* ___enumerator_0;

public:
	inline static int32_t get_offset_of_enumerator_0() { return static_cast<int32_t>(offsetof(X509CertificateEnumerator_t1CBC050F10F4BE1E2A8552A1F22E705013EBF505, ___enumerator_0)); }
	inline RuntimeObject* get_enumerator_0() const { return ___enumerator_0; }
	inline RuntimeObject** get_address_of_enumerator_0() { return &___enumerator_0; }
	inline void set_enumerator_0(RuntimeObject* value)
	{
		___enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumerator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATEENUMERATOR_T1CBC050F10F4BE1E2A8552A1F22E705013EBF505_H
#ifndef X509EXTENSION_TAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF_H
#define X509EXTENSION_TAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Extension
struct  X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Extension::extnOid
	String_t* ___extnOid_0;
	// System.Boolean Mono.Security.X509.X509Extension::extnCritical
	bool ___extnCritical_1;
	// Mono.Security.ASN1 Mono.Security.X509.X509Extension::extnValue
	ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * ___extnValue_2;

public:
	inline static int32_t get_offset_of_extnOid_0() { return static_cast<int32_t>(offsetof(X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF, ___extnOid_0)); }
	inline String_t* get_extnOid_0() const { return ___extnOid_0; }
	inline String_t** get_address_of_extnOid_0() { return &___extnOid_0; }
	inline void set_extnOid_0(String_t* value)
	{
		___extnOid_0 = value;
		Il2CppCodeGenWriteBarrier((&___extnOid_0), value);
	}

	inline static int32_t get_offset_of_extnCritical_1() { return static_cast<int32_t>(offsetof(X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF, ___extnCritical_1)); }
	inline bool get_extnCritical_1() const { return ___extnCritical_1; }
	inline bool* get_address_of_extnCritical_1() { return &___extnCritical_1; }
	inline void set_extnCritical_1(bool value)
	{
		___extnCritical_1 = value;
	}

	inline static int32_t get_offset_of_extnValue_2() { return static_cast<int32_t>(offsetof(X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF, ___extnValue_2)); }
	inline ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * get_extnValue_2() const { return ___extnValue_2; }
	inline ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E ** get_address_of_extnValue_2() { return &___extnValue_2; }
	inline void set_extnValue_2(ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * value)
	{
		___extnValue_2 = value;
		Il2CppCodeGenWriteBarrier((&___extnValue_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509EXTENSION_TAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF_H
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
#ifndef ARRAYLIST_T4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4_H
#define ARRAYLIST_T4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList
struct  ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_0;
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_2;
	// System.Object System.Collections.ArrayList::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__items_0() { return static_cast<int32_t>(offsetof(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4, ____items_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_0() const { return ____items_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_0() { return &____items_0; }
	inline void set__items_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_0 = value;
		Il2CppCodeGenWriteBarrier((&____items_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_3), value);
	}
};

struct ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4_StaticFields
{
public:
	// System.Object[] System.Collections.ArrayList::emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___emptyArray_4;

public:
	inline static int32_t get_offset_of_emptyArray_4() { return static_cast<int32_t>(offsetof(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4_StaticFields, ___emptyArray_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_emptyArray_4() const { return ___emptyArray_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_emptyArray_4() { return &___emptyArray_4; }
	inline void set_emptyArray_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___emptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___emptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYLIST_T4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4_H
#ifndef COLLECTIONBASE_TF5D4583FF325726066A9803839A04E9C0084ED01_H
#define COLLECTIONBASE_TF5D4583FF325726066A9803839A04E9C0084ED01_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CollectionBase
struct  CollectionBase_tF5D4583FF325726066A9803839A04E9C0084ED01  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.CollectionBase::list
	ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(CollectionBase_tF5D4583FF325726066A9803839A04E9C0084ED01, ___list_0)); }
	inline ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * get_list_0() const { return ___list_0; }
	inline ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONBASE_TF5D4583FF325726066A9803839A04E9C0084ED01_H
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
#ifndef CULTUREINFO_T345AC6924134F039ED9A11F3E03F8E91B6A3225F_H
#define CULTUREINFO_T345AC6924134F039ED9A11F3E03F8E91B6A3225F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CultureInfo
struct  CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___numInfo_10)); }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((&___numInfo_10), value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((&___dateTimeInfo_11), value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___textInfo_12)); }
	inline TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((&___textInfo_12), value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_13), value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((&___englishname_14), value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((&___nativename_15), value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((&___iso3lang_16), value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((&___iso2lang_17), value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((&___win3lang_18), value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((&___territory_19), value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___native_calendar_names_20)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((&___native_calendar_names_20), value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___compareInfo_21)); }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((&___compareInfo_21), value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___calendar_24)); }
	inline Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_24), value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___parent_culture_25)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((&___parent_culture_25), value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((&___cached_serialized_form_27), value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_cultureData_28)); }
	inline CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_cultureData_28), value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((&___invariant_culture_info_0), value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((&___shared_table_lock_1), value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((&___default_current_culture_2), value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultThreadCurrentUICulture_33), value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultThreadCurrentCulture_34), value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_number_35), value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_name_36), value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	uint8_t* ___cached_serialized_form_27;
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	uint8_t* ___cached_serialized_form_27;
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
#endif // CULTUREINFO_T345AC6924134F039ED9A11F3E03F8E91B6A3225F_H
#ifndef SERIALIZATIONINFO_T1BB80E9C9DEA52DBF464487234B045E2930ADA26_H
#define SERIALIZATIONINFO_T1BB80E9C9DEA52DBF464487234B045E2930ADA26_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationInfo
struct  SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26  : public RuntimeObject
{
public:
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___m_members_0;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_data_1;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___m_types_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * ___m_nameToIndex_3;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_4;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_5;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_6;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_7;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t * ___objectType_8;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_9;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_10;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_11;

public:
	inline static int32_t get_offset_of_m_members_0() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_members_0)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_m_members_0() const { return ___m_members_0; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_m_members_0() { return &___m_members_0; }
	inline void set_m_members_0(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___m_members_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_members_0), value);
	}

	inline static int32_t get_offset_of_m_data_1() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_data_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_data_1() const { return ___m_data_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_data_1() { return &___m_data_1; }
	inline void set_m_data_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_data_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_data_1), value);
	}

	inline static int32_t get_offset_of_m_types_2() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_types_2)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_m_types_2() const { return ___m_types_2; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_m_types_2() { return &___m_types_2; }
	inline void set_m_types_2(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___m_types_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_types_2), value);
	}

	inline static int32_t get_offset_of_m_nameToIndex_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_nameToIndex_3)); }
	inline Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * get_m_nameToIndex_3() const { return ___m_nameToIndex_3; }
	inline Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB ** get_address_of_m_nameToIndex_3() { return &___m_nameToIndex_3; }
	inline void set_m_nameToIndex_3(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * value)
	{
		___m_nameToIndex_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_nameToIndex_3), value);
	}

	inline static int32_t get_offset_of_m_currMember_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_currMember_4)); }
	inline int32_t get_m_currMember_4() const { return ___m_currMember_4; }
	inline int32_t* get_address_of_m_currMember_4() { return &___m_currMember_4; }
	inline void set_m_currMember_4(int32_t value)
	{
		___m_currMember_4 = value;
	}

	inline static int32_t get_offset_of_m_converter_5() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_converter_5)); }
	inline RuntimeObject* get_m_converter_5() const { return ___m_converter_5; }
	inline RuntimeObject** get_address_of_m_converter_5() { return &___m_converter_5; }
	inline void set_m_converter_5(RuntimeObject* value)
	{
		___m_converter_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_converter_5), value);
	}

	inline static int32_t get_offset_of_m_fullTypeName_6() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_fullTypeName_6)); }
	inline String_t* get_m_fullTypeName_6() const { return ___m_fullTypeName_6; }
	inline String_t** get_address_of_m_fullTypeName_6() { return &___m_fullTypeName_6; }
	inline void set_m_fullTypeName_6(String_t* value)
	{
		___m_fullTypeName_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_fullTypeName_6), value);
	}

	inline static int32_t get_offset_of_m_assemName_7() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_assemName_7)); }
	inline String_t* get_m_assemName_7() const { return ___m_assemName_7; }
	inline String_t** get_address_of_m_assemName_7() { return &___m_assemName_7; }
	inline void set_m_assemName_7(String_t* value)
	{
		___m_assemName_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_assemName_7), value);
	}

	inline static int32_t get_offset_of_objectType_8() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___objectType_8)); }
	inline Type_t * get_objectType_8() const { return ___objectType_8; }
	inline Type_t ** get_address_of_objectType_8() { return &___objectType_8; }
	inline void set_objectType_8(Type_t * value)
	{
		___objectType_8 = value;
		Il2CppCodeGenWriteBarrier((&___objectType_8), value);
	}

	inline static int32_t get_offset_of_isFullTypeNameSetExplicit_9() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___isFullTypeNameSetExplicit_9)); }
	inline bool get_isFullTypeNameSetExplicit_9() const { return ___isFullTypeNameSetExplicit_9; }
	inline bool* get_address_of_isFullTypeNameSetExplicit_9() { return &___isFullTypeNameSetExplicit_9; }
	inline void set_isFullTypeNameSetExplicit_9(bool value)
	{
		___isFullTypeNameSetExplicit_9 = value;
	}

	inline static int32_t get_offset_of_isAssemblyNameSetExplicit_10() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___isAssemblyNameSetExplicit_10)); }
	inline bool get_isAssemblyNameSetExplicit_10() const { return ___isAssemblyNameSetExplicit_10; }
	inline bool* get_address_of_isAssemblyNameSetExplicit_10() { return &___isAssemblyNameSetExplicit_10; }
	inline void set_isAssemblyNameSetExplicit_10(bool value)
	{
		___isAssemblyNameSetExplicit_10 = value;
	}

	inline static int32_t get_offset_of_requireSameTokenInPartialTrust_11() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___requireSameTokenInPartialTrust_11)); }
	inline bool get_requireSameTokenInPartialTrust_11() const { return ___requireSameTokenInPartialTrust_11; }
	inline bool* get_address_of_requireSameTokenInPartialTrust_11() { return &___requireSameTokenInPartialTrust_11; }
	inline void set_requireSameTokenInPartialTrust_11(bool value)
	{
		___requireSameTokenInPartialTrust_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONINFO_T1BB80E9C9DEA52DBF464487234B045E2930ADA26_H
#ifndef ASYMMETRICALGORITHM_T9F811260245370BD8786A849DBF9F8054F97F4CB_H
#define ASYMMETRICALGORITHM_T9F811260245370BD8786A849DBF9F8054F97F4CB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricAlgorithm
struct  AsymmetricAlgorithm_t9F811260245370BD8786A849DBF9F8054F97F4CB  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_0;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.AsymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t934CCA482596402177BAF86727F169872D74934E* ___LegalKeySizesValue_1;

public:
	inline static int32_t get_offset_of_KeySizeValue_0() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t9F811260245370BD8786A849DBF9F8054F97F4CB, ___KeySizeValue_0)); }
	inline int32_t get_KeySizeValue_0() const { return ___KeySizeValue_0; }
	inline int32_t* get_address_of_KeySizeValue_0() { return &___KeySizeValue_0; }
	inline void set_KeySizeValue_0(int32_t value)
	{
		___KeySizeValue_0 = value;
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_1() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t9F811260245370BD8786A849DBF9F8054F97F4CB, ___LegalKeySizesValue_1)); }
	inline KeySizesU5BU5D_t934CCA482596402177BAF86727F169872D74934E* get_LegalKeySizesValue_1() const { return ___LegalKeySizesValue_1; }
	inline KeySizesU5BU5D_t934CCA482596402177BAF86727F169872D74934E** get_address_of_LegalKeySizesValue_1() { return &___LegalKeySizesValue_1; }
	inline void set_LegalKeySizesValue_1(KeySizesU5BU5D_t934CCA482596402177BAF86727F169872D74934E* value)
	{
		___LegalKeySizesValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICALGORITHM_T9F811260245370BD8786A849DBF9F8054F97F4CB_H
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
#ifndef __STATICARRAYINITTYPESIZEU3D10_TA87C7E06DDCE3975CB99672F98A6AC23AD0D87A0_H
#define __STATICARRAYINITTYPESIZEU3D10_TA87C7E06DDCE3975CB99672F98A6AC23AD0D87A0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10
struct  __StaticArrayInitTypeSizeU3D10_tA87C7E06DDCE3975CB99672F98A6AC23AD0D87A0 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D10_tA87C7E06DDCE3975CB99672F98A6AC23AD0D87A0__padding[10];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D10_TA87C7E06DDCE3975CB99672F98A6AC23AD0D87A0_H
#ifndef __STATICARRAYINITTYPESIZEU3D14_T2293E0C6AC04C3ABC76C1B941A58194168C25109_H
#define __STATICARRAYINITTYPESIZEU3D14_T2293E0C6AC04C3ABC76C1B941A58194168C25109_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=14
struct  __StaticArrayInitTypeSizeU3D14_t2293E0C6AC04C3ABC76C1B941A58194168C25109 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D14_t2293E0C6AC04C3ABC76C1B941A58194168C25109__padding[14];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D14_T2293E0C6AC04C3ABC76C1B941A58194168C25109_H
#ifndef __STATICARRAYINITTYPESIZEU3D20_T45181D0C9A3626B505048EEE1AC441C18A377DBF_H
#define __STATICARRAYINITTYPESIZEU3D20_T45181D0C9A3626B505048EEE1AC441C18A377DBF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20
struct  __StaticArrayInitTypeSizeU3D20_t45181D0C9A3626B505048EEE1AC441C18A377DBF 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_t45181D0C9A3626B505048EEE1AC441C18A377DBF__padding[20];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D20_T45181D0C9A3626B505048EEE1AC441C18A377DBF_H
#ifndef __STATICARRAYINITTYPESIZEU3D256_T8BFCD627E5A35B5A739C81B9213D9B9A173DE667_H
#define __STATICARRAYINITTYPESIZEU3D256_T8BFCD627E5A35B5A739C81B9213D9B9A173DE667_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256
struct  __StaticArrayInitTypeSizeU3D256_t8BFCD627E5A35B5A739C81B9213D9B9A173DE667 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D256_t8BFCD627E5A35B5A739C81B9213D9B9A173DE667__padding[256];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D256_T8BFCD627E5A35B5A739C81B9213D9B9A173DE667_H
#ifndef __STATICARRAYINITTYPESIZEU3D3_T83D19CF571199F638945B4CE7AC3EFBB12513428_H
#define __STATICARRAYINITTYPESIZEU3D3_T83D19CF571199F638945B4CE7AC3EFBB12513428_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3
struct  __StaticArrayInitTypeSizeU3D3_t83D19CF571199F638945B4CE7AC3EFBB12513428 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3_t83D19CF571199F638945B4CE7AC3EFBB12513428__padding[3];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D3_T83D19CF571199F638945B4CE7AC3EFBB12513428_H
#ifndef __STATICARRAYINITTYPESIZEU3D3132_T486168FFAE191756DEF1DBD0456C8C0AA26577B1_H
#define __STATICARRAYINITTYPESIZEU3D3132_T486168FFAE191756DEF1DBD0456C8C0AA26577B1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3132
struct  __StaticArrayInitTypeSizeU3D3132_t486168FFAE191756DEF1DBD0456C8C0AA26577B1 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3132_t486168FFAE191756DEF1DBD0456C8C0AA26577B1__padding[3132];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D3132_T486168FFAE191756DEF1DBD0456C8C0AA26577B1_H
#ifndef __STATICARRAYINITTYPESIZEU3D32_TB9E831F7CD5830D06525ABB45BC8517064237A2A_H
#define __STATICARRAYINITTYPESIZEU3D32_TB9E831F7CD5830D06525ABB45BC8517064237A2A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct  __StaticArrayInitTypeSizeU3D32_tB9E831F7CD5830D06525ABB45BC8517064237A2A 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_tB9E831F7CD5830D06525ABB45BC8517064237A2A__padding[32];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D32_TB9E831F7CD5830D06525ABB45BC8517064237A2A_H
#ifndef __STATICARRAYINITTYPESIZEU3D48_T9F3D0EF2ACFB23A8C22DE5E03F835F1A400F8A52_H
#define __STATICARRAYINITTYPESIZEU3D48_T9F3D0EF2ACFB23A8C22DE5E03F835F1A400F8A52_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48
struct  __StaticArrayInitTypeSizeU3D48_t9F3D0EF2ACFB23A8C22DE5E03F835F1A400F8A52 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D48_t9F3D0EF2ACFB23A8C22DE5E03F835F1A400F8A52__padding[48];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D48_T9F3D0EF2ACFB23A8C22DE5E03F835F1A400F8A52_H
#ifndef __STATICARRAYINITTYPESIZEU3D64_T7FDF3B8905F8D5A457AD7CA8FB6CB4F40AA78AF9_H
#define __STATICARRAYINITTYPESIZEU3D64_T7FDF3B8905F8D5A457AD7CA8FB6CB4F40AA78AF9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64
struct  __StaticArrayInitTypeSizeU3D64_t7FDF3B8905F8D5A457AD7CA8FB6CB4F40AA78AF9 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D64_t7FDF3B8905F8D5A457AD7CA8FB6CB4F40AA78AF9__padding[64];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D64_T7FDF3B8905F8D5A457AD7CA8FB6CB4F40AA78AF9_H
#ifndef __STATICARRAYINITTYPESIZEU3D9_T2B23599284B0D068CFDF7410ACB3027431B6FD94_H
#define __STATICARRAYINITTYPESIZEU3D9_T2B23599284B0D068CFDF7410ACB3027431B6FD94_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9
struct  __StaticArrayInitTypeSizeU3D9_t2B23599284B0D068CFDF7410ACB3027431B6FD94 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D9_t2B23599284B0D068CFDF7410ACB3027431B6FD94__padding[9];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D9_T2B23599284B0D068CFDF7410ACB3027431B6FD94_H
#ifndef X509CERTIFICATECOLLECTION_T423BA1B9FAA983BA745023994C648C6DAC3E5A1A_H
#define X509CERTIFICATECOLLECTION_T423BA1B9FAA983BA745023994C648C6DAC3E5A1A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509CertificateCollection
struct  X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A  : public CollectionBase_tF5D4583FF325726066A9803839A04E9C0084ED01
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATECOLLECTION_T423BA1B9FAA983BA745023994C648C6DAC3E5A1A_H
#ifndef X509EXTENSIONCOLLECTION_T64150C4CB662DB5B4A434CC41C612FE573707D19_H
#define X509EXTENSIONCOLLECTION_T64150C4CB662DB5B4A434CC41C612FE573707D19_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509ExtensionCollection
struct  X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19  : public CollectionBase_tF5D4583FF325726066A9803839A04E9C0084ED01
{
public:
	// System.Boolean Mono.Security.X509.X509ExtensionCollection::readOnly
	bool ___readOnly_1;

public:
	inline static int32_t get_offset_of_readOnly_1() { return static_cast<int32_t>(offsetof(X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19, ___readOnly_1)); }
	inline bool get_readOnly_1() const { return ___readOnly_1; }
	inline bool* get_address_of_readOnly_1() { return &___readOnly_1; }
	inline void set_readOnly_1(bool value)
	{
		___readOnly_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509EXTENSIONCOLLECTION_T64150C4CB662DB5B4A434CC41C612FE573707D19_H
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
#ifndef CHAR_TBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_H
#define CHAR_TBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((&___categoryForLatin1_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_TBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_H
#ifndef DATETIME_T349B7449FBAAFF4192636E2B7A07694DA9236132_H
#define DATETIME_T349B7449FBAAFF4192636E2B7A07694DA9236132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth365_29), value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth366_30), value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T349B7449FBAAFF4192636E2B7A07694DA9236132_H
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
#ifndef DSA_T932F4A94DD2B782BFFC197544398826E6CDB64CF_H
#define DSA_T932F4A94DD2B782BFFC197544398826E6CDB64CF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSA
struct  DSA_t932F4A94DD2B782BFFC197544398826E6CDB64CF  : public AsymmetricAlgorithm_t9F811260245370BD8786A849DBF9F8054F97F4CB
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSA_T932F4A94DD2B782BFFC197544398826E6CDB64CF_H
#ifndef DSAPARAMETERS_TCA1A96A151F47B1904693C457243E3B919425AC6_H
#define DSAPARAMETERS_TCA1A96A151F47B1904693C457243E3B919425AC6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSAParameters
struct  DSAParameters_tCA1A96A151F47B1904693C457243E3B919425AC6 
{
public:
	// System.Byte[] System.Security.Cryptography.DSAParameters::P
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___P_0;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Q
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___Q_1;
	// System.Byte[] System.Security.Cryptography.DSAParameters::G
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___G_2;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Y
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___Y_3;
	// System.Byte[] System.Security.Cryptography.DSAParameters::J
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___J_4;
	// System.Byte[] System.Security.Cryptography.DSAParameters::X
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___X_5;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Seed
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___Seed_6;
	// System.Int32 System.Security.Cryptography.DSAParameters::Counter
	int32_t ___Counter_7;

public:
	inline static int32_t get_offset_of_P_0() { return static_cast<int32_t>(offsetof(DSAParameters_tCA1A96A151F47B1904693C457243E3B919425AC6, ___P_0)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_P_0() const { return ___P_0; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_P_0() { return &___P_0; }
	inline void set_P_0(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___P_0 = value;
		Il2CppCodeGenWriteBarrier((&___P_0), value);
	}

	inline static int32_t get_offset_of_Q_1() { return static_cast<int32_t>(offsetof(DSAParameters_tCA1A96A151F47B1904693C457243E3B919425AC6, ___Q_1)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_Q_1() const { return ___Q_1; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_Q_1() { return &___Q_1; }
	inline void set_Q_1(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___Q_1 = value;
		Il2CppCodeGenWriteBarrier((&___Q_1), value);
	}

	inline static int32_t get_offset_of_G_2() { return static_cast<int32_t>(offsetof(DSAParameters_tCA1A96A151F47B1904693C457243E3B919425AC6, ___G_2)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_G_2() const { return ___G_2; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_G_2() { return &___G_2; }
	inline void set_G_2(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___G_2 = value;
		Il2CppCodeGenWriteBarrier((&___G_2), value);
	}

	inline static int32_t get_offset_of_Y_3() { return static_cast<int32_t>(offsetof(DSAParameters_tCA1A96A151F47B1904693C457243E3B919425AC6, ___Y_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_Y_3() const { return ___Y_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_Y_3() { return &___Y_3; }
	inline void set_Y_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___Y_3 = value;
		Il2CppCodeGenWriteBarrier((&___Y_3), value);
	}

	inline static int32_t get_offset_of_J_4() { return static_cast<int32_t>(offsetof(DSAParameters_tCA1A96A151F47B1904693C457243E3B919425AC6, ___J_4)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_J_4() const { return ___J_4; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_J_4() { return &___J_4; }
	inline void set_J_4(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___J_4 = value;
		Il2CppCodeGenWriteBarrier((&___J_4), value);
	}

	inline static int32_t get_offset_of_X_5() { return static_cast<int32_t>(offsetof(DSAParameters_tCA1A96A151F47B1904693C457243E3B919425AC6, ___X_5)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_X_5() const { return ___X_5; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_X_5() { return &___X_5; }
	inline void set_X_5(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___X_5 = value;
		Il2CppCodeGenWriteBarrier((&___X_5), value);
	}

	inline static int32_t get_offset_of_Seed_6() { return static_cast<int32_t>(offsetof(DSAParameters_tCA1A96A151F47B1904693C457243E3B919425AC6, ___Seed_6)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_Seed_6() const { return ___Seed_6; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_Seed_6() { return &___Seed_6; }
	inline void set_Seed_6(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___Seed_6 = value;
		Il2CppCodeGenWriteBarrier((&___Seed_6), value);
	}

	inline static int32_t get_offset_of_Counter_7() { return static_cast<int32_t>(offsetof(DSAParameters_tCA1A96A151F47B1904693C457243E3B919425AC6, ___Counter_7)); }
	inline int32_t get_Counter_7() const { return ___Counter_7; }
	inline int32_t* get_address_of_Counter_7() { return &___Counter_7; }
	inline void set_Counter_7(int32_t value)
	{
		___Counter_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.Cryptography.DSAParameters
struct DSAParameters_tCA1A96A151F47B1904693C457243E3B919425AC6_marshaled_pinvoke
{
	uint8_t* ___P_0;
	uint8_t* ___Q_1;
	uint8_t* ___G_2;
	uint8_t* ___Y_3;
	uint8_t* ___J_4;
	uint8_t* ___X_5;
	uint8_t* ___Seed_6;
	int32_t ___Counter_7;
};
// Native definition for COM marshalling of System.Security.Cryptography.DSAParameters
struct DSAParameters_tCA1A96A151F47B1904693C457243E3B919425AC6_marshaled_com
{
	uint8_t* ___P_0;
	uint8_t* ___Q_1;
	uint8_t* ___G_2;
	uint8_t* ___Y_3;
	uint8_t* ___J_4;
	uint8_t* ___X_5;
	uint8_t* ___Seed_6;
	int32_t ___Counter_7;
};
#endif // DSAPARAMETERS_TCA1A96A151F47B1904693C457243E3B919425AC6_H
#ifndef RSA_TB6C4B434B2AC02E3F8981DB2908C2018E251D145_H
#define RSA_TB6C4B434B2AC02E3F8981DB2908C2018E251D145_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSA
struct  RSA_tB6C4B434B2AC02E3F8981DB2908C2018E251D145  : public AsymmetricAlgorithm_t9F811260245370BD8786A849DBF9F8054F97F4CB
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSA_TB6C4B434B2AC02E3F8981DB2908C2018E251D145_H
#ifndef RSAPARAMETERS_T6A568C1275FA8F8C02615666D998134DCFFB9717_H
#define RSAPARAMETERS_T6A568C1275FA8F8C02615666D998134DCFFB9717_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAParameters
struct  RSAParameters_t6A568C1275FA8F8C02615666D998134DCFFB9717 
{
public:
	// System.Byte[] System.Security.Cryptography.RSAParameters::Exponent
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___Exponent_0;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Modulus
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___Modulus_1;
	// System.Byte[] System.Security.Cryptography.RSAParameters::P
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___P_2;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Q
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___Q_3;
	// System.Byte[] System.Security.Cryptography.RSAParameters::DP
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___DP_4;
	// System.Byte[] System.Security.Cryptography.RSAParameters::DQ
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___DQ_5;
	// System.Byte[] System.Security.Cryptography.RSAParameters::InverseQ
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___InverseQ_6;
	// System.Byte[] System.Security.Cryptography.RSAParameters::D
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___D_7;

public:
	inline static int32_t get_offset_of_Exponent_0() { return static_cast<int32_t>(offsetof(RSAParameters_t6A568C1275FA8F8C02615666D998134DCFFB9717, ___Exponent_0)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_Exponent_0() const { return ___Exponent_0; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_Exponent_0() { return &___Exponent_0; }
	inline void set_Exponent_0(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___Exponent_0 = value;
		Il2CppCodeGenWriteBarrier((&___Exponent_0), value);
	}

	inline static int32_t get_offset_of_Modulus_1() { return static_cast<int32_t>(offsetof(RSAParameters_t6A568C1275FA8F8C02615666D998134DCFFB9717, ___Modulus_1)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_Modulus_1() const { return ___Modulus_1; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_Modulus_1() { return &___Modulus_1; }
	inline void set_Modulus_1(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___Modulus_1 = value;
		Il2CppCodeGenWriteBarrier((&___Modulus_1), value);
	}

	inline static int32_t get_offset_of_P_2() { return static_cast<int32_t>(offsetof(RSAParameters_t6A568C1275FA8F8C02615666D998134DCFFB9717, ___P_2)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_P_2() const { return ___P_2; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_P_2() { return &___P_2; }
	inline void set_P_2(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___P_2 = value;
		Il2CppCodeGenWriteBarrier((&___P_2), value);
	}

	inline static int32_t get_offset_of_Q_3() { return static_cast<int32_t>(offsetof(RSAParameters_t6A568C1275FA8F8C02615666D998134DCFFB9717, ___Q_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_Q_3() const { return ___Q_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_Q_3() { return &___Q_3; }
	inline void set_Q_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___Q_3 = value;
		Il2CppCodeGenWriteBarrier((&___Q_3), value);
	}

	inline static int32_t get_offset_of_DP_4() { return static_cast<int32_t>(offsetof(RSAParameters_t6A568C1275FA8F8C02615666D998134DCFFB9717, ___DP_4)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_DP_4() const { return ___DP_4; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_DP_4() { return &___DP_4; }
	inline void set_DP_4(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___DP_4 = value;
		Il2CppCodeGenWriteBarrier((&___DP_4), value);
	}

	inline static int32_t get_offset_of_DQ_5() { return static_cast<int32_t>(offsetof(RSAParameters_t6A568C1275FA8F8C02615666D998134DCFFB9717, ___DQ_5)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_DQ_5() const { return ___DQ_5; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_DQ_5() { return &___DQ_5; }
	inline void set_DQ_5(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___DQ_5 = value;
		Il2CppCodeGenWriteBarrier((&___DQ_5), value);
	}

	inline static int32_t get_offset_of_InverseQ_6() { return static_cast<int32_t>(offsetof(RSAParameters_t6A568C1275FA8F8C02615666D998134DCFFB9717, ___InverseQ_6)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_InverseQ_6() const { return ___InverseQ_6; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_InverseQ_6() { return &___InverseQ_6; }
	inline void set_InverseQ_6(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___InverseQ_6 = value;
		Il2CppCodeGenWriteBarrier((&___InverseQ_6), value);
	}

	inline static int32_t get_offset_of_D_7() { return static_cast<int32_t>(offsetof(RSAParameters_t6A568C1275FA8F8C02615666D998134DCFFB9717, ___D_7)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_D_7() const { return ___D_7; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_D_7() { return &___D_7; }
	inline void set_D_7(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___D_7 = value;
		Il2CppCodeGenWriteBarrier((&___D_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.Cryptography.RSAParameters
struct RSAParameters_t6A568C1275FA8F8C02615666D998134DCFFB9717_marshaled_pinvoke
{
	uint8_t* ___Exponent_0;
	uint8_t* ___Modulus_1;
	uint8_t* ___P_2;
	uint8_t* ___Q_3;
	uint8_t* ___DP_4;
	uint8_t* ___DQ_5;
	uint8_t* ___InverseQ_6;
	uint8_t* ___D_7;
};
// Native definition for COM marshalling of System.Security.Cryptography.RSAParameters
struct RSAParameters_t6A568C1275FA8F8C02615666D998134DCFFB9717_marshaled_com
{
	uint8_t* ___Exponent_0;
	uint8_t* ___Modulus_1;
	uint8_t* ___P_2;
	uint8_t* ___Q_3;
	uint8_t* ___DP_4;
	uint8_t* ___DQ_5;
	uint8_t* ___InverseQ_6;
	uint8_t* ___D_7;
};
#endif // RSAPARAMETERS_T6A568C1275FA8F8C02615666D998134DCFFB9717_H
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
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_TF21437707AFAA06797AEDEE07C84D4D3CC2837FA_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_TF21437707AFAA06797AEDEE07C84D4D3CC2837FA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::12D04472A8285260EA12FD3813CDFA9F2D2B548C
	__StaticArrayInitTypeSizeU3D3_t83D19CF571199F638945B4CE7AC3EFBB12513428  ___12D04472A8285260EA12FD3813CDFA9F2D2B548C_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::13A35EF1A549297C70E2AD46045BBD2ECA17852D
	__StaticArrayInitTypeSizeU3D3_t83D19CF571199F638945B4CE7AC3EFBB12513428  ___13A35EF1A549297C70E2AD46045BBD2ECA17852D_1;
	// System.Int64 <PrivateImplementationDetails>::16968835DEF6DD3BB86EABA9DEC53BF41851CD6D
	int64_t ___16968835DEF6DD3BB86EABA9DEC53BF41851CD6D_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::1A84029C80CB5518379F199F53FF08A7B764F8FD
	__StaticArrayInitTypeSizeU3D3_t83D19CF571199F638945B4CE7AC3EFBB12513428  ___1A84029C80CB5518379F199F53FF08A7B764F8FD_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::235D99572263B22ADFEE10FDA0C25E12F4D94FFC
	__StaticArrayInitTypeSizeU3D3_t83D19CF571199F638945B4CE7AC3EFBB12513428  ___235D99572263B22ADFEE10FDA0C25E12F4D94FFC_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=14 <PrivateImplementationDetails>::2D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130
	__StaticArrayInitTypeSizeU3D14_t2293E0C6AC04C3ABC76C1B941A58194168C25109  ___2D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::320B018758ECE3752FFEDBAEB1A6DB67C80B9359
	__StaticArrayInitTypeSizeU3D64_t7FDF3B8905F8D5A457AD7CA8FB6CB4F40AA78AF9  ___320B018758ECE3752FFEDBAEB1A6DB67C80B9359_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::3E3442C7396F3F2BB4C7348F4A2074C7DC677D68
	__StaticArrayInitTypeSizeU3D3_t83D19CF571199F638945B4CE7AC3EFBB12513428  ___3E3442C7396F3F2BB4C7348F4A2074C7DC677D68_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::4E3B533C39447AAEB59A8E48FABD7E15B5B5D195
	__StaticArrayInitTypeSizeU3D48_t9F3D0EF2ACFB23A8C22DE5E03F835F1A400F8A52  ___4E3B533C39447AAEB59A8E48FABD7E15B5B5D195_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10 <PrivateImplementationDetails>::56DFA5053B3131883637F53219E7D88CCEF35949
	__StaticArrayInitTypeSizeU3D10_tA87C7E06DDCE3975CB99672F98A6AC23AD0D87A0  ___56DFA5053B3131883637F53219E7D88CCEF35949_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9 <PrivateImplementationDetails>::6D49C9D487D7AD3491ECE08732D68A593CC2038D
	__StaticArrayInitTypeSizeU3D9_t2B23599284B0D068CFDF7410ACB3027431B6FD94  ___6D49C9D487D7AD3491ECE08732D68A593CC2038D_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3132 <PrivateImplementationDetails>::6E5DC824F803F8565AF31B42199DAE39FE7F4EA9
	__StaticArrayInitTypeSizeU3D3132_t486168FFAE191756DEF1DBD0456C8C0AA26577B1  ___6E5DC824F803F8565AF31B42199DAE39FE7F4EA9_11;
	// System.Int64 <PrivateImplementationDetails>::6FA00AC9FFFD87F82A38A7F9ECC8134F4A7052AF
	int64_t ___6FA00AC9FFFD87F82A38A7F9ECC8134F4A7052AF_12;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::736D39815215889F11249D9958F6ED12D37B9F57
	__StaticArrayInitTypeSizeU3D3_t83D19CF571199F638945B4CE7AC3EFBB12513428  ___736D39815215889F11249D9958F6ED12D37B9F57_13;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::86F4F563FA2C61798AE6238D789139739428463A
	__StaticArrayInitTypeSizeU3D3_t83D19CF571199F638945B4CE7AC3EFBB12513428  ___86F4F563FA2C61798AE6238D789139739428463A_14;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::97FB30C84FF4A41CD4625B44B2940BFC8DB43003
	__StaticArrayInitTypeSizeU3D3_t83D19CF571199F638945B4CE7AC3EFBB12513428  ___97FB30C84FF4A41CD4625B44B2940BFC8DB43003_15;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::9A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5
	__StaticArrayInitTypeSizeU3D64_t7FDF3B8905F8D5A457AD7CA8FB6CB4F40AA78AF9  ___9A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_16;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::9BB00D1FCCBAF03165447FC8028E7CA07CA9FE88
	__StaticArrayInitTypeSizeU3D3_t83D19CF571199F638945B4CE7AC3EFBB12513428  ___9BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_17;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::A323DB0813C4D072957BA6FDA79D9776674CD06B
	__StaticArrayInitTypeSizeU3D3_t83D19CF571199F638945B4CE7AC3EFBB12513428  ___A323DB0813C4D072957BA6FDA79D9776674CD06B_18;
	// System.Int64 <PrivateImplementationDetails>::AEA5F1CC5CFE1660539EDD691FE017F775F63A0D
	int64_t ___AEA5F1CC5CFE1660539EDD691FE017F775F63A0D_19;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::BE1BDEC0AA74B4DCB079943E70528096CCA985F8
	__StaticArrayInitTypeSizeU3D20_t45181D0C9A3626B505048EEE1AC441C18A377DBF  ___BE1BDEC0AA74B4DCB079943E70528096CCA985F8_20;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::BF477463CE2F5EF38FC4C644BBBF4DF109E7670A
	__StaticArrayInitTypeSizeU3D3_t83D19CF571199F638945B4CE7AC3EFBB12513428  ___BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_21;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::CF0B42666EF5E37EDEA0AB8E173E42C196D03814
	__StaticArrayInitTypeSizeU3D64_t7FDF3B8905F8D5A457AD7CA8FB6CB4F40AA78AF9  ___CF0B42666EF5E37EDEA0AB8E173E42C196D03814_22;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE
	__StaticArrayInitTypeSizeU3D32_tB9E831F7CD5830D06525ABB45BC8517064237A2A  ___D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_23;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::D2C5BAE967587C6F3D9F2C4551911E0575A1101F
	__StaticArrayInitTypeSizeU3D256_t8BFCD627E5A35B5A739C81B9213D9B9A173DE667  ___D2C5BAE967587C6F3D9F2C4551911E0575A1101F_24;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::E75835D001C843F156FBA01B001DFE1B8029AC17
	__StaticArrayInitTypeSizeU3D64_t7FDF3B8905F8D5A457AD7CA8FB6CB4F40AA78AF9  ___E75835D001C843F156FBA01B001DFE1B8029AC17_25;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10 <PrivateImplementationDetails>::EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11
	__StaticArrayInitTypeSizeU3D10_tA87C7E06DDCE3975CB99672F98A6AC23AD0D87A0  ___EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_26;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::EC83FB16C20052BEE2B4025159BC2ED45C9C70C3
	__StaticArrayInitTypeSizeU3D3_t83D19CF571199F638945B4CE7AC3EFBB12513428  ___EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_27;

public:
	inline static int32_t get_offset_of_U312D04472A8285260EA12FD3813CDFA9F2D2B548C_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA_StaticFields, ___12D04472A8285260EA12FD3813CDFA9F2D2B548C_0)); }
	inline __StaticArrayInitTypeSizeU3D3_t83D19CF571199F638945B4CE7AC3EFBB12513428  get_U312D04472A8285260EA12FD3813CDFA9F2D2B548C_0() const { return ___12D04472A8285260EA12FD3813CDFA9F2D2B548C_0; }
	inline __StaticArrayInitTypeSizeU3D3_t83D19CF571199F638945B4CE7AC3EFBB12513428 * get_address_of_U312D04472A8285260EA12FD3813CDFA9F2D2B548C_0() { return &___12D04472A8285260EA12FD3813CDFA9F2D2B548C_0; }
	inline void set_U312D04472A8285260EA12FD3813CDFA9F2D2B548C_0(__StaticArrayInitTypeSizeU3D3_t83D19CF571199F638945B4CE7AC3EFBB12513428  value)
	{
		___12D04472A8285260EA12FD3813CDFA9F2D2B548C_0 = value;
	}

	inline static int32_t get_offset_of_U313A35EF1A549297C70E2AD46045BBD2ECA17852D_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA_StaticFields, ___13A35EF1A549297C70E2AD46045BBD2ECA17852D_1)); }
	inline __StaticArrayInitTypeSizeU3D3_t83D19CF571199F638945B4CE7AC3EFBB12513428  get_U313A35EF1A549297C70E2AD46045BBD2ECA17852D_1() const { return ___13A35EF1A549297C70E2AD46045BBD2ECA17852D_1; }
	inline __StaticArrayInitTypeSizeU3D3_t83D19CF571199F638945B4CE7AC3EFBB12513428 * get_address_of_U313A35EF1A549297C70E2AD46045BBD2ECA17852D_1() { return &___13A35EF1A549297C70E2AD46045BBD2ECA17852D_1; }
	inline void set_U313A35EF1A549297C70E2AD46045BBD2ECA17852D_1(__StaticArrayInitTypeSizeU3D3_t83D19CF571199F638945B4CE7AC3EFBB12513428  value)
	{
		___13A35EF1A549297C70E2AD46045BBD2ECA17852D_1 = value;
	}

	inline static int32_t get_offset_of_U316968835DEF6DD3BB86EABA9DEC53BF41851CD6D_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA_StaticFields, ___16968835DEF6DD3BB86EABA9DEC53BF41851CD6D_2)); }
	inline int64_t get_U316968835DEF6DD3BB86EABA9DEC53BF41851CD6D_2() const { return ___16968835DEF6DD3BB86EABA9DEC53BF41851CD6D_2; }
	inline int64_t* get_address_of_U316968835DEF6DD3BB86EABA9DEC53BF41851CD6D_2() { return &___16968835DEF6DD3BB86EABA9DEC53BF41851CD6D_2; }
	inline void set_U316968835DEF6DD3BB86EABA9DEC53BF41851CD6D_2(int64_t value)
	{
		___16968835DEF6DD3BB86EABA9DEC53BF41851CD6D_2 = value;
	}

	inline static int32_t get_offset_of_U31A84029C80CB5518379F199F53FF08A7B764F8FD_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA_StaticFields, ___1A84029C80CB5518379F199F53FF08A7B764F8FD_3)); }
	inline __StaticArrayInitTypeSizeU3D3_t83D19CF571199F638945B4CE7AC3EFBB12513428  get_U31A84029C80CB5518379F199F53FF08A7B764F8FD_3() const { return ___1A84029C80CB5518379F199F53FF08A7B764F8FD_3; }
	inline __StaticArrayInitTypeSizeU3D3_t83D19CF571199F638945B4CE7AC3EFBB12513428 * get_address_of_U31A84029C80CB5518379F199F53FF08A7B764F8FD_3() { return &___1A84029C80CB5518379F199F53FF08A7B764F8FD_3; }
	inline void set_U31A84029C80CB5518379F199F53FF08A7B764F8FD_3(__StaticArrayInitTypeSizeU3D3_t83D19CF571199F638945B4CE7AC3EFBB12513428  value)
	{
		___1A84029C80CB5518379F199F53FF08A7B764F8FD_3 = value;
	}

	inline static int32_t get_offset_of_U3235D99572263B22ADFEE10FDA0C25E12F4D94FFC_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA_StaticFields, ___235D99572263B22ADFEE10FDA0C25E12F4D94FFC_4)); }
	inline __StaticArrayInitTypeSizeU3D3_t83D19CF571199F638945B4CE7AC3EFBB12513428  get_U3235D99572263B22ADFEE10FDA0C25E12F4D94FFC_4() const { return ___235D99572263B22ADFEE10FDA0C25E12F4D94FFC_4; }
	inline __StaticArrayInitTypeSizeU3D3_t83D19CF571199F638945B4CE7AC3EFBB12513428 * get_address_of_U3235D99572263B22ADFEE10FDA0C25E12F4D94FFC_4() { return &___235D99572263B22ADFEE10FDA0C25E12F4D94FFC_4; }
	inline void set_U3235D99572263B22ADFEE10FDA0C25E12F4D94FFC_4(__StaticArrayInitTypeSizeU3D3_t83D19CF571199F638945B4CE7AC3EFBB12513428  value)
	{
		___235D99572263B22ADFEE10FDA0C25E12F4D94FFC_4 = value;
	}

	inline static int32_t get_offset_of_U32D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA_StaticFields, ___2D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_5)); }
	inline __StaticArrayInitTypeSizeU3D14_t2293E0C6AC04C3ABC76C1B941A58194168C25109  get_U32D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_5() const { return ___2D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_5; }
	inline __StaticArrayInitTypeSizeU3D14_t2293E0C6AC04C3ABC76C1B941A58194168C25109 * get_address_of_U32D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_5() { return &___2D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_5; }
	inline void set_U32D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_5(__StaticArrayInitTypeSizeU3D14_t2293E0C6AC04C3ABC76C1B941A58194168C25109  value)
	{
		___2D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_5 = value;
	}

	inline static int32_t get_offset_of_U3320B018758ECE3752FFEDBAEB1A6DB67C80B9359_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA_StaticFields, ___320B018758ECE3752FFEDBAEB1A6DB67C80B9359_6)); }
	inline __StaticArrayInitTypeSizeU3D64_t7FDF3B8905F8D5A457AD7CA8FB6CB4F40AA78AF9  get_U3320B018758ECE3752FFEDBAEB1A6DB67C80B9359_6() const { return ___320B018758ECE3752FFEDBAEB1A6DB67C80B9359_6; }
	inline __StaticArrayInitTypeSizeU3D64_t7FDF3B8905F8D5A457AD7CA8FB6CB4F40AA78AF9 * get_address_of_U3320B018758ECE3752FFEDBAEB1A6DB67C80B9359_6() { return &___320B018758ECE3752FFEDBAEB1A6DB67C80B9359_6; }
	inline void set_U3320B018758ECE3752FFEDBAEB1A6DB67C80B9359_6(__StaticArrayInitTypeSizeU3D64_t7FDF3B8905F8D5A457AD7CA8FB6CB4F40AA78AF9  value)
	{
		___320B018758ECE3752FFEDBAEB1A6DB67C80B9359_6 = value;
	}

	inline static int32_t get_offset_of_U33E3442C7396F3F2BB4C7348F4A2074C7DC677D68_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA_StaticFields, ___3E3442C7396F3F2BB4C7348F4A2074C7DC677D68_7)); }
	inline __StaticArrayInitTypeSizeU3D3_t83D19CF571199F638945B4CE7AC3EFBB12513428  get_U33E3442C7396F3F2BB4C7348F4A2074C7DC677D68_7() const { return ___3E3442C7396F3F2BB4C7348F4A2074C7DC677D68_7; }
	inline __StaticArrayInitTypeSizeU3D3_t83D19CF571199F638945B4CE7AC3EFBB12513428 * get_address_of_U33E3442C7396F3F2BB4C7348F4A2074C7DC677D68_7() { return &___3E3442C7396F3F2BB4C7348F4A2074C7DC677D68_7; }
	inline void set_U33E3442C7396F3F2BB4C7348F4A2074C7DC677D68_7(__StaticArrayInitTypeSizeU3D3_t83D19CF571199F638945B4CE7AC3EFBB12513428  value)
	{
		___3E3442C7396F3F2BB4C7348F4A2074C7DC677D68_7 = value;
	}

	inline static int32_t get_offset_of_U34E3B533C39447AAEB59A8E48FABD7E15B5B5D195_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA_StaticFields, ___4E3B533C39447AAEB59A8E48FABD7E15B5B5D195_8)); }
	inline __StaticArrayInitTypeSizeU3D48_t9F3D0EF2ACFB23A8C22DE5E03F835F1A400F8A52  get_U34E3B533C39447AAEB59A8E48FABD7E15B5B5D195_8() const { return ___4E3B533C39447AAEB59A8E48FABD7E15B5B5D195_8; }
	inline __StaticArrayInitTypeSizeU3D48_t9F3D0EF2ACFB23A8C22DE5E03F835F1A400F8A52 * get_address_of_U34E3B533C39447AAEB59A8E48FABD7E15B5B5D195_8() { return &___4E3B533C39447AAEB59A8E48FABD7E15B5B5D195_8; }
	inline void set_U34E3B533C39447AAEB59A8E48FABD7E15B5B5D195_8(__StaticArrayInitTypeSizeU3D48_t9F3D0EF2ACFB23A8C22DE5E03F835F1A400F8A52  value)
	{
		___4E3B533C39447AAEB59A8E48FABD7E15B5B5D195_8 = value;
	}

	inline static int32_t get_offset_of_U356DFA5053B3131883637F53219E7D88CCEF35949_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA_StaticFields, ___56DFA5053B3131883637F53219E7D88CCEF35949_9)); }
	inline __StaticArrayInitTypeSizeU3D10_tA87C7E06DDCE3975CB99672F98A6AC23AD0D87A0  get_U356DFA5053B3131883637F53219E7D88CCEF35949_9() const { return ___56DFA5053B3131883637F53219E7D88CCEF35949_9; }
	inline __StaticArrayInitTypeSizeU3D10_tA87C7E06DDCE3975CB99672F98A6AC23AD0D87A0 * get_address_of_U356DFA5053B3131883637F53219E7D88CCEF35949_9() { return &___56DFA5053B3131883637F53219E7D88CCEF35949_9; }
	inline void set_U356DFA5053B3131883637F53219E7D88CCEF35949_9(__StaticArrayInitTypeSizeU3D10_tA87C7E06DDCE3975CB99672F98A6AC23AD0D87A0  value)
	{
		___56DFA5053B3131883637F53219E7D88CCEF35949_9 = value;
	}

	inline static int32_t get_offset_of_U36D49C9D487D7AD3491ECE08732D68A593CC2038D_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA_StaticFields, ___6D49C9D487D7AD3491ECE08732D68A593CC2038D_10)); }
	inline __StaticArrayInitTypeSizeU3D9_t2B23599284B0D068CFDF7410ACB3027431B6FD94  get_U36D49C9D487D7AD3491ECE08732D68A593CC2038D_10() const { return ___6D49C9D487D7AD3491ECE08732D68A593CC2038D_10; }
	inline __StaticArrayInitTypeSizeU3D9_t2B23599284B0D068CFDF7410ACB3027431B6FD94 * get_address_of_U36D49C9D487D7AD3491ECE08732D68A593CC2038D_10() { return &___6D49C9D487D7AD3491ECE08732D68A593CC2038D_10; }
	inline void set_U36D49C9D487D7AD3491ECE08732D68A593CC2038D_10(__StaticArrayInitTypeSizeU3D9_t2B23599284B0D068CFDF7410ACB3027431B6FD94  value)
	{
		___6D49C9D487D7AD3491ECE08732D68A593CC2038D_10 = value;
	}

	inline static int32_t get_offset_of_U36E5DC824F803F8565AF31B42199DAE39FE7F4EA9_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA_StaticFields, ___6E5DC824F803F8565AF31B42199DAE39FE7F4EA9_11)); }
	inline __StaticArrayInitTypeSizeU3D3132_t486168FFAE191756DEF1DBD0456C8C0AA26577B1  get_U36E5DC824F803F8565AF31B42199DAE39FE7F4EA9_11() const { return ___6E5DC824F803F8565AF31B42199DAE39FE7F4EA9_11; }
	inline __StaticArrayInitTypeSizeU3D3132_t486168FFAE191756DEF1DBD0456C8C0AA26577B1 * get_address_of_U36E5DC824F803F8565AF31B42199DAE39FE7F4EA9_11() { return &___6E5DC824F803F8565AF31B42199DAE39FE7F4EA9_11; }
	inline void set_U36E5DC824F803F8565AF31B42199DAE39FE7F4EA9_11(__StaticArrayInitTypeSizeU3D3132_t486168FFAE191756DEF1DBD0456C8C0AA26577B1  value)
	{
		___6E5DC824F803F8565AF31B42199DAE39FE7F4EA9_11 = value;
	}

	inline static int32_t get_offset_of_U36FA00AC9FFFD87F82A38A7F9ECC8134F4A7052AF_12() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA_StaticFields, ___6FA00AC9FFFD87F82A38A7F9ECC8134F4A7052AF_12)); }
	inline int64_t get_U36FA00AC9FFFD87F82A38A7F9ECC8134F4A7052AF_12() const { return ___6FA00AC9FFFD87F82A38A7F9ECC8134F4A7052AF_12; }
	inline int64_t* get_address_of_U36FA00AC9FFFD87F82A38A7F9ECC8134F4A7052AF_12() { return &___6FA00AC9FFFD87F82A38A7F9ECC8134F4A7052AF_12; }
	inline void set_U36FA00AC9FFFD87F82A38A7F9ECC8134F4A7052AF_12(int64_t value)
	{
		___6FA00AC9FFFD87F82A38A7F9ECC8134F4A7052AF_12 = value;
	}

	inline static int32_t get_offset_of_U3736D39815215889F11249D9958F6ED12D37B9F57_13() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA_StaticFields, ___736D39815215889F11249D9958F6ED12D37B9F57_13)); }
	inline __StaticArrayInitTypeSizeU3D3_t83D19CF571199F638945B4CE7AC3EFBB12513428  get_U3736D39815215889F11249D9958F6ED12D37B9F57_13() const { return ___736D39815215889F11249D9958F6ED12D37B9F57_13; }
	inline __StaticArrayInitTypeSizeU3D3_t83D19CF571199F638945B4CE7AC3EFBB12513428 * get_address_of_U3736D39815215889F11249D9958F6ED12D37B9F57_13() { return &___736D39815215889F11249D9958F6ED12D37B9F57_13; }
	inline void set_U3736D39815215889F11249D9958F6ED12D37B9F57_13(__StaticArrayInitTypeSizeU3D3_t83D19CF571199F638945B4CE7AC3EFBB12513428  value)
	{
		___736D39815215889F11249D9958F6ED12D37B9F57_13 = value;
	}

	inline static int32_t get_offset_of_U386F4F563FA2C61798AE6238D789139739428463A_14() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA_StaticFields, ___86F4F563FA2C61798AE6238D789139739428463A_14)); }
	inline __StaticArrayInitTypeSizeU3D3_t83D19CF571199F638945B4CE7AC3EFBB12513428  get_U386F4F563FA2C61798AE6238D789139739428463A_14() const { return ___86F4F563FA2C61798AE6238D789139739428463A_14; }
	inline __StaticArrayInitTypeSizeU3D3_t83D19CF571199F638945B4CE7AC3EFBB12513428 * get_address_of_U386F4F563FA2C61798AE6238D789139739428463A_14() { return &___86F4F563FA2C61798AE6238D789139739428463A_14; }
	inline void set_U386F4F563FA2C61798AE6238D789139739428463A_14(__StaticArrayInitTypeSizeU3D3_t83D19CF571199F638945B4CE7AC3EFBB12513428  value)
	{
		___86F4F563FA2C61798AE6238D789139739428463A_14 = value;
	}

	inline static int32_t get_offset_of_U397FB30C84FF4A41CD4625B44B2940BFC8DB43003_15() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA_StaticFields, ___97FB30C84FF4A41CD4625B44B2940BFC8DB43003_15)); }
	inline __StaticArrayInitTypeSizeU3D3_t83D19CF571199F638945B4CE7AC3EFBB12513428  get_U397FB30C84FF4A41CD4625B44B2940BFC8DB43003_15() const { return ___97FB30C84FF4A41CD4625B44B2940BFC8DB43003_15; }
	inline __StaticArrayInitTypeSizeU3D3_t83D19CF571199F638945B4CE7AC3EFBB12513428 * get_address_of_U397FB30C84FF4A41CD4625B44B2940BFC8DB43003_15() { return &___97FB30C84FF4A41CD4625B44B2940BFC8DB43003_15; }
	inline void set_U397FB30C84FF4A41CD4625B44B2940BFC8DB43003_15(__StaticArrayInitTypeSizeU3D3_t83D19CF571199F638945B4CE7AC3EFBB12513428  value)
	{
		___97FB30C84FF4A41CD4625B44B2940BFC8DB43003_15 = value;
	}

	inline static int32_t get_offset_of_U39A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_16() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA_StaticFields, ___9A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_16)); }
	inline __StaticArrayInitTypeSizeU3D64_t7FDF3B8905F8D5A457AD7CA8FB6CB4F40AA78AF9  get_U39A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_16() const { return ___9A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_16; }
	inline __StaticArrayInitTypeSizeU3D64_t7FDF3B8905F8D5A457AD7CA8FB6CB4F40AA78AF9 * get_address_of_U39A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_16() { return &___9A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_16; }
	inline void set_U39A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_16(__StaticArrayInitTypeSizeU3D64_t7FDF3B8905F8D5A457AD7CA8FB6CB4F40AA78AF9  value)
	{
		___9A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_16 = value;
	}

	inline static int32_t get_offset_of_U39BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_17() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA_StaticFields, ___9BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_17)); }
	inline __StaticArrayInitTypeSizeU3D3_t83D19CF571199F638945B4CE7AC3EFBB12513428  get_U39BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_17() const { return ___9BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_17; }
	inline __StaticArrayInitTypeSizeU3D3_t83D19CF571199F638945B4CE7AC3EFBB12513428 * get_address_of_U39BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_17() { return &___9BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_17; }
	inline void set_U39BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_17(__StaticArrayInitTypeSizeU3D3_t83D19CF571199F638945B4CE7AC3EFBB12513428  value)
	{
		___9BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_17 = value;
	}

	inline static int32_t get_offset_of_A323DB0813C4D072957BA6FDA79D9776674CD06B_18() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA_StaticFields, ___A323DB0813C4D072957BA6FDA79D9776674CD06B_18)); }
	inline __StaticArrayInitTypeSizeU3D3_t83D19CF571199F638945B4CE7AC3EFBB12513428  get_A323DB0813C4D072957BA6FDA79D9776674CD06B_18() const { return ___A323DB0813C4D072957BA6FDA79D9776674CD06B_18; }
	inline __StaticArrayInitTypeSizeU3D3_t83D19CF571199F638945B4CE7AC3EFBB12513428 * get_address_of_A323DB0813C4D072957BA6FDA79D9776674CD06B_18() { return &___A323DB0813C4D072957BA6FDA79D9776674CD06B_18; }
	inline void set_A323DB0813C4D072957BA6FDA79D9776674CD06B_18(__StaticArrayInitTypeSizeU3D3_t83D19CF571199F638945B4CE7AC3EFBB12513428  value)
	{
		___A323DB0813C4D072957BA6FDA79D9776674CD06B_18 = value;
	}

	inline static int32_t get_offset_of_AEA5F1CC5CFE1660539EDD691FE017F775F63A0D_19() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA_StaticFields, ___AEA5F1CC5CFE1660539EDD691FE017F775F63A0D_19)); }
	inline int64_t get_AEA5F1CC5CFE1660539EDD691FE017F775F63A0D_19() const { return ___AEA5F1CC5CFE1660539EDD691FE017F775F63A0D_19; }
	inline int64_t* get_address_of_AEA5F1CC5CFE1660539EDD691FE017F775F63A0D_19() { return &___AEA5F1CC5CFE1660539EDD691FE017F775F63A0D_19; }
	inline void set_AEA5F1CC5CFE1660539EDD691FE017F775F63A0D_19(int64_t value)
	{
		___AEA5F1CC5CFE1660539EDD691FE017F775F63A0D_19 = value;
	}

	inline static int32_t get_offset_of_BE1BDEC0AA74B4DCB079943E70528096CCA985F8_20() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA_StaticFields, ___BE1BDEC0AA74B4DCB079943E70528096CCA985F8_20)); }
	inline __StaticArrayInitTypeSizeU3D20_t45181D0C9A3626B505048EEE1AC441C18A377DBF  get_BE1BDEC0AA74B4DCB079943E70528096CCA985F8_20() const { return ___BE1BDEC0AA74B4DCB079943E70528096CCA985F8_20; }
	inline __StaticArrayInitTypeSizeU3D20_t45181D0C9A3626B505048EEE1AC441C18A377DBF * get_address_of_BE1BDEC0AA74B4DCB079943E70528096CCA985F8_20() { return &___BE1BDEC0AA74B4DCB079943E70528096CCA985F8_20; }
	inline void set_BE1BDEC0AA74B4DCB079943E70528096CCA985F8_20(__StaticArrayInitTypeSizeU3D20_t45181D0C9A3626B505048EEE1AC441C18A377DBF  value)
	{
		___BE1BDEC0AA74B4DCB079943E70528096CCA985F8_20 = value;
	}

	inline static int32_t get_offset_of_BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_21() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA_StaticFields, ___BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_21)); }
	inline __StaticArrayInitTypeSizeU3D3_t83D19CF571199F638945B4CE7AC3EFBB12513428  get_BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_21() const { return ___BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_21; }
	inline __StaticArrayInitTypeSizeU3D3_t83D19CF571199F638945B4CE7AC3EFBB12513428 * get_address_of_BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_21() { return &___BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_21; }
	inline void set_BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_21(__StaticArrayInitTypeSizeU3D3_t83D19CF571199F638945B4CE7AC3EFBB12513428  value)
	{
		___BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_21 = value;
	}

	inline static int32_t get_offset_of_CF0B42666EF5E37EDEA0AB8E173E42C196D03814_22() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA_StaticFields, ___CF0B42666EF5E37EDEA0AB8E173E42C196D03814_22)); }
	inline __StaticArrayInitTypeSizeU3D64_t7FDF3B8905F8D5A457AD7CA8FB6CB4F40AA78AF9  get_CF0B42666EF5E37EDEA0AB8E173E42C196D03814_22() const { return ___CF0B42666EF5E37EDEA0AB8E173E42C196D03814_22; }
	inline __StaticArrayInitTypeSizeU3D64_t7FDF3B8905F8D5A457AD7CA8FB6CB4F40AA78AF9 * get_address_of_CF0B42666EF5E37EDEA0AB8E173E42C196D03814_22() { return &___CF0B42666EF5E37EDEA0AB8E173E42C196D03814_22; }
	inline void set_CF0B42666EF5E37EDEA0AB8E173E42C196D03814_22(__StaticArrayInitTypeSizeU3D64_t7FDF3B8905F8D5A457AD7CA8FB6CB4F40AA78AF9  value)
	{
		___CF0B42666EF5E37EDEA0AB8E173E42C196D03814_22 = value;
	}

	inline static int32_t get_offset_of_D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_23() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA_StaticFields, ___D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_23)); }
	inline __StaticArrayInitTypeSizeU3D32_tB9E831F7CD5830D06525ABB45BC8517064237A2A  get_D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_23() const { return ___D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_23; }
	inline __StaticArrayInitTypeSizeU3D32_tB9E831F7CD5830D06525ABB45BC8517064237A2A * get_address_of_D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_23() { return &___D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_23; }
	inline void set_D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_23(__StaticArrayInitTypeSizeU3D32_tB9E831F7CD5830D06525ABB45BC8517064237A2A  value)
	{
		___D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_23 = value;
	}

	inline static int32_t get_offset_of_D2C5BAE967587C6F3D9F2C4551911E0575A1101F_24() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA_StaticFields, ___D2C5BAE967587C6F3D9F2C4551911E0575A1101F_24)); }
	inline __StaticArrayInitTypeSizeU3D256_t8BFCD627E5A35B5A739C81B9213D9B9A173DE667  get_D2C5BAE967587C6F3D9F2C4551911E0575A1101F_24() const { return ___D2C5BAE967587C6F3D9F2C4551911E0575A1101F_24; }
	inline __StaticArrayInitTypeSizeU3D256_t8BFCD627E5A35B5A739C81B9213D9B9A173DE667 * get_address_of_D2C5BAE967587C6F3D9F2C4551911E0575A1101F_24() { return &___D2C5BAE967587C6F3D9F2C4551911E0575A1101F_24; }
	inline void set_D2C5BAE967587C6F3D9F2C4551911E0575A1101F_24(__StaticArrayInitTypeSizeU3D256_t8BFCD627E5A35B5A739C81B9213D9B9A173DE667  value)
	{
		___D2C5BAE967587C6F3D9F2C4551911E0575A1101F_24 = value;
	}

	inline static int32_t get_offset_of_E75835D001C843F156FBA01B001DFE1B8029AC17_25() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA_StaticFields, ___E75835D001C843F156FBA01B001DFE1B8029AC17_25)); }
	inline __StaticArrayInitTypeSizeU3D64_t7FDF3B8905F8D5A457AD7CA8FB6CB4F40AA78AF9  get_E75835D001C843F156FBA01B001DFE1B8029AC17_25() const { return ___E75835D001C843F156FBA01B001DFE1B8029AC17_25; }
	inline __StaticArrayInitTypeSizeU3D64_t7FDF3B8905F8D5A457AD7CA8FB6CB4F40AA78AF9 * get_address_of_E75835D001C843F156FBA01B001DFE1B8029AC17_25() { return &___E75835D001C843F156FBA01B001DFE1B8029AC17_25; }
	inline void set_E75835D001C843F156FBA01B001DFE1B8029AC17_25(__StaticArrayInitTypeSizeU3D64_t7FDF3B8905F8D5A457AD7CA8FB6CB4F40AA78AF9  value)
	{
		___E75835D001C843F156FBA01B001DFE1B8029AC17_25 = value;
	}

	inline static int32_t get_offset_of_EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_26() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA_StaticFields, ___EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_26)); }
	inline __StaticArrayInitTypeSizeU3D10_tA87C7E06DDCE3975CB99672F98A6AC23AD0D87A0  get_EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_26() const { return ___EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_26; }
	inline __StaticArrayInitTypeSizeU3D10_tA87C7E06DDCE3975CB99672F98A6AC23AD0D87A0 * get_address_of_EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_26() { return &___EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_26; }
	inline void set_EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_26(__StaticArrayInitTypeSizeU3D10_tA87C7E06DDCE3975CB99672F98A6AC23AD0D87A0  value)
	{
		___EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_26 = value;
	}

	inline static int32_t get_offset_of_EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_27() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA_StaticFields, ___EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_27)); }
	inline __StaticArrayInitTypeSizeU3D3_t83D19CF571199F638945B4CE7AC3EFBB12513428  get_EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_27() const { return ___EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_27; }
	inline __StaticArrayInitTypeSizeU3D3_t83D19CF571199F638945B4CE7AC3EFBB12513428 * get_address_of_EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_27() { return &___EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_27; }
	inline void set_EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_27(__StaticArrayInitTypeSizeU3D3_t83D19CF571199F638945B4CE7AC3EFBB12513428  value)
	{
		___EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_27 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_TF21437707AFAA06797AEDEE07C84D4D3CC2837FA_H
#ifndef X509CERTIFICATE_T592E2574612B2C554C7B707754AEC3B66A4B476B_H
#define X509CERTIFICATE_T592E2574612B2C554C7B707754AEC3B66A4B476B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Certificate
struct  X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B  : public RuntimeObject
{
public:
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::decoder
	ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * ___decoder_0;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_encodedcert
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___m_encodedcert_1;
	// System.DateTime Mono.Security.X509.X509Certificate::m_from
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___m_from_2;
	// System.DateTime Mono.Security.X509.X509Certificate::m_until
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___m_until_3;
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::issuer
	ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * ___issuer_4;
	// System.String Mono.Security.X509.X509Certificate::m_issuername
	String_t* ___m_issuername_5;
	// System.String Mono.Security.X509.X509Certificate::m_keyalgo
	String_t* ___m_keyalgo_6;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_keyalgoparams
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___m_keyalgoparams_7;
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::subject
	ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * ___subject_8;
	// System.String Mono.Security.X509.X509Certificate::m_subject
	String_t* ___m_subject_9;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_publickey
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___m_publickey_10;
	// System.Byte[] Mono.Security.X509.X509Certificate::signature
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___signature_11;
	// System.String Mono.Security.X509.X509Certificate::m_signaturealgo
	String_t* ___m_signaturealgo_12;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_signaturealgoparams
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___m_signaturealgoparams_13;
	// System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::_rsa
	RSA_tB6C4B434B2AC02E3F8981DB2908C2018E251D145 * ____rsa_14;
	// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::_dsa
	DSA_t932F4A94DD2B782BFFC197544398826E6CDB64CF * ____dsa_15;
	// System.Int32 Mono.Security.X509.X509Certificate::version
	int32_t ___version_16;
	// System.Byte[] Mono.Security.X509.X509Certificate::serialnumber
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___serialnumber_17;
	// System.Byte[] Mono.Security.X509.X509Certificate::issuerUniqueID
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___issuerUniqueID_18;
	// System.Byte[] Mono.Security.X509.X509Certificate::subjectUniqueID
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___subjectUniqueID_19;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Certificate::extensions
	X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * ___extensions_20;

public:
	inline static int32_t get_offset_of_decoder_0() { return static_cast<int32_t>(offsetof(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B, ___decoder_0)); }
	inline ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * get_decoder_0() const { return ___decoder_0; }
	inline ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E ** get_address_of_decoder_0() { return &___decoder_0; }
	inline void set_decoder_0(ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * value)
	{
		___decoder_0 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_0), value);
	}

	inline static int32_t get_offset_of_m_encodedcert_1() { return static_cast<int32_t>(offsetof(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B, ___m_encodedcert_1)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_m_encodedcert_1() const { return ___m_encodedcert_1; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_m_encodedcert_1() { return &___m_encodedcert_1; }
	inline void set_m_encodedcert_1(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___m_encodedcert_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_encodedcert_1), value);
	}

	inline static int32_t get_offset_of_m_from_2() { return static_cast<int32_t>(offsetof(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B, ___m_from_2)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_m_from_2() const { return ___m_from_2; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_m_from_2() { return &___m_from_2; }
	inline void set_m_from_2(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___m_from_2 = value;
	}

	inline static int32_t get_offset_of_m_until_3() { return static_cast<int32_t>(offsetof(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B, ___m_until_3)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_m_until_3() const { return ___m_until_3; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_m_until_3() { return &___m_until_3; }
	inline void set_m_until_3(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___m_until_3 = value;
	}

	inline static int32_t get_offset_of_issuer_4() { return static_cast<int32_t>(offsetof(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B, ___issuer_4)); }
	inline ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * get_issuer_4() const { return ___issuer_4; }
	inline ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E ** get_address_of_issuer_4() { return &___issuer_4; }
	inline void set_issuer_4(ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * value)
	{
		___issuer_4 = value;
		Il2CppCodeGenWriteBarrier((&___issuer_4), value);
	}

	inline static int32_t get_offset_of_m_issuername_5() { return static_cast<int32_t>(offsetof(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B, ___m_issuername_5)); }
	inline String_t* get_m_issuername_5() const { return ___m_issuername_5; }
	inline String_t** get_address_of_m_issuername_5() { return &___m_issuername_5; }
	inline void set_m_issuername_5(String_t* value)
	{
		___m_issuername_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_issuername_5), value);
	}

	inline static int32_t get_offset_of_m_keyalgo_6() { return static_cast<int32_t>(offsetof(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B, ___m_keyalgo_6)); }
	inline String_t* get_m_keyalgo_6() const { return ___m_keyalgo_6; }
	inline String_t** get_address_of_m_keyalgo_6() { return &___m_keyalgo_6; }
	inline void set_m_keyalgo_6(String_t* value)
	{
		___m_keyalgo_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_keyalgo_6), value);
	}

	inline static int32_t get_offset_of_m_keyalgoparams_7() { return static_cast<int32_t>(offsetof(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B, ___m_keyalgoparams_7)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_m_keyalgoparams_7() const { return ___m_keyalgoparams_7; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_m_keyalgoparams_7() { return &___m_keyalgoparams_7; }
	inline void set_m_keyalgoparams_7(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___m_keyalgoparams_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_keyalgoparams_7), value);
	}

	inline static int32_t get_offset_of_subject_8() { return static_cast<int32_t>(offsetof(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B, ___subject_8)); }
	inline ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * get_subject_8() const { return ___subject_8; }
	inline ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E ** get_address_of_subject_8() { return &___subject_8; }
	inline void set_subject_8(ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * value)
	{
		___subject_8 = value;
		Il2CppCodeGenWriteBarrier((&___subject_8), value);
	}

	inline static int32_t get_offset_of_m_subject_9() { return static_cast<int32_t>(offsetof(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B, ___m_subject_9)); }
	inline String_t* get_m_subject_9() const { return ___m_subject_9; }
	inline String_t** get_address_of_m_subject_9() { return &___m_subject_9; }
	inline void set_m_subject_9(String_t* value)
	{
		___m_subject_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_subject_9), value);
	}

	inline static int32_t get_offset_of_m_publickey_10() { return static_cast<int32_t>(offsetof(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B, ___m_publickey_10)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_m_publickey_10() const { return ___m_publickey_10; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_m_publickey_10() { return &___m_publickey_10; }
	inline void set_m_publickey_10(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___m_publickey_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_publickey_10), value);
	}

	inline static int32_t get_offset_of_signature_11() { return static_cast<int32_t>(offsetof(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B, ___signature_11)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_signature_11() const { return ___signature_11; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_signature_11() { return &___signature_11; }
	inline void set_signature_11(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___signature_11 = value;
		Il2CppCodeGenWriteBarrier((&___signature_11), value);
	}

	inline static int32_t get_offset_of_m_signaturealgo_12() { return static_cast<int32_t>(offsetof(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B, ___m_signaturealgo_12)); }
	inline String_t* get_m_signaturealgo_12() const { return ___m_signaturealgo_12; }
	inline String_t** get_address_of_m_signaturealgo_12() { return &___m_signaturealgo_12; }
	inline void set_m_signaturealgo_12(String_t* value)
	{
		___m_signaturealgo_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_signaturealgo_12), value);
	}

	inline static int32_t get_offset_of_m_signaturealgoparams_13() { return static_cast<int32_t>(offsetof(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B, ___m_signaturealgoparams_13)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_m_signaturealgoparams_13() const { return ___m_signaturealgoparams_13; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_m_signaturealgoparams_13() { return &___m_signaturealgoparams_13; }
	inline void set_m_signaturealgoparams_13(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___m_signaturealgoparams_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_signaturealgoparams_13), value);
	}

	inline static int32_t get_offset_of__rsa_14() { return static_cast<int32_t>(offsetof(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B, ____rsa_14)); }
	inline RSA_tB6C4B434B2AC02E3F8981DB2908C2018E251D145 * get__rsa_14() const { return ____rsa_14; }
	inline RSA_tB6C4B434B2AC02E3F8981DB2908C2018E251D145 ** get_address_of__rsa_14() { return &____rsa_14; }
	inline void set__rsa_14(RSA_tB6C4B434B2AC02E3F8981DB2908C2018E251D145 * value)
	{
		____rsa_14 = value;
		Il2CppCodeGenWriteBarrier((&____rsa_14), value);
	}

	inline static int32_t get_offset_of__dsa_15() { return static_cast<int32_t>(offsetof(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B, ____dsa_15)); }
	inline DSA_t932F4A94DD2B782BFFC197544398826E6CDB64CF * get__dsa_15() const { return ____dsa_15; }
	inline DSA_t932F4A94DD2B782BFFC197544398826E6CDB64CF ** get_address_of__dsa_15() { return &____dsa_15; }
	inline void set__dsa_15(DSA_t932F4A94DD2B782BFFC197544398826E6CDB64CF * value)
	{
		____dsa_15 = value;
		Il2CppCodeGenWriteBarrier((&____dsa_15), value);
	}

	inline static int32_t get_offset_of_version_16() { return static_cast<int32_t>(offsetof(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B, ___version_16)); }
	inline int32_t get_version_16() const { return ___version_16; }
	inline int32_t* get_address_of_version_16() { return &___version_16; }
	inline void set_version_16(int32_t value)
	{
		___version_16 = value;
	}

	inline static int32_t get_offset_of_serialnumber_17() { return static_cast<int32_t>(offsetof(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B, ___serialnumber_17)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_serialnumber_17() const { return ___serialnumber_17; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_serialnumber_17() { return &___serialnumber_17; }
	inline void set_serialnumber_17(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___serialnumber_17 = value;
		Il2CppCodeGenWriteBarrier((&___serialnumber_17), value);
	}

	inline static int32_t get_offset_of_issuerUniqueID_18() { return static_cast<int32_t>(offsetof(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B, ___issuerUniqueID_18)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_issuerUniqueID_18() const { return ___issuerUniqueID_18; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_issuerUniqueID_18() { return &___issuerUniqueID_18; }
	inline void set_issuerUniqueID_18(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___issuerUniqueID_18 = value;
		Il2CppCodeGenWriteBarrier((&___issuerUniqueID_18), value);
	}

	inline static int32_t get_offset_of_subjectUniqueID_19() { return static_cast<int32_t>(offsetof(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B, ___subjectUniqueID_19)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_subjectUniqueID_19() const { return ___subjectUniqueID_19; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_subjectUniqueID_19() { return &___subjectUniqueID_19; }
	inline void set_subjectUniqueID_19(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___subjectUniqueID_19 = value;
		Il2CppCodeGenWriteBarrier((&___subjectUniqueID_19), value);
	}

	inline static int32_t get_offset_of_extensions_20() { return static_cast<int32_t>(offsetof(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B, ___extensions_20)); }
	inline X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * get_extensions_20() const { return ___extensions_20; }
	inline X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 ** get_address_of_extensions_20() { return &___extensions_20; }
	inline void set_extensions_20(X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * value)
	{
		___extensions_20 = value;
		Il2CppCodeGenWriteBarrier((&___extensions_20), value);
	}
};

struct X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B_StaticFields
{
public:
	// System.String Mono.Security.X509.X509Certificate::encoding_error
	String_t* ___encoding_error_21;

public:
	inline static int32_t get_offset_of_encoding_error_21() { return static_cast<int32_t>(offsetof(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B_StaticFields, ___encoding_error_21)); }
	inline String_t* get_encoding_error_21() const { return ___encoding_error_21; }
	inline String_t** get_address_of_encoding_error_21() { return &___encoding_error_21; }
	inline void set_encoding_error_21(String_t* value)
	{
		___encoding_error_21 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_error_21), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATE_T592E2574612B2C554C7B707754AEC3B66A4B476B_H
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
#ifndef STREAMINGCONTEXTSTATES_T6D16CD7BC584A66A29B702F5FD59DF62BB1BDD3F_H
#define STREAMINGCONTEXTSTATES_T6D16CD7BC584A66A29B702F5FD59DF62BB1BDD3F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_t6D16CD7BC584A66A29B702F5FD59DF62BB1BDD3F 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingContextStates_t6D16CD7BC584A66A29B702F5FD59DF62BB1BDD3F, ___value___2)); }
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
#endif // STREAMINGCONTEXTSTATES_T6D16CD7BC584A66A29B702F5FD59DF62BB1BDD3F_H
#ifndef RUNTIMEFIELDHANDLE_T844BDF00E8E6FE69D9AEAA7657F09018B864F4EF_H
#define RUNTIMEFIELDHANDLE_T844BDF00E8E6FE69D9AEAA7657F09018B864F4EF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF, ___value_0)); }
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
#endif // RUNTIMEFIELDHANDLE_T844BDF00E8E6FE69D9AEAA7657F09018B864F4EF_H
#ifndef CRYPTOGRAPHICEXCEPTION_T67ABE4FAB48298C9DF4C5E37E4C8F20AA601F15A_H
#define CRYPTOGRAPHICEXCEPTION_T67ABE4FAB48298C9DF4C5E37E4C8F20AA601F15A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptographicException
struct  CryptographicException_t67ABE4FAB48298C9DF4C5E37E4C8F20AA601F15A  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOGRAPHICEXCEPTION_T67ABE4FAB48298C9DF4C5E37E4C8F20AA601F15A_H
#ifndef CSPPROVIDERFLAGS_T58BDA302C5856D2AA7A41E97CAB5BDD0516571F4_H
#define CSPPROVIDERFLAGS_T58BDA302C5856D2AA7A41E97CAB5BDD0516571F4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CspProviderFlags
struct  CspProviderFlags_t58BDA302C5856D2AA7A41E97CAB5BDD0516571F4 
{
public:
	// System.Int32 System.Security.Cryptography.CspProviderFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CspProviderFlags_t58BDA302C5856D2AA7A41E97CAB5BDD0516571F4, ___value___2)); }
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
#endif // CSPPROVIDERFLAGS_T58BDA302C5856D2AA7A41E97CAB5BDD0516571F4_H
#ifndef DSACRYPTOSERVICEPROVIDER_T2F04D5DDEC979A82A4FE89530F0F712DFE12D6C8_H
#define DSACRYPTOSERVICEPROVIDER_T2F04D5DDEC979A82A4FE89530F0F712DFE12D6C8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSACryptoServiceProvider
struct  DSACryptoServiceProvider_t2F04D5DDEC979A82A4FE89530F0F712DFE12D6C8  : public DSA_t932F4A94DD2B782BFFC197544398826E6CDB64CF
{
public:
	// Mono.Security.Cryptography.KeyPairPersistence System.Security.Cryptography.DSACryptoServiceProvider::store
	KeyPairPersistence_t5C070E8D158094F7D0CC5D591F30EDFFB39849A2 * ___store_2;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::persistKey
	bool ___persistKey_3;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::persisted
	bool ___persisted_4;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::privateKeyExportable
	bool ___privateKeyExportable_5;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::m_disposed
	bool ___m_disposed_6;
	// Mono.Security.Cryptography.DSAManaged System.Security.Cryptography.DSACryptoServiceProvider::dsa
	DSAManaged_tB329E8EFCE56CF874A8EEAC16BEAC13146F47FEA * ___dsa_7;

public:
	inline static int32_t get_offset_of_store_2() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t2F04D5DDEC979A82A4FE89530F0F712DFE12D6C8, ___store_2)); }
	inline KeyPairPersistence_t5C070E8D158094F7D0CC5D591F30EDFFB39849A2 * get_store_2() const { return ___store_2; }
	inline KeyPairPersistence_t5C070E8D158094F7D0CC5D591F30EDFFB39849A2 ** get_address_of_store_2() { return &___store_2; }
	inline void set_store_2(KeyPairPersistence_t5C070E8D158094F7D0CC5D591F30EDFFB39849A2 * value)
	{
		___store_2 = value;
		Il2CppCodeGenWriteBarrier((&___store_2), value);
	}

	inline static int32_t get_offset_of_persistKey_3() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t2F04D5DDEC979A82A4FE89530F0F712DFE12D6C8, ___persistKey_3)); }
	inline bool get_persistKey_3() const { return ___persistKey_3; }
	inline bool* get_address_of_persistKey_3() { return &___persistKey_3; }
	inline void set_persistKey_3(bool value)
	{
		___persistKey_3 = value;
	}

	inline static int32_t get_offset_of_persisted_4() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t2F04D5DDEC979A82A4FE89530F0F712DFE12D6C8, ___persisted_4)); }
	inline bool get_persisted_4() const { return ___persisted_4; }
	inline bool* get_address_of_persisted_4() { return &___persisted_4; }
	inline void set_persisted_4(bool value)
	{
		___persisted_4 = value;
	}

	inline static int32_t get_offset_of_privateKeyExportable_5() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t2F04D5DDEC979A82A4FE89530F0F712DFE12D6C8, ___privateKeyExportable_5)); }
	inline bool get_privateKeyExportable_5() const { return ___privateKeyExportable_5; }
	inline bool* get_address_of_privateKeyExportable_5() { return &___privateKeyExportable_5; }
	inline void set_privateKeyExportable_5(bool value)
	{
		___privateKeyExportable_5 = value;
	}

	inline static int32_t get_offset_of_m_disposed_6() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t2F04D5DDEC979A82A4FE89530F0F712DFE12D6C8, ___m_disposed_6)); }
	inline bool get_m_disposed_6() const { return ___m_disposed_6; }
	inline bool* get_address_of_m_disposed_6() { return &___m_disposed_6; }
	inline void set_m_disposed_6(bool value)
	{
		___m_disposed_6 = value;
	}

	inline static int32_t get_offset_of_dsa_7() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t2F04D5DDEC979A82A4FE89530F0F712DFE12D6C8, ___dsa_7)); }
	inline DSAManaged_tB329E8EFCE56CF874A8EEAC16BEAC13146F47FEA * get_dsa_7() const { return ___dsa_7; }
	inline DSAManaged_tB329E8EFCE56CF874A8EEAC16BEAC13146F47FEA ** get_address_of_dsa_7() { return &___dsa_7; }
	inline void set_dsa_7(DSAManaged_tB329E8EFCE56CF874A8EEAC16BEAC13146F47FEA * value)
	{
		___dsa_7 = value;
		Il2CppCodeGenWriteBarrier((&___dsa_7), value);
	}
};

struct DSACryptoServiceProvider_t2F04D5DDEC979A82A4FE89530F0F712DFE12D6C8_StaticFields
{
public:
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::useMachineKeyStore
	bool ___useMachineKeyStore_8;

public:
	inline static int32_t get_offset_of_useMachineKeyStore_8() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t2F04D5DDEC979A82A4FE89530F0F712DFE12D6C8_StaticFields, ___useMachineKeyStore_8)); }
	inline bool get_useMachineKeyStore_8() const { return ___useMachineKeyStore_8; }
	inline bool* get_address_of_useMachineKeyStore_8() { return &___useMachineKeyStore_8; }
	inline void set_useMachineKeyStore_8(bool value)
	{
		___useMachineKeyStore_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSACRYPTOSERVICEPROVIDER_T2F04D5DDEC979A82A4FE89530F0F712DFE12D6C8_H
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
#ifndef STREAMINGCONTEXT_T2CCDC54E0E8D078AF4A50E3A8B921B828A900034_H
#define STREAMINGCONTEXT_T2CCDC54E0E8D078AF4A50E3A8B921B828A900034_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034 
{
public:
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject * ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;

public:
	inline static int32_t get_offset_of_m_additionalContext_0() { return static_cast<int32_t>(offsetof(StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034, ___m_additionalContext_0)); }
	inline RuntimeObject * get_m_additionalContext_0() const { return ___m_additionalContext_0; }
	inline RuntimeObject ** get_address_of_m_additionalContext_0() { return &___m_additionalContext_0; }
	inline void set_m_additionalContext_0(RuntimeObject * value)
	{
		___m_additionalContext_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_additionalContext_0), value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034, ___m_state_1)); }
	inline int32_t get_m_state_1() const { return ___m_state_1; }
	inline int32_t* get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(int32_t value)
	{
		___m_state_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
#endif // STREAMINGCONTEXT_T2CCDC54E0E8D078AF4A50E3A8B921B828A900034_H
#ifndef RSACRYPTOSERVICEPROVIDER_T6DC0FC3205BA6CDCA4FF2AEEF566D8F0CCE26AD4_H
#define RSACRYPTOSERVICEPROVIDER_T6DC0FC3205BA6CDCA4FF2AEEF566D8F0CCE26AD4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSACryptoServiceProvider
struct  RSACryptoServiceProvider_t6DC0FC3205BA6CDCA4FF2AEEF566D8F0CCE26AD4  : public RSA_tB6C4B434B2AC02E3F8981DB2908C2018E251D145
{
public:
	// Mono.Security.Cryptography.KeyPairPersistence System.Security.Cryptography.RSACryptoServiceProvider::store
	KeyPairPersistence_t5C070E8D158094F7D0CC5D591F30EDFFB39849A2 * ___store_3;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::persistKey
	bool ___persistKey_4;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::persisted
	bool ___persisted_5;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::privateKeyExportable
	bool ___privateKeyExportable_6;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::m_disposed
	bool ___m_disposed_7;
	// Mono.Security.Cryptography.RSAManaged System.Security.Cryptography.RSACryptoServiceProvider::rsa
	RSAManaged_t7FC74A986C888D9301EC82EBE4A37C293CDA963A * ___rsa_8;

public:
	inline static int32_t get_offset_of_store_3() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t6DC0FC3205BA6CDCA4FF2AEEF566D8F0CCE26AD4, ___store_3)); }
	inline KeyPairPersistence_t5C070E8D158094F7D0CC5D591F30EDFFB39849A2 * get_store_3() const { return ___store_3; }
	inline KeyPairPersistence_t5C070E8D158094F7D0CC5D591F30EDFFB39849A2 ** get_address_of_store_3() { return &___store_3; }
	inline void set_store_3(KeyPairPersistence_t5C070E8D158094F7D0CC5D591F30EDFFB39849A2 * value)
	{
		___store_3 = value;
		Il2CppCodeGenWriteBarrier((&___store_3), value);
	}

	inline static int32_t get_offset_of_persistKey_4() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t6DC0FC3205BA6CDCA4FF2AEEF566D8F0CCE26AD4, ___persistKey_4)); }
	inline bool get_persistKey_4() const { return ___persistKey_4; }
	inline bool* get_address_of_persistKey_4() { return &___persistKey_4; }
	inline void set_persistKey_4(bool value)
	{
		___persistKey_4 = value;
	}

	inline static int32_t get_offset_of_persisted_5() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t6DC0FC3205BA6CDCA4FF2AEEF566D8F0CCE26AD4, ___persisted_5)); }
	inline bool get_persisted_5() const { return ___persisted_5; }
	inline bool* get_address_of_persisted_5() { return &___persisted_5; }
	inline void set_persisted_5(bool value)
	{
		___persisted_5 = value;
	}

	inline static int32_t get_offset_of_privateKeyExportable_6() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t6DC0FC3205BA6CDCA4FF2AEEF566D8F0CCE26AD4, ___privateKeyExportable_6)); }
	inline bool get_privateKeyExportable_6() const { return ___privateKeyExportable_6; }
	inline bool* get_address_of_privateKeyExportable_6() { return &___privateKeyExportable_6; }
	inline void set_privateKeyExportable_6(bool value)
	{
		___privateKeyExportable_6 = value;
	}

	inline static int32_t get_offset_of_m_disposed_7() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t6DC0FC3205BA6CDCA4FF2AEEF566D8F0CCE26AD4, ___m_disposed_7)); }
	inline bool get_m_disposed_7() const { return ___m_disposed_7; }
	inline bool* get_address_of_m_disposed_7() { return &___m_disposed_7; }
	inline void set_m_disposed_7(bool value)
	{
		___m_disposed_7 = value;
	}

	inline static int32_t get_offset_of_rsa_8() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t6DC0FC3205BA6CDCA4FF2AEEF566D8F0CCE26AD4, ___rsa_8)); }
	inline RSAManaged_t7FC74A986C888D9301EC82EBE4A37C293CDA963A * get_rsa_8() const { return ___rsa_8; }
	inline RSAManaged_t7FC74A986C888D9301EC82EBE4A37C293CDA963A ** get_address_of_rsa_8() { return &___rsa_8; }
	inline void set_rsa_8(RSAManaged_t7FC74A986C888D9301EC82EBE4A37C293CDA963A * value)
	{
		___rsa_8 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_8), value);
	}
};

struct RSACryptoServiceProvider_t6DC0FC3205BA6CDCA4FF2AEEF566D8F0CCE26AD4_StaticFields
{
public:
	// System.Security.Cryptography.CspProviderFlags modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.RSACryptoServiceProvider::s_UseMachineKeyStore
	int32_t ___s_UseMachineKeyStore_2;

public:
	inline static int32_t get_offset_of_s_UseMachineKeyStore_2() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t6DC0FC3205BA6CDCA4FF2AEEF566D8F0CCE26AD4_StaticFields, ___s_UseMachineKeyStore_2)); }
	inline int32_t get_s_UseMachineKeyStore_2() const { return ___s_UseMachineKeyStore_2; }
	inline int32_t* get_address_of_s_UseMachineKeyStore_2() { return &___s_UseMachineKeyStore_2; }
	inline void set_s_UseMachineKeyStore_2(int32_t value)
	{
		___s_UseMachineKeyStore_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSACRYPTOSERVICEPROVIDER_T6DC0FC3205BA6CDCA4FF2AEEF566D8F0CCE26AD4_H
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
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


// System.Void System.Array::Reverse<System.Byte>(!!0[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Array_Reverse_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mC6D04DB36698F31262134DEEF6B9C03026200F13_gshared (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* p0, int32_t p1, int32_t p2, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
extern "C" IL2CPP_METHOD_ATTR void StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E (StringBuilder_t * __this, const RuntimeMethod* method);
// Mono.Security.ASN1 Mono.Security.ASN1::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * ASN1_get_Item_m88B75C57A7E130A02A709AE8FFD2E0972E71FC08 (ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X501::AppendEntry(System.Text.StringBuilder,Mono.Security.ASN1,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void X501_AppendEntry_m4309ECCC58A9C96B7039249F97E9020963C6C630 (StringBuilder_t * ___sb0, ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * ___entry1, bool ___quotes2, const RuntimeMethod* method);
// System.Int32 Mono.Security.ASN1::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t ASN1_get_Count_m5A0E71B4C4A2257C0875AE1041AAA953C5B12A19 (ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean Mono.Security.ASN1::CompareValue(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR bool ASN1_CompareValue_mB18BFB4C3B5CC0086F6733C93472B6ECE85DBC99 (ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___value0, const RuntimeMethod* method);
// System.String Mono.Security.ASN1Convert::ToOid(Mono.Security.ASN1)
extern "C" IL2CPP_METHOD_ATTR String_t* ASN1Convert_ToOid_mFFA93B4BBEFCA8E4E86DAE87CDB998E78BFB2D5A (ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * ___asn10, const RuntimeMethod* method);
// System.Byte Mono.Security.ASN1::get_Tag()
extern "C" IL2CPP_METHOD_ATTR uint8_t ASN1_get_Tag_m1346989AC839D85A9E0A211525A6B551974E4862 (ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * __this, const RuntimeMethod* method);
// System.Byte[] Mono.Security.ASN1::get_Value()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ASN1_get_Value_m9BD6239E12A6148AF9507C2F58058C6B8147A079 (ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A (StringBuilder_t * __this, Il2CppChar p0, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF7()
extern "C" IL2CPP_METHOD_ATTR Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * Encoding_get_UTF7_mE709E3E74B727CFCC6675F07BC0AF19C7B4D0F1C (const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
extern "C" IL2CPP_METHOD_ATTR Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9 (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
extern "C" IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A (RuntimeArray * p0, RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  p1, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018 (String_t* __this, const RuntimeMethod* method);
// System.Int32 System.String::IndexOfAny(System.Char[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t String_IndexOfAny_mB7D79AEF460C7C8B3B0CCC573191FA0E339DD495 (String_t* __this, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Boolean System.String::StartsWith(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_StartsWith_m7D468FB7C801D9C2DBEEEEC86F8BA8F4EC3243C1 (String_t* __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean System.String::EndsWith(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_EndsWith_mE4F039DCC2A9FCB8C1ED2D04B00A35E3CE16DE99 (String_t* __this, String_t* p0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.Void Mono.Security.ASN1::.ctor(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void ASN1__ctor_mE005F52336402C3D41EAD9E28A95910B3C0865DA (ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.CryptographicException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void CryptographicException__ctor_m0A5D357C12F9A830A9EBC51723094EBA5B854B98 (CryptographicException_t67ABE4FAB48298C9DF4C5E37E4C8F20AA601F15A * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Array::Reverse<System.Byte>(!!0[],System.Int32,System.Int32)
inline void Array_Reverse_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mC6D04DB36698F31262134DEEF6B9C03026200F13 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* p0, int32_t p1, int32_t p2, const RuntimeMethod* method)
{
	((  void (*) (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t, const RuntimeMethod*))Array_Reverse_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mC6D04DB36698F31262134DEEF6B9C03026200F13_gshared)(p0, p1, p2, method);
}
// Mono.Security.ASN1 Mono.Security.ASN1::Element(System.Int32,System.Byte)
extern "C" IL2CPP_METHOD_ATTR ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * ASN1_Element_m505373548BEE512211614D9CE56AE728959D188D (ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * __this, int32_t ___index0, uint8_t ___anTag1, const RuntimeMethod* method);
// System.String Mono.Security.X509.X501::ToString(Mono.Security.ASN1)
extern "C" IL2CPP_METHOD_ATTR String_t* X501_ToString_m4BB9988001C8AA907F7FB24BF0062158B10F6000 (ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * ___seq0, const RuntimeMethod* method);
// System.DateTime Mono.Security.ASN1Convert::ToDateTime(Mono.Security.ASN1)
extern "C" IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ASN1Convert_ToDateTime_m94B39FD0657B85FB9AB61B04CAD71E759C9FE152 (ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * ___time0, const RuntimeMethod* method);
// System.Int32 Mono.Security.ASN1::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t ASN1_get_Length_mD0AC74E8F07244961D697B341599BD83D989EF63 (ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * __this, const RuntimeMethod* method);
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m1F882D595976063718AF6E405664FC761924D353 (RuntimeArray * p0, int32_t p1, RuntimeArray * p2, int32_t p3, int32_t p4, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509ExtensionCollection::.ctor(Mono.Security.ASN1)
extern "C" IL2CPP_METHOD_ATTR void X509ExtensionCollection__ctor_mE4744D19F24BBC5F7FE1EE171FD5C301B38A9662 (X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * __this, ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * ___asn10, const RuntimeMethod* method);
// System.Object System.Array::Clone()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Array_Clone_mE8C710213E323617A6F46F2B36DCDDD4C7CF5176 (RuntimeArray * __this, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.CryptographicException::.ctor(System.String,System.Exception)
extern "C" IL2CPP_METHOD_ATTR void CryptographicException__ctor_m65F4E67FD9D0449B5BFFC04E359BF3EC098075DA (CryptographicException_t67ABE4FAB48298C9DF4C5E37E4C8F20AA601F15A * __this, String_t* p0, Exception_t * p1, const RuntimeMethod* method);
// System.Byte[] Mono.Security.X509.X509Certificate::PEM(System.String,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* X509Certificate_PEM_m1C6DE4765B36C1EE23F33E74F1E10609004C9CE2 (String_t* ___type0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data1, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509Certificate::Parse(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void X509Certificate_Parse_m5CB2F316EC4BC08A3714213C103E3C8689F2E8E0 (X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Byte[] Mono.Security.X509.X509Certificate::GetUnsignedBigInteger(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* X509Certificate_GetUnsignedBigInteger_mD00F44BA5EC7109B54BB43083AC1BB9F531C0FDD (X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___integer0, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void DSACryptoServiceProvider__ctor_m7543CB44E8F80ADC129572DD56E4C11F4C18B790 (DSACryptoServiceProvider_t2F04D5DDEC979A82A4FE89530F0F712DFE12D6C8 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void RSACryptoServiceProvider__ctor_mBE2DCC392E07EBD1E400EF9EF6C25E678236ACC2 (RSACryptoServiceProvider_t6DC0FC3205BA6CDCA4FF2AEEF566D8F0CCE26AD4 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_mC9D1E16476E24E1AFE7C59368D3BC0B35F64FBC6 (SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * __this, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_ASCII()
extern "C" IL2CPP_METHOD_ATTR Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * Encoding_get_ASCII_m9B673AE3152AB04D07CADE6E5E142C785B5BC94E (const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t String_IndexOf_mA9A0117D68338238E51E5928CDA8EB3DC9DA497B (String_t* __this, String_t* p0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t String_IndexOf_m9285F4AFCAD971E6AFB6F0212B415989CB3DACA5 (String_t* __this, String_t* p0, int32_t p1, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB (String_t* __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Byte[] System.Convert::FromBase64String(System.String)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* Convert_FromBase64String_m079F788D000703E8018DA39BE9C05F1CBF60B156 (String_t* p0, const RuntimeMethod* method);
// System.String Locale::GetText(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Locale_GetText_m67B66557188C94648AA7A23F6A7501BE7D455ADA (String_t* ___msg0, const RuntimeMethod* method);
// System.Void System.Collections.CollectionBase::.ctor()
extern "C" IL2CPP_METHOD_ATTR void CollectionBase__ctor_mE3F20EEAA96F8613088EDD69A17E49C22E97ADF9 (CollectionBase_tF5D4583FF325726066A9803839A04E9C0084ED01 * __this, const RuntimeMethod* method);
// System.Collections.ArrayList System.Collections.CollectionBase::get_InnerList()
extern "C" IL2CPP_METHOD_ATTR ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * CollectionBase_get_InnerList_m56EDE16DE8F8FA2AA6346730CC725E0B3BF0750A (CollectionBase_tF5D4583FF325726066A9803839A04E9C0084ED01 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* p0, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::.ctor(Mono.Security.X509.X509CertificateCollection)
extern "C" IL2CPP_METHOD_ATTR void X509CertificateEnumerator__ctor_m6D622EC72DC9F698B6674D0D940C9BE62DD9AB68 (X509CertificateEnumerator_t1CBC050F10F4BE1E2A8552A1F22E705013EBF505 * __this, X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A * ___mappings0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void Mono.Security.ASN1::set_Value(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void ASN1_set_Value_m225FF9AC03EA872809C7742070A34A264C58588E (ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___value0, const RuntimeMethod* method);
// Mono.Security.ASN1 Mono.Security.ASN1::Add(Mono.Security.ASN1)
extern "C" IL2CPP_METHOD_ATTR ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * ASN1_Add_mF6ED0416BB021A1C333F99E42F8B17AF8B26639B (ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * __this, ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * ___asn10, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
extern "C" IL2CPP_METHOD_ATTR CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72 (const RuntimeMethod* method);
// System.String System.Byte::ToString(System.String,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* Byte_ToString_m731FDB27391432D7F14B6769B5D0A3E248803D25 (uint8_t* __this, String_t* p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.Char System.Convert::ToChar(System.Byte)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_m2FF337FDDCAD52939473E0D7ED3FBFD49A4C2E18 (uint8_t p0, const RuntimeMethod* method);
// System.String System.Environment::get_NewLine()
extern "C" IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_m5D4F4667FA5D1E2DBDD4DF9696D0CE76C83EF318 (const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509Extension::WriteLine(System.Text.StringBuilder,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void X509Extension_WriteLine_m3C538A06F19ABFD9F3BC9F531C8CA96329E8EFF2 (X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * __this, StringBuilder_t * ___sb0, int32_t ___n1, int32_t ___pos2, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509ExtensionCollection::.ctor()
extern "C" IL2CPP_METHOD_ATTR void X509ExtensionCollection__ctor_m009D1FA8F4EA1BCF236002C901176D8C3CBDB8FC (X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0 (Exception_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509Extension::.ctor(Mono.Security.ASN1)
extern "C" IL2CPP_METHOD_ATTR void X509Extension__ctor_mDEE4DCDDDD91D3C1DD2FDF3D793AD447D86C4F37 (X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * __this, ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * ___asn10, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.X509.SafeBag::.ctor(System.String,Mono.Security.ASN1)
extern "C" IL2CPP_METHOD_ATTR void SafeBag__ctor_mA72466DEC40046A944E2120A27BEFD3D2EAD57B7 (SafeBag_t46FE0281DC1D6CAB5FD08FCDB3E57C2EA1859726 * __this, String_t* ___bagOID0, ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * ___asn11, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___bagOID0;
		__this->set__bagOID_0(L_0);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_1 = ___asn11;
		__this->set__asn1_1(L_1);
		return;
	}
}
// System.String Mono.Security.X509.SafeBag::get_BagOID()
extern "C" IL2CPP_METHOD_ATTR String_t* SafeBag_get_BagOID_m111CD6142B7D3C61FB45932B8EF9A635D80244B5 (SafeBag_t46FE0281DC1D6CAB5FD08FCDB3E57C2EA1859726 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__bagOID_0();
		return L_0;
	}
}
// Mono.Security.ASN1 Mono.Security.X509.SafeBag::get_ASN1()
extern "C" IL2CPP_METHOD_ATTR ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * SafeBag_get_ASN1_m77708924A6B21495CB27668AB3CDCC844724AAD1 (SafeBag_t46FE0281DC1D6CAB5FD08FCDB3E57C2EA1859726 * __this, const RuntimeMethod* method)
{
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_0 = __this->get__asn1_1();
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
// System.String Mono.Security.X509.X501::ToString(Mono.Security.ASN1)
extern "C" IL2CPP_METHOD_ATTR String_t* X501_ToString_m4BB9988001C8AA907F7FB24BF0062158B10F6000 (ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * ___seq0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X501_ToString_m4BB9988001C8AA907F7FB24BF0062158B10F6000_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	int32_t V_1 = 0;
	ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * V_2 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0035;
	}

IL_000a:
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_1 = ___seq0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_3 = ASN1_get_Item_m88B75C57A7E130A02A709AE8FFD2E0972E71FC08(L_1, L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		StringBuilder_t * L_4 = V_0;
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_5 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_il2cpp_TypeInfo_var);
		X501_AppendEntry_m4309ECCC58A9C96B7039249F97E9020963C6C630(L_4, L_5, (bool)1, /*hidden argument*/NULL);
		int32_t L_6 = V_1;
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_7 = ___seq0;
		NullCheck(L_7);
		int32_t L_8 = ASN1_get_Count_m5A0E71B4C4A2257C0875AE1041AAA953C5B12A19(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_6) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1)))))
		{
			goto IL_0031;
		}
	}
	{
		StringBuilder_t * L_9 = V_0;
		NullCheck(L_9);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_9, _stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46, /*hidden argument*/NULL);
	}

IL_0031:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0035:
	{
		int32_t L_11 = V_1;
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_12 = ___seq0;
		NullCheck(L_12);
		int32_t L_13 = ASN1_get_Count_m5A0E71B4C4A2257C0875AE1041AAA953C5B12A19(L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_000a;
		}
	}
	{
		StringBuilder_t * L_14 = V_0;
		NullCheck(L_14);
		String_t* L_15 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
		return L_15;
	}
}
// System.String Mono.Security.X509.X501::ToString(Mono.Security.ASN1,System.Boolean,System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR String_t* X501_ToString_mE788B3F7AB241FD8F736D7FACE2ABF10C8023132 (ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * ___seq0, bool ___reversed1, String_t* ___separator2, bool ___quotes3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X501_ToString_mE788B3F7AB241FD8F736D7FACE2ABF10C8023132_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	int32_t V_1 = 0;
	ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * V_2 = NULL;
	int32_t V_3 = 0;
	ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * V_4 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = ___reversed1;
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_2 = ___seq0;
		NullCheck(L_2);
		int32_t L_3 = ASN1_get_Count_m5A0E71B4C4A2257C0875AE1041AAA953C5B12A19(L_2, /*hidden argument*/NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1));
		goto IL_0034;
	}

IL_0014:
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_4 = ___seq0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_6 = ASN1_get_Item_m88B75C57A7E130A02A709AE8FFD2E0972E71FC08(L_4, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		StringBuilder_t * L_7 = V_0;
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_8 = V_2;
		bool L_9 = ___quotes3;
		IL2CPP_RUNTIME_CLASS_INIT(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_il2cpp_TypeInfo_var);
		X501_AppendEntry_m4309ECCC58A9C96B7039249F97E9020963C6C630(L_7, L_8, L_9, /*hidden argument*/NULL);
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		StringBuilder_t * L_11 = V_0;
		String_t* L_12 = ___separator2;
		NullCheck(L_11);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_11, L_12, /*hidden argument*/NULL);
	}

IL_0030:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1));
	}

IL_0034:
	{
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0070;
	}

IL_003a:
	{
		V_3 = 0;
		goto IL_0067;
	}

IL_003e:
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_15 = ___seq0;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_17 = ASN1_get_Item_m88B75C57A7E130A02A709AE8FFD2E0972E71FC08(L_15, L_16, /*hidden argument*/NULL);
		V_4 = L_17;
		StringBuilder_t * L_18 = V_0;
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_19 = V_4;
		bool L_20 = ___quotes3;
		IL2CPP_RUNTIME_CLASS_INIT(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_il2cpp_TypeInfo_var);
		X501_AppendEntry_m4309ECCC58A9C96B7039249F97E9020963C6C630(L_18, L_19, L_20, /*hidden argument*/NULL);
		int32_t L_21 = V_3;
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_22 = ___seq0;
		NullCheck(L_22);
		int32_t L_23 = ASN1_get_Count_m5A0E71B4C4A2257C0875AE1041AAA953C5B12A19(L_22, /*hidden argument*/NULL);
		if ((((int32_t)L_21) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)1)))))
		{
			goto IL_0063;
		}
	}
	{
		StringBuilder_t * L_24 = V_0;
		String_t* L_25 = ___separator2;
		NullCheck(L_24);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_24, L_25, /*hidden argument*/NULL);
	}

IL_0063:
	{
		int32_t L_26 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_0067:
	{
		int32_t L_27 = V_3;
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_28 = ___seq0;
		NullCheck(L_28);
		int32_t L_29 = ASN1_get_Count_m5A0E71B4C4A2257C0875AE1041AAA953C5B12A19(L_28, /*hidden argument*/NULL);
		if ((((int32_t)L_27) < ((int32_t)L_29)))
		{
			goto IL_003e;
		}
	}

IL_0070:
	{
		StringBuilder_t * L_30 = V_0;
		NullCheck(L_30);
		String_t* L_31 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_30);
		return L_31;
	}
}
// System.Void Mono.Security.X509.X501::AppendEntry(System.Text.StringBuilder,Mono.Security.ASN1,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void X501_AppendEntry_m4309ECCC58A9C96B7039249F97E9020963C6C630 (StringBuilder_t * ___sb0, ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * ___entry1, bool ___quotes2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X501_AppendEntry_m4309ECCC58A9C96B7039249F97E9020963C6C630_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * V_1 = NULL;
	ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * V_2 = NULL;
	ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * V_3 = NULL;
	String_t* V_4 = NULL;
	StringBuilder_t * V_5 = NULL;
	int32_t V_6 = 0;
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* V_7 = NULL;
	{
		V_0 = 0;
		goto IL_02fd;
	}

IL_0007:
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_0 = ___entry1;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_2 = ASN1_get_Item_m88B75C57A7E130A02A709AE8FFD2E0972E71FC08(L_0, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_3 = V_1;
		NullCheck(L_3);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_4 = ASN1_get_Item_m88B75C57A7E130A02A709AE8FFD2E0972E71FC08(L_3, 1, /*hidden argument*/NULL);
		V_2 = L_4;
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_5 = V_2;
		if (!L_5)
		{
			goto IL_02f9;
		}
	}
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_6 = V_1;
		NullCheck(L_6);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_7 = ASN1_get_Item_m88B75C57A7E130A02A709AE8FFD2E0972E71FC08(L_6, 0, /*hidden argument*/NULL);
		V_3 = L_7;
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_8 = V_3;
		if (!L_8)
		{
			goto IL_02f9;
		}
	}
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_9 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = ((X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_StaticFields*)il2cpp_codegen_static_fields_for(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_il2cpp_TypeInfo_var))->get_countryName_0();
		NullCheck(L_9);
		bool L_11 = ASN1_CompareValue_mB18BFB4C3B5CC0086F6733C93472B6ECE85DBC99(L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0049;
		}
	}
	{
		StringBuilder_t * L_12 = ___sb0;
		NullCheck(L_12);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_12, _stringLiteral28B3D69739B57CAF199F039988DB6DFEA93AC5CE, /*hidden argument*/NULL);
		goto IL_0206;
	}

IL_0049:
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_13 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_14 = ((X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_StaticFields*)il2cpp_codegen_static_fields_for(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_il2cpp_TypeInfo_var))->get_organizationName_1();
		NullCheck(L_13);
		bool L_15 = ASN1_CompareValue_mB18BFB4C3B5CC0086F6733C93472B6ECE85DBC99(L_13, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0067;
		}
	}
	{
		StringBuilder_t * L_16 = ___sb0;
		NullCheck(L_16);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_16, _stringLiteral0F55C3EB87ABA7E522BE619EF498B24F3B66D357, /*hidden argument*/NULL);
		goto IL_0206;
	}

IL_0067:
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_17 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_18 = ((X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_StaticFields*)il2cpp_codegen_static_fields_for(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_il2cpp_TypeInfo_var))->get_organizationalUnitName_2();
		NullCheck(L_17);
		bool L_19 = ASN1_CompareValue_mB18BFB4C3B5CC0086F6733C93472B6ECE85DBC99(L_17, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0085;
		}
	}
	{
		StringBuilder_t * L_20 = ___sb0;
		NullCheck(L_20);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_20, _stringLiteralAAF41204BECC9AE2723473273563ACB861046064, /*hidden argument*/NULL);
		goto IL_0206;
	}

IL_0085:
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_21 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_22 = ((X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_StaticFields*)il2cpp_codegen_static_fields_for(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_il2cpp_TypeInfo_var))->get_commonName_3();
		NullCheck(L_21);
		bool L_23 = ASN1_CompareValue_mB18BFB4C3B5CC0086F6733C93472B6ECE85DBC99(L_21, L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00a3;
		}
	}
	{
		StringBuilder_t * L_24 = ___sb0;
		NullCheck(L_24);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_24, _stringLiteralFAE7183D72E2D922886D89549E9DC0AA31A04226, /*hidden argument*/NULL);
		goto IL_0206;
	}

IL_00a3:
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_25 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_26 = ((X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_StaticFields*)il2cpp_codegen_static_fields_for(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_il2cpp_TypeInfo_var))->get_localityName_4();
		NullCheck(L_25);
		bool L_27 = ASN1_CompareValue_mB18BFB4C3B5CC0086F6733C93472B6ECE85DBC99(L_25, L_26, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00c1;
		}
	}
	{
		StringBuilder_t * L_28 = ___sb0;
		NullCheck(L_28);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_28, _stringLiteral4D01C38D447D39747350F6F29B3DC073CF36EB69, /*hidden argument*/NULL);
		goto IL_0206;
	}

IL_00c1:
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_29 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_30 = ((X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_StaticFields*)il2cpp_codegen_static_fields_for(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_il2cpp_TypeInfo_var))->get_stateOrProvinceName_5();
		NullCheck(L_29);
		bool L_31 = ASN1_CompareValue_mB18BFB4C3B5CC0086F6733C93472B6ECE85DBC99(L_29, L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_00df;
		}
	}
	{
		StringBuilder_t * L_32 = ___sb0;
		NullCheck(L_32);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_32, _stringLiteralB9D719400551A68010930DED96BD8F5C0A8FFE51, /*hidden argument*/NULL);
		goto IL_0206;
	}

IL_00df:
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_33 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_34 = ((X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_StaticFields*)il2cpp_codegen_static_fields_for(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_il2cpp_TypeInfo_var))->get_streetAddress_6();
		NullCheck(L_33);
		bool L_35 = ASN1_CompareValue_mB18BFB4C3B5CC0086F6733C93472B6ECE85DBC99(L_33, L_34, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_00fd;
		}
	}
	{
		StringBuilder_t * L_36 = ___sb0;
		NullCheck(L_36);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_36, _stringLiteralA79BB3C5466E1747E27A4D48E271565C77423F5C, /*hidden argument*/NULL);
		goto IL_0206;
	}

IL_00fd:
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_37 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_38 = ((X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_StaticFields*)il2cpp_codegen_static_fields_for(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_il2cpp_TypeInfo_var))->get_domainComponent_7();
		NullCheck(L_37);
		bool L_39 = ASN1_CompareValue_mB18BFB4C3B5CC0086F6733C93472B6ECE85DBC99(L_37, L_38, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_011b;
		}
	}
	{
		StringBuilder_t * L_40 = ___sb0;
		NullCheck(L_40);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_40, _stringLiteralB906B1C4E8EC693BD44787748A9C6EB47D96A6F3, /*hidden argument*/NULL);
		goto IL_0206;
	}

IL_011b:
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_41 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_42 = ((X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_StaticFields*)il2cpp_codegen_static_fields_for(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_il2cpp_TypeInfo_var))->get_userid_8();
		NullCheck(L_41);
		bool L_43 = ASN1_CompareValue_mB18BFB4C3B5CC0086F6733C93472B6ECE85DBC99(L_41, L_42, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_0139;
		}
	}
	{
		StringBuilder_t * L_44 = ___sb0;
		NullCheck(L_44);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_44, _stringLiteralFFD87CEDA20B4534B76315088FAE09B20B741846, /*hidden argument*/NULL);
		goto IL_0206;
	}

IL_0139:
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_45 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_46 = ((X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_StaticFields*)il2cpp_codegen_static_fields_for(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_il2cpp_TypeInfo_var))->get_email_9();
		NullCheck(L_45);
		bool L_47 = ASN1_CompareValue_mB18BFB4C3B5CC0086F6733C93472B6ECE85DBC99(L_45, L_46, /*hidden argument*/NULL);
		if (!L_47)
		{
			goto IL_0157;
		}
	}
	{
		StringBuilder_t * L_48 = ___sb0;
		NullCheck(L_48);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_48, _stringLiteralAF3660C744976107BED8FC205296D903AFBCF8D5, /*hidden argument*/NULL);
		goto IL_0206;
	}

IL_0157:
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_49 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_50 = ((X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_StaticFields*)il2cpp_codegen_static_fields_for(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_il2cpp_TypeInfo_var))->get_dnQualifier_10();
		NullCheck(L_49);
		bool L_51 = ASN1_CompareValue_mB18BFB4C3B5CC0086F6733C93472B6ECE85DBC99(L_49, L_50, /*hidden argument*/NULL);
		if (!L_51)
		{
			goto IL_0175;
		}
	}
	{
		StringBuilder_t * L_52 = ___sb0;
		NullCheck(L_52);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_52, _stringLiteral09064C8431C9942F09D36EE43DACB440E8B42B8F, /*hidden argument*/NULL);
		goto IL_0206;
	}

IL_0175:
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_53 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_54 = ((X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_StaticFields*)il2cpp_codegen_static_fields_for(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_il2cpp_TypeInfo_var))->get_title_11();
		NullCheck(L_53);
		bool L_55 = ASN1_CompareValue_mB18BFB4C3B5CC0086F6733C93472B6ECE85DBC99(L_53, L_54, /*hidden argument*/NULL);
		if (!L_55)
		{
			goto IL_0190;
		}
	}
	{
		StringBuilder_t * L_56 = ___sb0;
		NullCheck(L_56);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_56, _stringLiteralF2507A133F1CDD66D4A6B0DC9A0A6F4558D39AB7, /*hidden argument*/NULL);
		goto IL_0206;
	}

IL_0190:
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_57 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_58 = ((X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_StaticFields*)il2cpp_codegen_static_fields_for(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_il2cpp_TypeInfo_var))->get_surname_12();
		NullCheck(L_57);
		bool L_59 = ASN1_CompareValue_mB18BFB4C3B5CC0086F6733C93472B6ECE85DBC99(L_57, L_58, /*hidden argument*/NULL);
		if (!L_59)
		{
			goto IL_01ab;
		}
	}
	{
		StringBuilder_t * L_60 = ___sb0;
		NullCheck(L_60);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_60, _stringLiteral93E119B1853ED8810093C33F265CF1B1A0A6B1A2, /*hidden argument*/NULL);
		goto IL_0206;
	}

IL_01ab:
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_61 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_62 = ((X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_StaticFields*)il2cpp_codegen_static_fields_for(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_il2cpp_TypeInfo_var))->get_givenName_13();
		NullCheck(L_61);
		bool L_63 = ASN1_CompareValue_mB18BFB4C3B5CC0086F6733C93472B6ECE85DBC99(L_61, L_62, /*hidden argument*/NULL);
		if (!L_63)
		{
			goto IL_01c6;
		}
	}
	{
		StringBuilder_t * L_64 = ___sb0;
		NullCheck(L_64);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_64, _stringLiteral36DC074F734611AC43ECA91F89189DB7BF0C9C20, /*hidden argument*/NULL);
		goto IL_0206;
	}

IL_01c6:
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_65 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_66 = ((X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_StaticFields*)il2cpp_codegen_static_fields_for(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_il2cpp_TypeInfo_var))->get_initial_14();
		NullCheck(L_65);
		bool L_67 = ASN1_CompareValue_mB18BFB4C3B5CC0086F6733C93472B6ECE85DBC99(L_65, L_66, /*hidden argument*/NULL);
		if (!L_67)
		{
			goto IL_01e1;
		}
	}
	{
		StringBuilder_t * L_68 = ___sb0;
		NullCheck(L_68);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_68, _stringLiteral019A3223E819F9804E2A27B7FED3A7D841457746, /*hidden argument*/NULL);
		goto IL_0206;
	}

IL_01e1:
	{
		StringBuilder_t * L_69 = ___sb0;
		NullCheck(L_69);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_69, _stringLiteral5E930233E7755E8AABF4429C153DFCE37500C051, /*hidden argument*/NULL);
		StringBuilder_t * L_70 = ___sb0;
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_71 = V_3;
		String_t* L_72 = ASN1Convert_ToOid_mFFA93B4BBEFCA8E4E86DAE87CDB998E78BFB2D5A(L_71, /*hidden argument*/NULL);
		NullCheck(L_70);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_70, L_72, /*hidden argument*/NULL);
		StringBuilder_t * L_73 = ___sb0;
		NullCheck(L_73);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_73, _stringLiteral21606782C65E44CAC7AFBB90977D8B6F82140E76, /*hidden argument*/NULL);
	}

IL_0206:
	{
		V_4 = (String_t*)NULL;
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_74 = V_2;
		NullCheck(L_74);
		uint8_t L_75 = ASN1_get_Tag_m1346989AC839D85A9E0A211525A6B551974E4862(L_74, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_75) == ((uint32_t)((int32_t)30)))))
		{
			goto IL_0250;
		}
	}
	{
		StringBuilder_t * L_76 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E(L_76, /*hidden argument*/NULL);
		V_5 = L_76;
		V_6 = 1;
		goto IL_0236;
	}

IL_021f:
	{
		StringBuilder_t * L_77 = V_5;
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_78 = V_2;
		NullCheck(L_78);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_79 = ASN1_get_Value_m9BD6239E12A6148AF9507C2F58058C6B8147A079(L_78, /*hidden argument*/NULL);
		int32_t L_80 = V_6;
		NullCheck(L_79);
		int32_t L_81 = L_80;
		uint8_t L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		NullCheck(L_77);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_77, L_82, /*hidden argument*/NULL);
		int32_t L_83 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_83, (int32_t)2));
	}

IL_0236:
	{
		int32_t L_84 = V_6;
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_85 = V_2;
		NullCheck(L_85);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_86 = ASN1_get_Value_m9BD6239E12A6148AF9507C2F58058C6B8147A079(L_85, /*hidden argument*/NULL);
		NullCheck(L_86);
		if ((((int32_t)L_84) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_86)->max_length)))))))
		{
			goto IL_021f;
		}
	}
	{
		StringBuilder_t * L_87 = V_5;
		NullCheck(L_87);
		String_t* L_88 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_87);
		V_4 = L_88;
		goto IL_02d9;
	}

IL_0250:
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_89 = V_2;
		NullCheck(L_89);
		uint8_t L_90 = ASN1_get_Tag_m1346989AC839D85A9E0A211525A6B551974E4862(L_89, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_90) == ((uint32_t)((int32_t)20)))))
		{
			goto IL_026e;
		}
	}
	{
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_91 = Encoding_get_UTF7_mE709E3E74B727CFCC6675F07BC0AF19C7B4D0F1C(/*hidden argument*/NULL);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_92 = V_2;
		NullCheck(L_92);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_93 = ASN1_get_Value_m9BD6239E12A6148AF9507C2F58058C6B8147A079(L_92, /*hidden argument*/NULL);
		NullCheck(L_91);
		String_t* L_94 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(32 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_91, L_93);
		V_4 = L_94;
		goto IL_0280;
	}

IL_026e:
	{
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_95 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_96 = V_2;
		NullCheck(L_96);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_97 = ASN1_get_Value_m9BD6239E12A6148AF9507C2F58058C6B8147A079(L_96, /*hidden argument*/NULL);
		NullCheck(L_95);
		String_t* L_98 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(32 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_95, L_97);
		V_4 = L_98;
	}

IL_0280:
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_99 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)7);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_100 = L_99;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_101 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA____2D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_5_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_100, L_101, /*hidden argument*/NULL);
		V_7 = L_100;
		bool L_102 = ___quotes2;
		if (!L_102)
		{
			goto IL_02d9;
		}
	}
	{
		String_t* L_103 = V_4;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_104 = V_7;
		String_t* L_105 = V_4;
		NullCheck(L_105);
		int32_t L_106 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018(L_105, /*hidden argument*/NULL);
		NullCheck(L_103);
		int32_t L_107 = String_IndexOfAny_mB7D79AEF460C7C8B3B0CCC573191FA0E339DD495(L_103, L_104, 0, L_106, /*hidden argument*/NULL);
		if ((((int32_t)L_107) > ((int32_t)0)))
		{
			goto IL_02c6;
		}
	}
	{
		String_t* L_108 = V_4;
		NullCheck(L_108);
		bool L_109 = String_StartsWith_m7D468FB7C801D9C2DBEEEEC86F8BA8F4EC3243C1(L_108, _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6, /*hidden argument*/NULL);
		if (L_109)
		{
			goto IL_02c6;
		}
	}
	{
		String_t* L_110 = V_4;
		NullCheck(L_110);
		bool L_111 = String_EndsWith_mE4F039DCC2A9FCB8C1ED2D04B00A35E3CE16DE99(L_110, _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6, /*hidden argument*/NULL);
		if (!L_111)
		{
			goto IL_02d9;
		}
	}

IL_02c6:
	{
		String_t* L_112 = V_4;
		String_t* L_113 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral2ACE62C1BEFA19E3EA37DD52BE9F6D508C5163E6, L_112, _stringLiteral2ACE62C1BEFA19E3EA37DD52BE9F6D508C5163E6, /*hidden argument*/NULL);
		V_4 = L_113;
	}

IL_02d9:
	{
		StringBuilder_t * L_114 = ___sb0;
		String_t* L_115 = V_4;
		NullCheck(L_114);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_114, L_115, /*hidden argument*/NULL);
		int32_t L_116 = V_0;
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_117 = ___entry1;
		NullCheck(L_117);
		int32_t L_118 = ASN1_get_Count_m5A0E71B4C4A2257C0875AE1041AAA953C5B12A19(L_117, /*hidden argument*/NULL);
		if ((((int32_t)L_116) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_118, (int32_t)1)))))
		{
			goto IL_02f9;
		}
	}
	{
		StringBuilder_t * L_119 = ___sb0;
		NullCheck(L_119);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_119, _stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46, /*hidden argument*/NULL);
	}

IL_02f9:
	{
		int32_t L_120 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_120, (int32_t)1));
	}

IL_02fd:
	{
		int32_t L_121 = V_0;
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_122 = ___entry1;
		NullCheck(L_122);
		int32_t L_123 = ASN1_get_Count_m5A0E71B4C4A2257C0875AE1041AAA953C5B12A19(L_122, /*hidden argument*/NULL);
		if ((((int32_t)L_121) < ((int32_t)L_123)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Mono.Security.X509.X501::.cctor()
extern "C" IL2CPP_METHOD_ATTR void X501__cctor_mE908E9BDA852AB25BFF1244017919DE3DBA44D4C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X501__cctor_mE908E9BDA852AB25BFF1244017919DE3DBA44D4C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)3);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = L_0;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA____736D39815215889F11249D9958F6ED12D37B9F57_13_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_StaticFields*)il2cpp_codegen_static_fields_for(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_il2cpp_TypeInfo_var))->set_countryName_0(L_1);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)3);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = L_3;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA____9BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_17_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_4, L_5, /*hidden argument*/NULL);
		((X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_StaticFields*)il2cpp_codegen_static_fields_for(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_il2cpp_TypeInfo_var))->set_organizationName_1(L_4);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)3);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = L_6;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA____3E3442C7396F3F2BB4C7348F4A2074C7DC677D68_7_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_7, L_8, /*hidden argument*/NULL);
		((X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_StaticFields*)il2cpp_codegen_static_fields_for(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_il2cpp_TypeInfo_var))->set_organizationalUnitName_2(L_7);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)3);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = L_9;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_11 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA____1A84029C80CB5518379F199F53FF08A7B764F8FD_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_10, L_11, /*hidden argument*/NULL);
		((X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_StaticFields*)il2cpp_codegen_static_fields_for(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_il2cpp_TypeInfo_var))->set_commonName_3(L_10);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_12 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)3);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_13 = L_12;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_14 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA____12D04472A8285260EA12FD3813CDFA9F2D2B548C_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_13, L_14, /*hidden argument*/NULL);
		((X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_StaticFields*)il2cpp_codegen_static_fields_for(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_il2cpp_TypeInfo_var))->set_localityName_4(L_13);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_15 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)3);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_16 = L_15;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_17 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA____97FB30C84FF4A41CD4625B44B2940BFC8DB43003_15_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_16, L_17, /*hidden argument*/NULL);
		((X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_StaticFields*)il2cpp_codegen_static_fields_for(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_il2cpp_TypeInfo_var))->set_stateOrProvinceName_5(L_16);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_18 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)3);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_19 = L_18;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_20 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA____235D99572263B22ADFEE10FDA0C25E12F4D94FFC_4_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_19, L_20, /*hidden argument*/NULL);
		((X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_StaticFields*)il2cpp_codegen_static_fields_for(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_il2cpp_TypeInfo_var))->set_streetAddress_6(L_19);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_21 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_22 = L_21;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_23 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA____EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_26_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_22, L_23, /*hidden argument*/NULL);
		((X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_StaticFields*)il2cpp_codegen_static_fields_for(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_il2cpp_TypeInfo_var))->set_domainComponent_7(L_22);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_24 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_25 = L_24;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_26 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA____56DFA5053B3131883637F53219E7D88CCEF35949_9_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_25, L_26, /*hidden argument*/NULL);
		((X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_StaticFields*)il2cpp_codegen_static_fields_for(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_il2cpp_TypeInfo_var))->set_userid_8(L_25);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_27 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_28 = L_27;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_29 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA____6D49C9D487D7AD3491ECE08732D68A593CC2038D_10_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_28, L_29, /*hidden argument*/NULL);
		((X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_StaticFields*)il2cpp_codegen_static_fields_for(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_il2cpp_TypeInfo_var))->set_email_9(L_28);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_30 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)3);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_31 = L_30;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_32 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA____86F4F563FA2C61798AE6238D789139739428463A_14_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_31, L_32, /*hidden argument*/NULL);
		((X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_StaticFields*)il2cpp_codegen_static_fields_for(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_il2cpp_TypeInfo_var))->set_dnQualifier_10(L_31);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_33 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)3);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_34 = L_33;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_35 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA____13A35EF1A549297C70E2AD46045BBD2ECA17852D_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_34, L_35, /*hidden argument*/NULL);
		((X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_StaticFields*)il2cpp_codegen_static_fields_for(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_il2cpp_TypeInfo_var))->set_title_11(L_34);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_36 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)3);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_37 = L_36;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_38 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA____EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_27_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_37, L_38, /*hidden argument*/NULL);
		((X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_StaticFields*)il2cpp_codegen_static_fields_for(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_il2cpp_TypeInfo_var))->set_surname_12(L_37);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_39 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)3);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_40 = L_39;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_41 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA____A323DB0813C4D072957BA6FDA79D9776674CD06B_18_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_40, L_41, /*hidden argument*/NULL);
		((X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_StaticFields*)il2cpp_codegen_static_fields_for(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_il2cpp_TypeInfo_var))->set_givenName_13(L_40);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_42 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)3);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_43 = L_42;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_44 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF21437707AFAA06797AEDEE07C84D4D3CC2837FA____BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_21_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_43, L_44, /*hidden argument*/NULL);
		((X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_StaticFields*)il2cpp_codegen_static_fields_for(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_il2cpp_TypeInfo_var))->set_initial_14(L_43);
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
// System.Void Mono.Security.X509.X509Certificate::Parse(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void X509Certificate_Parse_m5CB2F316EC4BC08A3714213C103E3C8689F2E8E0 (X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate_Parse_m5CB2F316EC4BC08A3714213C103E3C8689F2E8E0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * V_0 = NULL;
	int32_t V_1 = 0;
	ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * V_2 = NULL;
	ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * V_3 = NULL;
	ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * V_4 = NULL;
	ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * V_5 = NULL;
	ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * V_6 = NULL;
	ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * V_7 = NULL;
	ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * V_8 = NULL;
	int32_t V_9 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_10 = NULL;
	ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * V_11 = NULL;
	ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * V_12 = NULL;
	ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * V_13 = NULL;
	Exception_t * V_14 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * G_B11_0 = NULL;
	ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * G_B11_1 = NULL;
	X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * G_B10_0 = NULL;
	ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * G_B10_1 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* G_B12_0 = NULL;
	X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * G_B12_1 = NULL;
	ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * G_B12_2 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___data0;
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_1 = (ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E *)il2cpp_codegen_object_new(ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E_il2cpp_TypeInfo_var);
			ASN1__ctor_mE005F52336402C3D41EAD9E28A95910B3C0865DA(L_1, L_0, /*hidden argument*/NULL);
			__this->set_decoder_0(L_1);
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_2 = __this->get_decoder_0();
			NullCheck(L_2);
			uint8_t L_3 = ASN1_get_Tag_m1346989AC839D85A9E0A211525A6B551974E4862(L_2, /*hidden argument*/NULL);
			if ((((int32_t)L_3) == ((int32_t)((int32_t)48))))
			{
				goto IL_0026;
			}
		}

IL_001b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B_il2cpp_TypeInfo_var);
			String_t* L_4 = ((X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B_StaticFields*)il2cpp_codegen_static_fields_for(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B_il2cpp_TypeInfo_var))->get_encoding_error_21();
			CryptographicException_t67ABE4FAB48298C9DF4C5E37E4C8F20AA601F15A * L_5 = (CryptographicException_t67ABE4FAB48298C9DF4C5E37E4C8F20AA601F15A *)il2cpp_codegen_object_new(CryptographicException_t67ABE4FAB48298C9DF4C5E37E4C8F20AA601F15A_il2cpp_TypeInfo_var);
			CryptographicException__ctor_m0A5D357C12F9A830A9EBC51723094EBA5B854B98(L_5, L_4, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, X509Certificate_Parse_m5CB2F316EC4BC08A3714213C103E3C8689F2E8E0_RuntimeMethod_var);
		}

IL_0026:
		{
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_6 = __this->get_decoder_0();
			NullCheck(L_6);
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_7 = ASN1_get_Item_m88B75C57A7E130A02A709AE8FFD2E0972E71FC08(L_6, 0, /*hidden argument*/NULL);
			NullCheck(L_7);
			uint8_t L_8 = ASN1_get_Tag_m1346989AC839D85A9E0A211525A6B551974E4862(L_7, /*hidden argument*/NULL);
			if ((((int32_t)L_8) == ((int32_t)((int32_t)48))))
			{
				goto IL_0046;
			}
		}

IL_003b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B_il2cpp_TypeInfo_var);
			String_t* L_9 = ((X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B_StaticFields*)il2cpp_codegen_static_fields_for(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B_il2cpp_TypeInfo_var))->get_encoding_error_21();
			CryptographicException_t67ABE4FAB48298C9DF4C5E37E4C8F20AA601F15A * L_10 = (CryptographicException_t67ABE4FAB48298C9DF4C5E37E4C8F20AA601F15A *)il2cpp_codegen_object_new(CryptographicException_t67ABE4FAB48298C9DF4C5E37E4C8F20AA601F15A_il2cpp_TypeInfo_var);
			CryptographicException__ctor_m0A5D357C12F9A830A9EBC51723094EBA5B854B98(L_10, L_9, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, NULL, X509Certificate_Parse_m5CB2F316EC4BC08A3714213C103E3C8689F2E8E0_RuntimeMethod_var);
		}

IL_0046:
		{
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_11 = __this->get_decoder_0();
			NullCheck(L_11);
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_12 = ASN1_get_Item_m88B75C57A7E130A02A709AE8FFD2E0972E71FC08(L_11, 0, /*hidden argument*/NULL);
			V_0 = L_12;
			V_1 = 0;
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_13 = __this->get_decoder_0();
			NullCheck(L_13);
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_14 = ASN1_get_Item_m88B75C57A7E130A02A709AE8FFD2E0972E71FC08(L_13, 0, /*hidden argument*/NULL);
			int32_t L_15 = V_1;
			NullCheck(L_14);
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_16 = ASN1_get_Item_m88B75C57A7E130A02A709AE8FFD2E0972E71FC08(L_14, L_15, /*hidden argument*/NULL);
			V_2 = L_16;
			__this->set_version_16(1);
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_17 = V_2;
			NullCheck(L_17);
			uint8_t L_18 = ASN1_get_Tag_m1346989AC839D85A9E0A211525A6B551974E4862(L_17, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)160)))))
			{
				goto IL_00a4;
			}
		}

IL_007c:
		{
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_19 = V_2;
			NullCheck(L_19);
			int32_t L_20 = ASN1_get_Count_m5A0E71B4C4A2257C0875AE1041AAA953C5B12A19(L_19, /*hidden argument*/NULL);
			if ((((int32_t)L_20) <= ((int32_t)0)))
			{
				goto IL_00a4;
			}
		}

IL_0085:
		{
			int32_t L_21 = __this->get_version_16();
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_22 = V_2;
			NullCheck(L_22);
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_23 = ASN1_get_Item_m88B75C57A7E130A02A709AE8FFD2E0972E71FC08(L_22, 0, /*hidden argument*/NULL);
			NullCheck(L_23);
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_24 = ASN1_get_Value_m9BD6239E12A6148AF9507C2F58058C6B8147A079(L_23, /*hidden argument*/NULL);
			NullCheck(L_24);
			int32_t L_25 = 0;
			uint8_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
			__this->set_version_16(((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)L_26)));
			int32_t L_27 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
		}

IL_00a4:
		{
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_28 = __this->get_decoder_0();
			NullCheck(L_28);
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_29 = ASN1_get_Item_m88B75C57A7E130A02A709AE8FFD2E0972E71FC08(L_28, 0, /*hidden argument*/NULL);
			int32_t L_30 = V_1;
			int32_t L_31 = L_30;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
			NullCheck(L_29);
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_32 = ASN1_get_Item_m88B75C57A7E130A02A709AE8FFD2E0972E71FC08(L_29, L_31, /*hidden argument*/NULL);
			V_3 = L_32;
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_33 = V_3;
			NullCheck(L_33);
			uint8_t L_34 = ASN1_get_Tag_m1346989AC839D85A9E0A211525A6B551974E4862(L_33, /*hidden argument*/NULL);
			if ((((int32_t)L_34) == ((int32_t)2)))
			{
				goto IL_00cf;
			}
		}

IL_00c4:
		{
			IL2CPP_RUNTIME_CLASS_INIT(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B_il2cpp_TypeInfo_var);
			String_t* L_35 = ((X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B_StaticFields*)il2cpp_codegen_static_fields_for(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B_il2cpp_TypeInfo_var))->get_encoding_error_21();
			CryptographicException_t67ABE4FAB48298C9DF4C5E37E4C8F20AA601F15A * L_36 = (CryptographicException_t67ABE4FAB48298C9DF4C5E37E4C8F20AA601F15A *)il2cpp_codegen_object_new(CryptographicException_t67ABE4FAB48298C9DF4C5E37E4C8F20AA601F15A_il2cpp_TypeInfo_var);
			CryptographicException__ctor_m0A5D357C12F9A830A9EBC51723094EBA5B854B98(L_36, L_35, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_36, NULL, X509Certificate_Parse_m5CB2F316EC4BC08A3714213C103E3C8689F2E8E0_RuntimeMethod_var);
		}

IL_00cf:
		{
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_37 = V_3;
			NullCheck(L_37);
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_38 = ASN1_get_Value_m9BD6239E12A6148AF9507C2F58058C6B8147A079(L_37, /*hidden argument*/NULL);
			__this->set_serialnumber_17(L_38);
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_39 = __this->get_serialnumber_17();
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_40 = __this->get_serialnumber_17();
			NullCheck(L_40);
			Array_Reverse_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mC6D04DB36698F31262134DEEF6B9C03026200F13(L_39, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_40)->max_length)))), /*hidden argument*/Array_Reverse_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mC6D04DB36698F31262134DEEF6B9C03026200F13_RuntimeMethod_var);
			int32_t L_41 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_42 = V_0;
			int32_t L_43 = V_1;
			int32_t L_44 = L_43;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
			NullCheck(L_42);
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_45 = ASN1_Element_m505373548BEE512211614D9CE56AE728959D188D(L_42, L_44, (uint8_t)((int32_t)48), /*hidden argument*/NULL);
			__this->set_issuer_4(L_45);
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_46 = __this->get_issuer_4();
			IL2CPP_RUNTIME_CLASS_INIT(X501_tA67EA33D0F6FC6B49724AA7CBE473C02FB3E882F_il2cpp_TypeInfo_var);
			String_t* L_47 = X501_ToString_m4BB9988001C8AA907F7FB24BF0062158B10F6000(L_46, /*hidden argument*/NULL);
			__this->set_m_issuername_5(L_47);
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_48 = V_0;
			int32_t L_49 = V_1;
			int32_t L_50 = L_49;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
			NullCheck(L_48);
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_51 = ASN1_Element_m505373548BEE512211614D9CE56AE728959D188D(L_48, L_50, (uint8_t)((int32_t)48), /*hidden argument*/NULL);
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_52 = L_51;
			NullCheck(L_52);
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_53 = ASN1_get_Item_m88B75C57A7E130A02A709AE8FFD2E0972E71FC08(L_52, 0, /*hidden argument*/NULL);
			V_4 = L_53;
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_54 = V_4;
			DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_55 = ASN1Convert_ToDateTime_m94B39FD0657B85FB9AB61B04CAD71E759C9FE152(L_54, /*hidden argument*/NULL);
			__this->set_m_from_2(L_55);
			NullCheck(L_52);
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_56 = ASN1_get_Item_m88B75C57A7E130A02A709AE8FFD2E0972E71FC08(L_52, 1, /*hidden argument*/NULL);
			V_5 = L_56;
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_57 = V_5;
			DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_58 = ASN1Convert_ToDateTime_m94B39FD0657B85FB9AB61B04CAD71E759C9FE152(L_57, /*hidden argument*/NULL);
			__this->set_m_until_3(L_58);
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_59 = V_0;
			int32_t L_60 = V_1;
			int32_t L_61 = L_60;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)1));
			NullCheck(L_59);
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_62 = ASN1_Element_m505373548BEE512211614D9CE56AE728959D188D(L_59, L_61, (uint8_t)((int32_t)48), /*hidden argument*/NULL);
			__this->set_subject_8(L_62);
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_63 = __this->get_subject_8();
			String_t* L_64 = X501_ToString_m4BB9988001C8AA907F7FB24BF0062158B10F6000(L_63, /*hidden argument*/NULL);
			__this->set_m_subject_9(L_64);
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_65 = V_0;
			int32_t L_66 = V_1;
			int32_t L_67 = L_66;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)1));
			NullCheck(L_65);
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_68 = ASN1_Element_m505373548BEE512211614D9CE56AE728959D188D(L_65, L_67, (uint8_t)((int32_t)48), /*hidden argument*/NULL);
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_69 = L_68;
			NullCheck(L_69);
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_70 = ASN1_Element_m505373548BEE512211614D9CE56AE728959D188D(L_69, 0, (uint8_t)((int32_t)48), /*hidden argument*/NULL);
			V_6 = L_70;
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_71 = V_6;
			NullCheck(L_71);
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_72 = ASN1_Element_m505373548BEE512211614D9CE56AE728959D188D(L_71, 0, (uint8_t)6, /*hidden argument*/NULL);
			V_7 = L_72;
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_73 = V_7;
			String_t* L_74 = ASN1Convert_ToOid_mFFA93B4BBEFCA8E4E86DAE87CDB998E78BFB2D5A(L_73, /*hidden argument*/NULL);
			__this->set_m_keyalgo_6(L_74);
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_75 = V_6;
			NullCheck(L_75);
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_76 = ASN1_get_Item_m88B75C57A7E130A02A709AE8FFD2E0972E71FC08(L_75, 1, /*hidden argument*/NULL);
			V_8 = L_76;
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_77 = V_6;
			NullCheck(L_77);
			int32_t L_78 = ASN1_get_Count_m5A0E71B4C4A2257C0875AE1041AAA953C5B12A19(L_77, /*hidden argument*/NULL);
			G_B10_0 = __this;
			G_B10_1 = L_69;
			if ((((int32_t)L_78) > ((int32_t)1)))
			{
				G_B11_0 = __this;
				G_B11_1 = L_69;
				goto IL_01bb;
			}
		}

IL_01b8:
		{
			G_B12_0 = ((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(NULL));
			G_B12_1 = G_B10_0;
			G_B12_2 = G_B10_1;
			goto IL_01c2;
		}

IL_01bb:
		{
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_79 = V_8;
			NullCheck(L_79);
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_80 = VirtFuncInvoker0< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_79);
			G_B12_0 = L_80;
			G_B12_1 = G_B11_0;
			G_B12_2 = G_B11_1;
		}

IL_01c2:
		{
			NullCheck(G_B12_1);
			G_B12_1->set_m_keyalgoparams_7(G_B12_0);
			NullCheck(G_B12_2);
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_81 = ASN1_Element_m505373548BEE512211614D9CE56AE728959D188D(G_B12_2, 1, (uint8_t)3, /*hidden argument*/NULL);
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_82 = L_81;
			NullCheck(L_82);
			int32_t L_83 = ASN1_get_Length_mD0AC74E8F07244961D697B341599BD83D989EF63(L_82, /*hidden argument*/NULL);
			V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_83, (int32_t)1));
			int32_t L_84 = V_9;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_85 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_84);
			__this->set_m_publickey_10(L_85);
			NullCheck(L_82);
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_86 = ASN1_get_Value_m9BD6239E12A6148AF9507C2F58058C6B8147A079(L_82, /*hidden argument*/NULL);
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_87 = __this->get_m_publickey_10();
			int32_t L_88 = V_9;
			Buffer_BlockCopy_m1F882D595976063718AF6E405664FC761924D353((RuntimeArray *)(RuntimeArray *)L_86, 1, (RuntimeArray *)(RuntimeArray *)L_87, 0, L_88, /*hidden argument*/NULL);
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_89 = __this->get_decoder_0();
			NullCheck(L_89);
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_90 = ASN1_get_Item_m88B75C57A7E130A02A709AE8FFD2E0972E71FC08(L_89, 2, /*hidden argument*/NULL);
			NullCheck(L_90);
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_91 = ASN1_get_Value_m9BD6239E12A6148AF9507C2F58058C6B8147A079(L_90, /*hidden argument*/NULL);
			V_10 = L_91;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_92 = V_10;
			NullCheck(L_92);
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_93 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_92)->max_length)))), (int32_t)1)));
			__this->set_signature_11(L_93);
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_94 = V_10;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_95 = __this->get_signature_11();
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_96 = __this->get_signature_11();
			NullCheck(L_96);
			Buffer_BlockCopy_m1F882D595976063718AF6E405664FC761924D353((RuntimeArray *)(RuntimeArray *)L_94, 1, (RuntimeArray *)(RuntimeArray *)L_95, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_96)->max_length)))), /*hidden argument*/NULL);
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_97 = __this->get_decoder_0();
			NullCheck(L_97);
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_98 = ASN1_get_Item_m88B75C57A7E130A02A709AE8FFD2E0972E71FC08(L_97, 1, /*hidden argument*/NULL);
			V_6 = L_98;
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_99 = V_6;
			NullCheck(L_99);
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_100 = ASN1_Element_m505373548BEE512211614D9CE56AE728959D188D(L_99, 0, (uint8_t)6, /*hidden argument*/NULL);
			V_7 = L_100;
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_101 = V_7;
			String_t* L_102 = ASN1Convert_ToOid_mFFA93B4BBEFCA8E4E86DAE87CDB998E78BFB2D5A(L_101, /*hidden argument*/NULL);
			__this->set_m_signaturealgo_12(L_102);
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_103 = V_6;
			NullCheck(L_103);
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_104 = ASN1_get_Item_m88B75C57A7E130A02A709AE8FFD2E0972E71FC08(L_103, 1, /*hidden argument*/NULL);
			V_8 = L_104;
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_105 = V_8;
			if (!L_105)
			{
				goto IL_0277;
			}
		}

IL_0268:
		{
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_106 = V_8;
			NullCheck(L_106);
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_107 = VirtFuncInvoker0< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_106);
			__this->set_m_signaturealgoparams_13(L_107);
			goto IL_027e;
		}

IL_0277:
		{
			__this->set_m_signaturealgoparams_13((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL);
		}

IL_027e:
		{
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_108 = V_0;
			int32_t L_109 = V_1;
			NullCheck(L_108);
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_110 = ASN1_Element_m505373548BEE512211614D9CE56AE728959D188D(L_108, L_109, (uint8_t)((int32_t)129), /*hidden argument*/NULL);
			V_11 = L_110;
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_111 = V_11;
			if (!L_111)
			{
				goto IL_02a1;
			}
		}

IL_0290:
		{
			int32_t L_112 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_112, (int32_t)1));
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_113 = V_11;
			NullCheck(L_113);
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_114 = ASN1_get_Value_m9BD6239E12A6148AF9507C2F58058C6B8147A079(L_113, /*hidden argument*/NULL);
			__this->set_issuerUniqueID_18(L_114);
		}

IL_02a1:
		{
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_115 = V_0;
			int32_t L_116 = V_1;
			NullCheck(L_115);
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_117 = ASN1_Element_m505373548BEE512211614D9CE56AE728959D188D(L_115, L_116, (uint8_t)((int32_t)130), /*hidden argument*/NULL);
			V_12 = L_117;
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_118 = V_12;
			if (!L_118)
			{
				goto IL_02c4;
			}
		}

IL_02b3:
		{
			int32_t L_119 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_119, (int32_t)1));
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_120 = V_12;
			NullCheck(L_120);
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_121 = ASN1_get_Value_m9BD6239E12A6148AF9507C2F58058C6B8147A079(L_120, /*hidden argument*/NULL);
			__this->set_subjectUniqueID_19(L_121);
		}

IL_02c4:
		{
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_122 = V_0;
			int32_t L_123 = V_1;
			NullCheck(L_122);
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_124 = ASN1_Element_m505373548BEE512211614D9CE56AE728959D188D(L_122, L_123, (uint8_t)((int32_t)163), /*hidden argument*/NULL);
			V_13 = L_124;
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_125 = V_13;
			if (!L_125)
			{
				goto IL_02f5;
			}
		}

IL_02d6:
		{
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_126 = V_13;
			NullCheck(L_126);
			int32_t L_127 = ASN1_get_Count_m5A0E71B4C4A2257C0875AE1041AAA953C5B12A19(L_126, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_127) == ((uint32_t)1))))
			{
				goto IL_02f5;
			}
		}

IL_02e0:
		{
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_128 = V_13;
			NullCheck(L_128);
			ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_129 = ASN1_get_Item_m88B75C57A7E130A02A709AE8FFD2E0972E71FC08(L_128, 0, /*hidden argument*/NULL);
			X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * L_130 = (X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 *)il2cpp_codegen_object_new(X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19_il2cpp_TypeInfo_var);
			X509ExtensionCollection__ctor_mE4744D19F24BBC5F7FE1EE171FD5C301B38A9662(L_130, L_129, /*hidden argument*/NULL);
			__this->set_extensions_20(L_130);
			goto IL_0301;
		}

IL_02f5:
		{
			X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * L_131 = (X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 *)il2cpp_codegen_object_new(X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19_il2cpp_TypeInfo_var);
			X509ExtensionCollection__ctor_mE4744D19F24BBC5F7FE1EE171FD5C301B38A9662(L_131, (ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E *)NULL, /*hidden argument*/NULL);
			__this->set_extensions_20(L_131);
		}

IL_0301:
		{
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_132 = ___data0;
			NullCheck((RuntimeArray *)(RuntimeArray *)L_132);
			RuntimeObject * L_133 = Array_Clone_mE8C710213E323617A6F46F2B36DCDDD4C7CF5176((RuntimeArray *)(RuntimeArray *)L_132, /*hidden argument*/NULL);
			__this->set_m_encodedcert_1(((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)Castclass((RuntimeObject*)L_133, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var)));
			goto IL_0323;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0314;
		throw e;
	}

CATCH_0314:
	{ // begin catch(System.Exception)
		V_14 = ((Exception_t *)__exception_local);
		IL2CPP_RUNTIME_CLASS_INIT(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B_il2cpp_TypeInfo_var);
		String_t* L_134 = ((X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B_StaticFields*)il2cpp_codegen_static_fields_for(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B_il2cpp_TypeInfo_var))->get_encoding_error_21();
		Exception_t * L_135 = V_14;
		CryptographicException_t67ABE4FAB48298C9DF4C5E37E4C8F20AA601F15A * L_136 = (CryptographicException_t67ABE4FAB48298C9DF4C5E37E4C8F20AA601F15A *)il2cpp_codegen_object_new(CryptographicException_t67ABE4FAB48298C9DF4C5E37E4C8F20AA601F15A_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m65F4E67FD9D0449B5BFFC04E359BF3EC098075DA(L_136, L_134, L_135, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_136, NULL, X509Certificate_Parse_m5CB2F316EC4BC08A3714213C103E3C8689F2E8E0_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_0323:
	{
		return;
	}
}
// System.Void Mono.Security.X509.X509Certificate::.ctor(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void X509Certificate__ctor_mE2BC6649D450A36E902A2D6BEB50C49130411129 (X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate__ctor_mE2BC6649D450A36E902A2D6BEB50C49130411129_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___data0;
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___data0;
		NullCheck(L_1);
		if (!(((RuntimeArray *)L_1)->max_length))
		{
			goto IL_0030;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___data0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		uint8_t L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if ((((int32_t)L_4) == ((int32_t)((int32_t)48))))
		{
			goto IL_0030;
		}
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = ___data0;
		IL2CPP_RUNTIME_CLASS_INIT(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = X509Certificate_PEM_m1C6DE4765B36C1EE23F33E74F1E10609004C9CE2(_stringLiteralF4A57516EE55A1A8F06B82FEAA340CC2841AB009, L_5, /*hidden argument*/NULL);
		___data0 = L_6;
		goto IL_0030;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0023;
		throw e;
	}

CATCH_0023:
	{ // begin catch(System.Exception)
		V_0 = ((Exception_t *)__exception_local);
		IL2CPP_RUNTIME_CLASS_INIT(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B_il2cpp_TypeInfo_var);
		String_t* L_7 = ((X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B_StaticFields*)il2cpp_codegen_static_fields_for(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B_il2cpp_TypeInfo_var))->get_encoding_error_21();
		Exception_t * L_8 = V_0;
		CryptographicException_t67ABE4FAB48298C9DF4C5E37E4C8F20AA601F15A * L_9 = (CryptographicException_t67ABE4FAB48298C9DF4C5E37E4C8F20AA601F15A *)il2cpp_codegen_object_new(CryptographicException_t67ABE4FAB48298C9DF4C5E37E4C8F20AA601F15A_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m65F4E67FD9D0449B5BFFC04E359BF3EC098075DA(L_9, L_7, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, X509Certificate__ctor_mE2BC6649D450A36E902A2D6BEB50C49130411129_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_0030:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = ___data0;
		X509Certificate_Parse_m5CB2F316EC4BC08A3714213C103E3C8689F2E8E0(__this, L_10, /*hidden argument*/NULL);
	}

IL_0037:
	{
		return;
	}
}
// System.Byte[] Mono.Security.X509.X509Certificate::GetUnsignedBigInteger(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* X509Certificate_GetUnsignedBigInteger_mD00F44BA5EC7109B54BB43083AC1BB9F531C0FDD (X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___integer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate_GetUnsignedBigInteger_mD00F44BA5EC7109B54BB43083AC1BB9F531C0FDD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_1 = NULL;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___integer0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = ___integer0;
		NullCheck(L_3);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length)))), (int32_t)1));
		int32_t L_4 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_1 = L_5;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = ___integer0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = V_1;
		int32_t L_8 = V_0;
		Buffer_BlockCopy_m1F882D595976063718AF6E405664FC761924D353((RuntimeArray *)(RuntimeArray *)L_6, 1, (RuntimeArray *)(RuntimeArray *)L_7, 0, L_8, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = V_1;
		return L_9;
	}

IL_001e:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = ___integer0;
		return L_10;
	}
}
// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::get_DSA()
extern "C" IL2CPP_METHOD_ATTR DSA_t932F4A94DD2B782BFFC197544398826E6CDB64CF * X509Certificate_get_DSA_m7C3868DFAC7C067D09A324C348D7461D70E10F7F (X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate_get_DSA_m7C3868DFAC7C067D09A324C348D7461D70E10F7F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DSAParameters_tCA1A96A151F47B1904693C457243E3B919425AC6  V_0;
	memset(&V_0, 0, sizeof(V_0));
	ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * V_1 = NULL;
	ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * V_2 = NULL;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get_m_keyalgoparams_7();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		CryptographicException_t67ABE4FAB48298C9DF4C5E37E4C8F20AA601F15A * L_1 = (CryptographicException_t67ABE4FAB48298C9DF4C5E37E4C8F20AA601F15A *)il2cpp_codegen_object_new(CryptographicException_t67ABE4FAB48298C9DF4C5E37E4C8F20AA601F15A_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m0A5D357C12F9A830A9EBC51723094EBA5B854B98(L_1, _stringLiteral8D357A0A6981BFB00B37DF4E165A0DBFB637E034, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, X509Certificate_get_DSA_m7C3868DFAC7C067D09A324C348D7461D70E10F7F_RuntimeMethod_var);
	}

IL_0013:
	{
		DSA_t932F4A94DD2B782BFFC197544398826E6CDB64CF * L_2 = __this->get__dsa_15();
		if (L_2)
		{
			goto IL_0127;
		}
	}
	{
		String_t* L_3 = __this->get_m_keyalgo_6();
		bool L_4 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_3, _stringLiteral3D40DBB928A5C7B5821BA584FE0E47297DFAA72C, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0127;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(DSAParameters_tCA1A96A151F47B1904693C457243E3B919425AC6 ));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = __this->get_m_publickey_10();
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_6 = (ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E *)il2cpp_codegen_object_new(ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E_il2cpp_TypeInfo_var);
		ASN1__ctor_mE005F52336402C3D41EAD9E28A95910B3C0865DA(L_6, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_7 = V_1;
		if (!L_7)
		{
			goto IL_0053;
		}
	}
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_8 = V_1;
		NullCheck(L_8);
		uint8_t L_9 = ASN1_get_Tag_m1346989AC839D85A9E0A211525A6B551974E4862(L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_9) == ((int32_t)2)))
		{
			goto IL_0055;
		}
	}

IL_0053:
	{
		return (DSA_t932F4A94DD2B782BFFC197544398826E6CDB64CF *)NULL;
	}

IL_0055:
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_10 = V_1;
		NullCheck(L_10);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = ASN1_get_Value_m9BD6239E12A6148AF9507C2F58058C6B8147A079(L_10, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_12 = X509Certificate_GetUnsignedBigInteger_mD00F44BA5EC7109B54BB43083AC1BB9F531C0FDD(__this, L_11, /*hidden argument*/NULL);
		(&V_0)->set_Y_3(L_12);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_13 = __this->get_m_keyalgoparams_7();
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_14 = (ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E *)il2cpp_codegen_object_new(ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E_il2cpp_TypeInfo_var);
		ASN1__ctor_mE005F52336402C3D41EAD9E28A95910B3C0865DA(L_14, L_13, /*hidden argument*/NULL);
		V_2 = L_14;
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_15 = V_2;
		if (!L_15)
		{
			goto IL_008a;
		}
	}
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_16 = V_2;
		NullCheck(L_16);
		uint8_t L_17 = ASN1_get_Tag_m1346989AC839D85A9E0A211525A6B551974E4862(L_16, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_008a;
		}
	}
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_18 = V_2;
		NullCheck(L_18);
		int32_t L_19 = ASN1_get_Count_m5A0E71B4C4A2257C0875AE1041AAA953C5B12A19(L_18, /*hidden argument*/NULL);
		if ((((int32_t)L_19) >= ((int32_t)3)))
		{
			goto IL_008c;
		}
	}

IL_008a:
	{
		return (DSA_t932F4A94DD2B782BFFC197544398826E6CDB64CF *)NULL;
	}

IL_008c:
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_20 = V_2;
		NullCheck(L_20);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_21 = ASN1_get_Item_m88B75C57A7E130A02A709AE8FFD2E0972E71FC08(L_20, 0, /*hidden argument*/NULL);
		NullCheck(L_21);
		uint8_t L_22 = ASN1_get_Tag_m1346989AC839D85A9E0A211525A6B551974E4862(L_21, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_22) == ((uint32_t)2))))
		{
			goto IL_00b9;
		}
	}
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_23 = V_2;
		NullCheck(L_23);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_24 = ASN1_get_Item_m88B75C57A7E130A02A709AE8FFD2E0972E71FC08(L_23, 1, /*hidden argument*/NULL);
		NullCheck(L_24);
		uint8_t L_25 = ASN1_get_Tag_m1346989AC839D85A9E0A211525A6B551974E4862(L_24, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_25) == ((uint32_t)2))))
		{
			goto IL_00b9;
		}
	}
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_26 = V_2;
		NullCheck(L_26);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_27 = ASN1_get_Item_m88B75C57A7E130A02A709AE8FFD2E0972E71FC08(L_26, 2, /*hidden argument*/NULL);
		NullCheck(L_27);
		uint8_t L_28 = ASN1_get_Tag_m1346989AC839D85A9E0A211525A6B551974E4862(L_27, /*hidden argument*/NULL);
		if ((((int32_t)L_28) == ((int32_t)2)))
		{
			goto IL_00bb;
		}
	}

IL_00b9:
	{
		return (DSA_t932F4A94DD2B782BFFC197544398826E6CDB64CF *)NULL;
	}

IL_00bb:
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_29 = V_2;
		NullCheck(L_29);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_30 = ASN1_get_Item_m88B75C57A7E130A02A709AE8FFD2E0972E71FC08(L_29, 0, /*hidden argument*/NULL);
		NullCheck(L_30);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_31 = ASN1_get_Value_m9BD6239E12A6148AF9507C2F58058C6B8147A079(L_30, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_32 = X509Certificate_GetUnsignedBigInteger_mD00F44BA5EC7109B54BB43083AC1BB9F531C0FDD(__this, L_31, /*hidden argument*/NULL);
		(&V_0)->set_P_0(L_32);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_33 = V_2;
		NullCheck(L_33);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_34 = ASN1_get_Item_m88B75C57A7E130A02A709AE8FFD2E0972E71FC08(L_33, 1, /*hidden argument*/NULL);
		NullCheck(L_34);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_35 = ASN1_get_Value_m9BD6239E12A6148AF9507C2F58058C6B8147A079(L_34, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_36 = X509Certificate_GetUnsignedBigInteger_mD00F44BA5EC7109B54BB43083AC1BB9F531C0FDD(__this, L_35, /*hidden argument*/NULL);
		(&V_0)->set_Q_1(L_36);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_37 = V_2;
		NullCheck(L_37);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_38 = ASN1_get_Item_m88B75C57A7E130A02A709AE8FFD2E0972E71FC08(L_37, 2, /*hidden argument*/NULL);
		NullCheck(L_38);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_39 = ASN1_get_Value_m9BD6239E12A6148AF9507C2F58058C6B8147A079(L_38, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_40 = X509Certificate_GetUnsignedBigInteger_mD00F44BA5EC7109B54BB43083AC1BB9F531C0FDD(__this, L_39, /*hidden argument*/NULL);
		(&V_0)->set_G_2(L_40);
		DSAParameters_tCA1A96A151F47B1904693C457243E3B919425AC6  L_41 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_42 = L_41.get_Y_3();
		NullCheck(L_42);
		DSACryptoServiceProvider_t2F04D5DDEC979A82A4FE89530F0F712DFE12D6C8 * L_43 = (DSACryptoServiceProvider_t2F04D5DDEC979A82A4FE89530F0F712DFE12D6C8 *)il2cpp_codegen_object_new(DSACryptoServiceProvider_t2F04D5DDEC979A82A4FE89530F0F712DFE12D6C8_il2cpp_TypeInfo_var);
		DSACryptoServiceProvider__ctor_m7543CB44E8F80ADC129572DD56E4C11F4C18B790(L_43, ((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_42)->max_length))))<<(int32_t)3)), /*hidden argument*/NULL);
		__this->set__dsa_15(L_43);
		DSA_t932F4A94DD2B782BFFC197544398826E6CDB64CF * L_44 = __this->get__dsa_15();
		DSAParameters_tCA1A96A151F47B1904693C457243E3B919425AC6  L_45 = V_0;
		NullCheck(L_44);
		VirtActionInvoker1< DSAParameters_tCA1A96A151F47B1904693C457243E3B919425AC6  >::Invoke(11 /* System.Void System.Security.Cryptography.DSA::ImportParameters(System.Security.Cryptography.DSAParameters) */, L_44, L_45);
	}

IL_0127:
	{
		DSA_t932F4A94DD2B782BFFC197544398826E6CDB64CF * L_46 = __this->get__dsa_15();
		return L_46;
	}
}
// System.Void Mono.Security.X509.X509Certificate::set_DSA(System.Security.Cryptography.DSA)
extern "C" IL2CPP_METHOD_ATTR void X509Certificate_set_DSA_m438EDD75622A0D3154D5C9F7A52742D8AFE09D62 (X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * __this, DSA_t932F4A94DD2B782BFFC197544398826E6CDB64CF * ___value0, const RuntimeMethod* method)
{
	{
		DSA_t932F4A94DD2B782BFFC197544398826E6CDB64CF * L_0 = ___value0;
		__this->set__dsa_15(L_0);
		DSA_t932F4A94DD2B782BFFC197544398826E6CDB64CF * L_1 = ___value0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		__this->set__rsa_14((RSA_tB6C4B434B2AC02E3F8981DB2908C2018E251D145 *)NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.String Mono.Security.X509.X509Certificate::get_IssuerName()
extern "C" IL2CPP_METHOD_ATTR String_t* X509Certificate_get_IssuerName_m3CF6F50F2B0C9842FC1E33A2733D1984D83D550B (X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_m_issuername_5();
		return L_0;
	}
}
// System.String Mono.Security.X509.X509Certificate::get_KeyAlgorithm()
extern "C" IL2CPP_METHOD_ATTR String_t* X509Certificate_get_KeyAlgorithm_mFD510559230F6627C9FF5BCE08FBD3C0AA8EC35A (X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_m_keyalgo_6();
		return L_0;
	}
}
// System.Byte[] Mono.Security.X509.X509Certificate::get_KeyAlgorithmParameters()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* X509Certificate_get_KeyAlgorithmParameters_mBAB6E750097D8F9E4607E8CD14CF3B4DF9DF3D0B (X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate_get_KeyAlgorithmParameters_mBAB6E750097D8F9E4607E8CD14CF3B4DF9DF3D0B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get_m_keyalgoparams_7();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL;
	}

IL_000a:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = __this->get_m_keyalgoparams_7();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_1);
		RuntimeObject * L_2 = Array_Clone_mE8C710213E323617A6F46F2B36DCDDD4C7CF5176((RuntimeArray *)(RuntimeArray *)L_1, /*hidden argument*/NULL);
		return ((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)Castclass((RuntimeObject*)L_2, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var));
	}
}
// System.Byte[] Mono.Security.X509.X509Certificate::get_PublicKey()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* X509Certificate_get_PublicKey_mC506F699EDCF690B6B7FFF4DA4F7A11C47688E30 (X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate_get_PublicKey_mC506F699EDCF690B6B7FFF4DA4F7A11C47688E30_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get_m_publickey_10();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL;
	}

IL_000a:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = __this->get_m_publickey_10();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_1);
		RuntimeObject * L_2 = Array_Clone_mE8C710213E323617A6F46F2B36DCDDD4C7CF5176((RuntimeArray *)(RuntimeArray *)L_1, /*hidden argument*/NULL);
		return ((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)Castclass((RuntimeObject*)L_2, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var));
	}
}
// System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::get_RSA()
extern "C" IL2CPP_METHOD_ATTR RSA_tB6C4B434B2AC02E3F8981DB2908C2018E251D145 * X509Certificate_get_RSA_mE0259FE7B339032FDEA29171D3866F176E1D06B8 (X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate_get_RSA_mE0259FE7B339032FDEA29171D3866F176E1D06B8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RSAParameters_t6A568C1275FA8F8C02615666D998134DCFFB9717  V_0;
	memset(&V_0, 0, sizeof(V_0));
	ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * V_1 = NULL;
	ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * V_2 = NULL;
	ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * V_3 = NULL;
	int32_t V_4 = 0;
	{
		RSA_tB6C4B434B2AC02E3F8981DB2908C2018E251D145 * L_0 = __this->get__rsa_14();
		if (L_0)
		{
			goto IL_00a2;
		}
	}
	{
		String_t* L_1 = __this->get_m_keyalgo_6();
		bool L_2 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_1, _stringLiteralFD916A733B7A811CD35B7057C8AF918C5FA637EB, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_00a2;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RSAParameters_t6A568C1275FA8F8C02615666D998134DCFFB9717 ));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = __this->get_m_publickey_10();
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_4 = (ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E *)il2cpp_codegen_object_new(ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E_il2cpp_TypeInfo_var);
		ASN1__ctor_mE005F52336402C3D41EAD9E28A95910B3C0865DA(L_4, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_5 = V_1;
		NullCheck(L_5);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_6 = ASN1_get_Item_m88B75C57A7E130A02A709AE8FFD2E0972E71FC08(L_5, 0, /*hidden argument*/NULL);
		V_2 = L_6;
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_7 = V_2;
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_8 = V_2;
		NullCheck(L_8);
		uint8_t L_9 = ASN1_get_Tag_m1346989AC839D85A9E0A211525A6B551974E4862(L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_9) == ((int32_t)2)))
		{
			goto IL_004a;
		}
	}

IL_0048:
	{
		return (RSA_tB6C4B434B2AC02E3F8981DB2908C2018E251D145 *)NULL;
	}

IL_004a:
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_10 = V_1;
		NullCheck(L_10);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_11 = ASN1_get_Item_m88B75C57A7E130A02A709AE8FFD2E0972E71FC08(L_10, 1, /*hidden argument*/NULL);
		V_3 = L_11;
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_12 = V_3;
		NullCheck(L_12);
		uint8_t L_13 = ASN1_get_Tag_m1346989AC839D85A9E0A211525A6B551974E4862(L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) == ((int32_t)2)))
		{
			goto IL_005d;
		}
	}
	{
		return (RSA_tB6C4B434B2AC02E3F8981DB2908C2018E251D145 *)NULL;
	}

IL_005d:
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_14 = V_2;
		NullCheck(L_14);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_15 = ASN1_get_Value_m9BD6239E12A6148AF9507C2F58058C6B8147A079(L_14, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_16 = X509Certificate_GetUnsignedBigInteger_mD00F44BA5EC7109B54BB43083AC1BB9F531C0FDD(__this, L_15, /*hidden argument*/NULL);
		(&V_0)->set_Modulus_1(L_16);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_17 = V_3;
		NullCheck(L_17);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_18 = ASN1_get_Value_m9BD6239E12A6148AF9507C2F58058C6B8147A079(L_17, /*hidden argument*/NULL);
		(&V_0)->set_Exponent_0(L_18);
		RSAParameters_t6A568C1275FA8F8C02615666D998134DCFFB9717  L_19 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_20 = L_19.get_Modulus_1();
		NullCheck(L_20);
		V_4 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_20)->max_length))))<<(int32_t)3));
		int32_t L_21 = V_4;
		RSACryptoServiceProvider_t6DC0FC3205BA6CDCA4FF2AEEF566D8F0CCE26AD4 * L_22 = (RSACryptoServiceProvider_t6DC0FC3205BA6CDCA4FF2AEEF566D8F0CCE26AD4 *)il2cpp_codegen_object_new(RSACryptoServiceProvider_t6DC0FC3205BA6CDCA4FF2AEEF566D8F0CCE26AD4_il2cpp_TypeInfo_var);
		RSACryptoServiceProvider__ctor_mBE2DCC392E07EBD1E400EF9EF6C25E678236ACC2(L_22, L_21, /*hidden argument*/NULL);
		__this->set__rsa_14(L_22);
		RSA_tB6C4B434B2AC02E3F8981DB2908C2018E251D145 * L_23 = __this->get__rsa_14();
		RSAParameters_t6A568C1275FA8F8C02615666D998134DCFFB9717  L_24 = V_0;
		NullCheck(L_23);
		VirtActionInvoker1< RSAParameters_t6A568C1275FA8F8C02615666D998134DCFFB9717  >::Invoke(11 /* System.Void System.Security.Cryptography.RSA::ImportParameters(System.Security.Cryptography.RSAParameters) */, L_23, L_24);
	}

IL_00a2:
	{
		RSA_tB6C4B434B2AC02E3F8981DB2908C2018E251D145 * L_25 = __this->get__rsa_14();
		return L_25;
	}
}
// System.Void Mono.Security.X509.X509Certificate::set_RSA(System.Security.Cryptography.RSA)
extern "C" IL2CPP_METHOD_ATTR void X509Certificate_set_RSA_m8FCB3F0C8887DE88637B27E5AA1827C302197743 (X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * __this, RSA_tB6C4B434B2AC02E3F8981DB2908C2018E251D145 * ___value0, const RuntimeMethod* method)
{
	{
		RSA_tB6C4B434B2AC02E3F8981DB2908C2018E251D145 * L_0 = ___value0;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		__this->set__dsa_15((DSA_t932F4A94DD2B782BFFC197544398826E6CDB64CF *)NULL);
	}

IL_000a:
	{
		RSA_tB6C4B434B2AC02E3F8981DB2908C2018E251D145 * L_1 = ___value0;
		__this->set__rsa_14(L_1);
		return;
	}
}
// System.Byte[] Mono.Security.X509.X509Certificate::get_RawData()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* X509Certificate_get_RawData_m6C746AB63B60A13BC37E9E8A9B9C649EE9BF0F74 (X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate_get_RawData_m6C746AB63B60A13BC37E9E8A9B9C649EE9BF0F74_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get_m_encodedcert_1();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL;
	}

IL_000a:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = __this->get_m_encodedcert_1();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_1);
		RuntimeObject * L_2 = Array_Clone_mE8C710213E323617A6F46F2B36DCDDD4C7CF5176((RuntimeArray *)(RuntimeArray *)L_1, /*hidden argument*/NULL);
		return ((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)Castclass((RuntimeObject*)L_2, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var));
	}
}
// System.Byte[] Mono.Security.X509.X509Certificate::get_SerialNumber()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* X509Certificate_get_SerialNumber_mFCB78C242B8CA78F6813753022856056FFC48859 (X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate_get_SerialNumber_mFCB78C242B8CA78F6813753022856056FFC48859_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get_serialnumber_17();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL;
	}

IL_000a:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = __this->get_serialnumber_17();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_1);
		RuntimeObject * L_2 = Array_Clone_mE8C710213E323617A6F46F2B36DCDDD4C7CF5176((RuntimeArray *)(RuntimeArray *)L_1, /*hidden argument*/NULL);
		return ((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)Castclass((RuntimeObject*)L_2, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var));
	}
}
// System.String Mono.Security.X509.X509Certificate::get_SignatureAlgorithm()
extern "C" IL2CPP_METHOD_ATTR String_t* X509Certificate_get_SignatureAlgorithm_m0B747F93ACB40D00D7CBB9A67378C2F7C50D2794 (X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_m_signaturealgo_12();
		return L_0;
	}
}
// System.String Mono.Security.X509.X509Certificate::get_SubjectName()
extern "C" IL2CPP_METHOD_ATTR String_t* X509Certificate_get_SubjectName_m4BE22DFCD6613D7B6B9F8526E4DD936D7493F006 (X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_m_subject_9();
		return L_0;
	}
}
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidFrom()
extern "C" IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  X509Certificate_get_ValidFrom_mB93BFD950220E93414CBD26CAA5F6B4063548730 (X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * __this, const RuntimeMethod* method)
{
	{
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0 = __this->get_m_from_2();
		return L_0;
	}
}
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidUntil()
extern "C" IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  X509Certificate_get_ValidUntil_m69A8CBCBA731E52E463D32DF7DFEF89825B17B11 (X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * __this, const RuntimeMethod* method)
{
	{
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0 = __this->get_m_until_3();
		return L_0;
	}
}
// System.Int32 Mono.Security.X509.X509Certificate::get_Version()
extern "C" IL2CPP_METHOD_ATTR int32_t X509Certificate_get_Version_m8FAFE20FBC606456EA0A907066252CBCAB5C41E8 (X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_version_16();
		return L_0;
	}
}
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetIssuerName()
extern "C" IL2CPP_METHOD_ATTR ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * X509Certificate_GetIssuerName_mA0D2F957F9A6FD8A50368469B798FC3792ED895D (X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * __this, const RuntimeMethod* method)
{
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_0 = __this->get_issuer_4();
		return L_0;
	}
}
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetSubjectName()
extern "C" IL2CPP_METHOD_ATTR ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * X509Certificate_GetSubjectName_m59C83E8084320DEAA93946A722DFE23522E31338 (X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * __this, const RuntimeMethod* method)
{
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_0 = __this->get_subject_8();
		return L_0;
	}
}
// System.Void Mono.Security.X509.X509Certificate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void X509Certificate_GetObjectData_m208AB9EAADD6CD1FD5C585012572572B32600D1F (X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * __this, SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ___info0, StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate_GetObjectData_m208AB9EAADD6CD1FD5C585012572572B32600D1F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_0 = ___info0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = __this->get_m_encodedcert_1();
		NullCheck(L_0);
		SerializationInfo_AddValue_mC9D1E16476E24E1AFE7C59368D3BC0B35F64FBC6(L_0, _stringLiteralCE15802A8C5E8E9DB0FFAF10130EF265296E9EA4, (RuntimeObject *)(RuntimeObject *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Byte[] Mono.Security.X509.X509Certificate::PEM(System.String,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* X509Certificate_PEM_m1C6DE4765B36C1EE23F33E74F1E10609004C9CE2 (String_t* ___type0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate_PEM_m1C6DE4765B36C1EE23F33E74F1E10609004C9CE2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_0 = Encoding_get_ASCII_m9B673AE3152AB04D07CADE6E5E142C785B5BC94E(/*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___data1;
		NullCheck(L_0);
		String_t* L_2 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(32 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_0, L_1);
		String_t* L_3 = ___type0;
		String_t* L_4 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralCDA87E8FAD2300F90D5D664EDD42E9364EDDB3D1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5 = ___type0;
		String_t* L_6 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral2DA88E03A81D77B573503F53B6D5FF0C6CFAD459, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		String_t* L_7 = L_2;
		String_t* L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = String_IndexOf_mA9A0117D68338238E51E5928CDA8EB3DC9DA497B(L_7, L_8, /*hidden argument*/NULL);
		String_t* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018(L_10, /*hidden argument*/NULL);
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_11));
		String_t* L_12 = L_7;
		String_t* L_13 = V_1;
		int32_t L_14 = V_2;
		NullCheck(L_12);
		int32_t L_15 = String_IndexOf_m9285F4AFCAD971E6AFB6F0212B415989CB3DACA5(L_12, L_13, L_14, /*hidden argument*/NULL);
		V_3 = L_15;
		int32_t L_16 = V_2;
		int32_t L_17 = V_3;
		int32_t L_18 = V_2;
		NullCheck(L_12);
		String_t* L_19 = String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB(L_12, L_16, ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)L_18)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_20 = Convert_FromBase64String_m079F788D000703E8018DA39BE9C05F1CBF60B156(L_19, /*hidden argument*/NULL);
		return L_20;
	}
}
// System.Void Mono.Security.X509.X509Certificate::.cctor()
extern "C" IL2CPP_METHOD_ATTR void X509Certificate__cctor_mF0876223092F847F21251E6A6347AEA3E61C3763 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate__cctor_mF0876223092F847F21251E6A6347AEA3E61C3763_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = Locale_GetText_m67B66557188C94648AA7A23F6A7501BE7D455ADA(_stringLiteral4EDE3DBE3842E4E897B27DE36AB7E2BA1F056615, /*hidden argument*/NULL);
		((X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B_StaticFields*)il2cpp_codegen_static_fields_for(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B_il2cpp_TypeInfo_var))->set_encoding_error_21(L_0);
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
// System.Void Mono.Security.X509.X509CertificateCollection::.ctor()
extern "C" IL2CPP_METHOD_ATTR void X509CertificateCollection__ctor_mC7C07103044E3520FC785CD5BF0018F27C3132EE (X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A * __this, const RuntimeMethod* method)
{
	{
		CollectionBase__ctor_mE3F20EEAA96F8613088EDD69A17E49C22E97ADF9(__this, /*hidden argument*/NULL);
		return;
	}
}
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509CertificateCollection::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * X509CertificateCollection_get_Item_m158B7010FAC060435225725336AD53D2B3CC5359 (X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateCollection_get_Item_m158B7010FAC060435225725336AD53D2B3CC5359_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_0 = CollectionBase_get_InnerList_m56EDE16DE8F8FA2AA6346730CC725E0B3BF0750A(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		RuntimeObject * L_2 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(27 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_0, L_1);
		return ((X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B *)CastclassClass((RuntimeObject*)L_2, X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B_il2cpp_TypeInfo_var));
	}
}
// System.Int32 Mono.Security.X509.X509CertificateCollection::Add(Mono.Security.X509.X509Certificate)
extern "C" IL2CPP_METHOD_ATTR int32_t X509CertificateCollection_Add_mC060190867D9C5D182236A313FE912DFCCE1F785 (X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A * __this, X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateCollection_Add_mC060190867D9C5D182236A313FE912DFCCE1F785_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * L_0 = ___value0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteralF32B67C7E26342AF42EFABC674D441DCA0A281C5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, X509CertificateCollection_Add_mC060190867D9C5D182236A313FE912DFCCE1F785_RuntimeMethod_var);
	}

IL_000e:
	{
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_2 = CollectionBase_get_InnerList_m56EDE16DE8F8FA2AA6346730CC725E0B3BF0750A(__this, /*hidden argument*/NULL);
		X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * L_3 = ___value0;
		NullCheck(L_2);
		int32_t L_4 = VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_2, L_3);
		return L_4;
	}
}
// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator Mono.Security.X509.X509CertificateCollection::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR X509CertificateEnumerator_t1CBC050F10F4BE1E2A8552A1F22E705013EBF505 * X509CertificateCollection_GetEnumerator_mE786AA0C41503620161D81E4D9172932564BAB4C (X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateCollection_GetEnumerator_mE786AA0C41503620161D81E4D9172932564BAB4C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509CertificateEnumerator_t1CBC050F10F4BE1E2A8552A1F22E705013EBF505 * L_0 = (X509CertificateEnumerator_t1CBC050F10F4BE1E2A8552A1F22E705013EBF505 *)il2cpp_codegen_object_new(X509CertificateEnumerator_t1CBC050F10F4BE1E2A8552A1F22E705013EBF505_il2cpp_TypeInfo_var);
		X509CertificateEnumerator__ctor_m6D622EC72DC9F698B6674D0D940C9BE62DD9AB68(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Collections.IEnumerator Mono.Security.X509.X509CertificateCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* X509CertificateCollection_System_Collections_IEnumerable_GetEnumerator_m076B4EE02F416C4161E08D9DF2F916CA7A6D1D59 (X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A * __this, const RuntimeMethod* method)
{
	{
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_0 = CollectionBase_get_InnerList_m56EDE16DE8F8FA2AA6346730CC725E0B3BF0750A(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(37 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_0);
		return L_1;
	}
}
// System.Int32 Mono.Security.X509.X509CertificateCollection::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t X509CertificateCollection_GetHashCode_mC3C7017A9FAF6FE14DFEA5050B7ED77CBD559798 (X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A * __this, const RuntimeMethod* method)
{
	{
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_0 = CollectionBase_get_InnerList_m56EDE16DE8F8FA2AA6346730CC725E0B3BF0750A(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
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
// System.Void Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::.ctor(Mono.Security.X509.X509CertificateCollection)
extern "C" IL2CPP_METHOD_ATTR void X509CertificateEnumerator__ctor_m6D622EC72DC9F698B6674D0D940C9BE62DD9AB68 (X509CertificateEnumerator_t1CBC050F10F4BE1E2A8552A1F22E705013EBF505 * __this, X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A * ___mappings0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateEnumerator__ctor_m6D622EC72DC9F698B6674D0D940C9BE62DD9AB68_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A * L_0 = ___mappings0;
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var, L_0);
		__this->set_enumerator_0(L_1);
		return;
	}
}
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::get_Current()
extern "C" IL2CPP_METHOD_ATTR X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * X509CertificateEnumerator_get_Current_m68306EF52C95B315E36054119C0422ACAF95C09F (X509CertificateEnumerator_t1CBC050F10F4BE1E2A8552A1F22E705013EBF505 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateEnumerator_get_Current_m68306EF52C95B315E36054119C0422ACAF95C09F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_enumerator_0();
		NullCheck(L_0);
		RuntimeObject * L_1 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_0);
		return ((X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B *)CastclassClass((RuntimeObject*)L_1, X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B_il2cpp_TypeInfo_var));
	}
}
// System.Object Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * X509CertificateEnumerator_System_Collections_IEnumerator_get_Current_mC3AF6C0A357F9080FF968652C79701F0B5878BD3 (X509CertificateEnumerator_t1CBC050F10F4BE1E2A8552A1F22E705013EBF505 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateEnumerator_System_Collections_IEnumerator_get_Current_mC3AF6C0A357F9080FF968652C79701F0B5878BD3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_enumerator_0();
		NullCheck(L_0);
		RuntimeObject * L_1 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool X509CertificateEnumerator_System_Collections_IEnumerator_MoveNext_m5A4EC92045952FE946B64B22EF2AB3B819E7F7F9 (X509CertificateEnumerator_t1CBC050F10F4BE1E2A8552A1F22E705013EBF505 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateEnumerator_System_Collections_IEnumerator_MoveNext_m5A4EC92045952FE946B64B22EF2AB3B819E7F7F9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_enumerator_0();
		NullCheck(L_0);
		bool L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.Reset()
extern "C" IL2CPP_METHOD_ATTR void X509CertificateEnumerator_System_Collections_IEnumerator_Reset_m0DC0B0E3F02675E4815703748AAD8E7F9277ED75 (X509CertificateEnumerator_t1CBC050F10F4BE1E2A8552A1F22E705013EBF505 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateEnumerator_System_Collections_IEnumerator_Reset_m0DC0B0E3F02675E4815703748AAD8E7F9277ED75_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_enumerator_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Collections.IEnumerator::Reset() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Boolean Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool X509CertificateEnumerator_MoveNext_m9E88A7C9685146F7E558267D7D828711C5E898F4 (X509CertificateEnumerator_t1CBC050F10F4BE1E2A8552A1F22E705013EBF505 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateEnumerator_MoveNext_m9E88A7C9685146F7E558267D7D828711C5E898F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_enumerator_0();
		NullCheck(L_0);
		bool L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_0);
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
// System.Void Mono.Security.X509.X509Extension::.ctor(Mono.Security.ASN1)
extern "C" IL2CPP_METHOD_ATTR void X509Extension__ctor_mDEE4DCDDDD91D3C1DD2FDF3D793AD447D86C4F37 (X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * __this, ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * ___asn10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Extension__ctor_mDEE4DCDDDD91D3C1DD2FDF3D793AD447D86C4F37_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * G_B7_0 = NULL;
	X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * G_B8_1 = NULL;
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_0 = ___asn10;
		NullCheck(L_0);
		uint8_t L_1 = ASN1_get_Tag_m1346989AC839D85A9E0A211525A6B551974E4862(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_0019;
		}
	}
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_2 = ___asn10;
		NullCheck(L_2);
		int32_t L_3 = ASN1_get_Count_m5A0E71B4C4A2257C0875AE1041AAA953C5B12A19(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) >= ((int32_t)2)))
		{
			goto IL_0029;
		}
	}

IL_0019:
	{
		String_t* L_4 = Locale_GetText_m67B66557188C94648AA7A23F6A7501BE7D455ADA(_stringLiteral69B85846222F763F537AAE189724E50D8A16971F, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_5 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, X509Extension__ctor_mDEE4DCDDDD91D3C1DD2FDF3D793AD447D86C4F37_RuntimeMethod_var);
	}

IL_0029:
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_6 = ___asn10;
		NullCheck(L_6);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_7 = ASN1_get_Item_m88B75C57A7E130A02A709AE8FFD2E0972E71FC08(L_6, 0, /*hidden argument*/NULL);
		NullCheck(L_7);
		uint8_t L_8 = ASN1_get_Tag_m1346989AC839D85A9E0A211525A6B551974E4862(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_8) == ((int32_t)6)))
		{
			goto IL_0048;
		}
	}
	{
		String_t* L_9 = Locale_GetText_m67B66557188C94648AA7A23F6A7501BE7D455ADA(_stringLiteral69B85846222F763F537AAE189724E50D8A16971F, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_10 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_10, L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, NULL, X509Extension__ctor_mDEE4DCDDDD91D3C1DD2FDF3D793AD447D86C4F37_RuntimeMethod_var);
	}

IL_0048:
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_11 = ___asn10;
		NullCheck(L_11);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_12 = ASN1_get_Item_m88B75C57A7E130A02A709AE8FFD2E0972E71FC08(L_11, 0, /*hidden argument*/NULL);
		String_t* L_13 = ASN1Convert_ToOid_mFFA93B4BBEFCA8E4E86DAE87CDB998E78BFB2D5A(L_12, /*hidden argument*/NULL);
		__this->set_extnOid_0(L_13);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_14 = ___asn10;
		NullCheck(L_14);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_15 = ASN1_get_Item_m88B75C57A7E130A02A709AE8FFD2E0972E71FC08(L_14, 1, /*hidden argument*/NULL);
		NullCheck(L_15);
		uint8_t L_16 = ASN1_get_Tag_m1346989AC839D85A9E0A211525A6B551974E4862(L_15, /*hidden argument*/NULL);
		G_B6_0 = __this;
		if ((!(((uint32_t)L_16) == ((uint32_t)1))))
		{
			G_B7_0 = __this;
			goto IL_0081;
		}
	}
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_17 = ___asn10;
		NullCheck(L_17);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_18 = ASN1_get_Item_m88B75C57A7E130A02A709AE8FFD2E0972E71FC08(L_17, 1, /*hidden argument*/NULL);
		NullCheck(L_18);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_19 = ASN1_get_Value_m9BD6239E12A6148AF9507C2F58058C6B8147A079(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		int32_t L_20 = 0;
		uint8_t L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		G_B8_0 = ((((int32_t)L_21) == ((int32_t)((int32_t)255)))? 1 : 0);
		G_B8_1 = G_B6_0;
		goto IL_0082;
	}

IL_0081:
	{
		G_B8_0 = 0;
		G_B8_1 = G_B7_0;
	}

IL_0082:
	{
		NullCheck(G_B8_1);
		G_B8_1->set_extnCritical_1((bool)G_B8_0);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_22 = ___asn10;
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_23 = ___asn10;
		NullCheck(L_23);
		int32_t L_24 = ASN1_get_Count_m5A0E71B4C4A2257C0875AE1041AAA953C5B12A19(L_23, /*hidden argument*/NULL);
		NullCheck(L_22);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_25 = ASN1_get_Item_m88B75C57A7E130A02A709AE8FFD2E0972E71FC08(L_22, ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1)), /*hidden argument*/NULL);
		__this->set_extnValue_2(L_25);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_26 = __this->get_extnValue_2();
		NullCheck(L_26);
		uint8_t L_27 = ASN1_get_Tag_m1346989AC839D85A9E0A211525A6B551974E4862(L_26, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_27) == ((uint32_t)4))))
		{
			goto IL_00f3;
		}
	}
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_28 = __this->get_extnValue_2();
		NullCheck(L_28);
		int32_t L_29 = ASN1_get_Length_mD0AC74E8F07244961D697B341599BD83D989EF63(L_28, /*hidden argument*/NULL);
		if ((((int32_t)L_29) <= ((int32_t)0)))
		{
			goto IL_00f3;
		}
	}
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_30 = __this->get_extnValue_2();
		NullCheck(L_30);
		int32_t L_31 = ASN1_get_Count_m5A0E71B4C4A2257C0875AE1041AAA953C5B12A19(L_30, /*hidden argument*/NULL);
		if (L_31)
		{
			goto IL_00f3;
		}
	}

IL_00c4:
	try
	{ // begin try (depth: 1)
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_32 = __this->get_extnValue_2();
		NullCheck(L_32);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_33 = ASN1_get_Value_m9BD6239E12A6148AF9507C2F58058C6B8147A079(L_32, /*hidden argument*/NULL);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_34 = (ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E *)il2cpp_codegen_object_new(ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E_il2cpp_TypeInfo_var);
		ASN1__ctor_mE005F52336402C3D41EAD9E28A95910B3C0865DA(L_34, L_33, /*hidden argument*/NULL);
		V_0 = L_34;
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_35 = __this->get_extnValue_2();
		NullCheck(L_35);
		ASN1_set_Value_m225FF9AC03EA872809C7742070A34A264C58588E(L_35, (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL, /*hidden argument*/NULL);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_36 = __this->get_extnValue_2();
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_37 = V_0;
		NullCheck(L_36);
		ASN1_Add_mF6ED0416BB021A1C333F99E42F8B17AF8B26639B(L_36, L_37, /*hidden argument*/NULL);
		goto IL_00f3;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00f0;
		throw e;
	}

CATCH_00f0:
	{ // begin catch(System.Object)
		goto IL_00f3;
	} // end catch (depth: 1)

IL_00f3:
	{
		VirtActionInvoker0::Invoke(4 /* System.Void Mono.Security.X509.X509Extension::Decode() */, __this);
		return;
	}
}
// System.Void Mono.Security.X509.X509Extension::Decode()
extern "C" IL2CPP_METHOD_ATTR void X509Extension_Decode_mF26997CE00B1366C7EF9F00502EDA6214287206E (X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Mono.Security.X509.X509Extension::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool X509Extension_Equals_m142690BDE93BA49B3EF04CDF1F14A51D274F38FD (X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Extension_Equals_m142690BDE93BA49B3EF04CDF1F14A51D274F38FD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___obj0;
		V_0 = ((X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF *)IsInstClass((RuntimeObject*)L_1, X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF_il2cpp_TypeInfo_var));
		X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		bool L_3 = __this->get_extnCritical_1();
		X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * L_4 = V_0;
		NullCheck(L_4);
		bool L_5 = L_4->get_extnCritical_1();
		if ((((int32_t)L_3) == ((int32_t)L_5)))
		{
			goto IL_0021;
		}
	}
	{
		return (bool)0;
	}

IL_0021:
	{
		String_t* L_6 = __this->get_extnOid_0();
		X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = L_7->get_extnOid_0();
		bool L_9 = String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E(L_6, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0036;
		}
	}
	{
		return (bool)0;
	}

IL_0036:
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_10 = __this->get_extnValue_2();
		NullCheck(L_10);
		int32_t L_11 = ASN1_get_Length_mD0AC74E8F07244961D697B341599BD83D989EF63(L_10, /*hidden argument*/NULL);
		X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * L_12 = V_0;
		NullCheck(L_12);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_13 = L_12->get_extnValue_2();
		NullCheck(L_13);
		int32_t L_14 = ASN1_get_Length_mD0AC74E8F07244961D697B341599BD83D989EF63(L_13, /*hidden argument*/NULL);
		if ((((int32_t)L_11) == ((int32_t)L_14)))
		{
			goto IL_0050;
		}
	}
	{
		return (bool)0;
	}

IL_0050:
	{
		V_1 = 0;
		goto IL_0074;
	}

IL_0054:
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_15 = __this->get_extnValue_2();
		int32_t L_16 = V_1;
		NullCheck(L_15);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_17 = ASN1_get_Item_m88B75C57A7E130A02A709AE8FFD2E0972E71FC08(L_15, L_16, /*hidden argument*/NULL);
		X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * L_18 = V_0;
		NullCheck(L_18);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_19 = L_18->get_extnValue_2();
		int32_t L_20 = V_1;
		NullCheck(L_19);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_21 = ASN1_get_Item_m88B75C57A7E130A02A709AE8FFD2E0972E71FC08(L_19, L_20, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E *)L_17) == ((RuntimeObject*)(ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E *)L_21)))
		{
			goto IL_0070;
		}
	}
	{
		return (bool)0;
	}

IL_0070:
	{
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_0074:
	{
		int32_t L_23 = V_1;
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_24 = __this->get_extnValue_2();
		NullCheck(L_24);
		int32_t L_25 = ASN1_get_Length_mD0AC74E8F07244961D697B341599BD83D989EF63(L_24, /*hidden argument*/NULL);
		if ((((int32_t)L_23) < ((int32_t)L_25)))
		{
			goto IL_0054;
		}
	}
	{
		return (bool)1;
	}
}
// System.Int32 Mono.Security.X509.X509Extension::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t X509Extension_GetHashCode_mD1B128B323E782A9DF0672FB3223948A8E59882F (X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_extnOid_0();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Void Mono.Security.X509.X509Extension::WriteLine(System.Text.StringBuilder,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void X509Extension_WriteLine_m3C538A06F19ABFD9F3BC9F531C8CA96329E8EFF2 (X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * __this, StringBuilder_t * ___sb0, int32_t ___n1, int32_t ___pos2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Extension_WriteLine_m3C538A06F19ABFD9F3BC9F531C8CA96329E8EFF2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_0 = __this->get_extnValue_2();
		NullCheck(L_0);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ASN1_get_Value_m9BD6239E12A6148AF9507C2F58058C6B8147A079(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = ___pos2;
		V_1 = L_2;
		V_2 = 0;
		goto IL_0055;
	}

IL_0012:
	{
		int32_t L_3 = V_2;
		int32_t L_4 = ___n1;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0045;
		}
	}
	{
		StringBuilder_t * L_5 = ___sb0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
		NullCheck(L_6);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_9 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		String_t* L_10 = Byte_ToString_m731FDB27391432D7F14B6769B5D0A3E248803D25((uint8_t*)((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), _stringLiteral9F792B61D0EC544D91E7AFF34E2E99EE3CF2B313, L_9, /*hidden argument*/NULL);
		NullCheck(L_5);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_5, L_10, /*hidden argument*/NULL);
		StringBuilder_t * L_11 = ___sb0;
		NullCheck(L_11);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_11, _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6, /*hidden argument*/NULL);
		goto IL_0051;
	}

IL_0045:
	{
		StringBuilder_t * L_12 = ___sb0;
		NullCheck(L_12);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_12, _stringLiteral088FB1A4AB057F4FCF7D487006499060C7FE5773, /*hidden argument*/NULL);
	}

IL_0051:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0055:
	{
		int32_t L_14 = V_2;
		if ((((int32_t)L_14) < ((int32_t)8)))
		{
			goto IL_0012;
		}
	}
	{
		StringBuilder_t * L_15 = ___sb0;
		NullCheck(L_15);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_15, _stringLiteral099600A10A944114AAC406D136B625FB416DD779, /*hidden argument*/NULL);
		int32_t L_16 = ___pos2;
		V_1 = L_16;
		V_3 = 0;
		goto IL_009a;
	}

IL_006b:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_17 = V_0;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
		NullCheck(L_17);
		int32_t L_20 = L_19;
		uint8_t L_21 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_4 = L_21;
		uint8_t L_22 = V_4;
		if ((((int32_t)L_22) >= ((int32_t)((int32_t)32))))
		{
			goto IL_0088;
		}
	}
	{
		StringBuilder_t * L_23 = ___sb0;
		NullCheck(L_23);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_23, _stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727, /*hidden argument*/NULL);
		goto IL_0096;
	}

IL_0088:
	{
		StringBuilder_t * L_24 = ___sb0;
		uint8_t L_25 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		Il2CppChar L_26 = Convert_ToChar_m2FF337FDDCAD52939473E0D7ED3FBFD49A4C2E18(L_25, /*hidden argument*/NULL);
		NullCheck(L_24);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_24, L_26, /*hidden argument*/NULL);
	}

IL_0096:
	{
		int32_t L_27 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_009a:
	{
		int32_t L_28 = V_3;
		int32_t L_29 = ___n1;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_006b;
		}
	}
	{
		StringBuilder_t * L_30 = ___sb0;
		String_t* L_31 = Environment_get_NewLine_m5D4F4667FA5D1E2DBDD4DF9696D0CE76C83EF318(/*hidden argument*/NULL);
		NullCheck(L_30);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_30, L_31, /*hidden argument*/NULL);
		return;
	}
}
// System.String Mono.Security.X509.X509Extension::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* X509Extension_ToString_m6E272E5A762E6CC4AE476A5AF8627D164308C3A5 (X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Extension_ToString_m6E272E5A762E6CC4AE476A5AF8627D164308C3A5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_1 = __this->get_extnValue_2();
		NullCheck(L_1);
		int32_t L_2 = ASN1_get_Length_mD0AC74E8F07244961D697B341599BD83D989EF63(L_1, /*hidden argument*/NULL);
		V_1 = ((int32_t)((int32_t)L_2>>(int32_t)3));
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_3 = __this->get_extnValue_2();
		NullCheck(L_3);
		int32_t L_4 = ASN1_get_Length_mD0AC74E8F07244961D697B341599BD83D989EF63(L_3, /*hidden argument*/NULL);
		int32_t L_5 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)((int32_t)((int32_t)L_5<<(int32_t)3))));
		V_3 = 0;
		V_4 = 0;
		goto IL_003e;
	}

IL_002b:
	{
		StringBuilder_t * L_6 = V_0;
		int32_t L_7 = V_3;
		X509Extension_WriteLine_m3C538A06F19ABFD9F3BC9F531C8CA96329E8EFF2(__this, L_6, 8, L_7, /*hidden argument*/NULL);
		int32_t L_8 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)8));
		int32_t L_9 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_003e:
	{
		int32_t L_10 = V_4;
		int32_t L_11 = V_1;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_002b;
		}
	}
	{
		StringBuilder_t * L_12 = V_0;
		int32_t L_13 = V_2;
		int32_t L_14 = V_3;
		X509Extension_WriteLine_m3C538A06F19ABFD9F3BC9F531C8CA96329E8EFF2(__this, L_12, L_13, L_14, /*hidden argument*/NULL);
		StringBuilder_t * L_15 = V_0;
		NullCheck(L_15);
		String_t* L_16 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
		return L_16;
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
// System.Void Mono.Security.X509.X509ExtensionCollection::.ctor()
extern "C" IL2CPP_METHOD_ATTR void X509ExtensionCollection__ctor_m009D1FA8F4EA1BCF236002C901176D8C3CBDB8FC (X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * __this, const RuntimeMethod* method)
{
	{
		CollectionBase__ctor_mE3F20EEAA96F8613088EDD69A17E49C22E97ADF9(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.X509.X509ExtensionCollection::.ctor(Mono.Security.ASN1)
extern "C" IL2CPP_METHOD_ATTR void X509ExtensionCollection__ctor_mE4744D19F24BBC5F7FE1EE171FD5C301B38A9662 (X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * __this, ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * ___asn10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509ExtensionCollection__ctor_mE4744D19F24BBC5F7FE1EE171FD5C301B38A9662_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * V_1 = NULL;
	{
		X509ExtensionCollection__ctor_m009D1FA8F4EA1BCF236002C901176D8C3CBDB8FC(__this, /*hidden argument*/NULL);
		__this->set_readOnly_1((bool)1);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_0 = ___asn10;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_1 = ___asn10;
		NullCheck(L_1);
		uint8_t L_2 = ASN1_get_Tag_m1346989AC839D85A9E0A211525A6B551974E4862(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)48))))
		{
			goto IL_0026;
		}
	}
	{
		Exception_t * L_3 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_3, _stringLiteral7B152A24BBC8DB09B568453879784A9FBD2A9FFC, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, X509ExtensionCollection__ctor_mE4744D19F24BBC5F7FE1EE171FD5C301B38A9662_RuntimeMethod_var);
	}

IL_0026:
	{
		V_0 = 0;
		goto IL_0048;
	}

IL_002a:
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_4 = ___asn10;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_6 = ASN1_get_Item_m88B75C57A7E130A02A709AE8FFD2E0972E71FC08(L_4, L_5, /*hidden argument*/NULL);
		X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * L_7 = (X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF *)il2cpp_codegen_object_new(X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF_il2cpp_TypeInfo_var);
		X509Extension__ctor_mDEE4DCDDDD91D3C1DD2FDF3D793AD447D86C4F37(L_7, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_8 = CollectionBase_get_InnerList_m56EDE16DE8F8FA2AA6346730CC725E0B3BF0750A(__this, /*hidden argument*/NULL);
		X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * L_9 = V_1;
		NullCheck(L_8);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_8, L_9);
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0048:
	{
		int32_t L_11 = V_0;
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_12 = ___asn10;
		NullCheck(L_12);
		int32_t L_13 = ASN1_get_Count_m5A0E71B4C4A2257C0875AE1041AAA953C5B12A19(L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_002a;
		}
	}
	{
		return;
	}
}
// System.Collections.IEnumerator Mono.Security.X509.X509ExtensionCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* X509ExtensionCollection_System_Collections_IEnumerable_GetEnumerator_mD30D6DB62F39FFEF51B79A9992537250C4B3A756 (X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * __this, const RuntimeMethod* method)
{
	{
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_0 = CollectionBase_get_InnerList_m56EDE16DE8F8FA2AA6346730CC725E0B3BF0750A(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(37 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
