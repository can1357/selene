#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_QUERYPROTECTEDSESSIONSTATUS.hHandle", h_handle, 0x0, 0x20, true, 0x3bbc93fb96b5609f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mt::protected_session_status_t), "_D3DKMT_QUERYPROTECTEDSESSIONSTATUS.Status", status, 0x20, 0x20, true, 0x829b81b7e9947afa)
#else
#define _m00
#define _m01
#endif