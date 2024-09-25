#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const void const*), "_tlgWrapperPtrSize.Ptr", ptr, 0x0, 0x40, true, 0xdd537fc2a93bb3d4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint32_t), "_tlgWrapperPtrSize.Size", size, 0x40, 0x20, true, 0x6a363c2d3be0a1ff)
#else
#define _m00
#define _m01
#endif