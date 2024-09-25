#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMDT_VIDEO_PRESENT_SOURCE.Id", id, 0x0, 0x20, true, 0x752464d06e3e67cb)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMDT_VIDEO_PRESENT_SOURCE.dwReserved", dw_reserved, 0x20, 0x20, true, 0x72b6f1db9ad81070)
#else
#define _m00
#define _m01
#endif