#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MM_SHARED_VAD_FLAGS.Lock", lock, 0x0, 0x1, true, 0x3da09df94b123b24, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MM_SHARED_VAD_FLAGS.LockContended", lock_contended, 0x1, 0x1, true, 0x49ea3501c6e03ec, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MM_SHARED_VAD_FLAGS.DeleteInProgress", delete_in_progress, 0x2, 0x1, true, 0x2971ad975e52205d, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MM_SHARED_VAD_FLAGS.NoChange", no_change, 0x3, 0x1, true, 0xbef61782158acca1, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_MM_SHARED_VAD_FLAGS.VadType", vad_type, 0x4, 0x3, true, 0xa80bb61a716a598, 3, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_MM_SHARED_VAD_FLAGS.Protection", protection, 0x7, 0x5, true, 0xe4389974347e8f7a, 5, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint7_t), "_MM_SHARED_VAD_FLAGS.PreferredNode", preferred_node, 0xc, 0x6, true, 0x3688f9054d15e691, 0, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_MM_SHARED_VAD_FLAGS.PageSize", page_size, 0x12, 0x2, true, 0x5a7ee37b9f4d713d, 2, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MM_SHARED_VAD_FLAGS.PrivateMemoryAlwaysClear", private_memory_always_clear, 0x14, 0x1, true, 0x46c20bcf3b9b336, 1, uint32_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MM_SHARED_VAD_FLAGS.PrivateFixup", private_fixup, 0x15, 0x1, true, 0x38680a1b539b69c2, 1, uint32_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MM_SHARED_VAD_FLAGS.HotPatchAllowed", hot_patch_allowed, 0x16, 0x1, true, 0x92b71fc2aadf1684, 1, uint32_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_MM_SHARED_VAD_FLAGS.HotPatchState", hot_patch_state, 0x0, 0x0, false, 0x40be814f43511899, 2, uint32_t)
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
#endif