#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::pephandle_t*), "_PEP_CRASHDUMP_INFORMATION.DeviceHandle", device_handle, 0x0, 0x40, true, 0xc584640a2e2cba14)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PEP_CRASHDUMP_INFORMATION.DeviceContext", device_context, 0x40, 0x40, true, 0xd01fb86c1b1b5668)
#else
#define _m00
#define _m01
#endif