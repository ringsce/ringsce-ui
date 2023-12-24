// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix3D
#include <openfl/geom/Matrix3D.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_geom_Transform
#include <openfl/geom/Transform.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c4822148baac23ea_164_new,"openfl.geom.Transform","new",0x993cc92a,"openfl.geom.Transform.new","openfl/geom/Transform.hx",164,0xf4f475e6)
HX_LOCAL_STACK_FRAME(_hx_pos_c4822148baac23ea_197_get_colorTransform,"openfl.geom.Transform","get_colorTransform",0xc8c832c8,"openfl.geom.Transform.get_colorTransform","openfl/geom/Transform.hx",197,0xf4f475e6)
HX_LOCAL_STACK_FRAME(_hx_pos_c4822148baac23ea_201_set_colorTransform,"openfl.geom.Transform","set_colorTransform",0xa577653c,"openfl.geom.Transform.set_colorTransform","openfl/geom/Transform.hx",201,0xf4f475e6)
HX_LOCAL_STACK_FRAME(_hx_pos_c4822148baac23ea_219_get_concatenatedMatrix,"openfl.geom.Transform","get_concatenatedMatrix",0x352d276f,"openfl.geom.Transform.get_concatenatedMatrix","openfl/geom/Transform.hx",219,0xf4f475e6)
HX_LOCAL_STACK_FRAME(_hx_pos_c4822148baac23ea_229_get_matrix,"openfl.geom.Transform","get_matrix",0x80c3ba80,"openfl.geom.Transform.get_matrix","openfl/geom/Transform.hx",229,0xf4f475e6)
HX_LOCAL_STACK_FRAME(_hx_pos_c4822148baac23ea_239_set_matrix,"openfl.geom.Transform","set_matrix",0x844158f4,"openfl.geom.Transform.set_matrix","openfl/geom/Transform.hx",239,0xf4f475e6)
HX_LOCAL_STACK_FRAME(_hx_pos_c4822148baac23ea_258_get_matrix3D,"openfl.geom.Transform","get_matrix3D",0x05078731,"openfl.geom.Transform.get_matrix3D","openfl/geom/Transform.hx",258,0xf4f475e6)
HX_LOCAL_STACK_FRAME(_hx_pos_c4822148baac23ea_271_set_matrix3D,"openfl.geom.Transform","set_matrix3D",0x1a00aaa5,"openfl.geom.Transform.set_matrix3D","openfl/geom/Transform.hx",271,0xf4f475e6)
HX_LOCAL_STACK_FRAME(_hx_pos_c4822148baac23ea_288___setTransform,"openfl.geom.Transform","__setTransform",0x9df9f800,"openfl.geom.Transform.__setTransform","openfl/geom/Transform.hx",288,0xf4f475e6)
namespace openfl{
namespace geom{

void Transform_obj::__construct( ::openfl::display::DisplayObject displayObject){
            	HX_GC_STACKFRAME(&_hx_pos_c4822148baac23ea_164_new)
HXLINE( 165)		this->_hx___colorTransform =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null());
HXLINE( 166)		this->concatenatedColorTransform =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null());
HXLINE( 167)		this->pixelBounds =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE( 169)		this->_hx___displayObject = displayObject;
HXLINE( 170)		this->_hx___hasMatrix = true;
            	}

Dynamic Transform_obj::__CreateEmpty() { return new Transform_obj; }

void *Transform_obj::_hx_vtable = 0;

Dynamic Transform_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Transform_obj > _hx_result = new Transform_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Transform_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5a586a40;
}

 ::openfl::geom::ColorTransform Transform_obj::get_colorTransform(){
            	HX_STACKFRAME(&_hx_pos_c4822148baac23ea_197_get_colorTransform)
HXDLIN( 197)		return this->_hx___colorTransform->_hx___clone();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_colorTransform,return )

 ::openfl::geom::ColorTransform Transform_obj::set_colorTransform( ::openfl::geom::ColorTransform value){
            	HX_STACKFRAME(&_hx_pos_c4822148baac23ea_201_set_colorTransform)
HXLINE( 203)		if (!(this->_hx___colorTransform->_hx___equals(value,false))) {
HXLINE( 205)			this->_hx___colorTransform->_hx___copyFrom(value);
HXLINE( 207)			if (::hx::IsNotNull( value )) {
HXLINE( 209)				this->_hx___displayObject->set_alpha(value->alphaMultiplier);
            			}
HXLINE( 212)			{
HXLINE( 212)				 ::openfl::display::DisplayObject _this = this->_hx___displayObject;
HXDLIN( 212)				if (!(_this->_hx___renderDirty)) {
HXLINE( 212)					_this->_hx___renderDirty = true;
HXDLIN( 212)					_this->_hx___setParentRenderDirty();
            				}
            			}
            		}
HXLINE( 215)		return this->_hx___colorTransform;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_colorTransform,return )

 ::openfl::geom::Matrix Transform_obj::get_concatenatedMatrix(){
            	HX_STACKFRAME(&_hx_pos_c4822148baac23ea_219_get_concatenatedMatrix)
HXLINE( 220)		if (this->_hx___hasMatrix) {
HXLINE( 222)			return this->_hx___displayObject->_hx___getWorldTransform()->clone();
            		}
HXLINE( 225)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_concatenatedMatrix,return )

 ::openfl::geom::Matrix Transform_obj::get_matrix(){
            	HX_STACKFRAME(&_hx_pos_c4822148baac23ea_229_get_matrix)
HXLINE( 230)		if (this->_hx___hasMatrix) {
HXLINE( 232)			return this->_hx___displayObject->_hx___transform->clone();
            		}
HXLINE( 235)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_matrix,return )

 ::openfl::geom::Matrix Transform_obj::set_matrix( ::openfl::geom::Matrix value){
            	HX_STACKFRAME(&_hx_pos_c4822148baac23ea_239_set_matrix)
HXLINE( 240)		if (::hx::IsNull( value )) {
HXLINE( 242)			this->_hx___hasMatrix = false;
HXLINE( 243)			return null();
            		}
HXLINE( 246)		this->_hx___hasMatrix = true;
HXLINE( 247)		this->_hx___hasMatrix3D = false;
HXLINE( 249)		if (::hx::IsNotNull( this->_hx___displayObject )) {
HXLINE( 251)			this->_hx___setTransform(value->a,value->b,value->c,value->d,value->tx,value->ty);
            		}
HXLINE( 254)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_matrix,return )

 ::openfl::geom::Matrix3D Transform_obj::get_matrix3D(){
            	HX_GC_STACKFRAME(&_hx_pos_c4822148baac23ea_258_get_matrix3D)
HXLINE( 259)		if (this->_hx___hasMatrix3D) {
HXLINE( 261)			 ::openfl::geom::Matrix matrix = this->_hx___displayObject->_hx___transform;
HXLINE( 262)			int length = null();
HXDLIN( 262)			bool fixed = null();
HXDLIN( 262)			return  ::openfl::geom::Matrix3D_obj::__alloc( HX_CTX , ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length,fixed,::Array_obj< Float >::__new(16)->init(0,matrix->a)->init(1,matrix->b)->init(2,((Float)0.0))->init(3,((Float)0.0))->init(4,matrix->c)->init(5,matrix->d)->init(6,((Float)0.0))->init(7,((Float)0.0))->init(8,((Float)0.0))->init(9,((Float)0.0))->init(10,((Float)1.0))->init(11,((Float)0.0))->init(12,matrix->tx)->init(13,matrix->ty)->init(14,((Float)0.0))->init(15,((Float)1.0)),true));
            		}
HXLINE( 267)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_matrix3D,return )

 ::openfl::geom::Matrix3D Transform_obj::set_matrix3D( ::openfl::geom::Matrix3D value){
            	HX_STACKFRAME(&_hx_pos_c4822148baac23ea_271_set_matrix3D)
HXLINE( 272)		if (::hx::IsNull( value )) {
HXLINE( 274)			this->_hx___hasMatrix3D = false;
HXLINE( 275)			return null();
            		}
HXLINE( 278)		this->_hx___hasMatrix = false;
HXLINE( 279)		this->_hx___hasMatrix3D = true;
HXLINE( 281)		Float _hx_tmp = value->rawData->get(0);
HXDLIN( 281)		Float _hx_tmp1 = value->rawData->get(1);
HXDLIN( 281)		Float _hx_tmp2 = value->rawData->get(4);
HXDLIN( 281)		Float _hx_tmp3 = value->rawData->get(5);
HXDLIN( 281)		Float _hx_tmp4 = value->rawData->get(12);
HXDLIN( 281)		this->_hx___setTransform(_hx_tmp,_hx_tmp1,_hx_tmp2,_hx_tmp3,_hx_tmp4,value->rawData->get(13));
HXLINE( 283)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_matrix3D,return )

void Transform_obj::_hx___setTransform(Float a,Float b,Float c,Float d,Float tx,Float ty){
            	HX_STACKFRAME(&_hx_pos_c4822148baac23ea_288___setTransform)
HXDLIN( 288)		if (::hx::IsNotNull( this->_hx___displayObject )) {
HXLINE( 290)			 ::openfl::geom::Matrix transform = this->_hx___displayObject->_hx___transform;
HXLINE( 291)			bool _hx_tmp;
HXDLIN( 291)			bool _hx_tmp1;
HXDLIN( 291)			bool _hx_tmp2;
HXDLIN( 291)			bool _hx_tmp3;
HXDLIN( 291)			bool _hx_tmp4;
HXDLIN( 291)			if ((transform->a == a)) {
HXLINE( 291)				_hx_tmp4 = (transform->b == b);
            			}
            			else {
HXLINE( 291)				_hx_tmp4 = false;
            			}
HXDLIN( 291)			if (_hx_tmp4) {
HXLINE( 291)				_hx_tmp3 = (transform->c == c);
            			}
            			else {
HXLINE( 291)				_hx_tmp3 = false;
            			}
HXDLIN( 291)			if (_hx_tmp3) {
HXLINE( 291)				_hx_tmp2 = (transform->d == d);
            			}
            			else {
HXLINE( 291)				_hx_tmp2 = false;
            			}
HXDLIN( 291)			if (_hx_tmp2) {
HXLINE( 291)				_hx_tmp1 = (transform->tx == tx);
            			}
            			else {
HXLINE( 291)				_hx_tmp1 = false;
            			}
HXDLIN( 291)			if (_hx_tmp1) {
HXLINE( 291)				_hx_tmp = (transform->ty == ty);
            			}
            			else {
HXLINE( 291)				_hx_tmp = false;
            			}
HXDLIN( 291)			if (_hx_tmp) {
HXLINE( 293)				return;
            			}
HXLINE( 296)			Float scaleX = ((Float)0.0);
HXLINE( 297)			Float scaleY = ((Float)0.0);
HXLINE( 299)			if ((b == 0)) {
HXLINE( 301)				scaleX = a;
            			}
            			else {
HXLINE( 305)				scaleX = ::Math_obj::sqrt(((a * a) + (b * b)));
            			}
HXLINE( 308)			if ((c == 0)) {
HXLINE( 310)				scaleY = d;
            			}
            			else {
HXLINE( 314)				scaleY = ::Math_obj::sqrt(((c * c) + (d * d)));
            			}
HXLINE( 317)			this->_hx___displayObject->_hx___scaleX = scaleX;
HXLINE( 318)			this->_hx___displayObject->_hx___scaleY = scaleY;
HXLINE( 320)			Float rotation = (((( (Float)(180) ) / ::Math_obj::PI) * ::Math_obj::atan2(d,c)) - ( (Float)(90) ));
HXLINE( 322)			if ((rotation != this->_hx___displayObject->_hx___rotation)) {
HXLINE( 324)				this->_hx___displayObject->_hx___rotation = rotation;
HXLINE( 325)				Float radians = (rotation * (::Math_obj::PI / ( (Float)(180) )));
HXLINE( 326)				this->_hx___displayObject->_hx___rotationSine = ::Math_obj::sin(radians);
HXLINE( 327)				this->_hx___displayObject->_hx___rotationCosine = ::Math_obj::cos(radians);
            			}
HXLINE( 330)			transform->a = a;
HXLINE( 331)			transform->b = b;
HXLINE( 332)			transform->c = c;
HXLINE( 333)			transform->d = d;
HXLINE( 334)			transform->tx = tx;
HXLINE( 335)			transform->ty = ty;
HXLINE( 337)			this->_hx___displayObject->_hx___setTransformDirty();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC6(Transform_obj,_hx___setTransform,(void))


::hx::ObjectPtr< Transform_obj > Transform_obj::__new( ::openfl::display::DisplayObject displayObject) {
	::hx::ObjectPtr< Transform_obj > __this = new Transform_obj();
	__this->__construct(displayObject);
	return __this;
}

::hx::ObjectPtr< Transform_obj > Transform_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::display::DisplayObject displayObject) {
	Transform_obj *__this = (Transform_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Transform_obj), true, "openfl.geom.Transform"));
	*(void **)__this = Transform_obj::_hx_vtable;
	__this->__construct(displayObject);
	return __this;
}

Transform_obj::Transform_obj()
{
}

void Transform_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Transform);
	HX_MARK_MEMBER_NAME(concatenatedColorTransform,"concatenatedColorTransform");
	HX_MARK_MEMBER_NAME(pixelBounds,"pixelBounds");
	HX_MARK_MEMBER_NAME(_hx___colorTransform,"__colorTransform");
	HX_MARK_MEMBER_NAME(_hx___displayObject,"__displayObject");
	HX_MARK_MEMBER_NAME(_hx___hasMatrix,"__hasMatrix");
	HX_MARK_MEMBER_NAME(_hx___hasMatrix3D,"__hasMatrix3D");
	HX_MARK_END_CLASS();
}

void Transform_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(concatenatedColorTransform,"concatenatedColorTransform");
	HX_VISIT_MEMBER_NAME(pixelBounds,"pixelBounds");
	HX_VISIT_MEMBER_NAME(_hx___colorTransform,"__colorTransform");
	HX_VISIT_MEMBER_NAME(_hx___displayObject,"__displayObject");
	HX_VISIT_MEMBER_NAME(_hx___hasMatrix,"__hasMatrix");
	HX_VISIT_MEMBER_NAME(_hx___hasMatrix3D,"__hasMatrix3D");
}

::hx::Val Transform_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_matrix() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"matrix3D") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_matrix3D() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_matrix") ) { return ::hx::Val( get_matrix_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_matrix") ) { return ::hx::Val( set_matrix_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pixelBounds") ) { return ::hx::Val( pixelBounds ); }
		if (HX_FIELD_EQ(inName,"__hasMatrix") ) { return ::hx::Val( _hx___hasMatrix ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_matrix3D") ) { return ::hx::Val( get_matrix3D_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_matrix3D") ) { return ::hx::Val( set_matrix3D_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__hasMatrix3D") ) { return ::hx::Val( _hx___hasMatrix3D ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_colorTransform() ); }
		if (HX_FIELD_EQ(inName,"__setTransform") ) { return ::hx::Val( _hx___setTransform_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__displayObject") ) { return ::hx::Val( _hx___displayObject ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__colorTransform") ) { return ::hx::Val( _hx___colorTransform ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"concatenatedMatrix") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_concatenatedMatrix() ); }
		if (HX_FIELD_EQ(inName,"get_colorTransform") ) { return ::hx::Val( get_colorTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_colorTransform") ) { return ::hx::Val( set_colorTransform_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_concatenatedMatrix") ) { return ::hx::Val( get_concatenatedMatrix_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"concatenatedColorTransform") ) { return ::hx::Val( concatenatedColorTransform ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Transform_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_matrix(inValue.Cast<  ::openfl::geom::Matrix >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"matrix3D") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_matrix3D(inValue.Cast<  ::openfl::geom::Matrix3D >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pixelBounds") ) { pixelBounds=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__hasMatrix") ) { _hx___hasMatrix=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__hasMatrix3D") ) { _hx___hasMatrix3D=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_colorTransform(inValue.Cast<  ::openfl::geom::ColorTransform >()) ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__displayObject") ) { _hx___displayObject=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__colorTransform") ) { _hx___colorTransform=inValue.Cast<  ::openfl::geom::ColorTransform >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"concatenatedColorTransform") ) { concatenatedColorTransform=inValue.Cast<  ::openfl::geom::ColorTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Transform_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("colorTransform",89,d7,3f,ad));
	outFields->push(HX_("concatenatedColorTransform",f8,e8,5a,77));
	outFields->push(HX_("concatenatedMatrix",b0,c0,9c,f8));
	outFields->push(HX_("matrix",41,36,c8,bb));
	outFields->push(HX_("matrix3D",32,35,f3,66));
	outFields->push(HX_("pixelBounds",9b,69,aa,d7));
	outFields->push(HX_("__colorTransform",a9,62,7f,e1));
	outFields->push(HX_("__displayObject",81,73,54,5e));
	outFields->push(HX_("__hasMatrix",1b,32,dd,2a));
	outFields->push(HX_("__hasMatrix3D",8c,5b,22,82));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Transform_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::geom::ColorTransform */ ,(int)offsetof(Transform_obj,concatenatedColorTransform),HX_("concatenatedColorTransform",f8,e8,5a,77)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(Transform_obj,pixelBounds),HX_("pixelBounds",9b,69,aa,d7)},
	{::hx::fsObject /*  ::openfl::geom::ColorTransform */ ,(int)offsetof(Transform_obj,_hx___colorTransform),HX_("__colorTransform",a9,62,7f,e1)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(Transform_obj,_hx___displayObject),HX_("__displayObject",81,73,54,5e)},
	{::hx::fsBool,(int)offsetof(Transform_obj,_hx___hasMatrix),HX_("__hasMatrix",1b,32,dd,2a)},
	{::hx::fsBool,(int)offsetof(Transform_obj,_hx___hasMatrix3D),HX_("__hasMatrix3D",8c,5b,22,82)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Transform_obj_sStaticStorageInfo = 0;
#endif

static ::String Transform_obj_sMemberFields[] = {
	HX_("concatenatedColorTransform",f8,e8,5a,77),
	HX_("pixelBounds",9b,69,aa,d7),
	HX_("__colorTransform",a9,62,7f,e1),
	HX_("__displayObject",81,73,54,5e),
	HX_("__hasMatrix",1b,32,dd,2a),
	HX_("__hasMatrix3D",8c,5b,22,82),
	HX_("get_colorTransform",52,b8,d9,48),
	HX_("set_colorTransform",c6,ea,88,25),
	HX_("get_concatenatedMatrix",f9,39,31,52),
	HX_("get_matrix",0a,a6,4f,ac),
	HX_("set_matrix",7e,44,cd,af),
	HX_("get_matrix3D",3b,e9,0c,1c),
	HX_("set_matrix3D",af,0c,06,31),
	HX_("__setTransform",8a,70,a3,8a),
	::String(null()) };

::hx::Class Transform_obj::__mClass;

void Transform_obj::__register()
{
	Transform_obj _hx_dummy;
	Transform_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.geom.Transform",38,ac,4a,e3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Transform_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Transform_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Transform_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Transform_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace geom
