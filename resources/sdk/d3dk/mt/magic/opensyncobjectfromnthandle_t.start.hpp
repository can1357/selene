#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE.hNtHandle", h_nt_handle, 0x0, 0x40, true, 0x5ee700f346055ddd)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE.hSyncObject", h_sync_object, 0x40, 0x20, true, 0x69aef219eb6fd33b)
#else
#define _m00
#define _m01
#endif