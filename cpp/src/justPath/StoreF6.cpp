// Generated by Haxe 4.3.0-rc.1+
#include <hxcpp.h>

#ifndef INCLUDED_justPath_StoreF6
#include <justPath/StoreF6.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_76c7ece0e329c4b8_3_new,"justPath.StoreF6","new",0xd1dd3aa6,"justPath.StoreF6.new","justPath/StoreF6.hx",3,0xf375c6cb)
HX_LOCAL_STACK_FRAME(_hx_pos_76c7ece0e329c4b8_26_push,"justPath.StoreF6","push",0xd114a4d4,"justPath.StoreF6.push","justPath/StoreF6.hx",26,0xf375c6cb)
HX_LOCAL_STACK_FRAME(_hx_pos_76c7ece0e329c4b8_84_shift,"justPath.StoreF6","shift",0xd28ff448,"justPath.StoreF6.shift","justPath/StoreF6.hx",84,0xf375c6cb)
HX_LOCAL_STACK_FRAME(_hx_pos_76c7ece0e329c4b8_130_hasNext,"justPath.StoreF6","hasNext",0xa9d9aab3,"justPath.StoreF6.hasNext","justPath/StoreF6.hx",130,0xf375c6cb)
HX_LOCAL_STACK_FRAME(_hx_pos_76c7ece0e329c4b8_136_next,"justPath.StoreF6","next",0xcfb617ed,"justPath.StoreF6.next","justPath/StoreF6.hx",136,0xf375c6cb)
namespace justPath{

void StoreF6_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_76c7ece0e329c4b8_3_new)
HXLINE( 128)		this->count = 0;
HXLINE(   4)		this->l = 0;
            	}

Dynamic StoreF6_obj::__CreateEmpty() { return new StoreF6_obj; }

void *StoreF6_obj::_hx_vtable = 0;

Dynamic StoreF6_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StoreF6_obj > _hx_result = new StoreF6_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StoreF6_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7f7753e8;
}

void StoreF6_obj::push( ::Dynamic v){
            	HX_GC_STACKFRAME(&_hx_pos_76c7ece0e329c4b8_26_push)
HXLINE(  27)		switch((int)(this->l)){
            			case (int)0: {
HXLINE(  29)				this->s0 = v;
            			}
            			break;
            			case (int)1: {
HXLINE(  31)				this->s1 = v;
            			}
            			break;
            			case (int)2: {
HXLINE(  33)				this->s2 = v;
            			}
            			break;
            			case (int)3: {
HXLINE(  35)				this->s3 = v;
            			}
            			break;
            			case (int)4: {
HXLINE(  37)				this->s4 = v;
            			}
            			break;
            			case (int)5: {
HXLINE(  39)				this->s5 = v;
            			}
            			break;
            			default:{
HXLINE(  41)				if (::hx::IsNull( this->s6 )) {
HXLINE(  41)					this->s6 = ::justPath::StoreF6_obj::__alloc( HX_CTX );
            				}
HXLINE(  42)				this->s6->push(v);
            			}
            		}
HXLINE(  44)		this->l++;
            	}


HX_DEFINE_DYNAMIC_FUNC1(StoreF6_obj,push,(void))

 ::Dynamic StoreF6_obj::shift(){
            	HX_STACKFRAME(&_hx_pos_76c7ece0e329c4b8_84_shift)
HXLINE(  85)		 ::Dynamic out = this->s0;
HXLINE(  86)		if ((this->l != 0)) {
HXLINE(  87)			this->s0 = this->s1;
HXLINE(  88)			this->s1 = this->s2;
HXLINE(  89)			this->s2 = this->s3;
HXLINE(  90)			this->s3 = this->s4;
HXLINE(  91)			this->s4 = this->s5;
HXLINE(  92)			this->s5 = null();
HXLINE(  93)			if (::hx::IsNotNull( this->s6 )) {
HXLINE(  93)				this->s5 = this->s6->shift();
            			}
HXLINE(  94)			this->l--;
            		}
HXLINE(  96)		return out;
            	}


HX_DEFINE_DYNAMIC_FUNC0(StoreF6_obj,shift,return )

bool StoreF6_obj::hasNext(){
            	HX_STACKFRAME(&_hx_pos_76c7ece0e329c4b8_130_hasNext)
HXDLIN( 130)		return (this->count < (this->l + 1));
            	}


HX_DEFINE_DYNAMIC_FUNC0(StoreF6_obj,hasNext,return )

 ::Dynamic StoreF6_obj::next(){
            	HX_STACKFRAME(&_hx_pos_76c7ece0e329c4b8_136_next)
HXLINE( 137)		 ::Dynamic out = null();
HXLINE( 138)		switch((int)(this->count)){
            			case (int)0: {
HXLINE( 140)				out = this->s0;
            			}
            			break;
            			case (int)1: {
HXLINE( 142)				out = this->s1;
            			}
            			break;
            			case (int)2: {
HXLINE( 144)				out = this->s2;
            			}
            			break;
            			case (int)3: {
HXLINE( 146)				out = this->s3;
            			}
            			break;
            			case (int)4: {
HXLINE( 148)				out = this->s4;
            			}
            			break;
            			case (int)5: {
HXLINE( 150)				out = this->s5;
            			}
            			break;
            			default:{
HXLINE( 152)				out = this->s6->next();
            			}
            		}
HXLINE( 154)		this->count++;
HXLINE( 155)		return out;
            	}


HX_DEFINE_DYNAMIC_FUNC0(StoreF6_obj,next,return )


StoreF6_obj::StoreF6_obj()
{
}

void StoreF6_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StoreF6);
	HX_MARK_MEMBER_NAME(l,"l");
	HX_MARK_MEMBER_NAME(s0,"s0");
	HX_MARK_MEMBER_NAME(s1,"s1");
	HX_MARK_MEMBER_NAME(s2,"s2");
	HX_MARK_MEMBER_NAME(s3,"s3");
	HX_MARK_MEMBER_NAME(s4,"s4");
	HX_MARK_MEMBER_NAME(s5,"s5");
	HX_MARK_MEMBER_NAME(s6,"s6");
	HX_MARK_MEMBER_NAME(count,"count");
	HX_MARK_END_CLASS();
}

void StoreF6_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(l,"l");
	HX_VISIT_MEMBER_NAME(s0,"s0");
	HX_VISIT_MEMBER_NAME(s1,"s1");
	HX_VISIT_MEMBER_NAME(s2,"s2");
	HX_VISIT_MEMBER_NAME(s3,"s3");
	HX_VISIT_MEMBER_NAME(s4,"s4");
	HX_VISIT_MEMBER_NAME(s5,"s5");
	HX_VISIT_MEMBER_NAME(s6,"s6");
	HX_VISIT_MEMBER_NAME(count,"count");
}

::hx::Val StoreF6_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"l") ) { return ::hx::Val( l ); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"s0") ) { return ::hx::Val( s0 ); }
		if (HX_FIELD_EQ(inName,"s1") ) { return ::hx::Val( s1 ); }
		if (HX_FIELD_EQ(inName,"s2") ) { return ::hx::Val( s2 ); }
		if (HX_FIELD_EQ(inName,"s3") ) { return ::hx::Val( s3 ); }
		if (HX_FIELD_EQ(inName,"s4") ) { return ::hx::Val( s4 ); }
		if (HX_FIELD_EQ(inName,"s5") ) { return ::hx::Val( s5 ); }
		if (HX_FIELD_EQ(inName,"s6") ) { return ::hx::Val( s6 ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"push") ) { return ::hx::Val( push_dyn() ); }
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shift") ) { return ::hx::Val( shift_dyn() ); }
		if (HX_FIELD_EQ(inName,"count") ) { return ::hx::Val( count ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNext") ) { return ::hx::Val( hasNext_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val StoreF6_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"l") ) { l=inValue.Cast< int >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"s0") ) { s0=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s1") ) { s1=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s2") ) { s2=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s3") ) { s3=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s4") ) { s4=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s5") ) { s5=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s6") ) { s6=inValue.Cast< ::justPath::StoreF6 >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { count=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StoreF6_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("l",6c,00,00,00));
	outFields->push(HX_("s0",5d,64,00,00));
	outFields->push(HX_("s1",5e,64,00,00));
	outFields->push(HX_("s2",5f,64,00,00));
	outFields->push(HX_("s3",60,64,00,00));
	outFields->push(HX_("s4",61,64,00,00));
	outFields->push(HX_("s5",62,64,00,00));
	outFields->push(HX_("s6",63,64,00,00));
	outFields->push(HX_("count",cf,44,63,4a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo StoreF6_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(StoreF6_obj,l),HX_("l",6c,00,00,00)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(StoreF6_obj,s0),HX_("s0",5d,64,00,00)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(StoreF6_obj,s1),HX_("s1",5e,64,00,00)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(StoreF6_obj,s2),HX_("s2",5f,64,00,00)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(StoreF6_obj,s3),HX_("s3",60,64,00,00)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(StoreF6_obj,s4),HX_("s4",61,64,00,00)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(StoreF6_obj,s5),HX_("s5",62,64,00,00)},
	{::hx::fsObject /* ::justPath::StoreF6 */ ,(int)offsetof(StoreF6_obj,s6),HX_("s6",63,64,00,00)},
	{::hx::fsInt,(int)offsetof(StoreF6_obj,count),HX_("count",cf,44,63,4a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *StoreF6_obj_sStaticStorageInfo = 0;
#endif

static ::String StoreF6_obj_sMemberFields[] = {
	HX_("l",6c,00,00,00),
	HX_("s0",5d,64,00,00),
	HX_("s1",5e,64,00,00),
	HX_("s2",5f,64,00,00),
	HX_("s3",60,64,00,00),
	HX_("s4",61,64,00,00),
	HX_("s5",62,64,00,00),
	HX_("s6",63,64,00,00),
	HX_("push",da,11,61,4a),
	HX_("shift",82,ec,22,7c),
	HX_("count",cf,44,63,4a),
	HX_("hasNext",6d,a5,46,18),
	HX_("next",f3,84,02,49),
	::String(null()) };

::hx::Class StoreF6_obj::__mClass;

void StoreF6_obj::__register()
{
	StoreF6_obj _hx_dummy;
	StoreF6_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("justPath.StoreF6",b4,af,fd,2c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StoreF6_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StoreF6_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StoreF6_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StoreF6_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace justPath
