#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_OPENALLOCATIONINFO2.hAllocation", h_allocation, 0x0, 0x20, true, 0x78d8449caee1f8f2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const void*), "_D3DDDI_OPENALLOCATIONINFO2.pPrivateDriverData", p_private_driver_data, 0x40, 0x40, true, 0x6e5b3b9bb50cf527)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_OPENALLOCATIONINFO2.PrivateDriverDataSize", private_driver_data_size, 0x80, 0x20, true, 0xa267d4b6442bb3b8)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DDDI_OPENALLOCATIONINFO2.GpuVirtualAddress", gpu_virtual_address, 0xc0, 0x40, true, 0x314dae0db941e1cf)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif