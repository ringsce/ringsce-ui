// Generated by Haxe 4.3.3
#ifndef INCLUDED_lime_system_JNI
#define INCLUDED_lime_system_JNI

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(lime,_hx_system,JNI)
HX_DECLARE_CLASS2(lime,_hx_system,JNIMemberField)
HX_DECLARE_CLASS2(lime,_hx_system,JNIStaticField)

namespace lime{
namespace _hx_system{


class HXCPP_CLASS_ATTRIBUTES JNI_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef JNI_obj OBJ_;
		JNI_obj();

	public:
		enum { _hx_ClassId = 0x2ecdb141 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.system.JNI")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.system.JNI"); }

		inline static ::hx::ObjectPtr< JNI_obj > __new() {
			::hx::ObjectPtr< JNI_obj > __this = new JNI_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< JNI_obj > __alloc(::hx::Ctx *_hx_ctx) {
			JNI_obj *__this = (JNI_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(JNI_obj), false, "lime.system.JNI"));
			*(void **)__this = JNI_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~JNI_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("JNI",05,6b,38,00); }

		static void __boot();
		static  ::haxe::ds::StringMap alreadyCreated;
		static bool initialized;
		static ::String transformClassName(::String className);
		static ::Dynamic transformClassName_dyn();

		static  ::Dynamic callMember( ::Dynamic method, ::Dynamic jobject,::cpp::VirtualArray a);
		static ::Dynamic callMember_dyn();

		static  ::Dynamic callStatic( ::Dynamic method,::cpp::VirtualArray a);
		static ::Dynamic callStatic_dyn();

		static  ::lime::_hx_system::JNIMemberField createMemberField(::String className,::String memberName,::String signature);
		static ::Dynamic createMemberField_dyn();

		static  ::Dynamic createMemberMethod(::String className,::String memberName,::String signature,::hx::Null< bool >  useArray,::hx::Null< bool >  quietFail);
		static ::Dynamic createMemberMethod_dyn();

		static  ::lime::_hx_system::JNIStaticField createStaticField(::String className,::String memberName,::String signature);
		static ::Dynamic createStaticField_dyn();

		static  ::Dynamic createStaticMethod(::String className,::String memberName,::String signature,::hx::Null< bool >  useArray,::hx::Null< bool >  quietFail);
		static ::Dynamic createStaticMethod_dyn();

		static  ::Dynamic getEnv();
		static ::Dynamic getEnv_dyn();

		static void init();
		static ::Dynamic init_dyn();

		static  ::Dynamic onCallback( ::Dynamic object,::String method,::cpp::VirtualArray args);
		static ::Dynamic onCallback_dyn();

		static void postUICallback( ::Dynamic callback);
		static ::Dynamic postUICallback_dyn();

};

} // end namespace lime
} // end namespace system

#endif /* INCLUDED_lime_system_JNI */ 
