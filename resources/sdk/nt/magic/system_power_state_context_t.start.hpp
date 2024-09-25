#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_SYSTEM_POWER_STATE_CONTEXT.TargetSystemState", target_system_state, 0x8, 0x4, true, 0x4e67f04e1397d232, 4, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_SYSTEM_POWER_STATE_CONTEXT.EffectiveSystemState", effective_system_state, 0xc, 0x4, true, 0xfd60097d6a0f9714, 4, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_SYSTEM_POWER_STATE_CONTEXT.CurrentSystemState", current_system_state, 0x10, 0x4, true, 0xf9dc76ea16ac82e, 4, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_POWER_STATE_CONTEXT.IgnoreHibernationPath", ignore_hibernation_path, 0x14, 0x1, true, 0xbab59ce9759f890b, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_POWER_STATE_CONTEXT.PseudoTransition", pseudo_transition, 0x15, 0x1, true, 0x83904ee29e649e90, 1, uint32_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_POWER_STATE_CONTEXT.ContextAsUlong", context_as_ulong, 0x0, 0x20, true, 0xa911f0a9e7383a9)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_POWER_STATE_CONTEXT.KernelSoftReboot", kernel_soft_reboot, 0x16, 0x1, true, 0x9255dac57f7513ef, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_POWER_STATE_CONTEXT.DirectedDripsTransition", directed_drips_transition, 0x17, 0x1, true, 0x5dbf15d5f1779e7a, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif