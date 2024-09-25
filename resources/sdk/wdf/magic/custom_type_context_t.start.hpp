#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CUSTOM_TYPE_CONTEXT.Size", size, 0x0, 0x20, true, 0xf45bb2cafcf4047f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_CUSTOM_TYPE_CONTEXT.Data", data, 0x40, 0x40, true, 0x5da21911b7191ea0)
#else
#define _m00
#define _m01
#endif