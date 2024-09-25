#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_FILE_PIPE_CLIENT_PROCESS_BUFFER_EX.ClientSession", client_session, 0x0, 0x40, true, 0x6396228f4be26e2a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_FILE_PIPE_CLIENT_PROCESS_BUFFER_EX.ClientProcess", client_process, 0x40, 0x40, true, 0x548fbf41bc789f6d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_FILE_PIPE_CLIENT_PROCESS_BUFFER_EX.ClientComputerNameLength", client_computer_name_length, 0x80, 0x10, true, 0x255b92fe1faeccf5)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 16>), "_FILE_PIPE_CLIENT_PROCESS_BUFFER_EX.ClientComputerBuffer", client_computer_buffer, 0x90, 0x0, true, 0x686c200d34bbc7bb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif