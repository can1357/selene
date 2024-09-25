#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::pointer_info_t), "tagPOINTER_PEN_INFO.pointerInfo", pointer_info, 0x0, 0x0, true, 0x55dd2dc63ddacb87)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagPOINTER_PEN_INFO.penFlags", pen_flags, 0x300, 0x20, true, 0x6cd7362d933674e5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagPOINTER_PEN_INFO.penMask", pen_mask, 0x320, 0x20, true, 0xc5999aad58da2ee8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagPOINTER_PEN_INFO.pressure", pressure, 0x340, 0x20, true, 0x4c0e56d52b5cec9c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagPOINTER_PEN_INFO.rotation", rotation, 0x360, 0x20, true, 0x3256e893ffd3753c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagPOINTER_PEN_INFO.tiltX", tilt_x, 0x380, 0x20, true, 0x6b4424f194f7f8f2)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagPOINTER_PEN_INFO.tiltY", tilt_y, 0x3a0, 0x20, true, 0x9a82423412d6b759)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif