#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATEPROTECTEDSESSION.hDevice", h_device, 0x0, 0x20, true, 0x2654b53375cb50b3)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATEPROTECTEDSESSION.hSyncObject", h_sync_object, 0x20, 0x20, true, 0xb2a8de7d15658a5c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const void*), "_D3DKMT_CREATEPROTECTEDSESSION.pPrivateDriverData", p_private_driver_data, 0x40, 0x40, true, 0x81ab1e72f9a6ba38)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATEPROTECTEDSESSION.PrivateDriverDataSize", private_driver_data_size, 0x80, 0x20, true, 0xe6a55e5bd5085b5f)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const void*), "_D3DKMT_CREATEPROTECTEDSESSION.pPrivateRuntimeData", p_private_runtime_data, 0xc0, 0x40, true, 0x378ade0a23621909)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATEPROTECTEDSESSION.PrivateRuntimeDataSize", private_runtime_data_size, 0x100, 0x20, true, 0x951bbd084c7a3394)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATEPROTECTEDSESSION.hHandle", h_handle, 0x120, 0x20, true, 0xfb26a9d5c3393a7e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif