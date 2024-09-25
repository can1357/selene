#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MM_SESSION_SPACE_FLAGS.Initialized", initialized, 0x0, 0x1, true, 0xdbe589a970ee7db2, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MM_SESSION_SPACE_FLAGS.DeletePending", delete_pending, 0x1, 0x1, true, 0x6b0e417329a40ba4, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MM_SESSION_SPACE_FLAGS.WsInitialized", ws_initialized, 0x4, 0x1, true, 0xe09203be623b3d66, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MM_SESSION_SPACE_FLAGS.ObjectInitialized", object_initialized, 0x6, 0x1, true, 0xed6107e93019ce85, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint28_t), "_MM_SESSION_SPACE_FLAGS.Filler", filler, 0xa, 0x16, true, 0xa604ad80093434db, 0, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MM_SESSION_SPACE_FLAGS.PoolInitialized", pool_initialized, 0x2, 0x1, true, 0xa852c9a8f70c6a4b, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MM_SESSION_SPACE_FLAGS.DynamicVaInitialized", dynamic_va_initialized, 0x3, 0x1, true, 0xf4e1ff544b1da539, 1, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MM_SESSION_SPACE_FLAGS.PoolDestroyed", pool_destroyed, 0x5, 0x1, true, 0x8a9e38ee8f26377d, 1, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MM_SESSION_SPACE_FLAGS.LeakedPoolDeliberately", leaked_pool_deliberately, 0x9, 0x1, true, 0xd75b70aaa79d5d3f, 1, uint32_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MM_SESSION_SPACE_FLAGS.SessionHeapInitialized", session_heap_initialized, 0x7, 0x1, true, 0xd3a7cc2d746bad8d, 1, uint32_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MM_SESSION_SPACE_FLAGS.SessionHeapDestroyed", session_heap_destroyed, 0x8, 0x1, true, 0x4478f9e4061e2ae0, 1, uint32_t)
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
#endif