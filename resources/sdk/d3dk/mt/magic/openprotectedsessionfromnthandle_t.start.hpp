#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_OPENPROTECTEDSESSIONFROMNTHANDLE.hNtHandle", h_nt_handle, 0x0, 0x40, true, 0xe34e678f5337eac9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OPENPROTECTEDSESSIONFROMNTHANDLE.hHandle", h_handle, 0x40, 0x20, true, 0x66851a1ec2f57087)
#else
#define _m00
#define _m01
#endif