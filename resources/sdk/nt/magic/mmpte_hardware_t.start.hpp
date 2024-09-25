#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPTE_HARDWARE.Valid", valid, 0x0, 0x1, true, 0x2f82e0ff342cc693, 1, uint64_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPTE_HARDWARE.Dirty1", dirty1, 0x1, 0x1, true, 0x1cf8783ba133e88c, 1, uint64_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPTE_HARDWARE.Owner", owner, 0x2, 0x1, true, 0x9eb6beb1d5473733, 1, uint64_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPTE_HARDWARE.WriteThrough", write_through, 0x3, 0x1, true, 0xd2b1cb0bee77af52, 1, uint64_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPTE_HARDWARE.CacheDisable", cache_disable, 0x4, 0x1, true, 0x8499925f8cda8b49, 1, uint64_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPTE_HARDWARE.Accessed", accessed, 0x5, 0x1, true, 0x4da58275207fa046, 1, uint64_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPTE_HARDWARE.Dirty", dirty, 0x6, 0x1, true, 0xb30def518c40b088, 1, uint64_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPTE_HARDWARE.LargePage", large_page, 0x7, 0x1, true, 0x6578c50d98d0960, 1, uint64_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPTE_HARDWARE.Global", global, 0x8, 0x1, true, 0xcc09b0408f0dd6a1, 1, uint64_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPTE_HARDWARE.CopyOnWrite", copy_on_write, 0x9, 0x1, true, 0x733952a01d14ed, 1, uint64_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPTE_HARDWARE.Write", write, 0xb, 0x1, true, 0xef00959e912c0f98, 1, uint64_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint40_t), "_MMPTE_HARDWARE.PageFrameNumber", page_frame_number, 0xc, 0x24, true, 0x287b0d98078cd62a, 0, uint64_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPTE_HARDWARE.NoExecute", no_execute, 0x3f, 0x1, true, 0x44369d0af2af4653, 1, uint64_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_MMPTE_HARDWARE.ReservedForSoftware", reserved_for_software, 0x34, 0x4, true, 0x9f2378dab2ce0231, 4, uint64_t)
#define _m14 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_MMPTE_HARDWARE.WsleAge", wsle_age, 0x38, 0x4, true, 0x31d9c5300777c05f, 4, uint64_t)
#define _m15 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_MMPTE_HARDWARE.WsleProtection", wsle_protection, 0x3c, 0x3, true, 0xc1fac90a01f1787d, 3, uint64_t)
#define _m16 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_MMPTE_HARDWARE.ReservedForHardware", reserved_for_hardware, 0x30, 0x4, true, 0xba38d2f0fc15bf66, 4, uint64_t)
#define _m17 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint11_t), "_MMPTE_HARDWARE.SoftwareWsIndex", software_ws_index, 0x0, 0x0, false, 0xa34318df9e0dfa0a, 11, uint64_t)
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
#define _m16
#define _m17
#endif