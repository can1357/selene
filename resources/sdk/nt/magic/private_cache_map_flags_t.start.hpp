#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_PRIVATE_CACHE_MAP_FLAGS.DontUse", dont_use, 0x0, 0x10, true, 0x5aa0ea40d1048934, 16, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PRIVATE_CACHE_MAP_FLAGS.ReadAheadActive", read_ahead_active, 0x10, 0x1, true, 0xb2f897348cc874c, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PRIVATE_CACHE_MAP_FLAGS.ReadAheadEnabled", read_ahead_enabled, 0x11, 0x1, true, 0x65516764cefb8a65, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PRIVATE_CACHE_MAP_FLAGS.PagePriority", page_priority, 0x12, 0x3, true, 0x3d594af7b973de93, 3, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PRIVATE_CACHE_MAP_FLAGS.PipelineReadAheads", pipeline_read_aheads, 0x15, 0x1, true, 0xa21400d22a83f502, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint10_t), "_PRIVATE_CACHE_MAP_FLAGS.Available", available, 0x16, 0xa, true, 0x7a579307cbbfd8d, 10, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif