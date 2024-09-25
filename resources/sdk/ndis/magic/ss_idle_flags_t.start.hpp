#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_SS_IDLE_FLAGS.TimerRunning", timer_running, 0x0, 0x0, false, 0xc964ff57864cab1a, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_SS_IDLE_FLAGS.IdleWorkItemScheduled", idle_work_item_scheduled, 0x0, 0x0, false, 0x2058e6f1368ec04a, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_SS_IDLE_FLAGS.IdleRequestSubmitted", idle_request_submitted, 0x0, 0x0, false, 0xfcff97b1f4f3ae41, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_SS_IDLE_FLAGS.SuspendPowerIrpRequested", suspend_power_irp_requested, 0x0, 0x0, false, 0xc06b31b9d2dcd74c, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_SS_IDLE_FLAGS.DeviceSuspended", device_suspended, 0x0, 0x0, false, 0x861c1883f67c1e08, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_SS_IDLE_FLAGS.ResumePowerIrpRequested", resume_power_irp_requested, 0x0, 0x0, false, 0x341ee885087f64b7, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_SS_IDLE_FLAGS.CancelWorkItemScheduled", cancel_work_item_scheduled, 0x0, 0x0, false, 0xeb7769c66e967012, 1, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_SS_IDLE_FLAGS.IdleRequestCanceled", idle_request_canceled, 0x0, 0x0, false, 0xdd0fbcd14de1f244, 1, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_SS_IDLE_FLAGS.ForceIdleTransition", force_idle_transition, 0x0, 0x0, false, 0x5f292b998b599337, 1, uint32_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_SS_IDLE_FLAGS.Stopped", stopped, 0x0, 0x0, false, 0xe205680fa780d9cf, 1, uint32_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_SS_IDLE_FLAGS.DeviceGone", device_gone, 0x0, 0x0, false, 0xab4708f52497f8d1, 1, uint32_t)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_SS_IDLE_FLAGS.Value", value, 0x0, 0x0, false, 0x24dc961856459e19)
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