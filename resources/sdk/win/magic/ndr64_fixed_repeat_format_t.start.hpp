#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ndr64_repeat_format_t), "_NDR64_FIXED_REPEAT_FORMAT.RepeatFormat", repeat_format, 0x0, 0x80, true, 0xd02e3abcb64a8c3d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR64_FIXED_REPEAT_FORMAT.Iterations", iterations, 0x80, 0x20, true, 0xbba9e03abc14321d)
#else
#define _m00
#define _m01
#endif