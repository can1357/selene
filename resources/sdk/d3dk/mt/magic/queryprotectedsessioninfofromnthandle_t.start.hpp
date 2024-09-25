#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_QUERYPROTECTEDSESSIONINFOFROMNTHANDLE.hNtHandle", h_nt_handle, 0x0, 0x40, true, 0x55145c3f1f1b4bee)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const void*), "_D3DKMT_QUERYPROTECTEDSESSIONINFOFROMNTHANDLE.pPrivateDriverData", p_private_driver_data, 0x40, 0x40, true, 0x1ad6d086a88a1b1b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_QUERYPROTECTEDSESSIONINFOFROMNTHANDLE.PrivateDriverDataSize", private_driver_data_size, 0x80, 0x20, true, 0xfb827db242f8ff63)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const void*), "_D3DKMT_QUERYPROTECTEDSESSIONINFOFROMNTHANDLE.pPrivateRuntimeData", p_private_runtime_data, 0xc0, 0x40, true, 0x3b35a87aa365f768)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_QUERYPROTECTEDSESSIONINFOFROMNTHANDLE.PrivateRuntimeDataSize", private_runtime_data_size, 0x100, 0x20, true, 0x950c609a2e38be4f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif