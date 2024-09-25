#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t*), "_QUERY_INTERFACE.InterfaceType", interface_type, 0x0, 0x40, true, 0xf62db9aad637438b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_QUERY_INTERFACE.Size", size, 0x40, 0x10, true, 0x645becdf6d7593ab)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_QUERY_INTERFACE.Version", version, 0x50, 0x10, true, 0xba4d54bd2133e33b)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::interface_t*), "_QUERY_INTERFACE.Interface", interface, 0x80, 0x40, true, 0xe4bb51176eaa3b1d)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_QUERY_INTERFACE.InterfaceSpecificData", interface_specific_data, 0xc0, 0x40, true, 0xb2136b10e32ab174)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_INTERFACE.DeviceUid", device_uid, 0x100, 0x20, true, 0x52f656f1dfe21d3f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif