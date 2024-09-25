#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOWED_EXCEPTION_INFORMATION_HEADER.Size", size, 0x0, 0x20, true, 0x9eb78bf53f373421)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOWED_EXCEPTION_INFORMATION_HEADER.Signature", signature, 0x20, 0x20, true, 0xddc9c6042521f185)
#else
#define _m00
#define _m01
#endif