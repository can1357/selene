#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_MITIGATION_USER_SHADOW_STACK_POLICY.Flags", flags, 0x0, 0x20, true, 0xb34f00f0d282a8e2)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_USER_SHADOW_STACK_POLICY.EnableUserShadowStack", enable_user_shadow_stack, 0x0, 0x1, true, 0xffd8a284b6fdf2b1, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_USER_SHADOW_STACK_POLICY.AuditUserShadowStack", audit_user_shadow_stack, 0x1, 0x1, true, 0x7bca701a94f1096, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_USER_SHADOW_STACK_POLICY.SetContextIpValidation", set_context_ip_validation, 0x2, 0x1, true, 0x84e0c54dbdf938c7, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_USER_SHADOW_STACK_POLICY.AuditSetContextIpValidation", audit_set_context_ip_validation, 0x3, 0x1, true, 0xe5408b33bb7ca841, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_USER_SHADOW_STACK_POLICY.EnableUserShadowStackStrictMode", enable_user_shadow_stack_strict_mode, 0x4, 0x1, true, 0xbf71c9812544cc24, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_USER_SHADOW_STACK_POLICY.BlockNonCetBinaries", block_non_cet_binaries, 0x5, 0x1, true, 0x288798c28c056d7, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_USER_SHADOW_STACK_POLICY.BlockNonCetBinariesNonEhcont", block_non_cet_binaries_non_ehcont, 0x6, 0x1, true, 0x89e73171ff93780, 1, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_USER_SHADOW_STACK_POLICY.AuditBlockNonCetBinaries", audit_block_non_cet_binaries, 0x7, 0x1, true, 0x5ea368826f53d68f, 1, uint32_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_USER_SHADOW_STACK_POLICY.CetDynamicApisOutOfProcOnly", cet_dynamic_apis_out_of_proc_only, 0x8, 0x1, true, 0x63ec3c36c66c3ef6, 1, uint32_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_USER_SHADOW_STACK_POLICY.SetContextIpValidationRelaxedMode", set_context_ip_validation_relaxed_mode, 0x9, 0x1, true, 0xd266c75f68fbb2e2, 1, uint32_t)
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