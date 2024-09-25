#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MM_PRIVATE_VAD_FLAGS.Lock", lock, 0x0, 0x1, true, 0x3a4558eaf351cd7e, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MM_PRIVATE_VAD_FLAGS.LockContended", lock_contended, 0x1, 0x1, true, 0x44ad8e6c58918a44, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MM_PRIVATE_VAD_FLAGS.DeleteInProgress", delete_in_progress, 0x2, 0x1, true, 0x709a7c10030d4714, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MM_PRIVATE_VAD_FLAGS.NoChange", no_change, 0x3, 0x1, true, 0x9e0c43558f33eae5, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_MM_PRIVATE_VAD_FLAGS.VadType", vad_type, 0x4, 0x3, true, 0xb7734aa7a8b88eef, 3, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_MM_PRIVATE_VAD_FLAGS.Protection", protection, 0x7, 0x5, true, 0x3caa206740f70391, 5, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint7_t), "_MM_PRIVATE_VAD_FLAGS.PreferredNode", preferred_node, 0xc, 0x6, true, 0x11d8c1c5ca19b6cc, 0, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_MM_PRIVATE_VAD_FLAGS.PageSize", page_size, 0x12, 0x2, true, 0x50ca147ee4e8c53b, 2, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MM_PRIVATE_VAD_FLAGS.PrivateMemoryAlwaysSet", private_memory_always_set, 0x14, 0x1, true, 0xdeb6018799065623, 1, uint32_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MM_PRIVATE_VAD_FLAGS.WriteWatch", write_watch, 0x15, 0x1, true, 0xeb614c3ff050c0fd, 1, uint32_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MM_PRIVATE_VAD_FLAGS.FixedLargePageSize", fixed_large_page_size, 0x16, 0x1, true, 0x386d169112d8f459, 1, uint32_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MM_PRIVATE_VAD_FLAGS.ZeroFillPagesOptional", zero_fill_pages_optional, 0x17, 0x1, true, 0x123bf7e0d92efb3, 1, uint32_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MM_PRIVATE_VAD_FLAGS.Graphics", graphics, 0x18, 0x1, true, 0x271bc35ca4a8f438, 1, uint32_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MM_PRIVATE_VAD_FLAGS.Enclave", enclave, 0x19, 0x1, true, 0x7d791cbeeaef63b8, 1, uint32_t)
#define _m14 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MM_PRIVATE_VAD_FLAGS.ShadowStack", shadow_stack, 0x1a, 0x1, true, 0xd80d84496c309520, 1, uint32_t)
#define _m15 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MM_PRIVATE_VAD_FLAGS.PhysicalMemoryPfnsReferenced", physical_memory_pfns_referenced, 0x1b, 0x1, true, 0x362bda3058273199, 1, uint32_t)
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