#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "BREAK_ON_STATUS_BUFFER.NtStatus", nt_status, 0x0, 0x20, true, 0x28893d8bd7a9a7ba)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "BREAK_ON_STATUS_BUFFER.Win32Error", win32_error, 0x20, 0x20, true, 0x537a410fc3fed7c0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "BREAK_ON_STATUS_BUFFER.ThreadId", thread_id, 0x40, 0x20, true, 0x15a7a75f7270c514)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "BREAK_ON_STATUS_BUFFER.ProcessId", process_id, 0x60, 0x20, true, 0xc400240b03562f9a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 16>), "BREAK_ON_STATUS_BUFFER.ImageFileName", image_file_name, 0x80, 0x80, true, 0x28ea224f2c0e8be0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif