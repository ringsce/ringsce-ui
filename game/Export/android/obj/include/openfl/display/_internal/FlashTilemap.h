// Generated by Haxe 4.3.3
#ifndef INCLUDED_openfl_display__internal_FlashTilemap
#define INCLUDED_openfl_display__internal_FlashTilemap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,ITileContainer)
HX_DECLARE_CLASS2(openfl,display,Tile)
HX_DECLARE_CLASS2(openfl,display,TileContainer)
HX_DECLARE_CLASS2(openfl,display,Tilemap)
HX_DECLARE_CLASS2(openfl,display,Tileset)
HX_DECLARE_CLASS3(openfl,display,_internal,FlashTilemap)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace openfl{
namespace display{
namespace _internal{


class HXCPP_CLASS_ATTRIBUTES FlashTilemap_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlashTilemap_obj OBJ_;
		FlashTilemap_obj();

	public:
		enum { _hx_ClassId = 0x3ccf900c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display._internal.FlashTilemap")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.display._internal.FlashTilemap"); }

		inline static ::hx::ObjectPtr< FlashTilemap_obj > __new() {
			::hx::ObjectPtr< FlashTilemap_obj > __this = new FlashTilemap_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< FlashTilemap_obj > __alloc(::hx::Ctx *_hx_ctx) {
			FlashTilemap_obj *__this = (FlashTilemap_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlashTilemap_obj), false, "openfl.display._internal.FlashTilemap"));
			*(void **)__this = FlashTilemap_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlashTilemap_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlashTilemap",7e,44,35,46); }

		static void __boot();
		static  ::Dynamic __meta__;
		static  ::openfl::geom::ColorTransform alphaColorTransform;
		static  ::openfl::display::Bitmap bitmap;
		static  ::openfl::geom::Point destPoint;
		static  ::openfl::geom::Rectangle sourceRect;
		static void render( ::openfl::display::Tilemap tilemap);
		static ::Dynamic render_dyn();

		static void renderTileContainer( ::openfl::display::TileContainer group, ::openfl::display::BitmapData bitmapData, ::openfl::geom::Matrix parentTransform, ::openfl::display::Tileset defaultTileset,bool smooth,bool alphaEnabled,Float worldAlpha,bool colorTransformEnabled, ::openfl::geom::ColorTransform defaultColorTransform,bool blendModeEnabled, ::Dynamic defaultBlendMode, ::openfl::display::BitmapData cacheBitmapData);
		static ::Dynamic renderTileContainer_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _internal

#endif /* INCLUDED_openfl_display__internal_FlashTilemap */ 
