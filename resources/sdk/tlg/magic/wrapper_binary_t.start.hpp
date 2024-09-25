#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const void const*), "_tlgWrapperBinary.Ptr", ptr, 0x0, 0x40, true, 0xfe1f280486d60556)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint16_t), "_tlgWrapperBinary.Size", size, 0x40, 0x10, true, 0x17c1c0840b1c09ed)
#else
#define _m00
#define _m01
#endif