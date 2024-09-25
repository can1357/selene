#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_MITIGATION_CONTROL_FLOW_GUARD_POLICY.Flags", flags, 0x0, 0x20, true, 0xdc7a1970fa05f5ea)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_CONTROL_FLOW_GUARD_POLICY.EnableControlFlowGuard", enable_control_flow_guard, 0x0, 0x1, true, 0x507ed205e685eeb6, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_CONTROL_FLOW_GUARD_POLICY.EnableExportSuppression", enable_export_suppression, 0x1, 0x1, true, 0x4870f7f6b7bff654, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_CONTROL_FLOW_GUARD_POLICY.StrictMode", strict_mode, 0x2, 0x1, true, 0x191e8c7221533065, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_CONTROL_FLOW_GUARD_POLICY.EnableXfg", enable_xfg, 0x3, 0x1, true, 0x53c400fe9990c773, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_CONTROL_FLOW_GUARD_POLICY.EnableXfgAuditMode", enable_xfg_audit_mode, 0x4, 0x1, true, 0x61c44e32fef0c294, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif