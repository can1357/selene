#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_GETVERSIONINPARAMS.bVersion", b_version, 0x0, 0x8, true, 0xc9f1cd78329527c1)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_GETVERSIONINPARAMS.bRevision", b_revision, 0x8, 0x8, true, 0xf577e34f3134c494)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_GETVERSIONINPARAMS.bReserved", b_reserved, 0x10, 0x8, true, 0xa232ef8ade89b687)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_GETVERSIONINPARAMS.bIDEDeviceMap", b_ide_device_map, 0x18, 0x8, true, 0xcf686792ec790be1)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_GETVERSIONINPARAMS.fCapabilities", f_capabilities, 0x20, 0x20, true, 0x74502a259451eaf2)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 4>), "_GETVERSIONINPARAMS.dwReserved", dw_reserved, 0x40, 0x80, true, 0x881ee8d6da1b667a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif