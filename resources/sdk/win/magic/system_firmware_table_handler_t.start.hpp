#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_FIRMWARE_TABLE_HANDLER.ProviderSignature", provider_signature, 0x0, 0x20, true, 0x304b9557edbcbb3d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_FIRMWARE_TABLE_HANDLER.Register", _register, 0x20, 0x8, true, 0xced01f44bfe5a610)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfnfth_t ), "_SYSTEM_FIRMWARE_TABLE_HANDLER.FirmwareTableHandler", firmware_table_handler, 0x40, 0x40, true, 0x8bc264606f85b394)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SYSTEM_FIRMWARE_TABLE_HANDLER.DriverObject", driver_object, 0x80, 0x40, true, 0x27050f4cec5fdb0b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif