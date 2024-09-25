#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_FILE_STORAGE_TIER_REGION.TierId", tier_id, 0x0, 0x80, true, 0x90426e427732f99)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_FILE_STORAGE_TIER_REGION.Offset", offset, 0x80, 0x40, true, 0x8658c786f2685eb0)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_FILE_STORAGE_TIER_REGION.Length", length, 0xc0, 0x40, true, 0xfe54a87f4654c5d8)
#else
#define _m00
#define _m01
#define _m02
#endif