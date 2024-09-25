#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSDBG_LIVEDUMP_CONTROL.Version", version, 0x0, 0x20, true, 0x406e6b7e547373f8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSDBG_LIVEDUMP_CONTROL.BugCheckCode", bug_check_code, 0x20, 0x20, true, 0xfc7f4e63d911b3f6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSDBG_LIVEDUMP_CONTROL.BugCheckParam1", bug_check_param1, 0x40, 0x40, true, 0x6f28b639f45a05df)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSDBG_LIVEDUMP_CONTROL.BugCheckParam2", bug_check_param2, 0x80, 0x40, true, 0x647b7855b1dd9e2b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSDBG_LIVEDUMP_CONTROL.BugCheckParam3", bug_check_param3, 0xc0, 0x40, true, 0xca6e3db5f8a4ffb8)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSDBG_LIVEDUMP_CONTROL.BugCheckParam4", bug_check_param4, 0x100, 0x40, true, 0xb5321e14bc4dd700)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SYSDBG_LIVEDUMP_CONTROL.DumpFileHandle", dump_file_handle, 0x140, 0x40, true, 0x917b7fd8bee3af5)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SYSDBG_LIVEDUMP_CONTROL.CancelEventHandle", cancel_event_handle, 0x180, 0x40, true, 0x27e4cbbec260b5a)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union win::sysdbg_livedump_control_flags_t), "_SYSDBG_LIVEDUMP_CONTROL.Flags", flags, 0x1c0, 0x20, true, 0x1228cfb23276588a)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union win::sysdbg_livedump_control_addpages_t), "_SYSDBG_LIVEDUMP_CONTROL.AddPagesControl", add_pages_control, 0x1e0, 0x20, true, 0x6ab3751b248e95df)
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
#endif