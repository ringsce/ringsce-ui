// Generated by Haxe 4.3.3
#ifndef INCLUDED_sys_io_FileInput
#define INCLUDED_sys_io_FileInput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,io,Input)
HX_DECLARE_CLASS2(sys,io,FileInput)

namespace sys{
namespace io{


class HXCPP_CLASS_ATTRIBUTES FileInput_obj : public  ::haxe::io::Input_obj
{
	public:
		typedef  ::haxe::io::Input_obj super;
		typedef FileInput_obj OBJ_;
		FileInput_obj();

	public:
		enum { _hx_ClassId = 0x1a1fbc7b };

		void __construct( ::Dynamic f);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="sys.io.FileInput")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"sys.io.FileInput"); }
		static ::hx::ObjectPtr< FileInput_obj > __new( ::Dynamic f);
		static ::hx::ObjectPtr< FileInput_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic f);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FileInput_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FileInput",ce,43,18,62); }

		 ::Dynamic _hx___f;
		int readByte();

		int readBytes( ::haxe::io::Bytes s,int p,int l);

		void close();

};

} // end namespace sys
} // end namespace io

#endif /* INCLUDED_sys_io_FileInput */ 
