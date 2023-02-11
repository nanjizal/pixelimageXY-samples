// Generated by Haxe 4.3.0-rc.1+
#ifndef INCLUDED_pixelimage_triangleGML_shape_PathElementShape
#define INCLUDED_pixelimage_triangleGML_shape_PathElementShape

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_pixelimage_triangleGML_coreShape_FillShape
#include <pixelimage/triangleGML/coreShape/FillShape.h>
#endif
#ifndef INCLUDED_justPath_ILinePathContext
#include <justPath/ILinePathContext.h>
#endif
HX_DECLARE_CLASS1(justPath,ILinePathContext)
HX_DECLARE_CLASS1(pixelimage,ImageStruct)
HX_DECLARE_CLASS3(pixelimage,triangleGML,coreShape,BasicShape)
HX_DECLARE_CLASS3(pixelimage,triangleGML,coreShape,FillShape)
HX_DECLARE_CLASS3(pixelimage,triangleGML,coreShape,GroupShape)
HX_DECLARE_CLASS3(pixelimage,triangleGML,coreShape,ShapeInterface)
HX_DECLARE_CLASS3(pixelimage,triangleGML,shape,PathElementShape)

namespace pixelimage{
namespace triangleGML{
namespace shape{


class HXCPP_CLASS_ATTRIBUTES PathElementShape_obj : public ::pixelimage::triangleGML::coreShape::FillShape_obj
{
	public:
		typedef ::pixelimage::triangleGML::coreShape::FillShape_obj super;
		typedef PathElementShape_obj OBJ_;
		PathElementShape_obj();

	public:
		enum { _hx_ClassId = 0x64a4cf4a };

		void __construct(::hx::Null< Float >  __o_opacity,::hx::Null< bool >  __o_visibility,::hx::Null< int >  __o_strokeColor,::hx::Null< Float >  __o_strokeWidth,::Array< ::String > strokeDashGapArray,::hx::Null< int >  __o_fill,::String __o_pathData,::hx::Null< Float >  __o_translateX,::hx::Null< Float >  __o_translateY,::hx::Null< Float >  __o_scaleX,::hx::Null< Float >  __o_scaleY);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="pixelimage.triangleGML.shape.PathElementShape")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"pixelimage.triangleGML.shape.PathElementShape"); }
		static ::hx::ObjectPtr< PathElementShape_obj > __new(::hx::Null< Float >  __o_opacity,::hx::Null< bool >  __o_visibility,::hx::Null< int >  __o_strokeColor,::hx::Null< Float >  __o_strokeWidth,::Array< ::String > strokeDashGapArray,::hx::Null< int >  __o_fill,::String __o_pathData,::hx::Null< Float >  __o_translateX,::hx::Null< Float >  __o_translateY,::hx::Null< Float >  __o_scaleX,::hx::Null< Float >  __o_scaleY);
		static ::hx::ObjectPtr< PathElementShape_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_opacity,::hx::Null< bool >  __o_visibility,::hx::Null< int >  __o_strokeColor,::hx::Null< Float >  __o_strokeWidth,::Array< ::String > strokeDashGapArray,::hx::Null< int >  __o_fill,::String __o_pathData,::hx::Null< Float >  __o_translateX,::hx::Null< Float >  __o_translateY,::hx::Null< Float >  __o_scaleX,::hx::Null< Float >  __o_scaleY);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PathElementShape_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("PathElementShape",2a,2c,8a,e3); }

		::String pathData;
		Float translateX;
		Float translateY;
		Float scaleX;
		Float scaleY;
		Float x0;
		Float y0;
		::pixelimage::ImageStruct temp;
		bool toggleDraw;
		 ::Dynamic info;
		void setParameter(::String name,::String value);

		::pixelimage::ImageStruct render(::pixelimage::ImageStruct pixelShape);

		void drawing();
		::Dynamic drawing_dyn();

		void lineSegmentTo(Float x2,Float y2);
		::Dynamic lineSegmentTo_dyn();

		void lineTo(Float x2,Float y2);
		::Dynamic lineTo_dyn();

		void moveTo(Float x1,Float y1);
		::Dynamic moveTo_dyn();

};

} // end namespace pixelimage
} // end namespace triangleGML
} // end namespace shape

#endif /* INCLUDED_pixelimage_triangleGML_shape_PathElementShape */ 
