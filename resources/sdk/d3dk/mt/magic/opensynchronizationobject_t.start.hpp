#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OPENSYNCHRONIZATIONOBJECT.hSharedHandle", h_shared_handle, 0x0, 0x20, true, 0xa08e2e501af33f36)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OPENSYNCHRONIZATIONOBJECT.hSyncObject", h_sync_object, 0x20, 0x20, true, 0x890ed4bb9720f6a6)
#else
#define _m00
#define _m01
#endif