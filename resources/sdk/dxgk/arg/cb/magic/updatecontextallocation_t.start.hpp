#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARGCB_UPDATECONTEXTALLOCATION.hAllocation", h_allocation, 0x0, 0x40, true, 0x64f5c759ad7cc62d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARGCB_UPDATECONTEXTALLOCATION.pPrivateDriverData", p_private_driver_data, 0x40, 0x40, true, 0xc9a55ea8cf67ea5)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_UPDATECONTEXTALLOCATION.PrivateDriverDataSize", private_driver_data_size, 0x80, 0x20, true, 0x7cdf7c187fa10498)
#else
#define _m00
#define _m01
#define _m02
#endif