#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PROCESS_DYNAMIC_EH_CONTINUATION_TARGETS_INFORMATION.NumberOfTargets", number_of_targets, 0x0, 0x10, true, 0xde2b3812aabf9534)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pprocess_dynamic_eh_continuation_target_t ), "_PROCESS_DYNAMIC_EH_CONTINUATION_TARGETS_INFORMATION.Targets", targets, 0x40, 0x40, true, 0xbdeebb096fb25fa)
#else
#define _m00
#define _m01
#endif