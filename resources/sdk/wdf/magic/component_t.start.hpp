#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_Component.Signature", signature, 0x0, 0x0, false, 0xaff41b830839ac5b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_Component.Id", id, 0x0, 0x0, false, 0x101cb6f8cd7fe337)
#else
#define _m00
#define _m01
#endif