#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CREATE_USER_PROCESS_ECP_CONTEXT.Size", size, 0x0, 0x10, true, 0x1d16336e112f03aa)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_CREATE_USER_PROCESS_ECP_CONTEXT.AccessToken", access_token, 0x40, 0x40, true, 0x4ed94a8bbeb642b6)
#else
#define _m00
#define _m01
#endif