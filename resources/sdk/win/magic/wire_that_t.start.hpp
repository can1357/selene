#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::wire_that_part1_t), "WireThat.part1", part1, 0x0, 0x40, true, 0x2cfd11c76950a0fe)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::wire_extent_array_t), "WireThat.ea", ea, 0x40, 0x80, true, 0xc05a7f18646d639c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::wire_that_part1_t), "WireThat.c", c, 0x0, 0x0, false, 0x8df372c453813e06)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::wire_that_part2_t), "WireThat.d", d, 0x0, 0x0, false, 0xa6daee91edd20263)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif