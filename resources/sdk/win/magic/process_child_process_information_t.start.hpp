#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCESS_CHILD_PROCESS_INFORMATION.ProhibitChildProcesses", prohibit_child_processes, 0x0, 0x8, true, 0xd289157c2e64996c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCESS_CHILD_PROCESS_INFORMATION.AlwaysAllowSecureChildProcess", always_allow_secure_child_process, 0x8, 0x8, true, 0xe73b959dbca5fdd7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCESS_CHILD_PROCESS_INFORMATION.AuditProhibitChildProcesses", audit_prohibit_child_processes, 0x10, 0x8, true, 0x7ef1db08f117706f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCESS_CHILD_PROCESS_INFORMATION.EnableAutomaticOverride", enable_automatic_override, 0x0, 0x0, false, 0xb00255173e385e9e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif