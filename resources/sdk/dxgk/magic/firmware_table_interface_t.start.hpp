#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_FIRMWARE_TABLE_INTERFACE.Size", size, 0x0, 0x10, true, 0x8a3292d1d7383cfd)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_FIRMWARE_TABLE_INTERFACE.Version", version, 0x10, 0x10, true, 0x33598c5e1c47f4ba)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGK_FIRMWARE_TABLE_INTERFACE.Context", context, 0x40, 0x40, true, 0x82ae26053324200f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_DXGK_FIRMWARE_TABLE_INTERFACE.InterfaceReference", interface_reference, 0x80, 0x40, true, 0x92d959e061fc9dcf)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_DXGK_FIRMWARE_TABLE_INTERFACE.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0x6546e8de7d39de5f)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, uint32_t, void*, uint32_t*)>*), "_DXGK_FIRMWARE_TABLE_INTERFACE.EnumSystemFirmwareTables", enum_system_firmware_tables, 0x100, 0x40, true, 0x40e3a3b7b0336957)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, uint32_t, uint32_t, void*, uint32_t*)>*), "_DXGK_FIRMWARE_TABLE_INTERFACE.ReadSystemFirmwareTable", read_system_firmware_table, 0x140, 0x40, true, 0xb777521c910ae4e1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif