#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_MITIGATION_SIDE_CHANNEL_ISOLATION_POLICY.Flags", flags, 0x0, 0x20, true, 0xb3fdf19b844cca83)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_SIDE_CHANNEL_ISOLATION_POLICY.SmtBranchTargetIsolation", smt_branch_target_isolation, 0x0, 0x1, true, 0x99bf6adbb6cdfc6f, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_SIDE_CHANNEL_ISOLATION_POLICY.IsolateSecurityDomain", isolate_security_domain, 0x1, 0x1, true, 0x8a47bc4c804aec8a, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_SIDE_CHANNEL_ISOLATION_POLICY.DisablePageCombine", disable_page_combine, 0x2, 0x1, true, 0xe8726b73a253f798, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_SIDE_CHANNEL_ISOLATION_POLICY.SpeculativeStoreBypassDisable", speculative_store_bypass_disable, 0x3, 0x1, true, 0xff3c5cac1a0fad48, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif