#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_AGP_TARGET_BUS_INTERFACE_STANDARD.Size", size, 0x0, 0x10, true, 0xdb2efcece70dfc7d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_AGP_TARGET_BUS_INTERFACE_STANDARD.Version", version, 0x10, 0x10, true, 0x7f0d47744d5d9297)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_AGP_TARGET_BUS_INTERFACE_STANDARD.Context", context, 0x40, 0x40, true, 0x3b30c9da7f3a625d)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_AGP_TARGET_BUS_INTERFACE_STANDARD.InterfaceReference", interface_reference, 0x80, 0x40, true, 0x137e561e16bde085)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_AGP_TARGET_BUS_INTERFACE_STANDARD.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0xdd92d9a0f1f5b586)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pget_set_device_data_t ), "_AGP_TARGET_BUS_INTERFACE_STANDARD.SetBusData", set_bus_data, 0x100, 0x40, true, 0xb86f80e2113679f4)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pget_set_device_data_t ), "_AGP_TARGET_BUS_INTERFACE_STANDARD.GetBusData", get_bus_data, 0x140, 0x40, true, 0xdc3d7cd18d74385d)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_AGP_TARGET_BUS_INTERFACE_STANDARD.CapabilityID", capability_id, 0x180, 0x8, true, 0x9c9ec3d0254cc346)
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