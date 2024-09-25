#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DRIVERSTATUS.bDriverError", b_driver_error, 0x0, 0x8, true, 0x916bc149e29b801a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DRIVERSTATUS.bIDEError", b_ide_error, 0x8, 0x8, true, 0xd824f66108df8202)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_DRIVERSTATUS.bReserved", b_reserved, 0x10, 0x10, true, 0x27e6f85078da56a1)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 2>), "_DRIVERSTATUS.dwReserved", dw_reserved, 0x20, 0x40, true, 0x6ac8ae94ebe84913)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif