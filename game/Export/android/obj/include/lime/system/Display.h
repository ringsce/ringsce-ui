// Generated by Haxe 4.3.3
#ifndef INCLUDED_lime_system_Display
#define INCLUDED_lime_system_Display

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_84dc687d4538b090_38_new)
HX_DECLARE_CLASS2(lime,math,Rectangle)
HX_DECLARE_CLASS2(lime,_hx_system,Display)
HX_DECLARE_CLASS2(lime,_hx_system,DisplayMode)

namespace lime{
namespace _hx_system{


class HXCPP_CLASS_ATTRIBUTES Display_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Display_obj OBJ_;
		Display_obj();

	public:
		enum { _hx_ClassId = 0x061df27a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.system.Display")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"lime.system.Display"); }

		inline static ::hx::ObjectPtr< Display_obj > __new() {
			::hx::ObjectPtr< Display_obj > __this = new Display_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Display_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Display_obj *__this = (Display_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Display_obj), true, "lime.system.Display"));
			*(void **)__this = Display_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_84dc687d4538b090_38_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Display_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Display",22,52,9b,88); }

		 ::lime::math::Rectangle bounds;
		 ::lime::_hx_system::DisplayMode currentMode;
		int id;
		Float dpi;
		::String name;
		::Array< ::Dynamic> supportedModes;
};

} // end namespace lime
} // end namespace system

#endif /* INCLUDED_lime_system_Display */ 
