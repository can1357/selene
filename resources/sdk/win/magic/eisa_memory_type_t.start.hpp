#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EISA_MEMORY_TYPE.ReadWrite", read_write, 0x0, 0x1, true, 0x46f7da208c0126d6, 1, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EISA_MEMORY_TYPE.Cached", cached, 0x1, 0x1, true, 0x15c99fe237bb897, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_EISA_MEMORY_TYPE.Type", type, 0x3, 0x2, true, 0xb9b52ce6c26db9d7, 2, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EISA_MEMORY_TYPE.Shared", shared, 0x5, 0x1, true, 0xa3cff9dd47779c8e, 1, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EISA_MEMORY_TYPE.MoreEntries", more_entries, 0x7, 0x1, true, 0xf2d14f92eef031be, 1, uint8_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif