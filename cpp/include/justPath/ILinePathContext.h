// Generated by Haxe 4.3.0-rc.1+
#ifndef INCLUDED_justPath_ILinePathContext
#define INCLUDED_justPath_ILinePathContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(justPath,ILinePathContext)

namespace justPath{


class HXCPP_CLASS_ATTRIBUTES ILinePathContext_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		void (::hx::Object :: *_hx_moveTo)(Float x,Float y); 
		static inline void moveTo( ::Dynamic _hx_,Float x,Float y) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::justPath::ILinePathContext_obj *>(_hx_.mPtr->_hx_getInterface(0x4fa789de)))->_hx_moveTo)(x,y);
		}
		void (::hx::Object :: *_hx_lineTo)(Float x,Float y); 
		static inline void lineTo( ::Dynamic _hx_,Float x,Float y) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::justPath::ILinePathContext_obj *>(_hx_.mPtr->_hx_getInterface(0x4fa789de)))->_hx_lineTo)(x,y);
		}
		void (::hx::Object :: *_hx_lineSegmentTo)(Float x,Float y); 
		static inline void lineSegmentTo( ::Dynamic _hx_,Float x,Float y) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::justPath::ILinePathContext_obj *>(_hx_.mPtr->_hx_getInterface(0x4fa789de)))->_hx_lineSegmentTo)(x,y);
		}
};

} // end namespace justPath

#endif /* INCLUDED_justPath_ILinePathContext */ 
