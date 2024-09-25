#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint13_t), "_HEAP_VS_UNUSED_BYTES_INFO.UnusedBytes", unused_bytes, 0x0, 0xd, true, 0x359efa723ab49a3d, 13, uint16_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HEAP_VS_UNUSED_BYTES_INFO.LfhSubsegment", lfh_subsegment, 0xd, 0x1, true, 0x5b626f161b61e56a, 1, uint16_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HEAP_VS_UNUSED_BYTES_INFO.ExtraPresent", extra_present, 0xe, 0x1, true, 0xe21bbb21be6a1f06, 1, uint16_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HEAP_VS_UNUSED_BYTES_INFO.OneByteUnused", one_byte_unused, 0xf, 0x1, true, 0xa0e86a9199b8cc34, 1, uint16_t)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_HEAP_VS_UNUSED_BYTES_INFO.Bytes", bytes, 0x0, 0x10, true, 0xa64f916caca681e3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif