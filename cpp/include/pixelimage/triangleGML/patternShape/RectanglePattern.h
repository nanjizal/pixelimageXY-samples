// Generated by Haxe 4.3.0-rc.1+
#ifndef INCLUDED_pixelimage_triangleGML_patternShape_RectanglePattern
#define INCLUDED_pixelimage_triangleGML_patternShape_RectanglePattern

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_pixelimage_triangleGML_coreShape_PatternShape
#include <pixelimage/triangleGML/coreShape/PatternShape.h>
#endif
HX_DECLARE_CLASS1(pixelimage,ImageStruct)
HX_DECLARE_CLASS3(pixelimage,triangleGML,coreShape,BasicShape)
HX_DECLARE_CLASS3(pixelimage,triangleGML,coreShape,GroupShape)
HX_DECLARE_CLASS3(pixelimage,triangleGML,coreShape,PatternShape)
HX_DECLARE_CLASS3(pixelimage,triangleGML,coreShape,ShapeInterface)
HX_DECLARE_CLASS3(pixelimage,triangleGML,patternShape,RectanglePattern)

namespace pixelimage{
namespace triangleGML{
namespace patternShape{


class HXCPP_CLASS_ATTRIBUTES RectanglePattern_obj : public ::pixelimage::triangleGML::coreShape::PatternShape_obj
{
	public:
		typedef ::pixelimage::triangleGML::coreShape::PatternShape_obj super;
		typedef RectanglePattern_obj OBJ_;
		RectanglePattern_obj();

	public:
		enum { _hx_ClassId = 0x0aa075e7 };

		void __construct(::hx::Null< Float >  __o_opacity,::hx::Null< bool >  __o_visibility,::hx::Null< int >  __o_strokeColor,::hx::Null< Float >  __o_strokeWidth,::Array< ::String > strokeDashGapArray,::hx::Null< int >  __o_strokeColor0,::hx::Null< int >  __o_strokeColor1,::hx::Null< int >  __o_fillColor0,::hx::Null< int >  __o_fillColor1,::Array< bool > strokePatternFill, ::Dynamic strokePatternWidth, ::Dynamic strokePatternHeight,::hx::Null< bool >  __o_strokePatternAcross,::hx::Null< int >  __o_strokePatternScale,::Array< bool > fillPatternFill,::hx::Null< int >  __o_fillPatternWidth,::hx::Null< int >  __o_fillPatternHeight,::hx::Null< bool >  __o_fillPatternAcross,::hx::Null< int >  __o_fillPatternScale,::hx::Null< Float >  __o_left,::hx::Null< Float >  __o_top,::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height,::hx::Null< bool >  __o_rounded);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="pixelimage.triangleGML.patternShape.RectanglePattern")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"pixelimage.triangleGML.patternShape.RectanglePattern"); }
		static ::hx::ObjectPtr< RectanglePattern_obj > __new(::hx::Null< Float >  __o_opacity,::hx::Null< bool >  __o_visibility,::hx::Null< int >  __o_strokeColor,::hx::Null< Float >  __o_strokeWidth,::Array< ::String > strokeDashGapArray,::hx::Null< int >  __o_strokeColor0,::hx::Null< int >  __o_strokeColor1,::hx::Null< int >  __o_fillColor0,::hx::Null< int >  __o_fillColor1,::Array< bool > strokePatternFill, ::Dynamic strokePatternWidth, ::Dynamic strokePatternHeight,::hx::Null< bool >  __o_strokePatternAcross,::hx::Null< int >  __o_strokePatternScale,::Array< bool > fillPatternFill,::hx::Null< int >  __o_fillPatternWidth,::hx::Null< int >  __o_fillPatternHeight,::hx::Null< bool >  __o_fillPatternAcross,::hx::Null< int >  __o_fillPatternScale,::hx::Null< Float >  __o_left,::hx::Null< Float >  __o_top,::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height,::hx::Null< bool >  __o_rounded);
		static ::hx::ObjectPtr< RectanglePattern_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_opacity,::hx::Null< bool >  __o_visibility,::hx::Null< int >  __o_strokeColor,::hx::Null< Float >  __o_strokeWidth,::Array< ::String > strokeDashGapArray,::hx::Null< int >  __o_strokeColor0,::hx::Null< int >  __o_strokeColor1,::hx::Null< int >  __o_fillColor0,::hx::Null< int >  __o_fillColor1,::Array< bool > strokePatternFill, ::Dynamic strokePatternWidth, ::Dynamic strokePatternHeight,::hx::Null< bool >  __o_strokePatternAcross,::hx::Null< int >  __o_strokePatternScale,::Array< bool > fillPatternFill,::hx::Null< int >  __o_fillPatternWidth,::hx::Null< int >  __o_fillPatternHeight,::hx::Null< bool >  __o_fillPatternAcross,::hx::Null< int >  __o_fillPatternScale,::hx::Null< Float >  __o_left,::hx::Null< Float >  __o_top,::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height,::hx::Null< bool >  __o_rounded);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~RectanglePattern_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("RectanglePattern",01,aa,8b,8d); }

		Float left;
		Float top;
		Float width;
		Float height;
		bool rounded;
		void setParameter(::String name,::String value);

		::pixelimage::ImageStruct render(::pixelimage::ImageStruct pixelShape);

		void buildRectangles(::pixelimage::ImageStruct temp);
		::Dynamic buildRectangles_dyn();

};

} // end namespace pixelimage
} // end namespace triangleGML
} // end namespace patternShape

#endif /* INCLUDED_pixelimage_triangleGML_patternShape_RectanglePattern */ 
