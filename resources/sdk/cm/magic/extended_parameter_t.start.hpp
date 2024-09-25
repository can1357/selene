#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "CM_EXTENDED_PARAMETER.Type", type, 0x0, 0x8, true, 0x50d397c311c58e7a, 8, uint64_t)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CM_EXTENDED_PARAMETER.ULong64", u_long64, 0x40, 0x40, true, 0x2b302ba53f601db0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "CM_EXTENDED_PARAMETER.Pointer", pointer, 0x40, 0x40, true, 0x5f0efae7da847bd)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CM_EXTENDED_PARAMETER.Size", size, 0x40, 0x40, true, 0x24c07ff459e079b8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "CM_EXTENDED_PARAMETER.Handle", handle, 0x40, 0x40, true, 0xed66613395a13a7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CM_EXTENDED_PARAMETER.ULong", u_long, 0x40, 0x20, true, 0x2bebbc82fed91690)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CM_EXTENDED_PARAMETER.AccessMask", access_mask, 0x40, 0x20, true, 0xad0188e73310d124)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif