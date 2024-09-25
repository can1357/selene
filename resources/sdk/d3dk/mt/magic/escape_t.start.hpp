#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_ESCAPE.AdapterHandle", adapter_handle, 0x0, 0x20, true, 0xc5c614f283b5baf8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_ESCAPE.DeviceHandle", device_handle, 0x20, 0x20, true, 0xa6c91934204ae562)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mt::escapetype_t), "_D3DKMT_ESCAPE.Type", type, 0x40, 0x20, true, 0x8b453ed0ef396310)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::escapeflags_t), "_D3DKMT_ESCAPE.Flags", flags, 0x60, 0x20, true, 0x74eebe0cd296263d)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_ESCAPE.PrivateDriverData", private_driver_data, 0x80, 0x40, true, 0x56aabd4085ec3d31)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_ESCAPE.PrivateDriverDataSize", private_driver_data_size, 0xc0, 0x20, true, 0xcaf6864dfb97a529)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_ESCAPE.ContextHandle", context_handle, 0xe0, 0x20, true, 0x36d212bcaf2b02fe)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif