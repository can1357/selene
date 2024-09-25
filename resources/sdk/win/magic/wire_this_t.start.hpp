#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::wire_this_part1_t), "WireThis.part1", part1, 0x0, 0x0, true, 0x864a6493b7b172c1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::wire_extent_array_t), "WireThis.ea", ea, 0x100, 0x80, true, 0x8716d8621e119f36)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::wire_this_part1_t), "WireThis.c", c, 0x0, 0x0, false, 0x9d40baee9cd75867)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::wire_this_part2_t), "WireThis.d", d, 0x0, 0x0, false, 0xd5f8189e1e265d85)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif