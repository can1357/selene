#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_MCG_CAP.CountField", count_field, 0x0, 0x8, true, 0x1c470a682b4fa80, 8, uint64_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MCG_CAP.ControlMsrPresent", control_msr_present, 0x8, 0x1, true, 0x102ca27f31b18568, 1, uint64_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MCG_CAP.ExtendedMsrsPresent", extended_msrs_present, 0x9, 0x1, true, 0x103fca829031eb, 1, uint64_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MCG_CAP.SignalingExtensionPresent", signaling_extension_present, 0xa, 0x1, true, 0x1b475f4d47d49eb7, 1, uint64_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MCG_CAP.ThresholdErrorStatusPresent", threshold_error_status_present, 0xb, 0x1, true, 0x855baf122914a483, 1, uint64_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_MCG_CAP.ExtendedRegisterCount", extended_register_count, 0x10, 0x8, true, 0x8028de479476b072, 8, uint64_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MCG_CAP.SoftwareErrorRecoverySupported", software_error_recovery_supported, 0x18, 0x1, true, 0xb2bd0767c927f50b, 1, uint64_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MCG_CAP.EnhancedMachineCheckCapability", enhanced_machine_check_capability, 0x19, 0x1, true, 0x2189a5052f59f3b8, 1, uint64_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MCG_CAP.ExtendedErrorLogging", extended_error_logging, 0x1a, 0x1, true, 0xa28b9001f34953a1, 1, uint64_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MCG_CAP.LocalMachineCheckException", local_machine_check_exception, 0x1b, 0x1, true, 0x91916c6256d71018, 1, uint64_t)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_MCG_CAP.QuadPart", quad_part, 0x0, 0x40, true, 0x19a7253e54b20f54)
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