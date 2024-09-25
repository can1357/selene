#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_HID_POFX_REF_TRACKER.RefTagFlags.Aslong", aslong, 0x0, 0x20, true, 0xb1b0b531371a1ab8)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "_HID_POFX_REF_TRACKER.RefTagFlags.FdoStateMachine", fdo_state_machine, 0x0, 0x1, true, 0x2d96a523d5ee145d, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "_HID_POFX_REF_TRACKER.RefTagFlags.PowerPolicyEngine", power_policy_engine, 0x1, 0x1, true, 0x383f20f9a39faad9, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "_HID_POFX_REF_TRACKER.RefTagFlags.ResetIdleTimer", reset_idle_timer, 0x2, 0x1, true, 0xb770c45b95dd111f, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "_HID_POFX_REF_TRACKER.RefTagFlags.Io", io, 0x3, 0x1, true, 0xa627e307db49940, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "_HID_POFX_REF_TRACKER.RefTagFlags.ClientRequest", client_request, 0x4, 0x1, true, 0x8a47e2bf211ec786, 1, uint32_t)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_ref_tag_flags_t), "_HID_POFX_REF_TRACKER.RefTagFlags", ref_tag_flags, 0x0, 0x20, true, 0xb72d35264e74f5b1)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_HID_POFX_REF_TRACKER.ResetIdleTimerRefCount", reset_idle_timer_ref_count, 0x20, 0x20, true, 0xc849993a7837929)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_HID_POFX_REF_TRACKER.IoRefCount", io_ref_count, 0x40, 0x20, true, 0x9197395f6e3acc)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_HID_POFX_REF_TRACKER.ClientRequestCount", client_request_count, 0x60, 0x20, true, 0x84c7862d786c9aa6)
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
#endif