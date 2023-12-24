// Generated by Haxe 4.3.3
#ifndef INCLUDED_lime_graphics__WebGLRenderContext_WebGLRenderContext_Impl_
#define INCLUDED_lime_graphics__WebGLRenderContext_WebGLRenderContext_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,_internal,backend,native,NativeOpenGLRenderContext)
HX_DECLARE_CLASS2(lime,graphics,RenderContext)
HX_DECLARE_CLASS3(lime,graphics,_WebGLRenderContext,WebGLRenderContext_Impl_)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)

namespace lime{
namespace graphics{
namespace _WebGLRenderContext{


class HXCPP_CLASS_ATTRIBUTES WebGLRenderContext_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef WebGLRenderContext_Impl__obj OBJ_;
		WebGLRenderContext_Impl__obj();

	public:
		enum { _hx_ClassId = 0x04e3519f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics._WebGLRenderContext.WebGLRenderContext_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics._WebGLRenderContext.WebGLRenderContext_Impl_"); }

		inline static ::hx::ObjectPtr< WebGLRenderContext_Impl__obj > __new() {
			::hx::ObjectPtr< WebGLRenderContext_Impl__obj > __this = new WebGLRenderContext_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< WebGLRenderContext_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			WebGLRenderContext_Impl__obj *__this = (WebGLRenderContext_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(WebGLRenderContext_Impl__obj), false, "lime.graphics._WebGLRenderContext.WebGLRenderContext_Impl_"));
			*(void **)__this = WebGLRenderContext_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~WebGLRenderContext_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("WebGLRenderContext_Impl_",80,12,9c,4c); }

		static void bufferData( ::lime::_internal::backend::native::NativeOpenGLRenderContext this1,int target, ::lime::utils::ArrayBufferView srcData,int usage);
		static ::Dynamic bufferData_dyn();

		static void bufferSubData( ::lime::_internal::backend::native::NativeOpenGLRenderContext this1,int target,int offset, ::lime::utils::ArrayBufferView srcData);
		static ::Dynamic bufferSubData_dyn();

		static void compressedTexImage2D( ::lime::_internal::backend::native::NativeOpenGLRenderContext this1,int target,int level,int internalformat,int width,int height,int border, ::lime::utils::ArrayBufferView srcData);
		static ::Dynamic compressedTexImage2D_dyn();

		static void compressedTexSubImage2D( ::lime::_internal::backend::native::NativeOpenGLRenderContext this1,int target,int level,int xoffset,int yoffset,int width,int height,int format, ::lime::utils::ArrayBufferView srcData);
		static ::Dynamic compressedTexSubImage2D_dyn();

		static void readPixels( ::lime::_internal::backend::native::NativeOpenGLRenderContext this1,int x,int y,int width,int height,int format,int type, ::lime::utils::ArrayBufferView pixels);
		static ::Dynamic readPixels_dyn();

		static void texImage2D( ::lime::_internal::backend::native::NativeOpenGLRenderContext this1,int target,int level,int internalformat,int width,int height,int border,int format,int type, ::lime::utils::ArrayBufferView srcData);
		static ::Dynamic texImage2D_dyn();

		static void texSubImage2D( ::lime::_internal::backend::native::NativeOpenGLRenderContext this1,int target,int level,int xoffset,int yoffset,int width,int height,int format,int type, ::lime::utils::ArrayBufferView srcData,::hx::Null< int >  srcOffset);
		static ::Dynamic texSubImage2D_dyn();

		static void uniformMatrix2fv( ::lime::_internal::backend::native::NativeOpenGLRenderContext this1,int location,bool transpose, ::lime::utils::ArrayBufferView v);
		static ::Dynamic uniformMatrix2fv_dyn();

		static void uniformMatrix3fv( ::lime::_internal::backend::native::NativeOpenGLRenderContext this1,int location,bool transpose, ::lime::utils::ArrayBufferView v);
		static ::Dynamic uniformMatrix3fv_dyn();

		static void uniformMatrix4fv( ::lime::_internal::backend::native::NativeOpenGLRenderContext this1,int location,bool transpose, ::lime::utils::ArrayBufferView v);
		static ::Dynamic uniformMatrix4fv_dyn();

		static  ::lime::_internal::backend::native::NativeOpenGLRenderContext fromWebGL2RenderContext( ::lime::_internal::backend::native::NativeOpenGLRenderContext gl);
		static ::Dynamic fromWebGL2RenderContext_dyn();

		static  ::lime::_internal::backend::native::NativeOpenGLRenderContext fromRenderContext( ::lime::graphics::RenderContext context);
		static ::Dynamic fromRenderContext_dyn();

		static  ::lime::_internal::backend::native::NativeOpenGLRenderContext fromGL(::hx::Class gl);
		static ::Dynamic fromGL_dyn();

		static  ::lime::_internal::backend::native::NativeOpenGLRenderContext fromOpenGLES2Context( ::lime::_internal::backend::native::NativeOpenGLRenderContext gl);
		static ::Dynamic fromOpenGLES2Context_dyn();

		static  ::lime::_internal::backend::native::NativeOpenGLRenderContext fromOpenGLES3Context( ::lime::_internal::backend::native::NativeOpenGLRenderContext gl);
		static ::Dynamic fromOpenGLES3Context_dyn();

};

} // end namespace lime
} // end namespace graphics
} // end namespace _WebGLRenderContext

#endif /* INCLUDED_lime_graphics__WebGLRenderContext_WebGLRenderContext_Impl_ */ 
