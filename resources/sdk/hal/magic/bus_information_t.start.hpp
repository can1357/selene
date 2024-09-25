#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::interface_type_t), "_HAL_BUS_INFORMATION.BusType", bus_type, 0x0, 0x20, true, 0xc055fcd86acfd6d5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::bus_data_type_t), "_HAL_BUS_INFORMATION.ConfigurationType", configuration_type, 0x20, 0x20, true, 0x7f0f5eee3704b41e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAL_BUS_INFORMATION.BusNumber", bus_number, 0x40, 0x20, true, 0x89314296336ec0ec)
#else
#define _m00
#define _m01
#define _m02
#endif