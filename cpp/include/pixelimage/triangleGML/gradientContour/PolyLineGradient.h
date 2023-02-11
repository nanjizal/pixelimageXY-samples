// Generated by Haxe 4.3.0-rc.1+
#ifndef INCLUDED_pixelimage_triangleGML_gradientContour_PolyLineGradient
#define INCLUDED_pixelimage_triangleGML_gradientContour_PolyLineGradient

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_pixelimage_triangleGML_coreShape_BasicGradient
#include <pixelimage/triangleGML/coreShape/BasicGradient.h>
#endif
HX_DECLARE_CLASS1(pixelimage,ImageStruct)
HX_DECLARE_CLASS3(pixelimage,triangleGML,coreShape,BasicGradient)
HX_DECLARE_CLASS3(pixelimage,triangleGML,coreShape,GroupShape)
HX_DECLARE_CLASS3(pixelimage,triangleGML,coreShape,ShapeInterface)
HX_DECLARE_CLASS3(pixelimage,triangleGML,gradientContour,PolyLineGradient)

namespace pixelimage{
namespace triangleGML{
namespace gradientContour{


class HXCPP_CLASS_ATTRIBUTES PolyLineGradient_obj : public ::pixelimage::triangleGML::coreShape::BasicGradient_obj
{
	public:
		typedef ::pixelimage::triangleGML::coreShape::BasicGradient_obj super;
		typedef PolyLineGradient_obj OBJ_;
		PolyLineGradient_obj();

	public:
		enum { _hx_ClassId = 0x1c0b7691 };

		void __construct(::hx::Null< Float >  __o_opacity,::hx::Null< bool >  __o_visibility,::hx::Null< Float >  __o_strokeWidth,::Array< Float > points,::String __o_colorDirection,::Array< int > colors);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="pixelimage.triangleGML.gradientContour.PolyLineGradient")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"pixelimage.triangleGML.gradientContour.PolyLineGradient"); }
		static ::hx::ObjectPtr< PolyLineGradient_obj > __new(::hx::Null< Float >  __o_opacity,::hx::Null< bool >  __o_visibility,::hx::Null< Float >  __o_strokeWidth,::Array< Float > points,::String __o_colorDirection,::Array< int > colors);
		static ::hx::ObjectPtr< PolyLineGradient_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_opacity,::hx::Null< bool >  __o_visibility,::hx::Null< Float >  __o_strokeWidth,::Array< Float > points,::String __o_colorDirection,::Array< int > colors);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PolyLineGradient_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PolyLineGradient",90,0a,7f,2e); }

		::Array< Float > points;
		Float strokeWidth;
		::String colorDirection;
		void setParameter(::String name,::String value);

		::pixelimage::ImageStruct render(::pixelimage::ImageStruct pixelShape);

};

} // end namespace pixelimage
} // end namespace triangleGML
} // end namespace gradientContour

#endif /* INCLUDED_pixelimage_triangleGML_gradientContour_PolyLineGradient */ 
