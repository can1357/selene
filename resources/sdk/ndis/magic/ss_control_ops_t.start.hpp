#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_SS_CONTROL_OPS.Oid", oid, 0x0, 0x0, false, 0x4478b3c99c6557ab, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_SS_CONTROL_OPS.Pause", pause, 0x0, 0x0, false, 0x21a71c4437944532, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_SS_CONTROL_OPS.Restart", restart, 0x0, 0x0, false, 0x2ecb060c4a3793e6, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_SS_CONTROL_OPS.Reset", reset, 0x0, 0x0, false, 0xb7ae9e5705a0152a, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_SS_CONTROL_OPS.CheckForHang", check_for_hang, 0x0, 0x0, false, 0x474ab102d7d9ec98, 1, uint32_t)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_SS_CONTROL_OPS.Value", value, 0x0, 0x0, false, 0x7ee9e7dc3dc73443)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif