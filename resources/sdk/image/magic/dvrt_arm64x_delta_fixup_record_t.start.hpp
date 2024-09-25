#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint12_t), "_IMAGE_DVRT_ARM64X_DELTA_FIXUP_RECORD.Offset", offset, 0x0, 0x0, false, 0x4f3a16961206cdc7, 12, uint16_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_IMAGE_DVRT_ARM64X_DELTA_FIXUP_RECORD.Type", type, 0x0, 0x0, false, 0x439d16ab29971742, 2, uint16_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_IMAGE_DVRT_ARM64X_DELTA_FIXUP_RECORD.Sign", sign, 0x0, 0x0, false, 0x28fdc06e00d9d6ac, 1, uint16_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_IMAGE_DVRT_ARM64X_DELTA_FIXUP_RECORD.Scale", scale, 0x0, 0x0, false, 0x8cde6dca9d25dea5, 1, uint16_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif