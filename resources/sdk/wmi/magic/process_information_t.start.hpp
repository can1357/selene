#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WMI_PROCESS_INFORMATION.UniqueProcessKey", unique_process_key, 0x0, 0x40, true, 0xdb59b7dd2f162044)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_PROCESS_INFORMATION.ProcessId", process_id, 0x40, 0x20, true, 0x91e4309708df19fd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_PROCESS_INFORMATION.ParentId", parent_id, 0x60, 0x20, true, 0x76a68f3c14cba474)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_PROCESS_INFORMATION.SessionId", session_id, 0x80, 0x20, true, 0x3dd9f1239c9a8827)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WMI_PROCESS_INFORMATION.ExitStatus", exit_status, 0xa0, 0x20, true, 0x8fc47a342d128913)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WMI_PROCESS_INFORMATION.DirectoryTableBase", directory_table_base, 0xc0, 0x40, true, 0x7912a2148dbe8aa8)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_PROCESS_INFORMATION.Flags", flags, 0x100, 0x20, true, 0xad5b4004e2c74a31)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_PROCESS_INFORMATION.Sid", sid, 0x120, 0x20, true, 0x3a307eb3ae395d5b)
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