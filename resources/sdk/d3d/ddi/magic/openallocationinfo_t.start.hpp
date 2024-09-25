#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_OPENALLOCATIONINFO.hAllocation", h_allocation, 0x0, 0x20, true, 0x6645f99b13cc975f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const void*), "_D3DDDI_OPENALLOCATIONINFO.pPrivateDriverData", p_private_driver_data, 0x40, 0x40, true, 0x14e5778b126f2c75)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_OPENALLOCATIONINFO.PrivateDriverDataSize", private_driver_data_size, 0x80, 0x20, true, 0xdc5717d286368c26)
#else
#define _m00
#define _m01
#define _m02
#endif