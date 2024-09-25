#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NETINFOSTRUCT.cbStructure", cb_structure, 0x0, 0x20, true, 0xaa23a3601e60ff4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NETINFOSTRUCT.dwProviderVersion", dw_provider_version, 0x20, 0x20, true, 0xe880fabd83d95a9b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NETINFOSTRUCT.dwStatus", dw_status, 0x40, 0x20, true, 0x3530a76f8975287b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NETINFOSTRUCT.dwCharacteristics", dw_characteristics, 0x60, 0x20, true, 0xd572f280a2c3821b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NETINFOSTRUCT.dwHandle", dw_handle, 0x80, 0x40, true, 0x26d13c629e0e804b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NETINFOSTRUCT.wNetType", w_net_type, 0xc0, 0x10, true, 0x7921066ef6350dd6)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NETINFOSTRUCT.dwPrinters", dw_printers, 0xe0, 0x20, true, 0xc59c7cde593953d5)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NETINFOSTRUCT.dwDrives", dw_drives, 0x100, 0x20, true, 0x56f73c65bffcbd58)
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