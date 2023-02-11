// Generated by Haxe 4.3.0-rc.1+
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_ArrayBufferViewImpl
#include <haxe/io/ArrayBufferViewImpl.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_pixelimage_ImageStruct
#include <pixelimage/ImageStruct.h>
#endif
#ifndef INCLUDED_pixelimage__Endian_Endian_Fields_
#include <pixelimage/_Endian/Endian_Fields_.h>
#endif
#ifndef INCLUDED_pixelimage__Pixelimage_Pixelimage_Impl_
#include <pixelimage/_Pixelimage/Pixelimage_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_561341fabfd75542_558_scaleUpInt,"pixelimage._Pixelimage.Pixelimage_Impl_","scaleUpInt",0x07783f30,"pixelimage._Pixelimage.Pixelimage_Impl_.scaleUpInt","pixelimage/Pixelimage.hx",558,0x794896ef)
namespace pixelimage{
namespace _Pixelimage{

void Pixelimage_Impl__obj::__construct() { }

Dynamic Pixelimage_Impl__obj::__CreateEmpty() { return new Pixelimage_Impl__obj; }

void *Pixelimage_Impl__obj::_hx_vtable = 0;

Dynamic Pixelimage_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Pixelimage_Impl__obj > _hx_result = new Pixelimage_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Pixelimage_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x42d3c4d0;
}

::pixelimage::ImageStruct Pixelimage_Impl__obj::scaleUpInt(::pixelimage::ImageStruct this1,::hx::Null< int >  __o_scaleW,::hx::Null< int >  __o_scaleH,::hx::Null< bool >  __o_transparent,::hx::Null< bool >  __o_includeMask){
            		int scaleW = __o_scaleW.Default(2);
            		int scaleH = __o_scaleH.Default(2);
            		bool transparent = __o_transparent.Default(false);
            		bool includeMask = __o_includeMask.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_561341fabfd75542_558_scaleUpInt)
HXLINE( 559)		int p = 0;
HXLINE( 560)		int xx = p;
HXLINE( 561)		int q = 0;
HXLINE( 562)		int wNew = ::Std_obj::_hx_int(( (Float)((this1->width * scaleW)) ));
HXLINE( 563)		int hNew = ::Std_obj::_hx_int(( (Float)((this1->height * scaleH)) ));
HXLINE( 564)		int size = (::Std_obj::_hx_int(( (Float)((wNew * hNew)) )) * 4);
HXDLIN( 564)		::haxe::io::ArrayBufferViewImpl this2 = ::haxe::io::ArrayBufferViewImpl_obj::__alloc( HX_CTX ,::haxe::io::Bytes_obj::alloc(size),0,size);
HXDLIN( 564)		::haxe::io::ArrayBufferViewImpl this3 = this2;
HXDLIN( 564)		::pixelimage::ImageStruct this4 = ::pixelimage::ImageStruct_obj::__alloc( HX_CTX ,wNew,hNew,this3);
HXDLIN( 564)		::pixelimage::ImageStruct pixelImage = this4;
HXLINE( 565)		int maxX = wNew;
HXLINE( 566)		int maxY = hNew;
HXLINE( 567)		while(true){
HXLINE( 568)			int x = ::Std_obj::_hx_int((( (Float)(p) ) / ( (Float)(scaleW) )));
HXDLIN( 568)			int y = ::Std_obj::_hx_int((( (Float)(q) ) / ( (Float)(scaleH) )));
HXDLIN( 568)			::haxe::io::ArrayBufferViewImpl this2 = this1->image;
HXDLIN( 568)			int index;
HXDLIN( 568)			if (this1->useVirtualPos) {
HXLINE( 568)				index = ::Std_obj::_hx_int(((((( (Float)(y) ) - this1->virtualY) * ( (Float)(this1->width) )) + x) - this1->virtualX));
            			}
            			else {
HXLINE( 568)				index = ::Std_obj::_hx_int(( (Float)(((y * this1->width) + x)) ));
            			}
HXDLIN( 568)			::haxe::io::Bytes _this = this2->bytes;
HXDLIN( 568)			int pos = ((index << 2) + this2->byteOffset);
HXDLIN( 568)			int c = (((( (int)(_this->b->__get(pos)) ) | (( (int)(_this->b->__get((pos + 1))) ) << 8)) | (( (int)(_this->b->__get((pos + 2))) ) << 16)) | (( (int)(_this->b->__get((pos + 3))) ) << 24));
HXDLIN( 568)			int color;
HXDLIN( 568)			if (::pixelimage::_Endian::Endian_Fields__obj::isLittleEndian) {
HXLINE( 568)				color = ((((((c >> 24) & 255) << 24) | ((c & 255) << 16)) | (((c >> 8) & 255) << 8)) | ((c >> 16) & 255));
            			}
            			else {
HXLINE( 568)				color = c;
            			}
HXLINE( 569)			{
HXLINE( 569)				p = (p + 1);
HXDLIN( 569)				int x1 = (p - 1);
HXDLIN( 569)				int this3 = color;
HXDLIN( 569)				int c1 = this3;
HXDLIN( 569)				bool _hx_tmp;
HXDLIN( 569)				if ((((c1 >> 24) & 255) < 254)) {
HXLINE( 569)					_hx_tmp = pixelImage->transparent;
            				}
            				else {
HXLINE( 569)					_hx_tmp = false;
            				}
HXDLIN( 569)				if (_hx_tmp) {
HXLINE( 569)					int location;
HXDLIN( 569)					if (pixelImage->useVirtualPos) {
HXLINE( 569)						location = ::Std_obj::_hx_int(((((( (Float)(q) ) - pixelImage->virtualY) * ( (Float)(pixelImage->width) )) + x1) - pixelImage->virtualX));
            					}
            					else {
HXLINE( 569)						location = ::Std_obj::_hx_int(( (Float)(((q * pixelImage->width) + x1)) ));
            					}
HXDLIN( 569)					::haxe::io::ArrayBufferViewImpl this1 = pixelImage->image;
HXDLIN( 569)					::haxe::io::Bytes _this = this1->bytes;
HXDLIN( 569)					int pos = ((location << 2) + this1->byteOffset);
HXDLIN( 569)					int this2 = (((( (int)(_this->b->__get(pos)) ) | (( (int)(_this->b->__get((pos + 1))) ) << 8)) | (( (int)(_this->b->__get((pos + 2))) ) << 16)) | (( (int)(_this->b->__get((pos + 3))) ) << 24));
HXDLIN( 569)					int this3 = this2;
HXDLIN( 569)					int this4;
HXDLIN( 569)					if (::pixelimage::_Endian::Endian_Fields__obj::isLittleEndian) {
HXLINE( 569)						this4 = ((((((this3 >> 24) & 255) << 24) | ((this3 & 255) << 16)) | (((this3 >> 8) & 255) << 8)) | ((this3 >> 16) & 255));
            					}
            					else {
HXLINE( 569)						this4 = this3;
            					}
HXDLIN( 569)					Float a1;
HXDLIN( 569)					int this5 = ((this4 >> 24) & 255);
HXDLIN( 569)					if ((this5 == 0)) {
HXLINE( 569)						a1 = ((Float)0.);
            					}
            					else {
HXLINE( 569)						a1 = (( (Float)(this5) ) / ( (Float)(255) ));
            					}
HXDLIN( 569)					Float r1;
HXDLIN( 569)					int this6 = ((this4 >> 16) & 255);
HXDLIN( 569)					if ((this6 == 0)) {
HXLINE( 569)						r1 = ((Float)0.);
            					}
            					else {
HXLINE( 569)						r1 = (( (Float)(this6) ) / ( (Float)(255) ));
            					}
HXDLIN( 569)					Float g1;
HXDLIN( 569)					int this7 = ((this4 >> 8) & 255);
HXDLIN( 569)					if ((this7 == 0)) {
HXLINE( 569)						g1 = ((Float)0.);
            					}
            					else {
HXLINE( 569)						g1 = (( (Float)(this7) ) / ( (Float)(255) ));
            					}
HXDLIN( 569)					Float b1;
HXDLIN( 569)					int this8 = (this4 & 255);
HXDLIN( 569)					if ((this8 == 0)) {
HXLINE( 569)						b1 = ((Float)0.);
            					}
            					else {
HXLINE( 569)						b1 = (( (Float)(this8) ) / ( (Float)(255) ));
            					}
HXDLIN( 569)					Float a2;
HXDLIN( 569)					int this9 = ((color >> 24) & 255);
HXDLIN( 569)					if ((this9 == 0)) {
HXLINE( 569)						a2 = ((Float)0.);
            					}
            					else {
HXLINE( 569)						a2 = (( (Float)(this9) ) / ( (Float)(255) ));
            					}
HXDLIN( 569)					Float r2;
HXDLIN( 569)					int this10 = ((color >> 16) & 255);
HXDLIN( 569)					if ((this10 == 0)) {
HXLINE( 569)						r2 = ((Float)0.);
            					}
            					else {
HXLINE( 569)						r2 = (( (Float)(this10) ) / ( (Float)(255) ));
            					}
HXDLIN( 569)					Float g2;
HXDLIN( 569)					int this11 = ((color >> 8) & 255);
HXDLIN( 569)					if ((this11 == 0)) {
HXLINE( 569)						g2 = ((Float)0.);
            					}
            					else {
HXLINE( 569)						g2 = (( (Float)(this11) ) / ( (Float)(255) ));
            					}
HXDLIN( 569)					Float b2;
HXDLIN( 569)					int this12 = (color & 255);
HXDLIN( 569)					if ((this12 == 0)) {
HXLINE( 569)						b2 = ((Float)0.);
            					}
            					else {
HXLINE( 569)						b2 = (( (Float)(this12) ) / ( (Float)(255) ));
            					}
HXDLIN( 569)					Float a3 = (a1 * (( (Float)(1) ) - a2));
HXDLIN( 569)					int r = ::Std_obj::_hx_int((( (Float)(255) ) * ((r1 * a3) + (r2 * a2))));
HXDLIN( 569)					int g = ::Std_obj::_hx_int((( (Float)(255) ) * ((g1 * a3) + (g2 * a2))));
HXDLIN( 569)					int b = ::Std_obj::_hx_int((( (Float)(255) ) * ((b1 * a3) + (b2 * a2))));
HXDLIN( 569)					int a = ::Std_obj::_hx_int((( (Float)(255) ) * (a3 + a2)));
HXDLIN( 569)					int blended = ((((a << 24) | (r << 16)) | (g << 8)) | b);
HXDLIN( 569)					{
HXLINE( 569)						::haxe::io::ArrayBufferViewImpl this13 = pixelImage->image;
HXDLIN( 569)						int value;
HXDLIN( 569)						if (::pixelimage::_Endian::Endian_Fields__obj::isLittleEndian) {
HXLINE( 569)							value = ((((((blended >> 24) & 255) << 24) | ((blended & 255) << 16)) | (((blended >> 8) & 255) << 8)) | ((blended >> 16) & 255));
            						}
            						else {
HXLINE( 569)							value = blended;
            						}
HXDLIN( 569)						bool _hx_tmp;
HXDLIN( 569)						if ((location >= 0)) {
HXLINE( 569)							_hx_tmp = (location < (this13->byteLength >> 2));
            						}
            						else {
HXLINE( 569)							_hx_tmp = false;
            						}
HXDLIN( 569)						if (_hx_tmp) {
HXLINE( 569)							::haxe::io::Bytes _this = this13->bytes;
HXDLIN( 569)							int pos = ((location << 2) + this13->byteOffset);
HXDLIN( 569)							_this->b[pos] = ( (unsigned char)(value) );
HXDLIN( 569)							_this->b[(pos + 1)] = ( (unsigned char)((value >> 8)) );
HXDLIN( 569)							_this->b[(pos + 2)] = ( (unsigned char)((value >> 16)) );
HXDLIN( 569)							_this->b[(pos + 3)] = ( (unsigned char)(::hx::UShr(value,24)) );
            						}
            					}
            				}
            				else {
HXLINE( 569)					::haxe::io::ArrayBufferViewImpl this1 = pixelImage->image;
HXDLIN( 569)					int index;
HXDLIN( 569)					if (pixelImage->useVirtualPos) {
HXLINE( 569)						index = ::Std_obj::_hx_int(((((( (Float)(q) ) - pixelImage->virtualY) * ( (Float)(pixelImage->width) )) + x1) - pixelImage->virtualX));
            					}
            					else {
HXLINE( 569)						index = ::Std_obj::_hx_int(( (Float)(((q * pixelImage->width) + x1)) ));
            					}
HXDLIN( 569)					int value;
HXDLIN( 569)					if (::pixelimage::_Endian::Endian_Fields__obj::isLittleEndian) {
HXLINE( 569)						value = ((((((c1 >> 24) & 255) << 24) | ((c1 & 255) << 16)) | (((c1 >> 8) & 255) << 8)) | ((c1 >> 16) & 255));
            					}
            					else {
HXLINE( 569)						value = c1;
            					}
HXDLIN( 569)					bool _hx_tmp;
HXDLIN( 569)					if ((index >= 0)) {
HXLINE( 569)						_hx_tmp = (index < (this1->byteLength >> 2));
            					}
            					else {
HXLINE( 569)						_hx_tmp = false;
            					}
HXDLIN( 569)					if (_hx_tmp) {
HXLINE( 569)						::haxe::io::Bytes _this = this1->bytes;
HXDLIN( 569)						int pos = ((index << 2) + this1->byteOffset);
HXDLIN( 569)						_this->b[pos] = ( (unsigned char)(value) );
HXDLIN( 569)						_this->b[(pos + 1)] = ( (unsigned char)((value >> 8)) );
HXDLIN( 569)						_this->b[(pos + 2)] = ( (unsigned char)((value >> 16)) );
HXDLIN( 569)						_this->b[(pos + 3)] = ( (unsigned char)(::hx::UShr(value,24)) );
            					}
            				}
            			}
HXLINE( 570)			if ((p > maxX)) {
HXLINE( 571)				p = xx;
HXLINE( 572)				q = (q + 1);
            			}
HXLINE( 574)			if ((q > maxY)) {
HXLINE( 574)				goto _hx_goto_0;
            			}
            		}
            		_hx_goto_0:;
HXLINE( 576)		bool _hx_tmp;
HXDLIN( 576)		if (::hx::IsNotNull( this1->mask )) {
HXLINE( 576)			_hx_tmp = includeMask;
            		}
            		else {
HXLINE( 576)			_hx_tmp = false;
            		}
HXDLIN( 576)		if (_hx_tmp) {
HXLINE( 577)			::pixelimage::ImageStruct v = ::pixelimage::_Pixelimage::Pixelimage_Impl__obj::scaleUpInt(this1->mask,scaleW,scaleH,this1->mask->transparent,includeMask);
HXDLIN( 577)			pixelImage->useMask = true;
HXDLIN( 577)			pixelImage->mask = v;
            		}
HXLINE( 579)		return pixelImage;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Pixelimage_Impl__obj,scaleUpInt,return )


Pixelimage_Impl__obj::Pixelimage_Impl__obj()
{
}

bool Pixelimage_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"scaleUpInt") ) { outValue = scaleUpInt_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Pixelimage_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Pixelimage_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class Pixelimage_Impl__obj::__mClass;

static ::String Pixelimage_Impl__obj_sStaticFields[] = {
	HX_("scaleUpInt",6a,36,55,c9),
	::String(null())
};

void Pixelimage_Impl__obj::__register()
{
	Pixelimage_Impl__obj _hx_dummy;
	Pixelimage_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("pixelimage._Pixelimage.Pixelimage_Impl_",e8,b5,71,1b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Pixelimage_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Pixelimage_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Pixelimage_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Pixelimage_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Pixelimage_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace pixelimage
} // end namespace _Pixelimage
