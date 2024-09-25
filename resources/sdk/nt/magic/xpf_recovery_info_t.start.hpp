#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_XPF_RECOVERY_INFO.FailureReason.NotSupported", not_supported, 0x0, 0x0, false, 0xb18c07ae6e5fb252, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_XPF_RECOVERY_INFO.FailureReason.Overflow", overflow, 0x0, 0x0, false, 0xfc93a57fd8f05677, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_XPF_RECOVERY_INFO.FailureReason.ContextCorrupt", context_corrupt, 0x0, 0x0, false, 0xc6c2833ee98aa3cc, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_XPF_RECOVERY_INFO.FailureReason.RestartIpErrorIpNotValid", restart_ip_error_ip_not_valid, 0x0, 0x0, false, 0xda6cc22bb08b07e1, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_XPF_RECOVERY_INFO.FailureReason.NoRecoveryContext", no_recovery_context, 0x0, 0x0, false, 0x2af681716a4ee50e, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_XPF_RECOVERY_INFO.FailureReason.MiscOrAddrNotValid", misc_or_addr_not_valid, 0x0, 0x0, false, 0x811c0736b7e9df4, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_XPF_RECOVERY_INFO.FailureReason.InvalidAddressMode", invalid_address_mode, 0x0, 0x0, false, 0xfe562e56e4baf107, 1, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_XPF_RECOVERY_INFO.FailureReason.HighIrql", high_irql, 0x0, 0x0, false, 0xf3ae89b963ad04b1, 1, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_XPF_RECOVERY_INFO.FailureReason.InterruptsDisabled", interrupts_disabled, 0x0, 0x0, false, 0x982af236f39e1a36, 1, uint32_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_XPF_RECOVERY_INFO.FailureReason.SwapBusy", swap_busy, 0x0, 0x0, false, 0x87288eed95b1377f, 1, uint32_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_XPF_RECOVERY_INFO.FailureReason.StackOverflow", stack_overflow, 0x0, 0x0, false, 0x7511d8d2598358ff, 1, uint32_t)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_failure_reason_t), "_XPF_RECOVERY_INFO.FailureReason", failure_reason, 0x0, 0x0, false, 0x8375733f931ca60d)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_XPF_RECOVERY_INFO.Action.RecoveryAttempted", recovery_attempted, 0x0, 0x0, false, 0x68cad84114065ed4, 1, uint32_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_XPF_RECOVERY_INFO.Action.HvHandled", hv_handled, 0x0, 0x0, false, 0x74acca3929ae178e, 1, uint32_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_action_t), "_XPF_RECOVERY_INFO.Action", action, 0x0, 0x0, false, 0xbd90223d52a0cd2c)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_XPF_RECOVERY_INFO.ActionRequired", action_required, 0x0, 0x0, false, 0x98cf9a3b4a0e4b16)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_XPF_RECOVERY_INFO.RecoverySucceeded", recovery_succeeded, 0x0, 0x0, false, 0x897193dfbe578867)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_XPF_RECOVERY_INFO.RecoveryKernel", recovery_kernel, 0x0, 0x0, false, 0x51c5837344f04a5c)
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