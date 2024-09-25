#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ERROR_PACKET_FLAGS.PreviousError", previous_error, 0x0, 0x1, true, 0x20a5f2883c9dc935, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ERROR_PACKET_FLAGS.HypervisorError", hypervisor_error, 0x2, 0x1, true, 0x66522356705dfc3, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ERROR_PACKET_FLAGS.Simulated", simulated, 0x3, 0x1, true, 0xf80fe9e8a3e2b891, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ERROR_PACKET_FLAGS.PlatformPfaControl", platform_pfa_control, 0x4, 0x1, true, 0x54c117a84d55e38b, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ERROR_PACKET_FLAGS.PlatformDirectedOffline", platform_directed_offline, 0x5, 0x1, true, 0x7ac407ebefa9b689, 1, uint32_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ERROR_PACKET_FLAGS.AsULONG", as_ulong, 0x0, 0x20, true, 0x14ef2078a0f6562a)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ERROR_PACKET_FLAGS.CriticalEvent", critical_event, 0x1, 0x1, true, 0x4a1713a13b44bed7, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ERROR_PACKET_FLAGS.AddressTranslationRequired", address_translation_required, 0x6, 0x1, true, 0xe568f7471ec7ef2a, 1, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ERROR_PACKET_FLAGS.AddressTranslationCompleted", address_translation_completed, 0x7, 0x1, true, 0xf16589b1aec26f93, 1, uint32_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ERROR_PACKET_FLAGS.RecoveryOptional", recovery_optional, 0x8, 0x1, true, 0x1aa0feed71af3c8b, 1, uint32_t)
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