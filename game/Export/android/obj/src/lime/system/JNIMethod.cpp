// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeCFFI
#include <lime/_internal/backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_system_JNIMethod
#include <lime/system/JNIMethod.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_39b0deb1236c4593_314_new,"lime.system.JNIMethod","new",0xca67a7f2,"lime.system.JNIMethod.new","lime/system/JNI.hx",314,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_39b0deb1236c4593_318_callMember,"lime.system.JNIMethod","callMember",0x1acfd846,"lime.system.JNIMethod.callMember","lime/system/JNI.hx",318,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_39b0deb1236c4593_330_callStatic,"lime.system.JNIMethod","callStatic",0x1c15d29a,"lime.system.JNIMethod.callStatic","lime/system/JNI.hx",330,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_39b0deb1236c4593_338_getMemberMethod,"lime.system.JNIMethod","getMemberMethod",0x7872cd23,"lime.system.JNIMethod.getMemberMethod","lime/system/JNI.hx",338,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_39b0deb1236c4593_350_getStaticMethod,"lime.system.JNIMethod","getStaticMethod",0xd67b3e77,"lime.system.JNIMethod.getStaticMethod","lime/system/JNI.hx",350,0x21970b7f)
namespace lime{
namespace _hx_system{

void JNIMethod_obj::__construct( ::Dynamic method){
            	HX_STACKFRAME(&_hx_pos_39b0deb1236c4593_314_new)
HXDLIN( 314)		this->method = method;
            	}

Dynamic JNIMethod_obj::__CreateEmpty() { return new JNIMethod_obj; }

void *JNIMethod_obj::_hx_vtable = 0;

Dynamic JNIMethod_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< JNIMethod_obj > _hx_result = new JNIMethod_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool JNIMethod_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5c62ce1e;
}

 ::Dynamic JNIMethod_obj::callMember(::cpp::VirtualArray args){
            	HX_STACKFRAME(&_hx_pos_39b0deb1236c4593_318_callMember)
HXLINE( 320)		 ::Dynamic jobject = args->shift();
HXLINE( 321)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_jni_call_member(::hx::DynamicPtr(this->method),::hx::DynamicPtr(jobject),::hx::DynamicPtr(args))) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(JNIMethod_obj,callMember,return )

 ::Dynamic JNIMethod_obj::callStatic(::cpp::VirtualArray args){
            	HX_STACKFRAME(&_hx_pos_39b0deb1236c4593_330_callStatic)
HXDLIN( 330)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_jni_call_static(::hx::DynamicPtr(this->method),::hx::DynamicPtr(args))) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(JNIMethod_obj,callStatic,return )

 ::Dynamic JNIMethod_obj::getMemberMethod(bool useArray){
            	HX_STACKFRAME(&_hx_pos_39b0deb1236c4593_338_getMemberMethod)
HXDLIN( 338)		if (useArray) {
HXLINE( 340)			return this->callMember_dyn();
            		}
            		else {
HXLINE( 344)			return ::Reflect_obj::makeVarArgs(this->callMember_dyn());
            		}
HXLINE( 338)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(JNIMethod_obj,getMemberMethod,return )

 ::Dynamic JNIMethod_obj::getStaticMethod(bool useArray){
            	HX_STACKFRAME(&_hx_pos_39b0deb1236c4593_350_getStaticMethod)
HXDLIN( 350)		if (useArray) {
HXLINE( 352)			return this->callStatic_dyn();
            		}
            		else {
HXLINE( 356)			return ::Reflect_obj::makeVarArgs(this->callStatic_dyn());
            		}
HXLINE( 350)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(JNIMethod_obj,getStaticMethod,return )


::hx::ObjectPtr< JNIMethod_obj > JNIMethod_obj::__new( ::Dynamic method) {
	::hx::ObjectPtr< JNIMethod_obj > __this = new JNIMethod_obj();
	__this->__construct(method);
	return __this;
}

::hx::ObjectPtr< JNIMethod_obj > JNIMethod_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic method) {
	JNIMethod_obj *__this = (JNIMethod_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(JNIMethod_obj), true, "lime.system.JNIMethod"));
	*(void **)__this = JNIMethod_obj::_hx_vtable;
	__this->__construct(method);
	return __this;
}

JNIMethod_obj::JNIMethod_obj()
{
}

void JNIMethod_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(JNIMethod);
	HX_MARK_MEMBER_NAME(method,"method");
	HX_MARK_END_CLASS();
}

void JNIMethod_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(method,"method");
}

::hx::Val JNIMethod_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { return ::hx::Val( method ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"callMember") ) { return ::hx::Val( callMember_dyn() ); }
		if (HX_FIELD_EQ(inName,"callStatic") ) { return ::hx::Val( callStatic_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getMemberMethod") ) { return ::hx::Val( getMemberMethod_dyn() ); }
		if (HX_FIELD_EQ(inName,"getStaticMethod") ) { return ::hx::Val( getStaticMethod_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val JNIMethod_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { method=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void JNIMethod_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("method",e1,f6,5a,09));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo JNIMethod_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(JNIMethod_obj,method),HX_("method",e1,f6,5a,09)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *JNIMethod_obj_sStaticStorageInfo = 0;
#endif

static ::String JNIMethod_obj_sMemberFields[] = {
	HX_("method",e1,f6,5a,09),
	HX_("callMember",98,b9,e5,2f),
	HX_("callStatic",ec,b3,2b,31),
	HX_("getMemberMethod",91,e2,b0,ec),
	HX_("getStaticMethod",e5,53,b9,4a),
	::String(null()) };

::hx::Class JNIMethod_obj::__mClass;

void JNIMethod_obj::__register()
{
	JNIMethod_obj _hx_dummy;
	JNIMethod_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.system.JNIMethod",00,87,5c,b5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(JNIMethod_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< JNIMethod_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = JNIMethod_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = JNIMethod_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace system
