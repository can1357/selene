#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPTE_TRANSITION.Valid", valid, 0x0, 0x1, true, 0xd9223b852b0c2687, 1, uint64_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPTE_TRANSITION.Write", write, 0x1, 0x1, true, 0x807bd3c090261be1, 1, uint64_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPTE_TRANSITION.IoTracker", io_tracker, 0x3, 0x1, true, 0xab8773d43a3a13c3, 1, uint64_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_MMPTE_TRANSITION.Protection", protection, 0x5, 0x5, true, 0x22070bb1ba298c0, 5, uint64_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPTE_TRANSITION.Prototype", prototype, 0xa, 0x1, true, 0x5c09bb1f93ec7bcc, 1, uint64_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPTE_TRANSITION.Transition", transition, 0xb, 0x1, true, 0x897fcd4ae6c9dc7c, 1, uint64_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint40_t), "_MMPTE_TRANSITION.PageFrameNumber", page_frame_number, 0xc, 0x24, true, 0x378f7775fcf8cf02, 0, uint64_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPTE_TRANSITION.SwizzleBit", swizzle_bit, 0x4, 0x1, true, 0xfc29adf44b4c45b6, 1, uint64_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPTE_TRANSITION.OnStandbyLookaside", on_standby_lookaside, 0x0, 0x0, false, 0xcd2d4bfe367933be, 1, uint64_t)
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
#endif