// Generated by Haxe 4.3.0-rc.1+
#ifndef INCLUDED_pixelimage_formats__Format_Format_Fields_
#define INCLUDED_pixelimage_formats__Format_Format_Fields_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(pixelimage,formats,_Format,Format_Fields_)

namespace pixelimage{
namespace formats{
namespace _Format{


class HXCPP_CLASS_ATTRIBUTES Format_Fields__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Format_Fields__obj OBJ_;
		Format_Fields__obj();

	public:
		enum { _hx_ClassId = 0x0da52f6d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="pixelimage.formats._Format.Format_Fields_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"pixelimage.formats._Format.Format_Fields_"); }

		inline static ::hx::ObjectPtr< Format_Fields__obj > __new() {
			::hx::ObjectPtr< Format_Fields__obj > __this = new Format_Fields__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Format_Fields__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Format_Fields__obj *__this = (Format_Fields__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Format_Fields__obj), false, "pixelimage.formats._Format.Format_Fields_"));
			*(void **)__this = Format_Fields__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Format_Fields__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Format_Fields_",7e,4f,a0,14); }

		static ::String get_dir();
		static ::Dynamic get_dir_dyn();

};

} // end namespace pixelimage
} // end namespace formats
} // end namespace _Format

#endif /* INCLUDED_pixelimage_formats__Format_Format_Fields_ */ 
