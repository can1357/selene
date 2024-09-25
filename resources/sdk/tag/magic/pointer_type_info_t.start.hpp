#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagPOINTER_TYPE_INFO.type", type, 0x0, 0x20, true, 0xc92fc52f659e09c6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::pointer_touch_info_t), "tagPOINTER_TYPE_INFO.touchInfo", touch_info, 0x40, 0x80, true, 0x9b8590083ba2f1bd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::pointer_pen_info_t), "tagPOINTER_TYPE_INFO.penInfo", pen_info, 0x40, 0xc0, true, 0xde67653b3cb960cd)
#else
#define _m00
#define _m01
#define _m02
#endif