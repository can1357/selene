#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_DEVICE_BUS_SPECIFIC_RESET_INFO.BusTypeGuid", bus_type_guid, 0x0, 0x0, false, 0x1053c31421c4e1d9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union ndis::device_bus_specific_reset_type_t), "_DEVICE_BUS_SPECIFIC_RESET_INFO.ResetTypeSupported", reset_type_supported, 0x0, 0x0, false, 0x5b31d4934c851ade)
#else
#define _m00
#define _m01
#endif