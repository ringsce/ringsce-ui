// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_IOErrorEvent
#include <openfl/events/IOErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c1a0d6ee9eb05388_106_new,"openfl.events.IOErrorEvent","new",0x69722dc1,"openfl.events.IOErrorEvent.new","openfl/events/IOErrorEvent.hx",106,0x9ba976af)
HX_LOCAL_STACK_FRAME(_hx_pos_c1a0d6ee9eb05388_110_clone,"openfl.events.IOErrorEvent","clone",0xfbdc4afe,"openfl.events.IOErrorEvent.clone","openfl/events/IOErrorEvent.hx",110,0x9ba976af)
HX_LOCAL_STACK_FRAME(_hx_pos_c1a0d6ee9eb05388_120_toString,"openfl.events.IOErrorEvent","toString",0xfbbd53ab,"openfl.events.IOErrorEvent.toString","openfl/events/IOErrorEvent.hx",120,0x9ba976af)
static const ::String _hx_array_data_1ffe394f_3[] = {
	HX_("type",ba,f2,08,4d),HX_("bubbles",67,bb,56,61),HX_("cancelable",14,a0,79,c4),HX_("text",ad,cc,f9,4c),HX_("errorID",a3,8d,0a,ea),
};
HX_LOCAL_STACK_FRAME(_hx_pos_c1a0d6ee9eb05388_37_boot,"openfl.events.IOErrorEvent","boot",0xd28edbb1,"openfl.events.IOErrorEvent.boot","openfl/events/IOErrorEvent.hx",37,0x9ba976af)
HX_LOCAL_STACK_FRAME(_hx_pos_c1a0d6ee9eb05388_56_boot,"openfl.events.IOErrorEvent","boot",0xd28edbb1,"openfl.events.IOErrorEvent.boot","openfl/events/IOErrorEvent.hx",56,0x9ba976af)
HX_LOCAL_STACK_FRAME(_hx_pos_c1a0d6ee9eb05388_74_boot,"openfl.events.IOErrorEvent","boot",0xd28edbb1,"openfl.events.IOErrorEvent.boot","openfl/events/IOErrorEvent.hx",74,0x9ba976af)
namespace openfl{
namespace events{

void IOErrorEvent_obj::__construct(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::String __o_text,::hx::Null< int >  __o_id){
            		bool bubbles = __o_bubbles.Default(true);
            		bool cancelable = __o_cancelable.Default(false);
            		::String text = __o_text;
            		if (::hx::IsNull(__o_text)) text = HX_("",00,00,00,00);
            		int id = __o_id.Default(0);
            	HX_STACKFRAME(&_hx_pos_c1a0d6ee9eb05388_106_new)
HXDLIN( 106)		super::__construct(type,bubbles,cancelable,text,id);
            	}

Dynamic IOErrorEvent_obj::__CreateEmpty() { return new IOErrorEvent_obj; }

void *IOErrorEvent_obj::_hx_vtable = 0;

Dynamic IOErrorEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< IOErrorEvent_obj > _hx_result = new IOErrorEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool IOErrorEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1ac076c5) {
		if (inClassId<=(int)0x08ec4c31) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x08ec4c31;
		} else {
			return inClassId==(int)0x1ac076c5;
		}
	} else {
		return inClassId==(int)0x27730e1f || inClassId==(int)0x53d8fde0;
	}
}

 ::openfl::events::Event IOErrorEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_c1a0d6ee9eb05388_110_clone)
HXLINE( 111)		 ::openfl::events::IOErrorEvent event =  ::openfl::events::IOErrorEvent_obj::__alloc( HX_CTX ,this->type,this->bubbles,this->cancelable,this->text,this->errorID);
HXLINE( 112)		event->target = this->target;
HXLINE( 113)		event->currentTarget = this->currentTarget;
HXLINE( 114)		event->eventPhase = this->eventPhase;
HXLINE( 115)		return event;
            	}


::String IOErrorEvent_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_c1a0d6ee9eb05388_120_toString)
HXDLIN( 120)		return this->_hx___formatToString(HX_("IOErrorEvent",b8,16,b3,65),::Array_obj< ::String >::fromData( _hx_array_data_1ffe394f_3,5));
            	}


::String IOErrorEvent_obj::IO_ERROR;

::String IOErrorEvent_obj::STANDARD_OUTPUT_IO_ERROR;

::String IOErrorEvent_obj::STANDARD_ERROR_IO_ERROR;


::hx::ObjectPtr< IOErrorEvent_obj > IOErrorEvent_obj::__new(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::String __o_text,::hx::Null< int >  __o_id) {
	::hx::ObjectPtr< IOErrorEvent_obj > __this = new IOErrorEvent_obj();
	__this->__construct(type,__o_bubbles,__o_cancelable,__o_text,__o_id);
	return __this;
}

::hx::ObjectPtr< IOErrorEvent_obj > IOErrorEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::String __o_text,::hx::Null< int >  __o_id) {
	IOErrorEvent_obj *__this = (IOErrorEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(IOErrorEvent_obj), true, "openfl.events.IOErrorEvent"));
	*(void **)__this = IOErrorEvent_obj::_hx_vtable;
	__this->__construct(type,__o_bubbles,__o_cancelable,__o_text,__o_id);
	return __this;
}

IOErrorEvent_obj::IOErrorEvent_obj()
{
}

::hx::Val IOErrorEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *IOErrorEvent_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo IOErrorEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &IOErrorEvent_obj::IO_ERROR,HX_("IO_ERROR",4f,7b,81,11)},
	{::hx::fsString,(void *) &IOErrorEvent_obj::STANDARD_OUTPUT_IO_ERROR,HX_("STANDARD_OUTPUT_IO_ERROR",4b,e3,c2,bc)},
	{::hx::fsString,(void *) &IOErrorEvent_obj::STANDARD_ERROR_IO_ERROR,HX_("STANDARD_ERROR_IO_ERROR",08,e8,b9,85)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String IOErrorEvent_obj_sMemberFields[] = {
	HX_("clone",5d,13,63,48),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

static void IOErrorEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IOErrorEvent_obj::IO_ERROR,"IO_ERROR");
	HX_MARK_MEMBER_NAME(IOErrorEvent_obj::STANDARD_OUTPUT_IO_ERROR,"STANDARD_OUTPUT_IO_ERROR");
	HX_MARK_MEMBER_NAME(IOErrorEvent_obj::STANDARD_ERROR_IO_ERROR,"STANDARD_ERROR_IO_ERROR");
};

#ifdef HXCPP_VISIT_ALLOCS
static void IOErrorEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IOErrorEvent_obj::IO_ERROR,"IO_ERROR");
	HX_VISIT_MEMBER_NAME(IOErrorEvent_obj::STANDARD_OUTPUT_IO_ERROR,"STANDARD_OUTPUT_IO_ERROR");
	HX_VISIT_MEMBER_NAME(IOErrorEvent_obj::STANDARD_ERROR_IO_ERROR,"STANDARD_ERROR_IO_ERROR");
};

#endif

::hx::Class IOErrorEvent_obj::__mClass;

static ::String IOErrorEvent_obj_sStaticFields[] = {
	HX_("IO_ERROR",4f,7b,81,11),
	HX_("STANDARD_OUTPUT_IO_ERROR",4b,e3,c2,bc),
	HX_("STANDARD_ERROR_IO_ERROR",08,e8,b9,85),
	::String(null())
};

void IOErrorEvent_obj::__register()
{
	IOErrorEvent_obj _hx_dummy;
	IOErrorEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.events.IOErrorEvent",4f,39,fe,1f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = IOErrorEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(IOErrorEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IOErrorEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< IOErrorEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = IOErrorEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = IOErrorEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = IOErrorEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void IOErrorEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_c1a0d6ee9eb05388_37_boot)
HXDLIN(  37)		IO_ERROR = HX_("ioError",02,fe,41,76);
            	}
{
            	HX_STACKFRAME(&_hx_pos_c1a0d6ee9eb05388_56_boot)
HXDLIN(  56)		STANDARD_OUTPUT_IO_ERROR = HX_("standardOutputIoError",84,ff,c2,39);
            	}
{
            	HX_STACKFRAME(&_hx_pos_c1a0d6ee9eb05388_74_boot)
HXDLIN(  74)		STANDARD_ERROR_IO_ERROR = HX_("standardErrorIoError",f7,cd,d0,a7);
            	}
}

} // end namespace openfl
} // end namespace events
