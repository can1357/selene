#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_ex_t), "_MI_SUB64K_FREE_RANGES.BitMap", bit_map, 0x0, 0x80, true, 0x84ffe4d325bdbb81)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_MI_SUB64K_FREE_RANGES.ListEntry", list_entry, 0x80, 0x80, true, 0xb1302968abc243ec)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmvad_short_t*), "_MI_SUB64K_FREE_RANGES.Vad", vad, 0x100, 0x40, true, 0x452bd9a91ddb624a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_SUB64K_FREE_RANGES.SetBits", set_bits, 0x140, 0x20, true, 0xac46900b1e58884e)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_MI_SUB64K_FREE_RANGES.SubListIndex", sub_list_index, 0x180, 0x2, true, 0x18c696b600612219, 0, uint16_t,uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint30_t), "_MI_SUB64K_FREE_RANGES.Hint", hint, 0x182, 0x1e, true, 0xd53f800864e2a950, 0, uint16_t,uint32_t)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_SUB64K_FREE_RANGES.FullSetBits", full_set_bits, 0x160, 0x20, true, 0x464ff13ff0c58699)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif