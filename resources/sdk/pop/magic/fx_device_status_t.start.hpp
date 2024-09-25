#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_POP_FX_DEVICE_STATUS.Value", value, 0x0, 0x20, true, 0xbe7cda11d58b00b2)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_POP_FX_DEVICE_STATUS.SystemTransition", system_transition, 0x0, 0x1, true, 0xc3da42c81602a13a, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_POP_FX_DEVICE_STATUS.PepD0Notify", pep_d0_notify, 0x1, 0x1, true, 0x616646d5d564217c, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_POP_FX_DEVICE_STATUS.IdleTimerOn", idle_timer_on, 0x2, 0x1, true, 0x610e5f42777b039b, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_POP_FX_DEVICE_STATUS.IgnoreIdleTimeout", ignore_idle_timeout, 0x3, 0x1, true, 0x34282b452a1e5414, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_POP_FX_DEVICE_STATUS.IrpInUse", irp_in_use, 0x4, 0x1, true, 0x526d18136f09ecfc, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_POP_FX_DEVICE_STATUS.IrpPending", irp_pending, 0x5, 0x1, true, 0x3347c9b11caee3ac, 1, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_POP_FX_DEVICE_STATUS.DPNRDeviceNotified", dpnr_device_notified, 0x6, 0x1, true, 0xf735bc6ac048740b, 1, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_POP_FX_DEVICE_STATUS.DPNRReceivedFromPep", dpnr_received_from_pep, 0x7, 0x1, true, 0x8986356fc9f3f1ca, 1, uint32_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_POP_FX_DEVICE_STATUS.IrpFirstPendingIndex", irp_first_pending_index, 0x8, 0x1, true, 0xb7e87ce3197bfc56, 1, uint32_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_POP_FX_DEVICE_STATUS.IrpLastPendingIndex", irp_last_pending_index, 0x9, 0x1, true, 0xa33625c5973d21e0, 1, uint32_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_POP_FX_DEVICE_STATUS.SIrpBlocked", s_irp_blocked, 0xa, 0x1, true, 0x9d9534e70d6e6339, 1, uint32_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_POP_FX_DEVICE_STATUS.BlockFastResume", block_fast_resume, 0xb, 0x1, true, 0x14825b86033690bf, 1, uint32_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_POP_FX_DEVICE_STATUS.DirectedPoweredDown", directed_powered_down, 0xc, 0x1, true, 0xdd56e20b3f01d022, 1, uint32_t)
#define _m14 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_POP_FX_DEVICE_STATUS.DirectedTransitionInProgress", directed_transition_in_progress, 0xd, 0x1, true, 0x32400606b85323c3, 1, uint32_t)
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