// Generated by Haxe 4.3.0-rc.1+
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_pixelimage_triangleGML_coreShape_BasicGradient
#include <pixelimage/triangleGML/coreShape/BasicGradient.h>
#endif
#ifndef INCLUDED_pixelimage_triangleGML_coreShape_GroupShape
#include <pixelimage/triangleGML/coreShape/GroupShape.h>
#endif
#ifndef INCLUDED_pixelimage_triangleGML_coreShape_ShapeInterface
#include <pixelimage/triangleGML/coreShape/ShapeInterface.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_45469d5e4f1e3ff3_6_new,"pixelimage.triangleGML.coreShape.BasicGradient","new",0x941b1f3b,"pixelimage.triangleGML.coreShape.BasicGradient.new","pixelimage/triangleGML/coreShape/BasicGradient.hx",6,0x7aa28a98)
HX_LOCAL_STACK_FRAME(_hx_pos_45469d5e4f1e3ff3_16_setParameter,"pixelimage.triangleGML.coreShape.BasicGradient","setParameter",0xd893736c,"pixelimage.triangleGML.coreShape.BasicGradient.setParameter","pixelimage/triangleGML/coreShape/BasicGradient.hx",16,0x7aa28a98)
namespace pixelimage{
namespace triangleGML{
namespace coreShape{

void BasicGradient_obj::__construct(::hx::Null< Float >  __o_opacity,::hx::Null< bool >  __o_visibility,::Array< int > cornerColors){
            		Float opacity = __o_opacity.Default(((Float)1.));
            		bool visibility = __o_visibility.Default(true);
            	HX_STACKFRAME(&_hx_pos_45469d5e4f1e3ff3_6_new)
HXLINE(   7)		this->cornerColors = ::Array_obj< int >::__new();
HXLINE(  12)		super::__construct(opacity,visibility);
HXLINE(  13)		if (::hx::IsNotNull( cornerColors )) {
HXLINE(  13)			this->cornerColors = cornerColors;
            		}
            	}

Dynamic BasicGradient_obj::__CreateEmpty() { return new BasicGradient_obj; }

void *BasicGradient_obj::_hx_vtable = 0;

Dynamic BasicGradient_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BasicGradient_obj > _hx_result = new BasicGradient_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool BasicGradient_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x24e92cfb) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x24e92cfb;
	} else {
		return inClassId==(int)0x68e012c5;
	}
}

void BasicGradient_obj::setParameter(::String name,::String value){
            	HX_STACKFRAME(&_hx_pos_45469d5e4f1e3ff3_16_setParameter)
HXDLIN(  16)		if ((name == HX_("cornerColors",65,87,ed,a2))) {
HXLINE(  18)			value = value.split(HX_("[",5b,00,00,00))->__get(1).split(HX_("]",5d,00,00,00))->__get(0);
HXLINE(  19)			::Array< int > _g = ::Array_obj< int >::__new(0);
HXDLIN(  19)			{
HXLINE(  19)				int _g1 = 0;
HXDLIN(  19)				::Array< ::String > _g2 = value.split(HX_(",",2c,00,00,00));
HXDLIN(  19)				while((_g1 < _g2->length)){
HXLINE(  19)					::String n = _g2->__get(_g1);
HXDLIN(  19)					_g1 = (_g1 + 1);
HXDLIN(  19)					_g->push(::Std_obj::parseInt(n));
            				}
            			}
HXDLIN(  19)			this->cornerColors = _g;
            		}
            		else {
HXLINE(  21)			this->super::setParameter(name,value);
            		}
            	}



::hx::ObjectPtr< BasicGradient_obj > BasicGradient_obj::__new(::hx::Null< Float >  __o_opacity,::hx::Null< bool >  __o_visibility,::Array< int > cornerColors) {
	::hx::ObjectPtr< BasicGradient_obj > __this = new BasicGradient_obj();
	__this->__construct(__o_opacity,__o_visibility,cornerColors);
	return __this;
}

::hx::ObjectPtr< BasicGradient_obj > BasicGradient_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_opacity,::hx::Null< bool >  __o_visibility,::Array< int > cornerColors) {
	BasicGradient_obj *__this = (BasicGradient_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BasicGradient_obj), true, "pixelimage.triangleGML.coreShape.BasicGradient"));
	*(void **)__this = BasicGradient_obj::_hx_vtable;
	__this->__construct(__o_opacity,__o_visibility,cornerColors);
	return __this;
}

BasicGradient_obj::BasicGradient_obj()
{
}

void BasicGradient_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BasicGradient);
	HX_MARK_MEMBER_NAME(cornerColors,"cornerColors");
	::pixelimage::triangleGML::coreShape::GroupShape_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BasicGradient_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cornerColors,"cornerColors");
	::pixelimage::triangleGML::coreShape::GroupShape_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val BasicGradient_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"cornerColors") ) { return ::hx::Val( cornerColors ); }
		if (HX_FIELD_EQ(inName,"setParameter") ) { return ::hx::Val( setParameter_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BasicGradient_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"cornerColors") ) { cornerColors=inValue.Cast< ::Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BasicGradient_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("cornerColors",65,87,ed,a2));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BasicGradient_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(BasicGradient_obj,cornerColors),HX_("cornerColors",65,87,ed,a2)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BasicGradient_obj_sStaticStorageInfo = 0;
#endif

static ::String BasicGradient_obj_sMemberFields[] = {
	HX_("cornerColors",65,87,ed,a2),
	HX_("setParameter",a7,f5,ff,6c),
	::String(null()) };

::hx::Class BasicGradient_obj::__mClass;

void BasicGradient_obj::__register()
{
	BasicGradient_obj _hx_dummy;
	BasicGradient_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("pixelimage.triangleGML.coreShape.BasicGradient",c9,65,3e,4a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BasicGradient_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BasicGradient_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BasicGradient_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BasicGradient_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace pixelimage
} // end namespace triangleGML
} // end namespace coreShape
