#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_MITIGATION_DYNAMIC_CODE_POLICY.Flags", flags, 0x0, 0x20, true, 0xf8be2aa66383bb38)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_DYNAMIC_CODE_POLICY.ProhibitDynamicCode", prohibit_dynamic_code, 0x0, 0x1, true, 0xd1bb6a5840082a7, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_DYNAMIC_CODE_POLICY.AllowThreadOptOut", allow_thread_opt_out, 0x1, 0x1, true, 0xebe8cadfab38755b, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_DYNAMIC_CODE_POLICY.AllowRemoteDowngrade", allow_remote_downgrade, 0x2, 0x1, true, 0x253c4f98a0f6ffe8, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_DYNAMIC_CODE_POLICY.AuditProhibitDynamicCode", audit_prohibit_dynamic_code, 0x3, 0x1, true, 0x364c368ea4fe4813, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif