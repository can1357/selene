#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PNP_LOCATION_INTERFACE.Size", size, 0x0, 0x10, true, 0x7af49d60415abec)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PNP_LOCATION_INTERFACE.Version", version, 0x10, 0x10, true, 0x9dc2900e30177fec)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PNP_LOCATION_INTERFACE.Context", context, 0x40, 0x40, true, 0x71b6e9defd080b2d)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_PNP_LOCATION_INTERFACE.InterfaceReference", interface_reference, 0x80, 0x40, true, 0x62f79a25a523f2f2)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_PNP_LOCATION_INTERFACE.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0xb54521972a3ffd17)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, wchar_t**)>*), "_PNP_LOCATION_INTERFACE.GetLocationString", get_location_string, 0x100, 0x40, true, 0x4ca941344a40ad3a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif