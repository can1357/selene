#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_LOCK.hDevice", h_device, 0x0, 0x20, true, 0xe5ec34c812740635)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_LOCK.hAllocation", h_allocation, 0x20, 0x20, true, 0xde27b16965c233d0)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_LOCK.PrivateDriverData", private_driver_data, 0x40, 0x20, true, 0xc047874d5e9d1af3)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_LOCK.NumPages", num_pages, 0x60, 0x20, true, 0x392a18795cfac000)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const uint32_t*), "_D3DKMT_LOCK.pPages", p_pages, 0x80, 0x40, true, 0x321f572d5f4fc4cd)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_LOCK.pData", p_data, 0xc0, 0x40, true, 0xf8c2f11d3e5b3d3a)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::d3dddicb_lockflags_t), "_D3DKMT_LOCK.Flags", flags, 0x100, 0x20, true, 0xd7ab2552bfb5b544)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_LOCK.GpuVirtualAddress", gpu_virtual_address, 0x140, 0x40, true, 0x6a95a60a9bba3a7e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif