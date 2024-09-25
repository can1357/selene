#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_SESSION_PROCESS_INFORMATION.SessionId", session_id, 0x0, 0x20, true, 0x77eb82f743ac13f6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_SESSION_PROCESS_INFORMATION.SizeOfBuf", size_of_buf, 0x20, 0x20, true, 0x4ff5f2858234f537)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SYSTEM_SESSION_PROCESS_INFORMATION.Buffer", buffer, 0x40, 0x40, true, 0x76fb140d1901b7a3)
#else
#define _m00
#define _m01
#define _m02
#endif