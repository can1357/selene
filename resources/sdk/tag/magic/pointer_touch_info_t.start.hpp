#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::pointer_info_t), "tagPOINTER_TOUCH_INFO.pointerInfo", pointer_info, 0x0, 0x0, true, 0xa3146942daeaa25c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagPOINTER_TOUCH_INFO.touchFlags", touch_flags, 0x300, 0x20, true, 0x8410c3ae933cf0e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagPOINTER_TOUCH_INFO.touchMask", touch_mask, 0x320, 0x20, true, 0xbe4de5b2ecbdfec2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "tagPOINTER_TOUCH_INFO.rcContact", rc_contact, 0x340, 0x80, true, 0x15d9c0ed89b94717)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "tagPOINTER_TOUCH_INFO.rcContactRaw", rc_contact_raw, 0x3c0, 0x80, true, 0x639e31579475d483)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagPOINTER_TOUCH_INFO.orientation", orientation, 0x440, 0x20, true, 0x70f5a19b60e27cf5)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagPOINTER_TOUCH_INFO.pressure", pressure, 0x460, 0x20, true, 0xf6fc6b3ec5e6cde0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif