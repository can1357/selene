#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_STORAGE_TIER_REGION.TierId", tier_id, 0x0, 0x80, true, 0xcb20f5b0b1d6f5e9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_STORAGE_TIER_REGION.Offset", offset, 0x80, 0x40, true, 0xa34f63cf10a1c199)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_STORAGE_TIER_REGION.Length", length, 0xc0, 0x40, true, 0x2049288359fcf08b)
#else
#define _m00
#define _m01
#define _m02
#endif