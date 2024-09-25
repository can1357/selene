#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_LOG_CONTROL.Revision", revision, 0x0, 0x20, true, 0x227560933a360861)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_LOG_CONTROL.Enable.CallMiniportBuildIo", call_miniport_build_io, 0x0, 0x1, true, 0x83201d5d75f3f645, 1, uint64_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_LOG_CONTROL.Enable.CallMiniportStartIo", call_miniport_start_io, 0x2, 0x1, true, 0x4df1043d3fdecc9f, 1, uint64_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_LOG_CONTROL.Enable.MiniportCompletion", miniport_completion, 0x3, 0x1, true, 0x85012b61e4849945, 1, uint64_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_LOG_CONTROL.Enable.RequestComplete", request_complete, 0x4, 0x1, true, 0x42624ef724dabd41, 1, uint64_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_LOG_CONTROL.Enable.SubmitRequest", submit_request, 0x5, 0x1, true, 0x4bbfd6d1993a32a5, 1, uint64_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_LOG_CONTROL.Enable.BadPractices", bad_practices, 0x6, 0x1, true, 0x11598eba96fbae2b, 1, uint64_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_LOG_CONTROL.Enable.PnpMain", pnp_main, 0x7, 0x1, true, 0x101ac55a7af6a6a8, 1, uint64_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_LOG_CONTROL.Enable.PowerMain", power_main, 0x8, 0x1, true, 0xf787a44af3b4c055, 1, uint64_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_LOG_CONTROL.Enable.PauseResumeBusy", pause_resume_busy, 0x9, 0x1, true, 0xc3e38d7259b1d830, 1, uint64_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_LOG_CONTROL.Enable.ResetTimeout", reset_timeout, 0xa, 0x1, true, 0xa9187d1ef9b68064, 1, uint64_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_LOG_CONTROL.Enable.Failure", failure, 0xb, 0x1, true, 0x916ae60b7fa7e9f9, 1, uint64_t)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_LOG_CONTROL.Enable.asUlong64", as_ulong64, 0x0, 0x40, true, 0x83415d918f22751a)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_LOG_CONTROL.Enable.SmrIo", smr_io, 0xc, 0x1, true, 0x61d031a1ae5efb89, 1, uint64_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_enable_t), "_RAID_LOG_CONTROL.Enable", enable, 0x40, 0x40, true, 0x54b988eeddd233d1)
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
#endif