// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_lime_utils__Resource_Resource_Impl_
#include <lime/utils/_Resource/Resource_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_d27231b1c1450381_8__new,"lime.utils._Resource.Resource_Impl_","_new",0x38bfd04a,"lime.utils._Resource.Resource_Impl_._new","lime/utils/Resource.hx",8,0x74641db8)
HX_LOCAL_STACK_FRAME(_hx_pos_d27231b1c1450381_15___fromString,"lime.utils._Resource.Resource_Impl_","__fromString",0x8aaaf4e4,"lime.utils._Resource.Resource_Impl_.__fromString","lime/utils/Resource.hx",15,0x74641db8)
HX_LOCAL_STACK_FRAME(_hx_pos_d27231b1c1450381_20___toString,"lime.utils._Resource.Resource_Impl_","__toString",0x3e989375,"lime.utils._Resource.Resource_Impl_.__toString","lime/utils/Resource.hx",20,0x74641db8)
namespace lime{
namespace utils{
namespace _Resource{

void Resource_Impl__obj::__construct() { }

Dynamic Resource_Impl__obj::__CreateEmpty() { return new Resource_Impl__obj; }

void *Resource_Impl__obj::_hx_vtable = 0;

Dynamic Resource_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Resource_Impl__obj > _hx_result = new Resource_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Resource_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x18186667;
}

 ::haxe::io::Bytes Resource_Impl__obj::_new(::hx::Null< int >  __o_size){
            		int size = __o_size.Default(0);
            	HX_STACKFRAME(&_hx_pos_d27231b1c1450381_8__new)
HXDLIN(   8)		return ::haxe::io::Bytes_obj::alloc(size);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Resource_Impl__obj,_new,return )

 ::haxe::io::Bytes Resource_Impl__obj::_hx___fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_d27231b1c1450381_15___fromString)
HXDLIN(  15)		return ::haxe::io::Bytes_obj::ofString(value,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Resource_Impl__obj,_hx___fromString,return )

::String Resource_Impl__obj::_hx___toString( ::haxe::io::Bytes value){
            	HX_STACKFRAME(&_hx_pos_d27231b1c1450381_20___toString)
HXDLIN(  20)		return value->toString();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Resource_Impl__obj,_hx___toString,return )


Resource_Impl__obj::Resource_Impl__obj()
{
}

bool Resource_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__toString") ) { outValue = _hx___toString_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__fromString") ) { outValue = _hx___fromString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Resource_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Resource_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class Resource_Impl__obj::__mClass;

static ::String Resource_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("__fromString",fb,a8,07,8d),
	HX_("__toString",cc,43,a7,db),
	::String(null())
};

void Resource_Impl__obj::__register()
{
	Resource_Impl__obj _hx_dummy;
	Resource_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.utils._Resource.Resource_Impl_",25,8e,df,32);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Resource_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Resource_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Resource_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Resource_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Resource_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace utils
} // end namespace _Resource
