#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MM_GRAPHICS_VAD_FLAGS.Lock", lock, 0x0, 0x1, true, 0x663c0d2a6b04f5e7, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MM_GRAPHICS_VAD_FLAGS.LockContended", lock_contended, 0x1, 0x1, true, 0x4b2dfad0f9ce2497, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MM_GRAPHICS_VAD_FLAGS.DeleteInProgress", delete_in_progress, 0x2, 0x1, true, 0x10bd3b6f6d744134, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MM_GRAPHICS_VAD_FLAGS.NoChange", no_change, 0x3, 0x1, true, 0x8cbc587d8a895ece, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_MM_GRAPHICS_VAD_FLAGS.VadType", vad_type, 0x4, 0x3, true, 0xc3f4f2dfaa26d051, 3, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_MM_GRAPHICS_VAD_FLAGS.Protection", protection, 0x7, 0x5, true, 0x36950cdca6b97af9, 5, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint7_t), "_MM_GRAPHICS_VAD_FLAGS.PreferredNode", preferred_node, 0xc, 0x6, true, 0xb393728c71e61436, 0, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_MM_GRAPHICS_VAD_FLAGS.PageSize", page_size, 0x12, 0x2, true, 0x9af91c2487347a10, 2, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MM_GRAPHICS_VAD_FLAGS.PrivateMemoryAlwaysSet", private_memory_always_set, 0x14, 0x1, true, 0x72effb73e2f8d64d, 1, uint32_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MM_GRAPHICS_VAD_FLAGS.WriteWatch", write_watch, 0x15, 0x1, true, 0x6b07b7651cff26a5, 1, uint32_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MM_GRAPHICS_VAD_FLAGS.FixedLargePageSize", fixed_large_page_size, 0x16, 0x1, true, 0x5370307080ec8384, 1, uint32_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MM_GRAPHICS_VAD_FLAGS.ZeroFillPagesOptional", zero_fill_pages_optional, 0x17, 0x1, true, 0xf1bf514612992f77, 1, uint32_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MM_GRAPHICS_VAD_FLAGS.GraphicsAlwaysSet", graphics_always_set, 0x18, 0x1, true, 0xc7b29b0163a07ebb, 1, uint32_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MM_GRAPHICS_VAD_FLAGS.GraphicsUseCoherentBus", graphics_use_coherent_bus, 0x19, 0x1, true, 0xf4d884db6781e688, 1, uint32_t)
#define _m14 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MM_GRAPHICS_VAD_FLAGS.GraphicsNoCache", graphics_no_cache, 0x1a, 0x1, true, 0xc63cf96f8495479, 1, uint32_t)
#define _m15 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_MM_GRAPHICS_VAD_FLAGS.GraphicsPageProtection", graphics_page_protection, 0x1b, 0x3, true, 0xdeff63cd4c59f2af, 3, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#endif