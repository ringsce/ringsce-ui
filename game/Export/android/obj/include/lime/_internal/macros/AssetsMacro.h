// Generated by Haxe 4.3.3
#ifndef INCLUDED_lime__internal_macros_AssetsMacro
#define INCLUDED_lime__internal_macros_AssetsMacro

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,_internal,macros,AssetsMacro)

namespace lime{
namespace _internal{
namespace macros{


class HXCPP_CLASS_ATTRIBUTES AssetsMacro_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AssetsMacro_obj OBJ_;
		AssetsMacro_obj();

	public:
		enum { _hx_ClassId = 0x0e2af41b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime._internal.macros.AssetsMacro")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime._internal.macros.AssetsMacro"); }

		inline static ::hx::ObjectPtr< AssetsMacro_obj > __new() {
			::hx::ObjectPtr< AssetsMacro_obj > __this = new AssetsMacro_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< AssetsMacro_obj > __alloc(::hx::Ctx *_hx_ctx) {
			AssetsMacro_obj *__this = (AssetsMacro_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AssetsMacro_obj), false, "lime._internal.macros.AssetsMacro"));
			*(void **)__this = AssetsMacro_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AssetsMacro_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AssetsMacro",69,74,4e,d6); }

};

} // end namespace lime
} // end namespace _internal
} // end namespace macros

#endif /* INCLUDED_lime__internal_macros_AssetsMacro */ 
