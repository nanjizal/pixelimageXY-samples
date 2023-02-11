// Generated by Haxe 4.3.0-rc.1+
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_ArrayBufferViewImpl
#include <haxe/io/ArrayBufferViewImpl.h>
#endif
#ifndef INCLUDED_pixelimage_ImageStruct
#include <pixelimage/ImageStruct.h>
#endif
#ifndef INCLUDED_pixelimage__Endian_Endian_Fields_
#include <pixelimage/_Endian/Endian_Fields_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_caf7782e7e4e9a73_10_new,"pixelimage.ImageStruct","new",0x6343c589,"pixelimage.ImageStruct.new","pixelimage/ImageStruct.hx",10,0x14da9dc8)
namespace pixelimage{

void ImageStruct_obj::__construct(int width,int height,::haxe::io::ArrayBufferViewImpl image){
            	HX_STACKFRAME(&_hx_pos_caf7782e7e4e9a73_10_new)
HXLINE(  22)		this->useMask = false;
HXLINE(  20)		this->useVirtualPos = false;
HXLINE(  19)		this->virtualY = ((Float)0);
HXLINE(  18)		this->virtualX = ((Float)0);
HXLINE(  15)		this->transparent = false;
HXLINE(  24)		this->width = width;
HXLINE(  25)		this->height = height;
HXLINE(  26)		this->image = image;
HXLINE(  28)		this->isLittle = ::pixelimage::_Endian::Endian_Fields__obj::isLittleEndian;
HXLINE(  29)		this->transparent = false;
            	}

Dynamic ImageStruct_obj::__CreateEmpty() { return new ImageStruct_obj; }

void *ImageStruct_obj::_hx_vtable = 0;

Dynamic ImageStruct_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ImageStruct_obj > _hx_result = new ImageStruct_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool ImageStruct_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x71a74a3b;
}


::hx::ObjectPtr< ImageStruct_obj > ImageStruct_obj::__new(int width,int height,::haxe::io::ArrayBufferViewImpl image) {
	::hx::ObjectPtr< ImageStruct_obj > __this = new ImageStruct_obj();
	__this->__construct(width,height,image);
	return __this;
}

::hx::ObjectPtr< ImageStruct_obj > ImageStruct_obj::__alloc(::hx::Ctx *_hx_ctx,int width,int height,::haxe::io::ArrayBufferViewImpl image) {
	ImageStruct_obj *__this = (ImageStruct_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ImageStruct_obj), true, "pixelimage.ImageStruct"));
	*(void **)__this = ImageStruct_obj::_hx_vtable;
	__this->__construct(width,height,image);
	return __this;
}

ImageStruct_obj::ImageStruct_obj()
{
}

void ImageStruct_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ImageStruct);
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(image,"image");
	HX_MARK_MEMBER_NAME(transparent,"transparent");
	HX_MARK_MEMBER_NAME(isLittle,"isLittle");
	HX_MARK_MEMBER_NAME(virtualX,"virtualX");
	HX_MARK_MEMBER_NAME(virtualY,"virtualY");
	HX_MARK_MEMBER_NAME(useVirtualPos,"useVirtualPos");
	HX_MARK_MEMBER_NAME(mask,"mask");
	HX_MARK_MEMBER_NAME(useMask,"useMask");
	HX_MARK_END_CLASS();
}

void ImageStruct_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(image,"image");
	HX_VISIT_MEMBER_NAME(transparent,"transparent");
	HX_VISIT_MEMBER_NAME(isLittle,"isLittle");
	HX_VISIT_MEMBER_NAME(virtualX,"virtualX");
	HX_VISIT_MEMBER_NAME(virtualY,"virtualY");
	HX_VISIT_MEMBER_NAME(useVirtualPos,"useVirtualPos");
	HX_VISIT_MEMBER_NAME(mask,"mask");
	HX_VISIT_MEMBER_NAME(useMask,"useMask");
}

::hx::Val ImageStruct_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mask") ) { return ::hx::Val( mask ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( width ); }
		if (HX_FIELD_EQ(inName,"image") ) { return ::hx::Val( image ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( height ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"useMask") ) { return ::hx::Val( useMask ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isLittle") ) { return ::hx::Val( isLittle ); }
		if (HX_FIELD_EQ(inName,"virtualX") ) { return ::hx::Val( virtualX ); }
		if (HX_FIELD_EQ(inName,"virtualY") ) { return ::hx::Val( virtualY ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { return ::hx::Val( transparent ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"useVirtualPos") ) { return ::hx::Val( useVirtualPos ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ImageStruct_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mask") ) { mask=inValue.Cast< ::pixelimage::ImageStruct >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"image") ) { image=inValue.Cast< ::haxe::io::ArrayBufferViewImpl >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"useMask") ) { useMask=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isLittle") ) { isLittle=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"virtualX") ) { virtualX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"virtualY") ) { virtualY=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { transparent=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"useVirtualPos") ) { useVirtualPos=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ImageStruct_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("image",5b,1f,69,bd));
	outFields->push(HX_("transparent",52,2b,ba,22));
	outFields->push(HX_("isLittle",80,a0,0c,49));
	outFields->push(HX_("virtualX",ed,ab,58,18));
	outFields->push(HX_("virtualY",ee,ab,58,18));
	outFields->push(HX_("useVirtualPos",70,7f,30,99));
	outFields->push(HX_("mask",ec,40,56,48));
	outFields->push(HX_("useMask",d3,c8,01,57));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ImageStruct_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(ImageStruct_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsInt,(int)offsetof(ImageStruct_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsObject /* ::haxe::io::ArrayBufferViewImpl */ ,(int)offsetof(ImageStruct_obj,image),HX_("image",5b,1f,69,bd)},
	{::hx::fsBool,(int)offsetof(ImageStruct_obj,transparent),HX_("transparent",52,2b,ba,22)},
	{::hx::fsBool,(int)offsetof(ImageStruct_obj,isLittle),HX_("isLittle",80,a0,0c,49)},
	{::hx::fsFloat,(int)offsetof(ImageStruct_obj,virtualX),HX_("virtualX",ed,ab,58,18)},
	{::hx::fsFloat,(int)offsetof(ImageStruct_obj,virtualY),HX_("virtualY",ee,ab,58,18)},
	{::hx::fsBool,(int)offsetof(ImageStruct_obj,useVirtualPos),HX_("useVirtualPos",70,7f,30,99)},
	{::hx::fsObject /* ::pixelimage::ImageStruct */ ,(int)offsetof(ImageStruct_obj,mask),HX_("mask",ec,40,56,48)},
	{::hx::fsBool,(int)offsetof(ImageStruct_obj,useMask),HX_("useMask",d3,c8,01,57)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ImageStruct_obj_sStaticStorageInfo = 0;
#endif

static ::String ImageStruct_obj_sMemberFields[] = {
	HX_("width",06,b6,62,ca),
	HX_("height",e7,07,4c,02),
	HX_("image",5b,1f,69,bd),
	HX_("transparent",52,2b,ba,22),
	HX_("isLittle",80,a0,0c,49),
	HX_("virtualX",ed,ab,58,18),
	HX_("virtualY",ee,ab,58,18),
	HX_("useVirtualPos",70,7f,30,99),
	HX_("mask",ec,40,56,48),
	HX_("useMask",d3,c8,01,57),
	::String(null()) };

::hx::Class ImageStruct_obj::__mClass;

void ImageStruct_obj::__register()
{
	ImageStruct_obj _hx_dummy;
	ImageStruct_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("pixelimage.ImageStruct",17,4d,a6,e0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ImageStruct_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ImageStruct_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ImageStruct_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ImageStruct_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace pixelimage
