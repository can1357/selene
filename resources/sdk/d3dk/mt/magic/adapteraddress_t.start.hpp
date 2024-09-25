#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_ADAPTERADDRESS.BusNumber", bus_number, 0x0, 0x20, true, 0xbe0a08e5478311a7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_ADAPTERADDRESS.DeviceNumber", device_number, 0x20, 0x20, true, 0xe798b193cf8383d6)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_ADAPTERADDRESS.FunctionNumber", function_number, 0x40, 0x20, true, 0x9c0f31b0f4a5c14f)
#else
#define _m00
#define _m01
#define _m02
#endif