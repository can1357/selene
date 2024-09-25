#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_QUERYRESOURCEINFO.hDevice", h_device, 0x0, 0x20, true, 0xc7757eca546acc55)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_QUERYRESOURCEINFO.hGlobalShare", h_global_share, 0x20, 0x20, true, 0xd8ad04f8c357067f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_QUERYRESOURCEINFO.pPrivateRuntimeData", p_private_runtime_data, 0x40, 0x40, true, 0xcd4005a28b82c79c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_QUERYRESOURCEINFO.PrivateRuntimeDataSize", private_runtime_data_size, 0x80, 0x20, true, 0xbfa405228619c387)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_QUERYRESOURCEINFO.TotalPrivateDriverDataSize", total_private_driver_data_size, 0xa0, 0x20, true, 0x5a117ed95d525123)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_QUERYRESOURCEINFO.ResourcePrivateDriverDataSize", resource_private_driver_data_size, 0xc0, 0x20, true, 0x11d91c2cececaba6)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_QUERYRESOURCEINFO.NumAllocations", num_allocations, 0xe0, 0x20, true, 0x1b6b80937ac2610f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif