#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "vm/CachedCCWBase.h"
#include "os/Unity/UnityPlatformConfigure.h"
#include "il2cpp-object-internals.h"


// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t694AB0BB5090818473AA9742BF34524DF94A1752;
// System.Collections.Generic.IEnumerator`1<System.Single>
struct IEnumerator_1_t5BBF33C66D868C3B9C722A703D57C2AD3F18EE30;
// System.Func`2<System.Single,System.Boolean>
struct Func_2_tCE140CB04D7028DFB9745FE6A9A75C093A1F77FF;
// System.Func`2<System.Single,System.Single>
struct Func_2_t78AB1E54778147234117A863F7A78DFA46849ABD;

struct IBindableIterator_t4EB9DDBBBED9295CB77A2FAD2C1171407B95575B;
struct IIterator_1_tAB6AC0FFB386FC4CC351B4E587DE2F1F2C684A8F;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

// Windows.Foundation.Collections.IIterable`1<System.Single>
struct NOVTABLE IIterable_1_t8B1290432D34A917806368573A3520EDC1021E8B : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m2E94A634BFE6BAD7F5228EB7EE67848551709744(IIterator_1_tAB6AC0FFB386FC4CC351B4E587DE2F1F2C684A8F** comReturnValue) = 0;
};
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t5808AF951019E4388C66F7A88AC569F52F581167 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6() = 0;
};
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m249B6233E8E52974472E2DE151F79DB53F1E4FDF(IBindableIterator_t4EB9DDBBBED9295CB77A2FAD2C1171407B95575B** comReturnValue) = 0;
};

// System.Linq.Enumerable_Iterator`1<System.Single>
struct  Iterator_1_t215E24DFE3070A1135066A476BF2664B7AC44BF9  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable_Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable_Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable_Iterator`1::current
	float ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_t215E24DFE3070A1135066A476BF2664B7AC44BF9, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_t215E24DFE3070A1135066A476BF2664B7AC44BF9, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_t215E24DFE3070A1135066A476BF2664B7AC44BF9, ___current_2)); }
	inline float get_current_2() const { return ___current_2; }
	inline float* get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(float value)
	{
		___current_2 = value;
	}
};


// System.Linq.Enumerable_WhereSelectEnumerableIterator`2<System.Single,System.Single>
struct  WhereSelectEnumerableIterator_2_t8E2D4DD0BB77B2F7DDE5822849429B4B47EB389E  : public Iterator_1_t215E24DFE3070A1135066A476BF2664B7AC44BF9
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::predicate
	Func_2_tCE140CB04D7028DFB9745FE6A9A75C093A1F77FF * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::selector
	Func_2_t78AB1E54778147234117A863F7A78DFA46849ABD * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t8E2D4DD0BB77B2F7DDE5822849429B4B47EB389E, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t8E2D4DD0BB77B2F7DDE5822849429B4B47EB389E, ___predicate_4)); }
	inline Func_2_tCE140CB04D7028DFB9745FE6A9A75C093A1F77FF * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tCE140CB04D7028DFB9745FE6A9A75C093A1F77FF ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tCE140CB04D7028DFB9745FE6A9A75C093A1F77FF * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t8E2D4DD0BB77B2F7DDE5822849429B4B47EB389E, ___selector_5)); }
	inline Func_2_t78AB1E54778147234117A863F7A78DFA46849ABD * get_selector_5() const { return ___selector_5; }
	inline Func_2_t78AB1E54778147234117A863F7A78DFA46849ABD ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t78AB1E54778147234117A863F7A78DFA46849ABD * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t8E2D4DD0BB77B2F7DDE5822849429B4B47EB389E, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IIterable_1_First_m2E94A634BFE6BAD7F5228EB7EE67848551709744_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tAB6AC0FFB386FC4CC351B4E587DE2F1F2C684A8F** comReturnValue);
il2cpp_hresult_t IBindableIterable_First_m249B6233E8E52974472E2DE151F79DB53F1E4FDF_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_t4EB9DDBBBED9295CB77A2FAD2C1171407B95575B** comReturnValue);
il2cpp_hresult_t IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6_ComCallableWrapperProjectedMethod(RuntimeObject* __this);



// COM Callable Wrapper for System.Linq.Enumerable_WhereSelectEnumerableIterator`2<System.Single,System.Single>
struct WhereSelectEnumerableIterator_2_t8E2D4DD0BB77B2F7DDE5822849429B4B47EB389E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WhereSelectEnumerableIterator_2_t8E2D4DD0BB77B2F7DDE5822849429B4B47EB389E_ComCallableWrapper>, IIterable_1_t8B1290432D34A917806368573A3520EDC1021E8B, IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7, IClosable_t5808AF951019E4388C66F7A88AC569F52F581167
{
	inline WhereSelectEnumerableIterator_2_t8E2D4DD0BB77B2F7DDE5822849429B4B47EB389E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WhereSelectEnumerableIterator_2_t8E2D4DD0BB77B2F7DDE5822849429B4B47EB389E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t8B1290432D34A917806368573A3520EDC1021E8B::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t8B1290432D34A917806368573A3520EDC1021E8B*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t5808AF951019E4388C66F7A88AC569F52F581167*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t8B1290432D34A917806368573A3520EDC1021E8B::IID;
		interfaceIds[1] = IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7::IID;
		interfaceIds[2] = IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID;

		*iidCount = 3;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m2E94A634BFE6BAD7F5228EB7EE67848551709744(IIterator_1_tAB6AC0FFB386FC4CC351B4E587DE2F1F2C684A8F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m2E94A634BFE6BAD7F5228EB7EE67848551709744_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m249B6233E8E52974472E2DE151F79DB53F1E4FDF(IBindableIterator_t4EB9DDBBBED9295CB77A2FAD2C1171407B95575B** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m249B6233E8E52974472E2DE151F79DB53F1E4FDF_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WhereSelectEnumerableIterator_2_t8E2D4DD0BB77B2F7DDE5822849429B4B47EB389E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WhereSelectEnumerableIterator_2_t8E2D4DD0BB77B2F7DDE5822849429B4B47EB389E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WhereSelectEnumerableIterator_2_t8E2D4DD0BB77B2F7DDE5822849429B4B47EB389E_ComCallableWrapper(obj));
}
