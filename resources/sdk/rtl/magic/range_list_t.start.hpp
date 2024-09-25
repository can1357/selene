#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_RTL_RANGE_LIST.ListHead", list_head, 0x0, 0x80, true, 0x365908141c68793e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_RANGE_LIST.Flags", flags, 0x80, 0x20, true, 0x924c9a1bbe3dcb9a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_RANGE_LIST.Count", count, 0xa0, 0x20, true, 0xd7024866de1cb337)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_RANGE_LIST.Stamp", stamp, 0xc0, 0x20, true, 0xdb3d18d6bab4d3ed)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif