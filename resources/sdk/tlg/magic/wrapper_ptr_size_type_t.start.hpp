#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const void const*), "_tlgWrapperPtrSizeType.Ptr", ptr, 0x0, 0x40, true, 0xf3bc6772d6e9be2b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint32_t), "_tlgWrapperPtrSizeType.Size", size, 0x40, 0x20, true, 0xd3b627306b3d7cb9)
#else
#define _m00
#define _m01
#endif