#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_OPENALLOCATIONINFO.hAllocation", h_allocation, 0x0, 0x20, true, 0xd23bfb06afa44103)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGK_OPENALLOCATIONINFO.pPrivateDriverData", p_private_driver_data, 0x40, 0x40, true, 0x41a1d83b7ce5b812)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_OPENALLOCATIONINFO.PrivateDriverDataSize", private_driver_data_size, 0x80, 0x20, true, 0xe22c99dc161c68a0)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGK_OPENALLOCATIONINFO.hDeviceSpecificAllocation", h_device_specific_allocation, 0xc0, 0x40, true, 0x8ddaad2fef0bceb2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif