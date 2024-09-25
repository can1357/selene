#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_FILE_PIPE_CLIENT_PROCESS_BUFFER_V2.ClientSession", client_session, 0x0, 0x40, true, 0x270baa8b455a1e2c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_FILE_PIPE_CLIENT_PROCESS_BUFFER_V2.ClientProcess", client_process, 0x40, 0x40, true, 0xe0953b2745bfa21e)
#else
#define _m00
#define _m01
#endif