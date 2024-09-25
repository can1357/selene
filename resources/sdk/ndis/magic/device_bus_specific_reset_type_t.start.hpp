#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DEVICE_BUS_SPECIFIC_RESET_TYPE.Pci.FunctionLevelDeviceReset", function_level_device_reset, 0x0, 0x0, false, 0x316c4391788b40c5, 1, uint64_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DEVICE_BUS_SPECIFIC_RESET_TYPE.Pci.PlatformLevelDeviceReset", platform_level_device_reset, 0x0, 0x0, false, 0x723f9e29e8f2ec4c, 1, uint64_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DEVICE_BUS_SPECIFIC_RESET_TYPE.Pci.SecondaryBusReset", secondary_bus_reset, 0x0, 0x0, false, 0x7c7fa42f19312cb4, 1, uint64_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_pci_t), "_DEVICE_BUS_SPECIFIC_RESET_TYPE.Pci", pci, 0x0, 0x0, false, 0x9f77b649b8463d8c)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DEVICE_BUS_SPECIFIC_RESET_TYPE.Acpi.FunctionLevelDeviceReset", function_level_device_reset, 0x0, 0x0, false, 0x87f660548194c9c6, 1, uint64_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DEVICE_BUS_SPECIFIC_RESET_TYPE.Acpi.PlatformLevelDeviceReset", platform_level_device_reset, 0x0, 0x0, false, 0x586ec86778a577af, 1, uint64_t)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_acpi_t), "_DEVICE_BUS_SPECIFIC_RESET_TYPE.Acpi", acpi, 0x0, 0x0, false, 0xcd4fe241dbb82ed2)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DEVICE_BUS_SPECIFIC_RESET_TYPE.AsULONGLONG", as_ulonglong, 0x0, 0x0, false, 0xb833c69bf1e22721)
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