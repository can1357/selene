#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_MITIGATION_CHILD_PROCESS_POLICY.Flags", flags, 0x0, 0x20, true, 0x259a5215330d5f09)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_CHILD_PROCESS_POLICY.NoChildProcessCreation", no_child_process_creation, 0x0, 0x1, true, 0xfb97727a34369386, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_CHILD_PROCESS_POLICY.AuditNoChildProcessCreation", audit_no_child_process_creation, 0x1, 0x1, true, 0x44c82e20b460f7bd, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_CHILD_PROCESS_POLICY.AllowSecureProcessCreation", allow_secure_process_creation, 0x2, 0x1, true, 0xcd95565a4a9821d4, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif