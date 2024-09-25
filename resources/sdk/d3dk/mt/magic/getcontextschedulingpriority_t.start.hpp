#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_GETCONTEXTSCHEDULINGPRIORITY.hContext", h_context, 0x0, 0x20, true, 0x44a00d71deedc1e9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_D3DKMT_GETCONTEXTSCHEDULINGPRIORITY.Priority", priority, 0x20, 0x20, true, 0xc09ef5500fc1b123)
#else
#define _m00
#define _m01
#endif