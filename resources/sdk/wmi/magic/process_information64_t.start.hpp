#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WMI_PROCESS_INFORMATION64.UniqueProcessKey64", unique_process_key64, 0x0, 0x40, true, 0xf439157419c1922c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_PROCESS_INFORMATION64.ProcessId", process_id, 0x40, 0x20, true, 0xc2b6a6e27e3ed913)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_PROCESS_INFORMATION64.ParentId", parent_id, 0x60, 0x20, true, 0x25382cc4f2630578)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_PROCESS_INFORMATION64.SessionId", session_id, 0x80, 0x20, true, 0x2d4e39b8ab37afbc)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WMI_PROCESS_INFORMATION64.ExitStatus", exit_status, 0xa0, 0x20, true, 0xb84fbbe13ca7de8a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WMI_PROCESS_INFORMATION64.DirectoryTableBase", directory_table_base, 0xc0, 0x40, true, 0x482da78c46dd26c7)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_PROCESS_INFORMATION64.Flags", flags, 0x100, 0x20, true, 0xe2c23f7ad3941b89)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_PROCESS_INFORMATION64.Sid", sid, 0x120, 0x20, true, 0xb506ebb25ff50feb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif