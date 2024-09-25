#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CM_PCCARD_DEVICE_DATA.Flags", flags, 0x0, 0x8, true, 0x49df5693a5f8098a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CM_PCCARD_DEVICE_DATA.ErrorCode", error_code, 0x8, 0x8, true, 0x40e3a04de0bef44)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_PCCARD_DEVICE_DATA.BusData", bus_data, 0x20, 0x20, true, 0x7d229781d6fb7f30)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_PCCARD_DEVICE_DATA.DeviceId", device_id, 0x40, 0x20, true, 0xe01ce5b829f7cd05)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_PCCARD_DEVICE_DATA.LegacyBaseAddress", legacy_base_address, 0x60, 0x20, true, 0x6ce8c18f05836b12)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_CM_PCCARD_DEVICE_DATA.IRQMap", irq_map, 0x80, 0x80, true, 0x4dcfe4b671b680dc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif