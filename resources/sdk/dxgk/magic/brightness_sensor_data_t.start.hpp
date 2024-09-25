#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_BRIGHTNESS_SENSOR_DATA.Size", size, 0x0, 0x20, true, 0x758ff04a656660d1)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_BRIGHTNESS_SENSOR_DATA.Flags.AlsReadingValid", als_reading_valid, 0x0, 0x1, true, 0xbf9dc5e71d31fb14, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_BRIGHTNESS_SENSOR_DATA.Flags.ChromaticityValid", chromaticity_valid, 0x1, 0x1, true, 0x8dd79365aa04e4e5, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_BRIGHTNESS_SENSOR_DATA.Flags.ColorTemperatureValid", color_temperature_valid, 0x2, 0x1, true, 0x991359ea37c9e44a, 1, uint32_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_flags_t), "_DXGK_BRIGHTNESS_SENSOR_DATA.Flags", flags, 0x20, 0x20, true, 0xcef49dec172a4e1c)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_BRIGHTNESS_SENSOR_DATA.ValidSensorValues", valid_sensor_values, 0x20, 0x20, true, 0xd3c2cf24680abde5)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "_DXGK_BRIGHTNESS_SENSOR_DATA.AlsReading", als_reading, 0x40, 0x20, true, 0x1cbae4001c7f17fc)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::brightness_sensor_data_chromaticity_t), "_DXGK_BRIGHTNESS_SENSOR_DATA.Chromaticity", chromaticity, 0x60, 0x40, true, 0x123afed810640b04)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "_DXGK_BRIGHTNESS_SENSOR_DATA.ColorTemperature", color_temperature, 0xa0, 0x20, true, 0xc501cf7809b458e1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif