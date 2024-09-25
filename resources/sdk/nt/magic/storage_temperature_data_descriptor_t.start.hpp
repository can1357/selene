#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_TEMPERATURE_DATA_DESCRIPTOR.Version", version, 0x0, 0x20, true, 0x3fc18068efe465af)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_TEMPERATURE_DATA_DESCRIPTOR.Size", size, 0x20, 0x20, true, 0x2229a9a8b273a318)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_STORAGE_TEMPERATURE_DATA_DESCRIPTOR.CriticalTemperature", critical_temperature, 0x40, 0x10, true, 0x2f06458774324ccf)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_STORAGE_TEMPERATURE_DATA_DESCRIPTOR.WarningTemperature", warning_temperature, 0x50, 0x10, true, 0xb4be7a63f8107b00)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_STORAGE_TEMPERATURE_DATA_DESCRIPTOR.InfoCount", info_count, 0x60, 0x10, true, 0x820e2d525e801e26)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::storage_temperature_info_t, 1>), "_STORAGE_TEMPERATURE_DATA_DESCRIPTOR.TemperatureInfo", temperature_info, 0xc0, 0x80, true, 0x36b949fccb940bdc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif