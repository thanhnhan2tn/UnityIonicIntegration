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


// IonicComms
struct IonicComms_t1760268179;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// System.String
struct String_t;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Component
struct Component_t1923634451;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;

extern RuntimeClass* IonicComms_t1760268179_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* GameObject_t1113636619_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GameObject_AddComponent_TisIonicComms_t1760268179_m2415828088_RuntimeMethod_var;
extern String_t* _stringLiteral755443785;
extern const uint32_t IonicComms_Init_m3461949751_MetadataUsageId;
extern const uint32_t IonicComms_Awake_m3001563606_MetadataUsageId;
extern const uint32_t IonicComms_Start_m4208605979_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern const uint32_t IonicComms_OnMessageReceivedFromIonic_m4159804347_MetadataUsageId;
extern const uint32_t IonicComms_SendMessageToIonic_m1590130127_MetadataUsageId;
extern String_t* _stringLiteral757602046;
extern const uint32_t IonicComms_FinishActivity_m1513802339_MetadataUsageId;
extern const uint32_t IonicComms__cctor_m1108071294_MetadataUsageId;



#ifndef U3CMODULEU3E_T692745546_H
#define U3CMODULEU3E_T692745546_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745546 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745546_H
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
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
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
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
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
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
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
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef IONICCOMMS_T1760268179_H
#define IONICCOMMS_T1760268179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IonicComms
struct  IonicComms_t1760268179  : public MonoBehaviour_t3962482529
{
public:

public:
};

struct IonicComms_t1760268179_StaticFields
{
public:
	// IonicComms IonicComms::Instance
	IonicComms_t1760268179 * ___Instance_2;

public:
	inline static int32_t get_offset_of_Instance_2() { return static_cast<int32_t>(offsetof(IonicComms_t1760268179_StaticFields, ___Instance_2)); }
	inline IonicComms_t1760268179 * get_Instance_2() const { return ___Instance_2; }
	inline IonicComms_t1760268179 ** get_address_of_Instance_2() { return &___Instance_2; }
	inline void set_Instance_2(IonicComms_t1760268179 * value)
	{
		___Instance_2 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IONICCOMMS_T1760268179_H


// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C"  void GameObject__ctor_m2093116449 (GameObject_t1113636619 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::AddComponent<IonicComms>()
#define GameObject_AddComponent_TisIonicComms_t1760268179_m2415828088(__this, method) ((  IonicComms_t1760268179 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared)(__this, method)
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
extern "C"  void Object_DontDestroyOnLoad_m166252750 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::set_name(System.String)
extern "C"  void Object_set_name_m291480324 (Object_t631007953 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void IonicComms::uNotifyUnityReady()
extern "C"  void IonicComms_uNotifyUnityReady_m2494573779 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C"  bool String_IsNullOrEmpty_m2969720369 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::get_Length()
extern "C"  int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void IonicComms::uSendMessageToIonic(System.String)
extern "C"  void IonicComms_uSendMessageToIonic_m3012973600 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::Quit()
extern "C"  void Application_Quit_m470877999 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void IonicComms::uSendResultToIonic(System.String)
extern "C"  void IonicComms_uSendResultToIonic_m2690196769 (RuntimeObject * __this /* static, unused */, String_t* ___result0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void IonicComms::uHideUnity()
extern "C"  void IonicComms_uHideUnity_m3952343106 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
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
// System.Void IonicComms::.ctor()
extern "C"  void IonicComms__ctor_m3075399767 (IonicComms_t1760268179 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL uHideUnity();
// System.Void IonicComms::uHideUnity()
extern "C"  void IonicComms_uHideUnity_m3952343106 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(uHideUnity)();

}
extern "C" void DEFAULT_CALL uNotifyUnityReady();
// System.Void IonicComms::uNotifyUnityReady()
extern "C"  void IonicComms_uNotifyUnityReady_m2494573779 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(uNotifyUnityReady)();

}
extern "C" void DEFAULT_CALL uSendMessageToIonic(char*);
// System.Void IonicComms::uSendMessageToIonic(System.String)
extern "C"  void IonicComms_uSendMessageToIonic_m3012973600 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(uSendMessageToIonic)(____message0_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

}
extern "C" void DEFAULT_CALL uSendResultToIonic(char*);
// System.Void IonicComms::uSendResultToIonic(System.String)
extern "C"  void IonicComms_uSendResultToIonic_m2690196769 (RuntimeObject * __this /* static, unused */, String_t* ___result0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___result0' to native representation
	char* ____result0_marshaled = NULL;
	____result0_marshaled = il2cpp_codegen_marshal_string(___result0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(uSendResultToIonic)(____result0_marshaled);

	// Marshaling cleanup of parameter '___result0' native representation
	il2cpp_codegen_marshal_free(____result0_marshaled);
	____result0_marshaled = NULL;

}
// System.Void IonicComms::Init()
extern "C"  void IonicComms_Init_m3461949751 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IonicComms_Init_m3461949751_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( Instance == null )
		IL2CPP_RUNTIME_CLASS_INIT(IonicComms_t1760268179_il2cpp_TypeInfo_var);
		IonicComms_t1760268179 * L_0 = ((IonicComms_t1760268179_StaticFields*)il2cpp_codegen_static_fields_for(IonicComms_t1760268179_il2cpp_TypeInfo_var))->get_Instance_2();
		// if( Instance == null )
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0036;
		}
	}
	{
		// Instance = new GameObject( "IonicComms" ).AddComponent<IonicComms>();
		// Instance = new GameObject( "IonicComms" ).AddComponent<IonicComms>();
		GameObject_t1113636619 * L_2 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m2093116449(L_2, _stringLiteral755443785, /*hidden argument*/NULL);
		// Instance = new GameObject( "IonicComms" ).AddComponent<IonicComms>();
		NullCheck(L_2);
		IonicComms_t1760268179 * L_3 = GameObject_AddComponent_TisIonicComms_t1760268179_m2415828088(L_2, /*hidden argument*/GameObject_AddComponent_TisIonicComms_t1760268179_m2415828088_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(IonicComms_t1760268179_il2cpp_TypeInfo_var);
		((IonicComms_t1760268179_StaticFields*)il2cpp_codegen_static_fields_for(IonicComms_t1760268179_il2cpp_TypeInfo_var))->set_Instance_2(L_3);
		// DontDestroyOnLoad( Instance.gameObject );
		IonicComms_t1760268179 * L_4 = ((IonicComms_t1760268179_StaticFields*)il2cpp_codegen_static_fields_for(IonicComms_t1760268179_il2cpp_TypeInfo_var))->get_Instance_2();
		// DontDestroyOnLoad( Instance.gameObject );
		NullCheck(L_4);
		GameObject_t1113636619 * L_5 = Component_get_gameObject_m442555142(L_4, /*hidden argument*/NULL);
		// DontDestroyOnLoad( Instance.gameObject );
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m166252750(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void IonicComms::Awake()
extern "C"  void IonicComms_Awake_m3001563606 (IonicComms_t1760268179 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IonicComms_Awake_m3001563606_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( Instance == null )
		IL2CPP_RUNTIME_CLASS_INIT(IonicComms_t1760268179_il2cpp_TypeInfo_var);
		IonicComms_t1760268179 * L_0 = ((IonicComms_t1760268179_StaticFields*)il2cpp_codegen_static_fields_for(IonicComms_t1760268179_il2cpp_TypeInfo_var))->get_Instance_2();
		// if( Instance == null )
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		// Instance = this;
		IL2CPP_RUNTIME_CLASS_INIT(IonicComms_t1760268179_il2cpp_TypeInfo_var);
		((IonicComms_t1760268179_StaticFields*)il2cpp_codegen_static_fields_for(IonicComms_t1760268179_il2cpp_TypeInfo_var))->set_Instance_2(__this);
		// gameObject.name = "IonicComms";
		// gameObject.name = "IonicComms";
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		// gameObject.name = "IonicComms";
		NullCheck(L_2);
		Object_set_name_m291480324(L_2, _stringLiteral755443785, /*hidden argument*/NULL);
		// DontDestroyOnLoad( gameObject );
		// DontDestroyOnLoad( gameObject );
		GameObject_t1113636619 * L_3 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		// DontDestroyOnLoad( gameObject );
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m166252750(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		goto IL_004f;
	}

IL_0039:
	{
		// else if( this != Instance )
		IL2CPP_RUNTIME_CLASS_INIT(IonicComms_t1760268179_il2cpp_TypeInfo_var);
		IonicComms_t1760268179 * L_4 = ((IonicComms_t1760268179_StaticFields*)il2cpp_codegen_static_fields_for(IonicComms_t1760268179_il2cpp_TypeInfo_var))->get_Instance_2();
		// else if( this != Instance )
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, __this, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004f;
		}
	}
	{
		// Destroy( this );
		// Destroy( this );
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void IonicComms::Start()
extern "C"  void IonicComms_Start_m4208605979 (IonicComms_t1760268179 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IonicComms_Start_m4208605979_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( Instance != this )
		IL2CPP_RUNTIME_CLASS_INIT(IonicComms_t1760268179_il2cpp_TypeInfo_var);
		IonicComms_t1760268179 * L_0 = ((IonicComms_t1760268179_StaticFields*)il2cpp_codegen_static_fields_for(IonicComms_t1760268179_il2cpp_TypeInfo_var))->get_Instance_2();
		// if( Instance != this )
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, __this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// return;
		goto IL_001b;
	}

IL_0016:
	{
		// uNotifyUnityReady();
		IL2CPP_RUNTIME_CLASS_INIT(IonicComms_t1760268179_il2cpp_TypeInfo_var);
		IonicComms_uNotifyUnityReady_m2494573779(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void IonicComms::OnMessageReceivedFromIonic(System.String)
extern "C"  void IonicComms_OnMessageReceivedFromIonic_m4159804347 (IonicComms_t1760268179 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IonicComms_OnMessageReceivedFromIonic_m4159804347_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( string.IsNullOrEmpty( message ) )
		String_t* L_0 = ___message0;
		// if( string.IsNullOrEmpty( message ) )
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// return;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Void IonicComms::SendMessageToIonic(System.String)
extern "C"  void IonicComms_SendMessageToIonic_m1590130127 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IonicComms_SendMessageToIonic_m1590130127_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( message == null || message.Length == 0 )
		String_t* L_0 = ___message0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_1 = ___message0;
		// if( message == null || message.Length == 0 )
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m3847582255(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0017;
		}
	}

IL_0012:
	{
		// return;
		goto IL_001d;
	}

IL_0017:
	{
		// uSendMessageToIonic( message );
		String_t* L_3 = ___message0;
		// uSendMessageToIonic( message );
		IL2CPP_RUNTIME_CLASS_INIT(IonicComms_t1760268179_il2cpp_TypeInfo_var);
		IonicComms_uSendMessageToIonic_m3012973600(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void IonicComms::FinishActivity(System.String)
extern "C"  void IonicComms_FinishActivity_m1513802339 (RuntimeObject * __this /* static, unused */, String_t* ___returnMessage0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IonicComms_FinishActivity_m1513802339_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( returnMessage == null )
		String_t* L_0 = ___returnMessage0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// returnMessage = "";
		___returnMessage0 = _stringLiteral757602046;
	}

IL_000e:
	{
		// if( Instance == null )
		IL2CPP_RUNTIME_CLASS_INIT(IonicComms_t1760268179_il2cpp_TypeInfo_var);
		IonicComms_t1760268179 * L_1 = ((IonicComms_t1760268179_StaticFields*)il2cpp_codegen_static_fields_for(IonicComms_t1760268179_il2cpp_TypeInfo_var))->get_Instance_2();
		// if( Instance == null )
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		// Application.Quit();
		Application_Quit_m470877999(NULL /*static, unused*/, /*hidden argument*/NULL);
		goto IL_0037;
	}

IL_002a:
	{
		// uSendResultToIonic( returnMessage );
		String_t* L_3 = ___returnMessage0;
		// uSendResultToIonic( returnMessage );
		IL2CPP_RUNTIME_CLASS_INIT(IonicComms_t1760268179_il2cpp_TypeInfo_var);
		IonicComms_uSendResultToIonic_m2690196769(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		// uHideUnity();
		IonicComms_uHideUnity_m3952343106(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void IonicComms::.cctor()
extern "C"  void IonicComms__cctor_m1108071294 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IonicComms__cctor_m1108071294_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static IonicComms Instance = null;
		((IonicComms_t1760268179_StaticFields*)il2cpp_codegen_static_fields_for(IonicComms_t1760268179_il2cpp_TypeInfo_var))->set_Instance_2((IonicComms_t1760268179 *)NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
