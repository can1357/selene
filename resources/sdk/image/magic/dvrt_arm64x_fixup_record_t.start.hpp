#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint12_t), "_IMAGE_DVRT_ARM64X_FIXUP_RECORD.Offset", offset, 0x0, 0x0, false, 0xcafeaaedcac0c817, 12, uint16_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_IMAGE_DVRT_ARM64X_FIXUP_RECORD.Type", type, 0x0, 0x0, false, 0xbc2ed66e3c61840b, 2, uint16_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_IMAGE_DVRT_ARM64X_FIXUP_RECORD.Size", size, 0x0, 0x0, false, 0x9a84b322959a0acf, 2, uint16_t)
#else
#define _m00
#define _m01
#define _m02
#endif