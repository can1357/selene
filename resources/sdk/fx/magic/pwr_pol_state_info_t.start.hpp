#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPwrPolStateInfo.Bits.QueueOpen", queue_open, 0x0, 0x1, true, 0x7b9b4d6dbde86d06, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint31_t), "FxPwrPolStateInfo.Bits.KnownDroppedEvents", known_dropped_events, 0x1, 0x1f, true, 0x53028f3c90b854b8, 31, uint32_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_bits_t), "FxPwrPolStateInfo.Bits", bits, 0x0, 0x20, true, 0xd4453521447673aa)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPwrPolStateInfo.BitsByName.PwrPolStartKnown", pwr_pol_start_known, 0x1, 0x1, true, 0x968918ae901c9089, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPwrPolStateInfo.BitsByName.PwrPolStopKnown", pwr_pol_stop_known, 0x2, 0x1, true, 0x31b0b9c3d8dc9b9f, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPwrPolStateInfo.BitsByName.PwrPolSxKnown", pwr_pol_sx_known, 0x3, 0x1, true, 0xecbea574e98b45f8, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPwrPolStateInfo.BitsByName.PwrPolS0Known", pwr_pol_s0_known, 0x4, 0x1, true, 0xd8dce4d7bafc1c4, 1, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPwrPolStateInfo.BitsByName.PwrPolPowerDownKnown", pwr_pol_power_down_known, 0x5, 0x1, true, 0xf7ed7d58387fdd5d, 1, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPwrPolStateInfo.BitsByName.PwrPolPowerUpKnown", pwr_pol_power_up_known, 0x6, 0x1, true, 0xf3109e4ea5ddbf4f, 1, uint32_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPwrPolStateInfo.BitsByName.PwrPolPowerDownIoStoppedKnown", pwr_pol_power_down_io_stopped_known, 0x7, 0x1, true, 0x69a17e60fc404c01, 1, uint32_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPwrPolStateInfo.BitsByName.PwrPolPowerUpHwStartedKnown", pwr_pol_power_up_hw_started_known, 0x8, 0x1, true, 0xe4bbbc84c42d8b1e, 1, uint32_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPwrPolStateInfo.BitsByName.PwrPolWakeArrivedKnown", pwr_pol_wake_arrived_known, 0x9, 0x1, true, 0xf3f2ef6344b02c20, 1, uint32_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPwrPolStateInfo.BitsByName.PwrPolWakeSuccessKnown", pwr_pol_wake_success_known, 0xa, 0x1, true, 0xd65d4a46d72d3ba1, 1, uint32_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPwrPolStateInfo.BitsByName.PwrPolWakeFailedKnown", pwr_pol_wake_failed_known, 0xb, 0x1, true, 0x24d5596ec3192bb5, 1, uint32_t)
#define _m14 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPwrPolStateInfo.BitsByName.PwrPolIoPresentKnown", pwr_pol_io_present_known, 0xc, 0x1, true, 0x4e41e2a495150763, 1, uint32_t)
#define _m15 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPwrPolStateInfo.BitsByName.PwrPolPowerTimeoutExpiredKnown", pwr_pol_power_timeout_expired_known, 0xd, 0x1, true, 0x5528051a3db7817, 1, uint32_t)
#define _m16 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPwrPolStateInfo.BitsByName.PwrPolS0IdlePolicyChangedKnown", pwr_pol_s0_idle_policy_changed_known, 0xe, 0x1, true, 0x7263e5d3678cca2e, 1, uint32_t)
#define _m17 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPwrPolStateInfo.BitsByName.PwrPolSurpriseRemoveKnown", pwr_pol_surprise_remove_known, 0xf, 0x1, true, 0x2cf7e80bbf580414, 1, uint32_t)
#define _m18 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPwrPolStateInfo.BitsByName.PwrPolUsbSelectiveSuspendCallbackKnown", pwr_pol_usb_selective_suspend_callback_known, 0x10, 0x1, true, 0xe8a37f68e68b8cae, 1, uint32_t)
#define _m19 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPwrPolStateInfo.BitsByName.PwrPolUsbSelectiveSuspendCompletedKnown", pwr_pol_usb_selective_suspend_completed_known, 0x11, 0x1, true, 0xf52fcb43f12bdf29, 1, uint32_t)
#define _m20 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPwrPolStateInfo.BitsByName.PwrPolPowerDownFailedKnown", pwr_pol_power_down_failed_known, 0x12, 0x1, true, 0x5772d47351f74f7f, 1, uint32_t)
#define _m21 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPwrPolStateInfo.BitsByName.PwrPolPowerUpFailedKnown", pwr_pol_power_up_failed_known, 0x13, 0x1, true, 0x585ad3d1e08a0cc8, 1, uint32_t)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_bits_by_name_t), "FxPwrPolStateInfo.BitsByName", bits_by_name, 0x0, 0x20, true, 0x6ff7e4790187a805)
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
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#endif