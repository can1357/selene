#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_LOGGING_INFORMATION.Flags", flags, 0x0, 0x20, true, 0xead507c603f4127f)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_LOGGING_INFORMATION.EnableReadVmLogging", enable_read_vm_logging, 0x0, 0x1, true, 0xb31eaa680fd8efcb, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_LOGGING_INFORMATION.EnableWriteVmLogging", enable_write_vm_logging, 0x1, 0x1, true, 0x1d05751ca84e2fb, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_LOGGING_INFORMATION.EnableProcessSuspendResumeLogging", enable_process_suspend_resume_logging, 0x2, 0x1, true, 0xd68b6eefe4b3225f, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_LOGGING_INFORMATION.EnableThreadSuspendResumeLogging", enable_thread_suspend_resume_logging, 0x3, 0x1, true, 0xb2788908aadb75af, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_LOGGING_INFORMATION.EnableLocalExecProtectVmLogging", enable_local_exec_protect_vm_logging, 0x0, 0x0, false, 0x7bf253ac659a84e6, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_LOGGING_INFORMATION.EnableRemoteExecProtectVmLogging", enable_remote_exec_protect_vm_logging, 0x0, 0x0, false, 0xdecdb0621e1ec531, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif