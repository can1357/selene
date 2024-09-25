#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_FILE_PIPE_CLIENT_PROCESS_BUFFER.ClientSession", client_session, 0x0, 0x40, true, 0x834264ac84073b54)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_FILE_PIPE_CLIENT_PROCESS_BUFFER.ClientProcess", client_process, 0x40, 0x40, true, 0xa670e17fd9a8b089)
#else
#define _m00
#define _m01
#endif