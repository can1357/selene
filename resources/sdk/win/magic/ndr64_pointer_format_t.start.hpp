#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_POINTER_FORMAT.FormatCode", format_code, 0x0, 0x8, true, 0x7bc2ea5af56bcb3a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_POINTER_FORMAT.Flags", flags, 0x8, 0x8, true, 0x29beea2b75af330f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const void*), "_NDR64_POINTER_FORMAT.Pointee", pointee, 0x40, 0x40, true, 0xc9fe75e7f312c897)
#else
#define _m00
#define _m01
#define _m02
#endif