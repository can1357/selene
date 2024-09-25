#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DEVICE_RESET_INTERFACE_STANDARD.Size", size, 0x0, 0x10, true, 0x446344adc8730b01)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DEVICE_RESET_INTERFACE_STANDARD.Version", version, 0x10, 0x10, true, 0x31ecd8fd1ac67efb)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DEVICE_RESET_INTERFACE_STANDARD.Context", context, 0x40, 0x40, true, 0xf90cad50b35a42af)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_DEVICE_RESET_INTERFACE_STANDARD.InterfaceReference", interface_reference, 0x80, 0x40, true, 0x75c0b81bcc7736e4)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_DEVICE_RESET_INTERFACE_STANDARD.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0x81ddfa9ee28b3ec0)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdevice_reset_handler_t ), "_DEVICE_RESET_INTERFACE_STANDARD.DeviceReset", device_reset, 0x100, 0x40, true, 0x92fb5db103ef846f)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_RESET_INTERFACE_STANDARD.SupportedResetTypes", supported_reset_types, 0x140, 0x20, true, 0x2a439cc5fb8559a9)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t*, struct ndis::device_bus_specific_reset_info_t*)>*), "_DEVICE_RESET_INTERFACE_STANDARD.QueryBusSpecificResetInfo", query_bus_specific_reset_info, 0x1c0, 0x40, true, 0x191e4d4b9334abfc)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, const struct nt::guid_t*, union ndis::device_bus_specific_reset_type_t, uint64_t, void*)>*), "_DEVICE_RESET_INTERFACE_STANDARD.DeviceBusSpecificReset", device_bus_specific_reset, 0x200, 0x40, true, 0x5c737f3c2dafa262)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint8_t*, union ndis::device_bus_specific_reset_type_t*, uint64_t*)>*), "_DEVICE_RESET_INTERFACE_STANDARD.GetDeviceResetStatus", get_device_reset_status, 0x240, 0x40, true, 0x97c436f3ee5a08ba)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif