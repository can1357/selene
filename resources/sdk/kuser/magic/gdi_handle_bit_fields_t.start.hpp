#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "GDIHandleBitFields.Index", index, 0x0, 0x10, true, 0xaf201bfb3516b880, 16, uint64_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "GDIHandleBitFields.Type", type, 0x10, 0x5, true, 0x56da0f8e6751caf1, 5, uint64_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "GDIHandleBitFields.AltType", alt_type, 0x15, 0x2, true, 0x88af32970352c44, 2, uint64_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "GDIHandleBitFields.Stock", stock, 0x17, 0x1, true, 0xf9ff43c7e04d08b3, 1, uint64_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "GDIHandleBitFields.Unique", unique, 0x18, 0x8, true, 0x82091b2c508ea4e8, 8, uint64_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif