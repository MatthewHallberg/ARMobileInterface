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


// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.ArrayList
struct ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4;
// System.Collections.Hashtable
struct Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9;
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_t6FF2C2C4B21F2206885CD19A78F68B874C8DC84A;
// System.Collections.ICollection
struct ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54;
// System.Collections.IComparer
struct IComparer_t6A5E1BC727C7FF28888E407A797CE1ED92DA8E95;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t3102D0F5BABD60224F6DFF4815BCA1045831FB7C;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_tEA652F45F84FA62675B746607F7AAFA71515D856;
// System.Collections.Queue
struct Queue_tEC6DE7527799C2E4224B469ECD0CDD2B25E8E4F3;
// System.Collections.SortedList
struct SortedList_tC8B7CDE75652EC657C510034F127B9DFDE16BF4E;
// System.Collections.SortedList/ValueList
struct ValueList_t1BBC0BAD9C26EB4899C4AB1509C3890E805D2EFE;
// System.Collections.Stack
struct Stack_t37723B68CC4FFD95F0F3D06A5D42D7DEE7569643;
// System.Globalization.CompareInfo
struct CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1;
// System.Globalization.TextInfo
struct TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>
struct ConditionalWeakTable_2_t26E8B55E13286793B294EE63AE38FECAE7FDEF98;
// System.String
struct String_t;




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
#ifndef ARRAYLISTDEBUGVIEW_TEFE4C91B363144996F2999C6C49CE20F7033B55B_H
#define ARRAYLISTDEBUGVIEW_TEFE4C91B363144996F2999C6C49CE20F7033B55B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList/ArrayListDebugView
struct  ArrayListDebugView_tEFE4C91B363144996F2999C6C49CE20F7033B55B  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.ArrayList/ArrayListDebugView::arrayList
	ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * ___arrayList_0;

public:
	inline static int32_t get_offset_of_arrayList_0() { return static_cast<int32_t>(offsetof(ArrayListDebugView_tEFE4C91B363144996F2999C6C49CE20F7033B55B, ___arrayList_0)); }
	inline ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * get_arrayList_0() const { return ___arrayList_0; }
	inline ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 ** get_address_of_arrayList_0() { return &___arrayList_0; }
	inline void set_arrayList_0(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * value)
	{
		___arrayList_0 = value;
		Il2CppCodeGenWriteBarrier((&___arrayList_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYLISTDEBUGVIEW_TEFE4C91B363144996F2999C6C49CE20F7033B55B_H
#ifndef ARRAYLISTENUMERATORSIMPLE_T5D7B0FA86AC4B1D493307CB5973DD33C5A64505F_H
#define ARRAYLISTENUMERATORSIMPLE_T5D7B0FA86AC4B1D493307CB5973DD33C5A64505F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList/ArrayListEnumeratorSimple
struct  ArrayListEnumeratorSimple_t5D7B0FA86AC4B1D493307CB5973DD33C5A64505F  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.ArrayList/ArrayListEnumeratorSimple::list
	ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * ___list_0;
	// System.Int32 System.Collections.ArrayList/ArrayListEnumeratorSimple::index
	int32_t ___index_1;
	// System.Int32 System.Collections.ArrayList/ArrayListEnumeratorSimple::version
	int32_t ___version_2;
	// System.Object System.Collections.ArrayList/ArrayListEnumeratorSimple::currentElement
	RuntimeObject * ___currentElement_3;
	// System.Boolean System.Collections.ArrayList/ArrayListEnumeratorSimple::isArrayList
	bool ___isArrayList_4;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ArrayListEnumeratorSimple_t5D7B0FA86AC4B1D493307CB5973DD33C5A64505F, ___list_0)); }
	inline ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * get_list_0() const { return ___list_0; }
	inline ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(ArrayListEnumeratorSimple_t5D7B0FA86AC4B1D493307CB5973DD33C5A64505F, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(ArrayListEnumeratorSimple_t5D7B0FA86AC4B1D493307CB5973DD33C5A64505F, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentElement_3() { return static_cast<int32_t>(offsetof(ArrayListEnumeratorSimple_t5D7B0FA86AC4B1D493307CB5973DD33C5A64505F, ___currentElement_3)); }
	inline RuntimeObject * get_currentElement_3() const { return ___currentElement_3; }
	inline RuntimeObject ** get_address_of_currentElement_3() { return &___currentElement_3; }
	inline void set_currentElement_3(RuntimeObject * value)
	{
		___currentElement_3 = value;
		Il2CppCodeGenWriteBarrier((&___currentElement_3), value);
	}

	inline static int32_t get_offset_of_isArrayList_4() { return static_cast<int32_t>(offsetof(ArrayListEnumeratorSimple_t5D7B0FA86AC4B1D493307CB5973DD33C5A64505F, ___isArrayList_4)); }
	inline bool get_isArrayList_4() const { return ___isArrayList_4; }
	inline bool* get_address_of_isArrayList_4() { return &___isArrayList_4; }
	inline void set_isArrayList_4(bool value)
	{
		___isArrayList_4 = value;
	}
};

struct ArrayListEnumeratorSimple_t5D7B0FA86AC4B1D493307CB5973DD33C5A64505F_StaticFields
{
public:
	// System.Object System.Collections.ArrayList/ArrayListEnumeratorSimple::dummyObject
	RuntimeObject * ___dummyObject_5;

public:
	inline static int32_t get_offset_of_dummyObject_5() { return static_cast<int32_t>(offsetof(ArrayListEnumeratorSimple_t5D7B0FA86AC4B1D493307CB5973DD33C5A64505F_StaticFields, ___dummyObject_5)); }
	inline RuntimeObject * get_dummyObject_5() const { return ___dummyObject_5; }
	inline RuntimeObject ** get_address_of_dummyObject_5() { return &___dummyObject_5; }
	inline void set_dummyObject_5(RuntimeObject * value)
	{
		___dummyObject_5 = value;
		Il2CppCodeGenWriteBarrier((&___dummyObject_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYLISTENUMERATORSIMPLE_T5D7B0FA86AC4B1D493307CB5973DD33C5A64505F_H
#ifndef CASEINSENSITIVECOMPARER_TF9935EB25E69CEF5A3B17CE8D22E2797F23B17BE_H
#define CASEINSENSITIVECOMPARER_TF9935EB25E69CEF5A3B17CE8D22E2797F23B17BE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CaseInsensitiveComparer
struct  CaseInsensitiveComparer_tF9935EB25E69CEF5A3B17CE8D22E2797F23B17BE  : public RuntimeObject
{
public:
	// System.Globalization.CompareInfo System.Collections.CaseInsensitiveComparer::m_compareInfo
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___m_compareInfo_0;

public:
	inline static int32_t get_offset_of_m_compareInfo_0() { return static_cast<int32_t>(offsetof(CaseInsensitiveComparer_tF9935EB25E69CEF5A3B17CE8D22E2797F23B17BE, ___m_compareInfo_0)); }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * get_m_compareInfo_0() const { return ___m_compareInfo_0; }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 ** get_address_of_m_compareInfo_0() { return &___m_compareInfo_0; }
	inline void set_m_compareInfo_0(CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * value)
	{
		___m_compareInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_compareInfo_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASEINSENSITIVECOMPARER_TF9935EB25E69CEF5A3B17CE8D22E2797F23B17BE_H
#ifndef CASEINSENSITIVEHASHCODEPROVIDER_TC6D5564219051252BBC7B49F78CC8173105F0C34_H
#define CASEINSENSITIVEHASHCODEPROVIDER_TC6D5564219051252BBC7B49F78CC8173105F0C34_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CaseInsensitiveHashCodeProvider
struct  CaseInsensitiveHashCodeProvider_tC6D5564219051252BBC7B49F78CC8173105F0C34  : public RuntimeObject
{
public:
	// System.Globalization.TextInfo System.Collections.CaseInsensitiveHashCodeProvider::m_text
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___m_text_0;

public:
	inline static int32_t get_offset_of_m_text_0() { return static_cast<int32_t>(offsetof(CaseInsensitiveHashCodeProvider_tC6D5564219051252BBC7B49F78CC8173105F0C34, ___m_text_0)); }
	inline TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * get_m_text_0() const { return ___m_text_0; }
	inline TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 ** get_address_of_m_text_0() { return &___m_text_0; }
	inline void set_m_text_0(TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * value)
	{
		___m_text_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_text_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASEINSENSITIVEHASHCODEPROVIDER_TC6D5564219051252BBC7B49F78CC8173105F0C34_H
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
#ifndef COMPARER_T02D6323B7C3FB1B7681184587B0E1174F8DF6B3B_H
#define COMPARER_T02D6323B7C3FB1B7681184587B0E1174F8DF6B3B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Comparer
struct  Comparer_t02D6323B7C3FB1B7681184587B0E1174F8DF6B3B  : public RuntimeObject
{
public:
	// System.Globalization.CompareInfo System.Collections.Comparer::m_compareInfo
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___m_compareInfo_0;

public:
	inline static int32_t get_offset_of_m_compareInfo_0() { return static_cast<int32_t>(offsetof(Comparer_t02D6323B7C3FB1B7681184587B0E1174F8DF6B3B, ___m_compareInfo_0)); }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * get_m_compareInfo_0() const { return ___m_compareInfo_0; }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 ** get_address_of_m_compareInfo_0() { return &___m_compareInfo_0; }
	inline void set_m_compareInfo_0(CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * value)
	{
		___m_compareInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_compareInfo_0), value);
	}
};

struct Comparer_t02D6323B7C3FB1B7681184587B0E1174F8DF6B3B_StaticFields
{
public:
	// System.Collections.Comparer System.Collections.Comparer::Default
	Comparer_t02D6323B7C3FB1B7681184587B0E1174F8DF6B3B * ___Default_1;
	// System.Collections.Comparer System.Collections.Comparer::DefaultInvariant
	Comparer_t02D6323B7C3FB1B7681184587B0E1174F8DF6B3B * ___DefaultInvariant_2;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(Comparer_t02D6323B7C3FB1B7681184587B0E1174F8DF6B3B_StaticFields, ___Default_1)); }
	inline Comparer_t02D6323B7C3FB1B7681184587B0E1174F8DF6B3B * get_Default_1() const { return ___Default_1; }
	inline Comparer_t02D6323B7C3FB1B7681184587B0E1174F8DF6B3B ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(Comparer_t02D6323B7C3FB1B7681184587B0E1174F8DF6B3B * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_DefaultInvariant_2() { return static_cast<int32_t>(offsetof(Comparer_t02D6323B7C3FB1B7681184587B0E1174F8DF6B3B_StaticFields, ___DefaultInvariant_2)); }
	inline Comparer_t02D6323B7C3FB1B7681184587B0E1174F8DF6B3B * get_DefaultInvariant_2() const { return ___DefaultInvariant_2; }
	inline Comparer_t02D6323B7C3FB1B7681184587B0E1174F8DF6B3B ** get_address_of_DefaultInvariant_2() { return &___DefaultInvariant_2; }
	inline void set_DefaultInvariant_2(Comparer_t02D6323B7C3FB1B7681184587B0E1174F8DF6B3B * value)
	{
		___DefaultInvariant_2 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultInvariant_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPARER_T02D6323B7C3FB1B7681184587B0E1174F8DF6B3B_H
#ifndef COMPATIBLECOMPARER_TACA057626F5F328A975DF492CC95D78EE8B05F00_H
#define COMPATIBLECOMPARER_TACA057626F5F328A975DF492CC95D78EE8B05F00_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CompatibleComparer
struct  CompatibleComparer_tACA057626F5F328A975DF492CC95D78EE8B05F00  : public RuntimeObject
{
public:
	// System.Collections.IComparer System.Collections.CompatibleComparer::_comparer
	RuntimeObject* ____comparer_0;
	// System.Collections.IHashCodeProvider System.Collections.CompatibleComparer::_hcp
	RuntimeObject* ____hcp_1;

public:
	inline static int32_t get_offset_of__comparer_0() { return static_cast<int32_t>(offsetof(CompatibleComparer_tACA057626F5F328A975DF492CC95D78EE8B05F00, ____comparer_0)); }
	inline RuntimeObject* get__comparer_0() const { return ____comparer_0; }
	inline RuntimeObject** get_address_of__comparer_0() { return &____comparer_0; }
	inline void set__comparer_0(RuntimeObject* value)
	{
		____comparer_0 = value;
		Il2CppCodeGenWriteBarrier((&____comparer_0), value);
	}

	inline static int32_t get_offset_of__hcp_1() { return static_cast<int32_t>(offsetof(CompatibleComparer_tACA057626F5F328A975DF492CC95D78EE8B05F00, ____hcp_1)); }
	inline RuntimeObject* get__hcp_1() const { return ____hcp_1; }
	inline RuntimeObject** get_address_of__hcp_1() { return &____hcp_1; }
	inline void set__hcp_1(RuntimeObject* value)
	{
		____hcp_1 = value;
		Il2CppCodeGenWriteBarrier((&____hcp_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPATIBLECOMPARER_TACA057626F5F328A975DF492CC95D78EE8B05F00_H
#ifndef COLLECTIONEXTENSIONS_T1943508648E4A2A0FBCF65503E3BD7032F003E0A_H
#define COLLECTIONEXTENSIONS_T1943508648E4A2A0FBCF65503E3BD7032F003E0A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.CollectionExtensions
struct  CollectionExtensions_t1943508648E4A2A0FBCF65503E3BD7032F003E0A  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONEXTENSIONS_T1943508648E4A2A0FBCF65503E3BD7032F003E0A_H
#ifndef DICTIONARYHASHHELPERS_TA8FE399EF3E29215C09AA5F9263572B42D4D6D00_H
#define DICTIONARYHASHHELPERS_TA8FE399EF3E29215C09AA5F9263572B42D4D6D00_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.DictionaryHashHelpers
struct  DictionaryHashHelpers_tA8FE399EF3E29215C09AA5F9263572B42D4D6D00  : public RuntimeObject
{
public:

public:
};

struct DictionaryHashHelpers_tA8FE399EF3E29215C09AA5F9263572B42D4D6D00_StaticFields
{
public:
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> System.Collections.Generic.DictionaryHashHelpers::<SerializationInfoTable>k__BackingField
	ConditionalWeakTable_2_t26E8B55E13286793B294EE63AE38FECAE7FDEF98 * ___U3CSerializationInfoTableU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CSerializationInfoTableU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DictionaryHashHelpers_tA8FE399EF3E29215C09AA5F9263572B42D4D6D00_StaticFields, ___U3CSerializationInfoTableU3Ek__BackingField_0)); }
	inline ConditionalWeakTable_2_t26E8B55E13286793B294EE63AE38FECAE7FDEF98 * get_U3CSerializationInfoTableU3Ek__BackingField_0() const { return ___U3CSerializationInfoTableU3Ek__BackingField_0; }
	inline ConditionalWeakTable_2_t26E8B55E13286793B294EE63AE38FECAE7FDEF98 ** get_address_of_U3CSerializationInfoTableU3Ek__BackingField_0() { return &___U3CSerializationInfoTableU3Ek__BackingField_0; }
	inline void set_U3CSerializationInfoTableU3Ek__BackingField_0(ConditionalWeakTable_2_t26E8B55E13286793B294EE63AE38FECAE7FDEF98 * value)
	{
		___U3CSerializationInfoTableU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSerializationInfoTableU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYHASHHELPERS_TA8FE399EF3E29215C09AA5F9263572B42D4D6D00_H
#ifndef EQUALITYCOMPARER_1_T3A6890CC3BA3A4DBC0B7B4A4486D314AB72F2EA5_H
#define EQUALITYCOMPARER_1_T3A6890CC3BA3A4DBC0B7B4A4486D314AB72F2EA5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.EqualityComparer`1<System.Byte>
struct  EqualityComparer_1_t3A6890CC3BA3A4DBC0B7B4A4486D314AB72F2EA5  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t3A6890CC3BA3A4DBC0B7B4A4486D314AB72F2EA5_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t3A6890CC3BA3A4DBC0B7B4A4486D314AB72F2EA5 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t3A6890CC3BA3A4DBC0B7B4A4486D314AB72F2EA5_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_t3A6890CC3BA3A4DBC0B7B4A4486D314AB72F2EA5 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_t3A6890CC3BA3A4DBC0B7B4A4486D314AB72F2EA5 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_t3A6890CC3BA3A4DBC0B7B4A4486D314AB72F2EA5 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___defaultComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EQUALITYCOMPARER_1_T3A6890CC3BA3A4DBC0B7B4A4486D314AB72F2EA5_H
#ifndef EQUALITYCOMPARER_1_TBEFFC6F649A17852373A084880D57CB299084137_H
#define EQUALITYCOMPARER_1_TBEFFC6F649A17852373A084880D57CB299084137_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.EqualityComparer`1<System.String>
struct  EqualityComparer_1_tBEFFC6F649A17852373A084880D57CB299084137  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_tBEFFC6F649A17852373A084880D57CB299084137_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tBEFFC6F649A17852373A084880D57CB299084137 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_tBEFFC6F649A17852373A084880D57CB299084137_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_tBEFFC6F649A17852373A084880D57CB299084137 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_tBEFFC6F649A17852373A084880D57CB299084137 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_tBEFFC6F649A17852373A084880D57CB299084137 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___defaultComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EQUALITYCOMPARER_1_TBEFFC6F649A17852373A084880D57CB299084137_H
#ifndef INTROSPECTIVESORTUTILITIES_T6A205C98525D6E6DD938DC26FE053A91F492BE4D_H
#define INTROSPECTIVESORTUTILITIES_T6A205C98525D6E6DD938DC26FE053A91F492BE4D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.IntrospectiveSortUtilities
struct  IntrospectiveSortUtilities_t6A205C98525D6E6DD938DC26FE053A91F492BE4D  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTROSPECTIVESORTUTILITIES_T6A205C98525D6E6DD938DC26FE053A91F492BE4D_H
#ifndef KEYVALUEPAIR_T123535D547736542503896462AF2C80E752E549F_H
#define KEYVALUEPAIR_T123535D547736542503896462AF2C80E752E549F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair
struct  KeyValuePair_t123535D547736542503896462AF2C80E752E549F  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_T123535D547736542503896462AF2C80E752E549F_H
#ifndef OBJECTEQUALITYCOMPARER_T816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC_H
#define OBJECTEQUALITYCOMPARER_T816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.ObjectEqualityComparer
struct  ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC  : public RuntimeObject
{
public:

public:
};

struct ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC_StaticFields
{
public:
	// System.Collections.Generic.ObjectEqualityComparer System.Collections.Generic.ObjectEqualityComparer::Default
	ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC_StaticFields, ___Default_0)); }
	inline ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC * get_Default_0() const { return ___Default_0; }
	inline ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTEQUALITYCOMPARER_T816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC_H
#ifndef HASHHELPERS_TEB19004A9D7DD7679EA1882AE9B96E117FDF0179_H
#define HASHHELPERS_TEB19004A9D7DD7679EA1882AE9B96E117FDF0179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.HashHelpers
struct  HashHelpers_tEB19004A9D7DD7679EA1882AE9B96E117FDF0179  : public RuntimeObject
{
public:

public:
};

struct HashHelpers_tEB19004A9D7DD7679EA1882AE9B96E117FDF0179_StaticFields
{
public:
	// System.Int32[] System.Collections.HashHelpers::primes
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___primes_0;
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> System.Collections.HashHelpers::s_SerializationInfoTable
	ConditionalWeakTable_2_t26E8B55E13286793B294EE63AE38FECAE7FDEF98 * ___s_SerializationInfoTable_1;

public:
	inline static int32_t get_offset_of_primes_0() { return static_cast<int32_t>(offsetof(HashHelpers_tEB19004A9D7DD7679EA1882AE9B96E117FDF0179_StaticFields, ___primes_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_primes_0() const { return ___primes_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_primes_0() { return &___primes_0; }
	inline void set_primes_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___primes_0 = value;
		Il2CppCodeGenWriteBarrier((&___primes_0), value);
	}

	inline static int32_t get_offset_of_s_SerializationInfoTable_1() { return static_cast<int32_t>(offsetof(HashHelpers_tEB19004A9D7DD7679EA1882AE9B96E117FDF0179_StaticFields, ___s_SerializationInfoTable_1)); }
	inline ConditionalWeakTable_2_t26E8B55E13286793B294EE63AE38FECAE7FDEF98 * get_s_SerializationInfoTable_1() const { return ___s_SerializationInfoTable_1; }
	inline ConditionalWeakTable_2_t26E8B55E13286793B294EE63AE38FECAE7FDEF98 ** get_address_of_s_SerializationInfoTable_1() { return &___s_SerializationInfoTable_1; }
	inline void set_s_SerializationInfoTable_1(ConditionalWeakTable_2_t26E8B55E13286793B294EE63AE38FECAE7FDEF98 * value)
	{
		___s_SerializationInfoTable_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_SerializationInfoTable_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHHELPERS_TEB19004A9D7DD7679EA1882AE9B96E117FDF0179_H
#ifndef HASHTABLEDEBUGVIEW_TFD278E7BCFC46C72422AF1D2E80EADB9F04C5BAD_H
#define HASHTABLEDEBUGVIEW_TFD278E7BCFC46C72422AF1D2E80EADB9F04C5BAD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable/HashtableDebugView
struct  HashtableDebugView_tFD278E7BCFC46C72422AF1D2E80EADB9F04C5BAD  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Hashtable/HashtableDebugView::hashtable
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___hashtable_0;

public:
	inline static int32_t get_offset_of_hashtable_0() { return static_cast<int32_t>(offsetof(HashtableDebugView_tFD278E7BCFC46C72422AF1D2E80EADB9F04C5BAD, ___hashtable_0)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_hashtable_0() const { return ___hashtable_0; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_hashtable_0() { return &___hashtable_0; }
	inline void set_hashtable_0(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___hashtable_0 = value;
		Il2CppCodeGenWriteBarrier((&___hashtable_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHTABLEDEBUGVIEW_TFD278E7BCFC46C72422AF1D2E80EADB9F04C5BAD_H
#ifndef HASHTABLEENUMERATOR_TE5C908D6870E805494E774BF3CEF4919425455E9_H
#define HASHTABLEENUMERATOR_TE5C908D6870E805494E774BF3CEF4919425455E9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable/HashtableEnumerator
struct  HashtableEnumerator_tE5C908D6870E805494E774BF3CEF4919425455E9  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Hashtable/HashtableEnumerator::hashtable
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___hashtable_0;
	// System.Int32 System.Collections.Hashtable/HashtableEnumerator::bucket
	int32_t ___bucket_1;
	// System.Int32 System.Collections.Hashtable/HashtableEnumerator::version
	int32_t ___version_2;
	// System.Boolean System.Collections.Hashtable/HashtableEnumerator::current
	bool ___current_3;
	// System.Int32 System.Collections.Hashtable/HashtableEnumerator::getObjectRetType
	int32_t ___getObjectRetType_4;
	// System.Object System.Collections.Hashtable/HashtableEnumerator::currentKey
	RuntimeObject * ___currentKey_5;
	// System.Object System.Collections.Hashtable/HashtableEnumerator::currentValue
	RuntimeObject * ___currentValue_6;

public:
	inline static int32_t get_offset_of_hashtable_0() { return static_cast<int32_t>(offsetof(HashtableEnumerator_tE5C908D6870E805494E774BF3CEF4919425455E9, ___hashtable_0)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_hashtable_0() const { return ___hashtable_0; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_hashtable_0() { return &___hashtable_0; }
	inline void set_hashtable_0(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___hashtable_0 = value;
		Il2CppCodeGenWriteBarrier((&___hashtable_0), value);
	}

	inline static int32_t get_offset_of_bucket_1() { return static_cast<int32_t>(offsetof(HashtableEnumerator_tE5C908D6870E805494E774BF3CEF4919425455E9, ___bucket_1)); }
	inline int32_t get_bucket_1() const { return ___bucket_1; }
	inline int32_t* get_address_of_bucket_1() { return &___bucket_1; }
	inline void set_bucket_1(int32_t value)
	{
		___bucket_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(HashtableEnumerator_tE5C908D6870E805494E774BF3CEF4919425455E9, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(HashtableEnumerator_tE5C908D6870E805494E774BF3CEF4919425455E9, ___current_3)); }
	inline bool get_current_3() const { return ___current_3; }
	inline bool* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(bool value)
	{
		___current_3 = value;
	}

	inline static int32_t get_offset_of_getObjectRetType_4() { return static_cast<int32_t>(offsetof(HashtableEnumerator_tE5C908D6870E805494E774BF3CEF4919425455E9, ___getObjectRetType_4)); }
	inline int32_t get_getObjectRetType_4() const { return ___getObjectRetType_4; }
	inline int32_t* get_address_of_getObjectRetType_4() { return &___getObjectRetType_4; }
	inline void set_getObjectRetType_4(int32_t value)
	{
		___getObjectRetType_4 = value;
	}

	inline static int32_t get_offset_of_currentKey_5() { return static_cast<int32_t>(offsetof(HashtableEnumerator_tE5C908D6870E805494E774BF3CEF4919425455E9, ___currentKey_5)); }
	inline RuntimeObject * get_currentKey_5() const { return ___currentKey_5; }
	inline RuntimeObject ** get_address_of_currentKey_5() { return &___currentKey_5; }
	inline void set_currentKey_5(RuntimeObject * value)
	{
		___currentKey_5 = value;
		Il2CppCodeGenWriteBarrier((&___currentKey_5), value);
	}

	inline static int32_t get_offset_of_currentValue_6() { return static_cast<int32_t>(offsetof(HashtableEnumerator_tE5C908D6870E805494E774BF3CEF4919425455E9, ___currentValue_6)); }
	inline RuntimeObject * get_currentValue_6() const { return ___currentValue_6; }
	inline RuntimeObject ** get_address_of_currentValue_6() { return &___currentValue_6; }
	inline void set_currentValue_6(RuntimeObject * value)
	{
		___currentValue_6 = value;
		Il2CppCodeGenWriteBarrier((&___currentValue_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHTABLEENUMERATOR_TE5C908D6870E805494E774BF3CEF4919425455E9_H
#ifndef KEYCOLLECTION_TD91D15A31EC3120D546EE76142B497C52F7C78D2_H
#define KEYCOLLECTION_TD91D15A31EC3120D546EE76142B497C52F7C78D2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable/KeyCollection
struct  KeyCollection_tD91D15A31EC3120D546EE76142B497C52F7C78D2  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Hashtable/KeyCollection::_hashtable
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ____hashtable_0;

public:
	inline static int32_t get_offset_of__hashtable_0() { return static_cast<int32_t>(offsetof(KeyCollection_tD91D15A31EC3120D546EE76142B497C52F7C78D2, ____hashtable_0)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get__hashtable_0() const { return ____hashtable_0; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of__hashtable_0() { return &____hashtable_0; }
	inline void set__hashtable_0(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		____hashtable_0 = value;
		Il2CppCodeGenWriteBarrier((&____hashtable_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCOLLECTION_TD91D15A31EC3120D546EE76142B497C52F7C78D2_H
#ifndef VALUECOLLECTION_TB345B5DC94E72D8A66D69930DB4466A86CA93BF6_H
#define VALUECOLLECTION_TB345B5DC94E72D8A66D69930DB4466A86CA93BF6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable/ValueCollection
struct  ValueCollection_tB345B5DC94E72D8A66D69930DB4466A86CA93BF6  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Hashtable/ValueCollection::_hashtable
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ____hashtable_0;

public:
	inline static int32_t get_offset_of__hashtable_0() { return static_cast<int32_t>(offsetof(ValueCollection_tB345B5DC94E72D8A66D69930DB4466A86CA93BF6, ____hashtable_0)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get__hashtable_0() const { return ____hashtable_0; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of__hashtable_0() { return &____hashtable_0; }
	inline void set__hashtable_0(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		____hashtable_0 = value;
		Il2CppCodeGenWriteBarrier((&____hashtable_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALUECOLLECTION_TB345B5DC94E72D8A66D69930DB4466A86CA93BF6_H
#ifndef KEYVALUEPAIRS_T58C6D38D4557E04680306FEFA05058B43E879D29_H
#define KEYVALUEPAIRS_T58C6D38D4557E04680306FEFA05058B43E879D29_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.KeyValuePairs
struct  KeyValuePairs_t58C6D38D4557E04680306FEFA05058B43E879D29  : public RuntimeObject
{
public:
	// System.Object System.Collections.KeyValuePairs::key
	RuntimeObject * ___key_0;
	// System.Object System.Collections.KeyValuePairs::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePairs_t58C6D38D4557E04680306FEFA05058B43E879D29, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePairs_t58C6D38D4557E04680306FEFA05058B43E879D29, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIRS_T58C6D38D4557E04680306FEFA05058B43E879D29_H
#ifndef LOWLEVELCOMPARER_T4DB5A06518FF5F1549DDAFDA5E7B67FDEA4BF7F1_H
#define LOWLEVELCOMPARER_T4DB5A06518FF5F1549DDAFDA5E7B67FDEA4BF7F1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.LowLevelComparer
struct  LowLevelComparer_t4DB5A06518FF5F1549DDAFDA5E7B67FDEA4BF7F1  : public RuntimeObject
{
public:

public:
};

struct LowLevelComparer_t4DB5A06518FF5F1549DDAFDA5E7B67FDEA4BF7F1_StaticFields
{
public:
	// System.Collections.LowLevelComparer System.Collections.LowLevelComparer::Default
	LowLevelComparer_t4DB5A06518FF5F1549DDAFDA5E7B67FDEA4BF7F1 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(LowLevelComparer_t4DB5A06518FF5F1549DDAFDA5E7B67FDEA4BF7F1_StaticFields, ___Default_0)); }
	inline LowLevelComparer_t4DB5A06518FF5F1549DDAFDA5E7B67FDEA4BF7F1 * get_Default_0() const { return ___Default_0; }
	inline LowLevelComparer_t4DB5A06518FF5F1549DDAFDA5E7B67FDEA4BF7F1 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(LowLevelComparer_t4DB5A06518FF5F1549DDAFDA5E7B67FDEA4BF7F1 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOWLEVELCOMPARER_T4DB5A06518FF5F1549DDAFDA5E7B67FDEA4BF7F1_H
#ifndef QUEUE_TEC6DE7527799C2E4224B469ECD0CDD2B25E8E4F3_H
#define QUEUE_TEC6DE7527799C2E4224B469ECD0CDD2B25E8E4F3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Queue
struct  Queue_tEC6DE7527799C2E4224B469ECD0CDD2B25E8E4F3  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.Queue::_array
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____array_0;
	// System.Int32 System.Collections.Queue::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Queue::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Queue::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Queue::_growFactor
	int32_t ____growFactor_4;
	// System.Int32 System.Collections.Queue::_version
	int32_t ____version_5;
	// System.Object System.Collections.Queue::_syncRoot
	RuntimeObject * ____syncRoot_6;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_tEC6DE7527799C2E4224B469ECD0CDD2B25E8E4F3, ____array_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_tEC6DE7527799C2E4224B469ECD0CDD2B25E8E4F3, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_tEC6DE7527799C2E4224B469ECD0CDD2B25E8E4F3, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_tEC6DE7527799C2E4224B469ECD0CDD2B25E8E4F3, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__growFactor_4() { return static_cast<int32_t>(offsetof(Queue_tEC6DE7527799C2E4224B469ECD0CDD2B25E8E4F3, ____growFactor_4)); }
	inline int32_t get__growFactor_4() const { return ____growFactor_4; }
	inline int32_t* get_address_of__growFactor_4() { return &____growFactor_4; }
	inline void set__growFactor_4(int32_t value)
	{
		____growFactor_4 = value;
	}

	inline static int32_t get_offset_of__version_5() { return static_cast<int32_t>(offsetof(Queue_tEC6DE7527799C2E4224B469ECD0CDD2B25E8E4F3, ____version_5)); }
	inline int32_t get__version_5() const { return ____version_5; }
	inline int32_t* get_address_of__version_5() { return &____version_5; }
	inline void set__version_5(int32_t value)
	{
		____version_5 = value;
	}

	inline static int32_t get_offset_of__syncRoot_6() { return static_cast<int32_t>(offsetof(Queue_tEC6DE7527799C2E4224B469ECD0CDD2B25E8E4F3, ____syncRoot_6)); }
	inline RuntimeObject * get__syncRoot_6() const { return ____syncRoot_6; }
	inline RuntimeObject ** get_address_of__syncRoot_6() { return &____syncRoot_6; }
	inline void set__syncRoot_6(RuntimeObject * value)
	{
		____syncRoot_6 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUE_TEC6DE7527799C2E4224B469ECD0CDD2B25E8E4F3_H
#ifndef QUEUEDEBUGVIEW_T5FF125EC597686F20C5494132C038361EFFE6FEA_H
#define QUEUEDEBUGVIEW_T5FF125EC597686F20C5494132C038361EFFE6FEA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Queue/QueueDebugView
struct  QueueDebugView_t5FF125EC597686F20C5494132C038361EFFE6FEA  : public RuntimeObject
{
public:
	// System.Collections.Queue System.Collections.Queue/QueueDebugView::queue
	Queue_tEC6DE7527799C2E4224B469ECD0CDD2B25E8E4F3 * ___queue_0;

public:
	inline static int32_t get_offset_of_queue_0() { return static_cast<int32_t>(offsetof(QueueDebugView_t5FF125EC597686F20C5494132C038361EFFE6FEA, ___queue_0)); }
	inline Queue_tEC6DE7527799C2E4224B469ECD0CDD2B25E8E4F3 * get_queue_0() const { return ___queue_0; }
	inline Queue_tEC6DE7527799C2E4224B469ECD0CDD2B25E8E4F3 ** get_address_of_queue_0() { return &___queue_0; }
	inline void set_queue_0(Queue_tEC6DE7527799C2E4224B469ECD0CDD2B25E8E4F3 * value)
	{
		___queue_0 = value;
		Il2CppCodeGenWriteBarrier((&___queue_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUEDEBUGVIEW_T5FF125EC597686F20C5494132C038361EFFE6FEA_H
#ifndef QUEUEENUMERATOR_T01610B48FE6A96358FDC0C32E2E04352EA2216FA_H
#define QUEUEENUMERATOR_T01610B48FE6A96358FDC0C32E2E04352EA2216FA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Queue/QueueEnumerator
struct  QueueEnumerator_t01610B48FE6A96358FDC0C32E2E04352EA2216FA  : public RuntimeObject
{
public:
	// System.Collections.Queue System.Collections.Queue/QueueEnumerator::_q
	Queue_tEC6DE7527799C2E4224B469ECD0CDD2B25E8E4F3 * ____q_0;
	// System.Int32 System.Collections.Queue/QueueEnumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Queue/QueueEnumerator::_version
	int32_t ____version_2;
	// System.Object System.Collections.Queue/QueueEnumerator::currentElement
	RuntimeObject * ___currentElement_3;

public:
	inline static int32_t get_offset_of__q_0() { return static_cast<int32_t>(offsetof(QueueEnumerator_t01610B48FE6A96358FDC0C32E2E04352EA2216FA, ____q_0)); }
	inline Queue_tEC6DE7527799C2E4224B469ECD0CDD2B25E8E4F3 * get__q_0() const { return ____q_0; }
	inline Queue_tEC6DE7527799C2E4224B469ECD0CDD2B25E8E4F3 ** get_address_of__q_0() { return &____q_0; }
	inline void set__q_0(Queue_tEC6DE7527799C2E4224B469ECD0CDD2B25E8E4F3 * value)
	{
		____q_0 = value;
		Il2CppCodeGenWriteBarrier((&____q_0), value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(QueueEnumerator_t01610B48FE6A96358FDC0C32E2E04352EA2216FA, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(QueueEnumerator_t01610B48FE6A96358FDC0C32E2E04352EA2216FA, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of_currentElement_3() { return static_cast<int32_t>(offsetof(QueueEnumerator_t01610B48FE6A96358FDC0C32E2E04352EA2216FA, ___currentElement_3)); }
	inline RuntimeObject * get_currentElement_3() const { return ___currentElement_3; }
	inline RuntimeObject ** get_address_of_currentElement_3() { return &___currentElement_3; }
	inline void set_currentElement_3(RuntimeObject * value)
	{
		___currentElement_3 = value;
		Il2CppCodeGenWriteBarrier((&___currentElement_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUEENUMERATOR_T01610B48FE6A96358FDC0C32E2E04352EA2216FA_H
#ifndef SORTEDLIST_TC8B7CDE75652EC657C510034F127B9DFDE16BF4E_H
#define SORTEDLIST_TC8B7CDE75652EC657C510034F127B9DFDE16BF4E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList
struct  SortedList_tC8B7CDE75652EC657C510034F127B9DFDE16BF4E  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.SortedList::keys
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___keys_0;
	// System.Object[] System.Collections.SortedList::values
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___values_1;
	// System.Int32 System.Collections.SortedList::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.SortedList::version
	int32_t ___version_3;
	// System.Collections.IComparer System.Collections.SortedList::comparer
	RuntimeObject* ___comparer_4;
	// System.Collections.SortedList/ValueList System.Collections.SortedList::valueList
	ValueList_t1BBC0BAD9C26EB4899C4AB1509C3890E805D2EFE * ___valueList_5;
	// System.Object System.Collections.SortedList::_syncRoot
	RuntimeObject * ____syncRoot_6;

public:
	inline static int32_t get_offset_of_keys_0() { return static_cast<int32_t>(offsetof(SortedList_tC8B7CDE75652EC657C510034F127B9DFDE16BF4E, ___keys_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_keys_0() const { return ___keys_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_keys_0() { return &___keys_0; }
	inline void set_keys_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___keys_0 = value;
		Il2CppCodeGenWriteBarrier((&___keys_0), value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(SortedList_tC8B7CDE75652EC657C510034F127B9DFDE16BF4E, ___values_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_values_1() const { return ___values_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier((&___values_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(SortedList_tC8B7CDE75652EC657C510034F127B9DFDE16BF4E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(SortedList_tC8B7CDE75652EC657C510034F127B9DFDE16BF4E, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_comparer_4() { return static_cast<int32_t>(offsetof(SortedList_tC8B7CDE75652EC657C510034F127B9DFDE16BF4E, ___comparer_4)); }
	inline RuntimeObject* get_comparer_4() const { return ___comparer_4; }
	inline RuntimeObject** get_address_of_comparer_4() { return &___comparer_4; }
	inline void set_comparer_4(RuntimeObject* value)
	{
		___comparer_4 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_4), value);
	}

	inline static int32_t get_offset_of_valueList_5() { return static_cast<int32_t>(offsetof(SortedList_tC8B7CDE75652EC657C510034F127B9DFDE16BF4E, ___valueList_5)); }
	inline ValueList_t1BBC0BAD9C26EB4899C4AB1509C3890E805D2EFE * get_valueList_5() const { return ___valueList_5; }
	inline ValueList_t1BBC0BAD9C26EB4899C4AB1509C3890E805D2EFE ** get_address_of_valueList_5() { return &___valueList_5; }
	inline void set_valueList_5(ValueList_t1BBC0BAD9C26EB4899C4AB1509C3890E805D2EFE * value)
	{
		___valueList_5 = value;
		Il2CppCodeGenWriteBarrier((&___valueList_5), value);
	}

	inline static int32_t get_offset_of__syncRoot_6() { return static_cast<int32_t>(offsetof(SortedList_tC8B7CDE75652EC657C510034F127B9DFDE16BF4E, ____syncRoot_6)); }
	inline RuntimeObject * get__syncRoot_6() const { return ____syncRoot_6; }
	inline RuntimeObject ** get_address_of__syncRoot_6() { return &____syncRoot_6; }
	inline void set__syncRoot_6(RuntimeObject * value)
	{
		____syncRoot_6 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_6), value);
	}
};

struct SortedList_tC8B7CDE75652EC657C510034F127B9DFDE16BF4E_StaticFields
{
public:
	// System.Object[] System.Collections.SortedList::emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___emptyArray_7;

public:
	inline static int32_t get_offset_of_emptyArray_7() { return static_cast<int32_t>(offsetof(SortedList_tC8B7CDE75652EC657C510034F127B9DFDE16BF4E_StaticFields, ___emptyArray_7)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_emptyArray_7() const { return ___emptyArray_7; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_emptyArray_7() { return &___emptyArray_7; }
	inline void set_emptyArray_7(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___emptyArray_7 = value;
		Il2CppCodeGenWriteBarrier((&___emptyArray_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SORTEDLIST_TC8B7CDE75652EC657C510034F127B9DFDE16BF4E_H
#ifndef SORTEDLISTDEBUGVIEW_T685B663AA79F56A8B544B3E77D59D21B816440E7_H
#define SORTEDLISTDEBUGVIEW_T685B663AA79F56A8B544B3E77D59D21B816440E7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList/SortedListDebugView
struct  SortedListDebugView_t685B663AA79F56A8B544B3E77D59D21B816440E7  : public RuntimeObject
{
public:
	// System.Collections.SortedList System.Collections.SortedList/SortedListDebugView::sortedList
	SortedList_tC8B7CDE75652EC657C510034F127B9DFDE16BF4E * ___sortedList_0;

public:
	inline static int32_t get_offset_of_sortedList_0() { return static_cast<int32_t>(offsetof(SortedListDebugView_t685B663AA79F56A8B544B3E77D59D21B816440E7, ___sortedList_0)); }
	inline SortedList_tC8B7CDE75652EC657C510034F127B9DFDE16BF4E * get_sortedList_0() const { return ___sortedList_0; }
	inline SortedList_tC8B7CDE75652EC657C510034F127B9DFDE16BF4E ** get_address_of_sortedList_0() { return &___sortedList_0; }
	inline void set_sortedList_0(SortedList_tC8B7CDE75652EC657C510034F127B9DFDE16BF4E * value)
	{
		___sortedList_0 = value;
		Il2CppCodeGenWriteBarrier((&___sortedList_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SORTEDLISTDEBUGVIEW_T685B663AA79F56A8B544B3E77D59D21B816440E7_H
#ifndef SORTEDLISTENUMERATOR_T0B3C08255F72412FF007E1CEBA45EEFAED17443E_H
#define SORTEDLISTENUMERATOR_T0B3C08255F72412FF007E1CEBA45EEFAED17443E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList/SortedListEnumerator
struct  SortedListEnumerator_t0B3C08255F72412FF007E1CEBA45EEFAED17443E  : public RuntimeObject
{
public:
	// System.Collections.SortedList System.Collections.SortedList/SortedListEnumerator::sortedList
	SortedList_tC8B7CDE75652EC657C510034F127B9DFDE16BF4E * ___sortedList_0;
	// System.Object System.Collections.SortedList/SortedListEnumerator::key
	RuntimeObject * ___key_1;
	// System.Object System.Collections.SortedList/SortedListEnumerator::value
	RuntimeObject * ___value_2;
	// System.Int32 System.Collections.SortedList/SortedListEnumerator::index
	int32_t ___index_3;
	// System.Int32 System.Collections.SortedList/SortedListEnumerator::startIndex
	int32_t ___startIndex_4;
	// System.Int32 System.Collections.SortedList/SortedListEnumerator::endIndex
	int32_t ___endIndex_5;
	// System.Int32 System.Collections.SortedList/SortedListEnumerator::version
	int32_t ___version_6;
	// System.Boolean System.Collections.SortedList/SortedListEnumerator::current
	bool ___current_7;
	// System.Int32 System.Collections.SortedList/SortedListEnumerator::getObjectRetType
	int32_t ___getObjectRetType_8;

public:
	inline static int32_t get_offset_of_sortedList_0() { return static_cast<int32_t>(offsetof(SortedListEnumerator_t0B3C08255F72412FF007E1CEBA45EEFAED17443E, ___sortedList_0)); }
	inline SortedList_tC8B7CDE75652EC657C510034F127B9DFDE16BF4E * get_sortedList_0() const { return ___sortedList_0; }
	inline SortedList_tC8B7CDE75652EC657C510034F127B9DFDE16BF4E ** get_address_of_sortedList_0() { return &___sortedList_0; }
	inline void set_sortedList_0(SortedList_tC8B7CDE75652EC657C510034F127B9DFDE16BF4E * value)
	{
		___sortedList_0 = value;
		Il2CppCodeGenWriteBarrier((&___sortedList_0), value);
	}

	inline static int32_t get_offset_of_key_1() { return static_cast<int32_t>(offsetof(SortedListEnumerator_t0B3C08255F72412FF007E1CEBA45EEFAED17443E, ___key_1)); }
	inline RuntimeObject * get_key_1() const { return ___key_1; }
	inline RuntimeObject ** get_address_of_key_1() { return &___key_1; }
	inline void set_key_1(RuntimeObject * value)
	{
		___key_1 = value;
		Il2CppCodeGenWriteBarrier((&___key_1), value);
	}

	inline static int32_t get_offset_of_value_2() { return static_cast<int32_t>(offsetof(SortedListEnumerator_t0B3C08255F72412FF007E1CEBA45EEFAED17443E, ___value_2)); }
	inline RuntimeObject * get_value_2() const { return ___value_2; }
	inline RuntimeObject ** get_address_of_value_2() { return &___value_2; }
	inline void set_value_2(RuntimeObject * value)
	{
		___value_2 = value;
		Il2CppCodeGenWriteBarrier((&___value_2), value);
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(SortedListEnumerator_t0B3C08255F72412FF007E1CEBA45EEFAED17443E, ___index_3)); }
	inline int32_t get_index_3() const { return ___index_3; }
	inline int32_t* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(int32_t value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_startIndex_4() { return static_cast<int32_t>(offsetof(SortedListEnumerator_t0B3C08255F72412FF007E1CEBA45EEFAED17443E, ___startIndex_4)); }
	inline int32_t get_startIndex_4() const { return ___startIndex_4; }
	inline int32_t* get_address_of_startIndex_4() { return &___startIndex_4; }
	inline void set_startIndex_4(int32_t value)
	{
		___startIndex_4 = value;
	}

	inline static int32_t get_offset_of_endIndex_5() { return static_cast<int32_t>(offsetof(SortedListEnumerator_t0B3C08255F72412FF007E1CEBA45EEFAED17443E, ___endIndex_5)); }
	inline int32_t get_endIndex_5() const { return ___endIndex_5; }
	inline int32_t* get_address_of_endIndex_5() { return &___endIndex_5; }
	inline void set_endIndex_5(int32_t value)
	{
		___endIndex_5 = value;
	}

	inline static int32_t get_offset_of_version_6() { return static_cast<int32_t>(offsetof(SortedListEnumerator_t0B3C08255F72412FF007E1CEBA45EEFAED17443E, ___version_6)); }
	inline int32_t get_version_6() const { return ___version_6; }
	inline int32_t* get_address_of_version_6() { return &___version_6; }
	inline void set_version_6(int32_t value)
	{
		___version_6 = value;
	}

	inline static int32_t get_offset_of_current_7() { return static_cast<int32_t>(offsetof(SortedListEnumerator_t0B3C08255F72412FF007E1CEBA45EEFAED17443E, ___current_7)); }
	inline bool get_current_7() const { return ___current_7; }
	inline bool* get_address_of_current_7() { return &___current_7; }
	inline void set_current_7(bool value)
	{
		___current_7 = value;
	}

	inline static int32_t get_offset_of_getObjectRetType_8() { return static_cast<int32_t>(offsetof(SortedListEnumerator_t0B3C08255F72412FF007E1CEBA45EEFAED17443E, ___getObjectRetType_8)); }
	inline int32_t get_getObjectRetType_8() const { return ___getObjectRetType_8; }
	inline int32_t* get_address_of_getObjectRetType_8() { return &___getObjectRetType_8; }
	inline void set_getObjectRetType_8(int32_t value)
	{
		___getObjectRetType_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SORTEDLISTENUMERATOR_T0B3C08255F72412FF007E1CEBA45EEFAED17443E_H
#ifndef VALUELIST_T1BBC0BAD9C26EB4899C4AB1509C3890E805D2EFE_H
#define VALUELIST_T1BBC0BAD9C26EB4899C4AB1509C3890E805D2EFE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList/ValueList
struct  ValueList_t1BBC0BAD9C26EB4899C4AB1509C3890E805D2EFE  : public RuntimeObject
{
public:
	// System.Collections.SortedList System.Collections.SortedList/ValueList::sortedList
	SortedList_tC8B7CDE75652EC657C510034F127B9DFDE16BF4E * ___sortedList_0;

public:
	inline static int32_t get_offset_of_sortedList_0() { return static_cast<int32_t>(offsetof(ValueList_t1BBC0BAD9C26EB4899C4AB1509C3890E805D2EFE, ___sortedList_0)); }
	inline SortedList_tC8B7CDE75652EC657C510034F127B9DFDE16BF4E * get_sortedList_0() const { return ___sortedList_0; }
	inline SortedList_tC8B7CDE75652EC657C510034F127B9DFDE16BF4E ** get_address_of_sortedList_0() { return &___sortedList_0; }
	inline void set_sortedList_0(SortedList_tC8B7CDE75652EC657C510034F127B9DFDE16BF4E * value)
	{
		___sortedList_0 = value;
		Il2CppCodeGenWriteBarrier((&___sortedList_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALUELIST_T1BBC0BAD9C26EB4899C4AB1509C3890E805D2EFE_H
#ifndef STACK_T37723B68CC4FFD95F0F3D06A5D42D7DEE7569643_H
#define STACK_T37723B68CC4FFD95F0F3D06A5D42D7DEE7569643_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Stack
struct  Stack_t37723B68CC4FFD95F0F3D06A5D42D7DEE7569643  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.Stack::_array
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____array_0;
	// System.Int32 System.Collections.Stack::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Stack::_version
	int32_t ____version_2;
	// System.Object System.Collections.Stack::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_t37723B68CC4FFD95F0F3D06A5D42D7DEE7569643, ____array_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_t37723B68CC4FFD95F0F3D06A5D42D7DEE7569643, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_t37723B68CC4FFD95F0F3D06A5D42D7DEE7569643, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_t37723B68CC4FFD95F0F3D06A5D42D7DEE7569643, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACK_T37723B68CC4FFD95F0F3D06A5D42D7DEE7569643_H
#ifndef STACKDEBUGVIEW_TE0C0C7F6AD6752160144359775846DFDDD36CB2E_H
#define STACKDEBUGVIEW_TE0C0C7F6AD6752160144359775846DFDDD36CB2E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Stack/StackDebugView
struct  StackDebugView_tE0C0C7F6AD6752160144359775846DFDDD36CB2E  : public RuntimeObject
{
public:
	// System.Collections.Stack System.Collections.Stack/StackDebugView::stack
	Stack_t37723B68CC4FFD95F0F3D06A5D42D7DEE7569643 * ___stack_0;

public:
	inline static int32_t get_offset_of_stack_0() { return static_cast<int32_t>(offsetof(StackDebugView_tE0C0C7F6AD6752160144359775846DFDDD36CB2E, ___stack_0)); }
	inline Stack_t37723B68CC4FFD95F0F3D06A5D42D7DEE7569643 * get_stack_0() const { return ___stack_0; }
	inline Stack_t37723B68CC4FFD95F0F3D06A5D42D7DEE7569643 ** get_address_of_stack_0() { return &___stack_0; }
	inline void set_stack_0(Stack_t37723B68CC4FFD95F0F3D06A5D42D7DEE7569643 * value)
	{
		___stack_0 = value;
		Il2CppCodeGenWriteBarrier((&___stack_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKDEBUGVIEW_TE0C0C7F6AD6752160144359775846DFDDD36CB2E_H
#ifndef STACKENUMERATOR_TAD5D58C2B92BF36AB7BEDF4405635CB160515DDA_H
#define STACKENUMERATOR_TAD5D58C2B92BF36AB7BEDF4405635CB160515DDA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Stack/StackEnumerator
struct  StackEnumerator_tAD5D58C2B92BF36AB7BEDF4405635CB160515DDA  : public RuntimeObject
{
public:
	// System.Collections.Stack System.Collections.Stack/StackEnumerator::_stack
	Stack_t37723B68CC4FFD95F0F3D06A5D42D7DEE7569643 * ____stack_0;
	// System.Int32 System.Collections.Stack/StackEnumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Stack/StackEnumerator::_version
	int32_t ____version_2;
	// System.Object System.Collections.Stack/StackEnumerator::currentElement
	RuntimeObject * ___currentElement_3;

public:
	inline static int32_t get_offset_of__stack_0() { return static_cast<int32_t>(offsetof(StackEnumerator_tAD5D58C2B92BF36AB7BEDF4405635CB160515DDA, ____stack_0)); }
	inline Stack_t37723B68CC4FFD95F0F3D06A5D42D7DEE7569643 * get__stack_0() const { return ____stack_0; }
	inline Stack_t37723B68CC4FFD95F0F3D06A5D42D7DEE7569643 ** get_address_of__stack_0() { return &____stack_0; }
	inline void set__stack_0(Stack_t37723B68CC4FFD95F0F3D06A5D42D7DEE7569643 * value)
	{
		____stack_0 = value;
		Il2CppCodeGenWriteBarrier((&____stack_0), value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(StackEnumerator_tAD5D58C2B92BF36AB7BEDF4405635CB160515DDA, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(StackEnumerator_tAD5D58C2B92BF36AB7BEDF4405635CB160515DDA, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of_currentElement_3() { return static_cast<int32_t>(offsetof(StackEnumerator_tAD5D58C2B92BF36AB7BEDF4405635CB160515DDA, ___currentElement_3)); }
	inline RuntimeObject * get_currentElement_3() const { return ___currentElement_3; }
	inline RuntimeObject ** get_address_of_currentElement_3() { return &___currentElement_3; }
	inline void set_currentElement_3(RuntimeObject * value)
	{
		___currentElement_3 = value;
		Il2CppCodeGenWriteBarrier((&___currentElement_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKENUMERATOR_TAD5D58C2B92BF36AB7BEDF4405635CB160515DDA_H
#ifndef EVENTSOURCE_T263F509672F3C6747C5BA393F20E2717B7A981EB_H
#define EVENTSOURCE_T263F509672F3C6747C5BA393F20E2717B7A981EB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EventSource
struct  EventSource_t263F509672F3C6747C5BA393F20E2717B7A981EB  : public RuntimeObject
{
public:
	// System.String System.Diagnostics.Tracing.EventSource::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(EventSource_t263F509672F3C6747C5BA393F20E2717B7A981EB, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTSOURCE_T263F509672F3C6747C5BA393F20E2717B7A981EB_H
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
#ifndef READONLYARRAYLIST_T7F87262D6CAA9479072FF74EC5F707537EC9EA96_H
#define READONLYARRAYLIST_T7F87262D6CAA9479072FF74EC5F707537EC9EA96_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList/ReadOnlyArrayList
struct  ReadOnlyArrayList_t7F87262D6CAA9479072FF74EC5F707537EC9EA96  : public ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4
{
public:
	// System.Collections.ArrayList System.Collections.ArrayList/ReadOnlyArrayList::_list
	ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * ____list_5;

public:
	inline static int32_t get_offset_of__list_5() { return static_cast<int32_t>(offsetof(ReadOnlyArrayList_t7F87262D6CAA9479072FF74EC5F707537EC9EA96, ____list_5)); }
	inline ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * get__list_5() const { return ____list_5; }
	inline ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 ** get_address_of__list_5() { return &____list_5; }
	inline void set__list_5(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * value)
	{
		____list_5 = value;
		Il2CppCodeGenWriteBarrier((&____list_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYARRAYLIST_T7F87262D6CAA9479072FF74EC5F707537EC9EA96_H
#ifndef CDSCOLLECTIONETWBCLPROVIDER_TE1A8B27D2BFB7E4D066D71945665EEB9E870C851_H
#define CDSCOLLECTIONETWBCLPROVIDER_TE1A8B27D2BFB7E4D066D71945665EEB9E870C851_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Concurrent.CDSCollectionETWBCLProvider
struct  CDSCollectionETWBCLProvider_tE1A8B27D2BFB7E4D066D71945665EEB9E870C851  : public EventSource_t263F509672F3C6747C5BA393F20E2717B7A981EB
{
public:

public:
};

struct CDSCollectionETWBCLProvider_tE1A8B27D2BFB7E4D066D71945665EEB9E870C851_StaticFields
{
public:
	// System.Collections.Concurrent.CDSCollectionETWBCLProvider System.Collections.Concurrent.CDSCollectionETWBCLProvider::Log
	CDSCollectionETWBCLProvider_tE1A8B27D2BFB7E4D066D71945665EEB9E870C851 * ___Log_1;

public:
	inline static int32_t get_offset_of_Log_1() { return static_cast<int32_t>(offsetof(CDSCollectionETWBCLProvider_tE1A8B27D2BFB7E4D066D71945665EEB9E870C851_StaticFields, ___Log_1)); }
	inline CDSCollectionETWBCLProvider_tE1A8B27D2BFB7E4D066D71945665EEB9E870C851 * get_Log_1() const { return ___Log_1; }
	inline CDSCollectionETWBCLProvider_tE1A8B27D2BFB7E4D066D71945665EEB9E870C851 ** get_address_of_Log_1() { return &___Log_1; }
	inline void set_Log_1(CDSCollectionETWBCLProvider_tE1A8B27D2BFB7E4D066D71945665EEB9E870C851 * value)
	{
		___Log_1 = value;
		Il2CppCodeGenWriteBarrier((&___Log_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CDSCOLLECTIONETWBCLPROVIDER_TE1A8B27D2BFB7E4D066D71945665EEB9E870C851_H
#ifndef DICTIONARYENTRY_TB5348A26B94274FCC1DD77185BD5946E283B11A4_H
#define DICTIONARYENTRY_TB5348A26B94274FCC1DD77185BD5946E283B11A4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.DictionaryEntry
struct  DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4 
{
public:
	// System.Object System.Collections.DictionaryEntry::_key
	RuntimeObject * ____key_0;
	// System.Object System.Collections.DictionaryEntry::_value
	RuntimeObject * ____value_1;

public:
	inline static int32_t get_offset_of__key_0() { return static_cast<int32_t>(offsetof(DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4, ____key_0)); }
	inline RuntimeObject * get__key_0() const { return ____key_0; }
	inline RuntimeObject ** get_address_of__key_0() { return &____key_0; }
	inline void set__key_0(RuntimeObject * value)
	{
		____key_0 = value;
		Il2CppCodeGenWriteBarrier((&____key_0), value);
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4, ____value_1)); }
	inline RuntimeObject * get__value_1() const { return ____value_1; }
	inline RuntimeObject ** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(RuntimeObject * value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((&____value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4_marshaled_pinvoke
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
// Native definition for COM marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4_marshaled_com
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
#endif // DICTIONARYENTRY_TB5348A26B94274FCC1DD77185BD5946E283B11A4_H
#ifndef BYTEEQUALITYCOMPARER_T45A85C063C30D3CDABEAD21C8CDF353E3EE55B8B_H
#define BYTEEQUALITYCOMPARER_T45A85C063C30D3CDABEAD21C8CDF353E3EE55B8B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.ByteEqualityComparer
struct  ByteEqualityComparer_t45A85C063C30D3CDABEAD21C8CDF353E3EE55B8B  : public EqualityComparer_1_t3A6890CC3BA3A4DBC0B7B4A4486D314AB72F2EA5
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTEEQUALITYCOMPARER_T45A85C063C30D3CDABEAD21C8CDF353E3EE55B8B_H
#ifndef INTERNALSTRINGCOMPARER_TCD150130A3DB4C80186B5D8145B910B33496D4CD_H
#define INTERNALSTRINGCOMPARER_TCD150130A3DB4C80186B5D8145B910B33496D4CD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.InternalStringComparer
struct  InternalStringComparer_tCD150130A3DB4C80186B5D8145B910B33496D4CD  : public EqualityComparer_1_tBEFFC6F649A17852373A084880D57CB299084137
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALSTRINGCOMPARER_TCD150130A3DB4C80186B5D8145B910B33496D4CD_H
#ifndef NONRANDOMIZEDSTRINGEQUALITYCOMPARER_T92C20503D9C5060A557792ABCCC06EF2DD77E5D9_H
#define NONRANDOMIZEDSTRINGEQUALITYCOMPARER_T92C20503D9C5060A557792ABCCC06EF2DD77E5D9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.NonRandomizedStringEqualityComparer
struct  NonRandomizedStringEqualityComparer_t92C20503D9C5060A557792ABCCC06EF2DD77E5D9  : public EqualityComparer_1_tBEFFC6F649A17852373A084880D57CB299084137
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NONRANDOMIZEDSTRINGEQUALITYCOMPARER_T92C20503D9C5060A557792ABCCC06EF2DD77E5D9_H
#ifndef BUCKET_T1C848488DF65838689F7773D46F9E7E8C881B083_H
#define BUCKET_T1C848488DF65838689F7773D46F9E7E8C881B083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable/bucket
struct  bucket_t1C848488DF65838689F7773D46F9E7E8C881B083 
{
public:
	// System.Object System.Collections.Hashtable/bucket::key
	RuntimeObject * ___key_0;
	// System.Object System.Collections.Hashtable/bucket::val
	RuntimeObject * ___val_1;
	// System.Int32 System.Collections.Hashtable/bucket::hash_coll
	int32_t ___hash_coll_2;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(bucket_t1C848488DF65838689F7773D46F9E7E8C881B083, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_val_1() { return static_cast<int32_t>(offsetof(bucket_t1C848488DF65838689F7773D46F9E7E8C881B083, ___val_1)); }
	inline RuntimeObject * get_val_1() const { return ___val_1; }
	inline RuntimeObject ** get_address_of_val_1() { return &___val_1; }
	inline void set_val_1(RuntimeObject * value)
	{
		___val_1 = value;
		Il2CppCodeGenWriteBarrier((&___val_1), value);
	}

	inline static int32_t get_offset_of_hash_coll_2() { return static_cast<int32_t>(offsetof(bucket_t1C848488DF65838689F7773D46F9E7E8C881B083, ___hash_coll_2)); }
	inline int32_t get_hash_coll_2() const { return ___hash_coll_2; }
	inline int32_t* get_address_of_hash_coll_2() { return &___hash_coll_2; }
	inline void set_hash_coll_2(int32_t value)
	{
		___hash_coll_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Collections.Hashtable/bucket
struct bucket_t1C848488DF65838689F7773D46F9E7E8C881B083_marshaled_pinvoke
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___val_1;
	int32_t ___hash_coll_2;
};
// Native definition for COM marshalling of System.Collections.Hashtable/bucket
struct bucket_t1C848488DF65838689F7773D46F9E7E8C881B083_marshaled_com
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___val_1;
	int32_t ___hash_coll_2;
};
#endif // BUCKET_T1C848488DF65838689F7773D46F9E7E8C881B083_H
#ifndef SYNCSORTEDLIST_TB44BB16CB6BCCA12B85A512D39EAF980ED97DD78_H
#define SYNCSORTEDLIST_TB44BB16CB6BCCA12B85A512D39EAF980ED97DD78_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList/SyncSortedList
struct  SyncSortedList_tB44BB16CB6BCCA12B85A512D39EAF980ED97DD78  : public SortedList_tC8B7CDE75652EC657C510034F127B9DFDE16BF4E
{
public:
	// System.Collections.SortedList System.Collections.SortedList/SyncSortedList::_list
	SortedList_tC8B7CDE75652EC657C510034F127B9DFDE16BF4E * ____list_8;
	// System.Object System.Collections.SortedList/SyncSortedList::_root
	RuntimeObject * ____root_9;

public:
	inline static int32_t get_offset_of__list_8() { return static_cast<int32_t>(offsetof(SyncSortedList_tB44BB16CB6BCCA12B85A512D39EAF980ED97DD78, ____list_8)); }
	inline SortedList_tC8B7CDE75652EC657C510034F127B9DFDE16BF4E * get__list_8() const { return ____list_8; }
	inline SortedList_tC8B7CDE75652EC657C510034F127B9DFDE16BF4E ** get_address_of__list_8() { return &____list_8; }
	inline void set__list_8(SortedList_tC8B7CDE75652EC657C510034F127B9DFDE16BF4E * value)
	{
		____list_8 = value;
		Il2CppCodeGenWriteBarrier((&____list_8), value);
	}

	inline static int32_t get_offset_of__root_9() { return static_cast<int32_t>(offsetof(SyncSortedList_tB44BB16CB6BCCA12B85A512D39EAF980ED97DD78, ____root_9)); }
	inline RuntimeObject * get__root_9() const { return ____root_9; }
	inline RuntimeObject ** get_address_of__root_9() { return &____root_9; }
	inline void set__root_9(RuntimeObject * value)
	{
		____root_9 = value;
		Il2CppCodeGenWriteBarrier((&____root_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCSORTEDLIST_TB44BB16CB6BCCA12B85A512D39EAF980ED97DD78_H
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
#ifndef INSERTIONBEHAVIOR_TDE709AD9061AA205654E57F719D37F00F7A3E211_H
#define INSERTIONBEHAVIOR_TDE709AD9061AA205654E57F719D37F00F7A3E211_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.InsertionBehavior
struct  InsertionBehavior_tDE709AD9061AA205654E57F719D37F00F7A3E211 
{
public:
	// System.Byte System.Collections.Generic.InsertionBehavior::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InsertionBehavior_tDE709AD9061AA205654E57F719D37F00F7A3E211, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSERTIONBEHAVIOR_TDE709AD9061AA205654E57F719D37F00F7A3E211_H
#ifndef HASHTABLE_T978F65B8006C8F5504B286526AEC6608FF983FC9_H
#define HASHTABLE_T978F65B8006C8F5504B286526AEC6608FF983FC9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable
struct  Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9  : public RuntimeObject
{
public:
	// System.Collections.Hashtable/bucket[] System.Collections.Hashtable::buckets
	bucketU5BU5D_t6FF2C2C4B21F2206885CD19A78F68B874C8DC84A* ___buckets_0;
	// System.Int32 System.Collections.Hashtable::count
	int32_t ___count_1;
	// System.Int32 System.Collections.Hashtable::occupancy
	int32_t ___occupancy_2;
	// System.Int32 System.Collections.Hashtable::loadsize
	int32_t ___loadsize_3;
	// System.Single System.Collections.Hashtable::loadFactor
	float ___loadFactor_4;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::version
	int32_t ___version_5;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::isWriterInProgress
	bool ___isWriterInProgress_6;
	// System.Collections.ICollection System.Collections.Hashtable::keys
	RuntimeObject* ___keys_7;
	// System.Collections.ICollection System.Collections.Hashtable::values
	RuntimeObject* ___values_8;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::_keycomparer
	RuntimeObject* ____keycomparer_9;
	// System.Object System.Collections.Hashtable::_syncRoot
	RuntimeObject * ____syncRoot_10;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9, ___buckets_0)); }
	inline bucketU5BU5D_t6FF2C2C4B21F2206885CD19A78F68B874C8DC84A* get_buckets_0() const { return ___buckets_0; }
	inline bucketU5BU5D_t6FF2C2C4B21F2206885CD19A78F68B874C8DC84A** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(bucketU5BU5D_t6FF2C2C4B21F2206885CD19A78F68B874C8DC84A* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}

	inline static int32_t get_offset_of_occupancy_2() { return static_cast<int32_t>(offsetof(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9, ___occupancy_2)); }
	inline int32_t get_occupancy_2() const { return ___occupancy_2; }
	inline int32_t* get_address_of_occupancy_2() { return &___occupancy_2; }
	inline void set_occupancy_2(int32_t value)
	{
		___occupancy_2 = value;
	}

	inline static int32_t get_offset_of_loadsize_3() { return static_cast<int32_t>(offsetof(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9, ___loadsize_3)); }
	inline int32_t get_loadsize_3() const { return ___loadsize_3; }
	inline int32_t* get_address_of_loadsize_3() { return &___loadsize_3; }
	inline void set_loadsize_3(int32_t value)
	{
		___loadsize_3 = value;
	}

	inline static int32_t get_offset_of_loadFactor_4() { return static_cast<int32_t>(offsetof(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9, ___loadFactor_4)); }
	inline float get_loadFactor_4() const { return ___loadFactor_4; }
	inline float* get_address_of_loadFactor_4() { return &___loadFactor_4; }
	inline void set_loadFactor_4(float value)
	{
		___loadFactor_4 = value;
	}

	inline static int32_t get_offset_of_version_5() { return static_cast<int32_t>(offsetof(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9, ___version_5)); }
	inline int32_t get_version_5() const { return ___version_5; }
	inline int32_t* get_address_of_version_5() { return &___version_5; }
	inline void set_version_5(int32_t value)
	{
		___version_5 = value;
	}

	inline static int32_t get_offset_of_isWriterInProgress_6() { return static_cast<int32_t>(offsetof(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9, ___isWriterInProgress_6)); }
	inline bool get_isWriterInProgress_6() const { return ___isWriterInProgress_6; }
	inline bool* get_address_of_isWriterInProgress_6() { return &___isWriterInProgress_6; }
	inline void set_isWriterInProgress_6(bool value)
	{
		___isWriterInProgress_6 = value;
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9, ___keys_7)); }
	inline RuntimeObject* get_keys_7() const { return ___keys_7; }
	inline RuntimeObject** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(RuntimeObject* value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9, ___values_8)); }
	inline RuntimeObject* get_values_8() const { return ___values_8; }
	inline RuntimeObject** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(RuntimeObject* value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__keycomparer_9() { return static_cast<int32_t>(offsetof(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9, ____keycomparer_9)); }
	inline RuntimeObject* get__keycomparer_9() const { return ____keycomparer_9; }
	inline RuntimeObject** get_address_of__keycomparer_9() { return &____keycomparer_9; }
	inline void set__keycomparer_9(RuntimeObject* value)
	{
		____keycomparer_9 = value;
		Il2CppCodeGenWriteBarrier((&____keycomparer_9), value);
	}

	inline static int32_t get_offset_of__syncRoot_10() { return static_cast<int32_t>(offsetof(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9, ____syncRoot_10)); }
	inline RuntimeObject * get__syncRoot_10() const { return ____syncRoot_10; }
	inline RuntimeObject ** get_address_of__syncRoot_10() { return &____syncRoot_10; }
	inline void set__syncRoot_10(RuntimeObject * value)
	{
		____syncRoot_10 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHTABLE_T978F65B8006C8F5504B286526AEC6608FF983FC9_H
#ifndef SYNCHASHTABLE_T893981DF84FB7968069810B79ACD01415FE78EF3_H
#define SYNCHASHTABLE_T893981DF84FB7968069810B79ACD01415FE78EF3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable/SyncHashtable
struct  SyncHashtable_t893981DF84FB7968069810B79ACD01415FE78EF3  : public Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9
{
public:
	// System.Collections.Hashtable System.Collections.Hashtable/SyncHashtable::_table
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ____table_11;

public:
	inline static int32_t get_offset_of__table_11() { return static_cast<int32_t>(offsetof(SyncHashtable_t893981DF84FB7968069810B79ACD01415FE78EF3, ____table_11)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get__table_11() const { return ____table_11; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of__table_11() { return &____table_11; }
	inline void set__table_11(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		____table_11 = value;
		Il2CppCodeGenWriteBarrier((&____table_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHASHTABLE_T893981DF84FB7968069810B79ACD01415FE78EF3_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1300 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1301 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1302 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1303 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1304 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1305 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1306 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1307 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1308 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1309 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1310 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1311 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1312 = { sizeof (DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4)+ sizeof (RuntimeObject), sizeof(DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1312[2] = 
{
	DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4::get_offset_of__key_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4::get_offset_of__value_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1313 = { sizeof (LowLevelComparer_t4DB5A06518FF5F1549DDAFDA5E7B67FDEA4BF7F1), -1, sizeof(LowLevelComparer_t4DB5A06518FF5F1549DDAFDA5E7B67FDEA4BF7F1_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1313[1] = 
{
	LowLevelComparer_t4DB5A06518FF5F1549DDAFDA5E7B67FDEA4BF7F1_StaticFields::get_offset_of_Default_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1314 = { sizeof (ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4), -1, sizeof(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1314[5] = 
{
	ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4::get_offset_of__items_0(),
	ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4::get_offset_of__size_1(),
	ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4::get_offset_of__version_2(),
	ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4::get_offset_of__syncRoot_3(),
	ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4_StaticFields::get_offset_of_emptyArray_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1315 = { sizeof (ReadOnlyArrayList_t7F87262D6CAA9479072FF74EC5F707537EC9EA96), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1315[1] = 
{
	ReadOnlyArrayList_t7F87262D6CAA9479072FF74EC5F707537EC9EA96::get_offset_of__list_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1316 = { sizeof (ArrayListEnumeratorSimple_t5D7B0FA86AC4B1D493307CB5973DD33C5A64505F), -1, sizeof(ArrayListEnumeratorSimple_t5D7B0FA86AC4B1D493307CB5973DD33C5A64505F_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1316[6] = 
{
	ArrayListEnumeratorSimple_t5D7B0FA86AC4B1D493307CB5973DD33C5A64505F::get_offset_of_list_0(),
	ArrayListEnumeratorSimple_t5D7B0FA86AC4B1D493307CB5973DD33C5A64505F::get_offset_of_index_1(),
	ArrayListEnumeratorSimple_t5D7B0FA86AC4B1D493307CB5973DD33C5A64505F::get_offset_of_version_2(),
	ArrayListEnumeratorSimple_t5D7B0FA86AC4B1D493307CB5973DD33C5A64505F::get_offset_of_currentElement_3(),
	ArrayListEnumeratorSimple_t5D7B0FA86AC4B1D493307CB5973DD33C5A64505F::get_offset_of_isArrayList_4(),
	ArrayListEnumeratorSimple_t5D7B0FA86AC4B1D493307CB5973DD33C5A64505F_StaticFields::get_offset_of_dummyObject_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1317 = { sizeof (ArrayListDebugView_tEFE4C91B363144996F2999C6C49CE20F7033B55B), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1317[1] = 
{
	ArrayListDebugView_tEFE4C91B363144996F2999C6C49CE20F7033B55B::get_offset_of_arrayList_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1318 = { sizeof (CaseInsensitiveComparer_tF9935EB25E69CEF5A3B17CE8D22E2797F23B17BE), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1318[1] = 
{
	CaseInsensitiveComparer_tF9935EB25E69CEF5A3B17CE8D22E2797F23B17BE::get_offset_of_m_compareInfo_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1319 = { sizeof (CaseInsensitiveHashCodeProvider_tC6D5564219051252BBC7B49F78CC8173105F0C34), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1319[1] = 
{
	CaseInsensitiveHashCodeProvider_tC6D5564219051252BBC7B49F78CC8173105F0C34::get_offset_of_m_text_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1320 = { sizeof (CollectionBase_tF5D4583FF325726066A9803839A04E9C0084ED01), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1320[1] = 
{
	CollectionBase_tF5D4583FF325726066A9803839A04E9C0084ED01::get_offset_of_list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1321 = { sizeof (Comparer_t02D6323B7C3FB1B7681184587B0E1174F8DF6B3B), -1, sizeof(Comparer_t02D6323B7C3FB1B7681184587B0E1174F8DF6B3B_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1321[3] = 
{
	Comparer_t02D6323B7C3FB1B7681184587B0E1174F8DF6B3B::get_offset_of_m_compareInfo_0(),
	Comparer_t02D6323B7C3FB1B7681184587B0E1174F8DF6B3B_StaticFields::get_offset_of_Default_1(),
	Comparer_t02D6323B7C3FB1B7681184587B0E1174F8DF6B3B_StaticFields::get_offset_of_DefaultInvariant_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1322 = { sizeof (CompatibleComparer_tACA057626F5F328A975DF492CC95D78EE8B05F00), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1322[2] = 
{
	CompatibleComparer_tACA057626F5F328A975DF492CC95D78EE8B05F00::get_offset_of__comparer_0(),
	CompatibleComparer_tACA057626F5F328A975DF492CC95D78EE8B05F00::get_offset_of__hcp_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1323 = { sizeof (Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1323[11] = 
{
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9::get_offset_of_buckets_0(),
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9::get_offset_of_count_1(),
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9::get_offset_of_occupancy_2(),
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9::get_offset_of_loadsize_3(),
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9::get_offset_of_loadFactor_4(),
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9::get_offset_of_version_5(),
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9::get_offset_of_isWriterInProgress_6(),
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9::get_offset_of_keys_7(),
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9::get_offset_of_values_8(),
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9::get_offset_of__keycomparer_9(),
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9::get_offset_of__syncRoot_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1324 = { sizeof (bucket_t1C848488DF65838689F7773D46F9E7E8C881B083)+ sizeof (RuntimeObject), sizeof(bucket_t1C848488DF65838689F7773D46F9E7E8C881B083_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1324[3] = 
{
	bucket_t1C848488DF65838689F7773D46F9E7E8C881B083::get_offset_of_key_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	bucket_t1C848488DF65838689F7773D46F9E7E8C881B083::get_offset_of_val_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	bucket_t1C848488DF65838689F7773D46F9E7E8C881B083::get_offset_of_hash_coll_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1325 = { sizeof (KeyCollection_tD91D15A31EC3120D546EE76142B497C52F7C78D2), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1325[1] = 
{
	KeyCollection_tD91D15A31EC3120D546EE76142B497C52F7C78D2::get_offset_of__hashtable_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1326 = { sizeof (ValueCollection_tB345B5DC94E72D8A66D69930DB4466A86CA93BF6), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1326[1] = 
{
	ValueCollection_tB345B5DC94E72D8A66D69930DB4466A86CA93BF6::get_offset_of__hashtable_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1327 = { sizeof (SyncHashtable_t893981DF84FB7968069810B79ACD01415FE78EF3), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1327[1] = 
{
	SyncHashtable_t893981DF84FB7968069810B79ACD01415FE78EF3::get_offset_of__table_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1328 = { sizeof (HashtableEnumerator_tE5C908D6870E805494E774BF3CEF4919425455E9), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1328[7] = 
{
	HashtableEnumerator_tE5C908D6870E805494E774BF3CEF4919425455E9::get_offset_of_hashtable_0(),
	HashtableEnumerator_tE5C908D6870E805494E774BF3CEF4919425455E9::get_offset_of_bucket_1(),
	HashtableEnumerator_tE5C908D6870E805494E774BF3CEF4919425455E9::get_offset_of_version_2(),
	HashtableEnumerator_tE5C908D6870E805494E774BF3CEF4919425455E9::get_offset_of_current_3(),
	HashtableEnumerator_tE5C908D6870E805494E774BF3CEF4919425455E9::get_offset_of_getObjectRetType_4(),
	HashtableEnumerator_tE5C908D6870E805494E774BF3CEF4919425455E9::get_offset_of_currentKey_5(),
	HashtableEnumerator_tE5C908D6870E805494E774BF3CEF4919425455E9::get_offset_of_currentValue_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1329 = { sizeof (HashtableDebugView_tFD278E7BCFC46C72422AF1D2E80EADB9F04C5BAD), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1329[1] = 
{
	HashtableDebugView_tFD278E7BCFC46C72422AF1D2E80EADB9F04C5BAD::get_offset_of_hashtable_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1330 = { sizeof (HashHelpers_tEB19004A9D7DD7679EA1882AE9B96E117FDF0179), -1, sizeof(HashHelpers_tEB19004A9D7DD7679EA1882AE9B96E117FDF0179_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1330[2] = 
{
	HashHelpers_tEB19004A9D7DD7679EA1882AE9B96E117FDF0179_StaticFields::get_offset_of_primes_0(),
	HashHelpers_tEB19004A9D7DD7679EA1882AE9B96E117FDF0179_StaticFields::get_offset_of_s_SerializationInfoTable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1331 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1332 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1333 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1334 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1335 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1336 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1337 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1338 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1339 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1340 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1341 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1342 = { sizeof (KeyValuePairs_t58C6D38D4557E04680306FEFA05058B43E879D29), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1342[2] = 
{
	KeyValuePairs_t58C6D38D4557E04680306FEFA05058B43E879D29::get_offset_of_key_0(),
	KeyValuePairs_t58C6D38D4557E04680306FEFA05058B43E879D29::get_offset_of_value_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1343 = { sizeof (Queue_tEC6DE7527799C2E4224B469ECD0CDD2B25E8E4F3), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1343[7] = 
{
	Queue_tEC6DE7527799C2E4224B469ECD0CDD2B25E8E4F3::get_offset_of__array_0(),
	Queue_tEC6DE7527799C2E4224B469ECD0CDD2B25E8E4F3::get_offset_of__head_1(),
	Queue_tEC6DE7527799C2E4224B469ECD0CDD2B25E8E4F3::get_offset_of__tail_2(),
	Queue_tEC6DE7527799C2E4224B469ECD0CDD2B25E8E4F3::get_offset_of__size_3(),
	Queue_tEC6DE7527799C2E4224B469ECD0CDD2B25E8E4F3::get_offset_of__growFactor_4(),
	Queue_tEC6DE7527799C2E4224B469ECD0CDD2B25E8E4F3::get_offset_of__version_5(),
	Queue_tEC6DE7527799C2E4224B469ECD0CDD2B25E8E4F3::get_offset_of__syncRoot_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1344 = { sizeof (QueueEnumerator_t01610B48FE6A96358FDC0C32E2E04352EA2216FA), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1344[4] = 
{
	QueueEnumerator_t01610B48FE6A96358FDC0C32E2E04352EA2216FA::get_offset_of__q_0(),
	QueueEnumerator_t01610B48FE6A96358FDC0C32E2E04352EA2216FA::get_offset_of__index_1(),
	QueueEnumerator_t01610B48FE6A96358FDC0C32E2E04352EA2216FA::get_offset_of__version_2(),
	QueueEnumerator_t01610B48FE6A96358FDC0C32E2E04352EA2216FA::get_offset_of_currentElement_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1345 = { sizeof (QueueDebugView_t5FF125EC597686F20C5494132C038361EFFE6FEA), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1345[1] = 
{
	QueueDebugView_t5FF125EC597686F20C5494132C038361EFFE6FEA::get_offset_of_queue_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1346 = { sizeof (SortedList_tC8B7CDE75652EC657C510034F127B9DFDE16BF4E), -1, sizeof(SortedList_tC8B7CDE75652EC657C510034F127B9DFDE16BF4E_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1346[8] = 
{
	SortedList_tC8B7CDE75652EC657C510034F127B9DFDE16BF4E::get_offset_of_keys_0(),
	SortedList_tC8B7CDE75652EC657C510034F127B9DFDE16BF4E::get_offset_of_values_1(),
	SortedList_tC8B7CDE75652EC657C510034F127B9DFDE16BF4E::get_offset_of__size_2(),
	SortedList_tC8B7CDE75652EC657C510034F127B9DFDE16BF4E::get_offset_of_version_3(),
	SortedList_tC8B7CDE75652EC657C510034F127B9DFDE16BF4E::get_offset_of_comparer_4(),
	SortedList_tC8B7CDE75652EC657C510034F127B9DFDE16BF4E::get_offset_of_valueList_5(),
	SortedList_tC8B7CDE75652EC657C510034F127B9DFDE16BF4E::get_offset_of__syncRoot_6(),
	SortedList_tC8B7CDE75652EC657C510034F127B9DFDE16BF4E_StaticFields::get_offset_of_emptyArray_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1347 = { sizeof (SyncSortedList_tB44BB16CB6BCCA12B85A512D39EAF980ED97DD78), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1347[2] = 
{
	SyncSortedList_tB44BB16CB6BCCA12B85A512D39EAF980ED97DD78::get_offset_of__list_8(),
	SyncSortedList_tB44BB16CB6BCCA12B85A512D39EAF980ED97DD78::get_offset_of__root_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1348 = { sizeof (SortedListEnumerator_t0B3C08255F72412FF007E1CEBA45EEFAED17443E), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1348[9] = 
{
	SortedListEnumerator_t0B3C08255F72412FF007E1CEBA45EEFAED17443E::get_offset_of_sortedList_0(),
	SortedListEnumerator_t0B3C08255F72412FF007E1CEBA45EEFAED17443E::get_offset_of_key_1(),
	SortedListEnumerator_t0B3C08255F72412FF007E1CEBA45EEFAED17443E::get_offset_of_value_2(),
	SortedListEnumerator_t0B3C08255F72412FF007E1CEBA45EEFAED17443E::get_offset_of_index_3(),
	SortedListEnumerator_t0B3C08255F72412FF007E1CEBA45EEFAED17443E::get_offset_of_startIndex_4(),
	SortedListEnumerator_t0B3C08255F72412FF007E1CEBA45EEFAED17443E::get_offset_of_endIndex_5(),
	SortedListEnumerator_t0B3C08255F72412FF007E1CEBA45EEFAED17443E::get_offset_of_version_6(),
	SortedListEnumerator_t0B3C08255F72412FF007E1CEBA45EEFAED17443E::get_offset_of_current_7(),
	SortedListEnumerator_t0B3C08255F72412FF007E1CEBA45EEFAED17443E::get_offset_of_getObjectRetType_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1349 = { sizeof (ValueList_t1BBC0BAD9C26EB4899C4AB1509C3890E805D2EFE), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1349[1] = 
{
	ValueList_t1BBC0BAD9C26EB4899C4AB1509C3890E805D2EFE::get_offset_of_sortedList_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1350 = { sizeof (SortedListDebugView_t685B663AA79F56A8B544B3E77D59D21B816440E7), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1350[1] = 
{
	SortedListDebugView_t685B663AA79F56A8B544B3E77D59D21B816440E7::get_offset_of_sortedList_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1351 = { sizeof (Stack_t37723B68CC4FFD95F0F3D06A5D42D7DEE7569643), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1351[4] = 
{
	Stack_t37723B68CC4FFD95F0F3D06A5D42D7DEE7569643::get_offset_of__array_0(),
	Stack_t37723B68CC4FFD95F0F3D06A5D42D7DEE7569643::get_offset_of__size_1(),
	Stack_t37723B68CC4FFD95F0F3D06A5D42D7DEE7569643::get_offset_of__version_2(),
	Stack_t37723B68CC4FFD95F0F3D06A5D42D7DEE7569643::get_offset_of__syncRoot_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1352 = { sizeof (StackEnumerator_tAD5D58C2B92BF36AB7BEDF4405635CB160515DDA), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1352[4] = 
{
	StackEnumerator_tAD5D58C2B92BF36AB7BEDF4405635CB160515DDA::get_offset_of__stack_0(),
	StackEnumerator_tAD5D58C2B92BF36AB7BEDF4405635CB160515DDA::get_offset_of__index_1(),
	StackEnumerator_tAD5D58C2B92BF36AB7BEDF4405635CB160515DDA::get_offset_of__version_2(),
	StackEnumerator_tAD5D58C2B92BF36AB7BEDF4405635CB160515DDA::get_offset_of_currentElement_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1353 = { sizeof (StackDebugView_tE0C0C7F6AD6752160144359775846DFDDD36CB2E), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1353[1] = 
{
	StackDebugView_tE0C0C7F6AD6752160144359775846DFDDD36CB2E::get_offset_of_stack_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1354 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1354[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1355 = { sizeof (CDSCollectionETWBCLProvider_tE1A8B27D2BFB7E4D066D71945665EEB9E870C851), -1, sizeof(CDSCollectionETWBCLProvider_tE1A8B27D2BFB7E4D066D71945665EEB9E870C851_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1355[1] = 
{
	CDSCollectionETWBCLProvider_tE1A8B27D2BFB7E4D066D71945665EEB9E870C851_StaticFields::get_offset_of_Log_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1356 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1356[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1357 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1357[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1358 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1358[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1359 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1359[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1360 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1360[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1361 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1361[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1362 = { sizeof (CollectionExtensions_t1943508648E4A2A0FBCF65503E3BD7032F003E0A), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1363 = { sizeof (KeyValuePair_t123535D547736542503896462AF2C80E752E549F), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1364 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1364[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1365 = { sizeof (IntrospectiveSortUtilities_t6A205C98525D6E6DD938DC26FE053A91F492BE4D), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1366 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1367 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1367[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1368 = { sizeof (InsertionBehavior_tDE709AD9061AA205654E57F719D37F00F7A3E211)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1368[4] = 
{
	InsertionBehavior_tDE709AD9061AA205654E57F719D37F00F7A3E211::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1369 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1369[14] = 
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
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1370 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1370[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1371 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1371[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1372 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1372[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1373 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1373[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1374 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1374[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1375 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1375[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1376 = { sizeof (DictionaryHashHelpers_tA8FE399EF3E29215C09AA5F9263572B42D4D6D00), -1, sizeof(DictionaryHashHelpers_tA8FE399EF3E29215C09AA5F9263572B42D4D6D00_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1376[1] = 
{
	DictionaryHashHelpers_tA8FE399EF3E29215C09AA5F9263572B42D4D6D00_StaticFields::get_offset_of_U3CSerializationInfoTableU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1377 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1377[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1378 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1378[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1379 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1379[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1380 = { sizeof (NonRandomizedStringEqualityComparer_t92C20503D9C5060A557792ABCCC06EF2DD77E5D9), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1381 = { sizeof (ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC), -1, sizeof(ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1381[1] = 
{
	ObjectEqualityComparer_t816C8EE8FA554ABC9D1BDD052A3F3F919983FDCC_StaticFields::get_offset_of_Default_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1382 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1382[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1383 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1384 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1385 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1386 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1386[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1387 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1387[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1388 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1389 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1390 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1391 = { sizeof (ByteEqualityComparer_t45A85C063C30D3CDABEAD21C8CDF353E3EE55B8B), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1392 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1393 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1394 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1395 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1396 = { sizeof (InternalStringComparer_tCD150130A3DB4C80186B5D8145B910B33496D4CD), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1397 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1398 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1399 = { 0, 0, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
