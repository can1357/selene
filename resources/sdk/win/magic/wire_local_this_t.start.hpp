#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::wire_local_this_part1_t), "WireLocalThis.part1", part1, 0x0, 0x0, true, 0xe80d67f0e41f0239)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::wire_array_of_touched_astas_t), "WireLocalThis.touchedAstas", touched_astas, 0x300, 0x80, true, 0x8ad32c651ab618ce)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::wire_local_this_part1_t), "WireLocalThis.c", c, 0x0, 0x0, false, 0xe9075e3e06a22e5a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::wire_local_this_part2_t), "WireLocalThis.d", d, 0x0, 0x0, false, 0x55ec14f2eb17669e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif