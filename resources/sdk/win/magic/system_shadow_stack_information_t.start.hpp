#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_SHADOW_STACK_INFORMATION.Flags", flags, 0x0, 0x20, true, 0xe5352e8283a5088)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_SHADOW_STACK_INFORMATION.CetCapable", cet_capable, 0x0, 0x1, true, 0x90583aeebac47028, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_SHADOW_STACK_INFORMATION.UserCetAllowed", user_cet_allowed, 0x1, 0x1, true, 0x8299dc04d47cf155, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_SYSTEM_SHADOW_STACK_INFORMATION.ReservedForUserCet", reserved_for_user_cet, 0x2, 0x6, true, 0x5986a983bdb4c06, 6, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_SHADOW_STACK_INFORMATION.KernelCetEnabled", kernel_cet_enabled, 0x8, 0x1, true, 0x30001f8cecab4b3d, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint7_t), "_SYSTEM_SHADOW_STACK_INFORMATION.ReservedForKernelCet", reserved_for_kernel_cet, 0x9, 0x7, true, 0xb533a856c508932a, 0, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_SHADOW_STACK_INFORMATION.KernelCetAuditModeEnabled", kernel_cet_audit_mode_enabled, 0x0, 0x0, false, 0x231ec50bf0fa4448, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif