#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_MITIGATION_SYSTEM_CALL_DISABLE_POLICY.Flags", flags, 0x0, 0x20, true, 0xd521fd9ed6f1266a)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_SYSTEM_CALL_DISABLE_POLICY.DisallowWin32kSystemCalls", disallow_win32k_system_calls, 0x0, 0x1, true, 0x2e12cd2c979cca97, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_SYSTEM_CALL_DISABLE_POLICY.AuditDisallowWin32kSystemCalls", audit_disallow_win32k_system_calls, 0x1, 0x1, true, 0x27bd104e11de987f, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#endif