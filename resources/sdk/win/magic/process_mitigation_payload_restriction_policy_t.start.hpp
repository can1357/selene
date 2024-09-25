#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_MITIGATION_PAYLOAD_RESTRICTION_POLICY.Flags", flags, 0x0, 0x20, true, 0xe45ac71e845cf2cc)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_PAYLOAD_RESTRICTION_POLICY.EnableExportAddressFilter", enable_export_address_filter, 0x0, 0x1, true, 0xb98bf60c1d5fcd90, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_PAYLOAD_RESTRICTION_POLICY.AuditExportAddressFilter", audit_export_address_filter, 0x1, 0x1, true, 0x69399963e158d382, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_PAYLOAD_RESTRICTION_POLICY.EnableExportAddressFilterPlus", enable_export_address_filter_plus, 0x2, 0x1, true, 0xbae5b8971763aed4, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_PAYLOAD_RESTRICTION_POLICY.AuditExportAddressFilterPlus", audit_export_address_filter_plus, 0x3, 0x1, true, 0x816b8232762c5cc7, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_PAYLOAD_RESTRICTION_POLICY.EnableImportAddressFilter", enable_import_address_filter, 0x4, 0x1, true, 0x5542c8ec3175d731, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_PAYLOAD_RESTRICTION_POLICY.AuditImportAddressFilter", audit_import_address_filter, 0x5, 0x1, true, 0xcae5014c7b055d8, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_PAYLOAD_RESTRICTION_POLICY.EnableRopStackPivot", enable_rop_stack_pivot, 0x6, 0x1, true, 0xf6ee8da1dfe05e25, 1, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_PAYLOAD_RESTRICTION_POLICY.AuditRopStackPivot", audit_rop_stack_pivot, 0x7, 0x1, true, 0xfe506168d052ef90, 1, uint32_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_PAYLOAD_RESTRICTION_POLICY.EnableRopCallerCheck", enable_rop_caller_check, 0x8, 0x1, true, 0x246079439d41d473, 1, uint32_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_PAYLOAD_RESTRICTION_POLICY.AuditRopCallerCheck", audit_rop_caller_check, 0x9, 0x1, true, 0xd41e5843b3459757, 1, uint32_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_PAYLOAD_RESTRICTION_POLICY.EnableRopSimExec", enable_rop_sim_exec, 0xa, 0x1, true, 0xfc42d99f42b74f14, 1, uint32_t)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_PAYLOAD_RESTRICTION_POLICY.AuditRopSimExec", audit_rop_sim_exec, 0xb, 0x1, true, 0x8132fe6d150677fa, 1, uint32_t)
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
#endif