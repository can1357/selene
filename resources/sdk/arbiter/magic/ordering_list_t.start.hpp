#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_ARBITER_ORDERING_LIST.Count", count, 0x0, 0x10, true, 0x3fe9d3e116c0bc0f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_ARBITER_ORDERING_LIST.Maximum", maximum, 0x10, 0x10, true, 0xda37420cb6036a05)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct arbiter::ordering_t*), "_ARBITER_ORDERING_LIST.Orderings", orderings, 0x40, 0x40, true, 0xf643e13ef2e71e66)
#else
#define _m00
#define _m01
#define _m02
#endif