#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE.hDevice", h_device, 0x0, 0x20, true, 0x9055245f960ef402)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE.hNtHandle", h_nt_handle, 0x40, 0x40, true, 0x5a268665f7f36c9)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE.pPrivateRuntimeData", p_private_runtime_data, 0x80, 0x40, true, 0x2860cf98228b185d)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE.PrivateRuntimeDataSize", private_runtime_data_size, 0xc0, 0x20, true, 0x43b07fd36b085689)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE.TotalPrivateDriverDataSize", total_private_driver_data_size, 0xe0, 0x20, true, 0xe46bf06876803690)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE.ResourcePrivateDriverDataSize", resource_private_driver_data_size, 0x100, 0x20, true, 0x61cdb3ff4834c3d)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE.NumAllocations", num_allocations, 0x120, 0x20, true, 0xfb12ba161c64bbab)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif