#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSDBG_TRIAGE_DUMP.Flags", flags, 0x0, 0x20, true, 0x5ab0d07938dfad29)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSDBG_TRIAGE_DUMP.BugCheckCode", bug_check_code, 0x20, 0x20, true, 0x3997e2947a6c47a6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSDBG_TRIAGE_DUMP.BugCheckParam1", bug_check_param1, 0x40, 0x40, true, 0xbd60db0e67f3ad3f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSDBG_TRIAGE_DUMP.BugCheckParam2", bug_check_param2, 0x80, 0x40, true, 0x4f46ce5966e83551)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSDBG_TRIAGE_DUMP.BugCheckParam3", bug_check_param3, 0xc0, 0x40, true, 0x5097cffc937391c5)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSDBG_TRIAGE_DUMP.BugCheckParam4", bug_check_param4, 0x100, 0x40, true, 0x5e9a40bd12703e35)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSDBG_TRIAGE_DUMP.ProcessHandles", process_handles, 0x140, 0x20, true, 0x46f0d0d90dec9730)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSDBG_TRIAGE_DUMP.ThreadHandles", thread_handles, 0x160, 0x20, true, 0x66e67147bdc845f5)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void**), "_SYSDBG_TRIAGE_DUMP.Handles", handles, 0x180, 0x40, true, 0x4ef7ffecc14fbcaf)
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
#endif