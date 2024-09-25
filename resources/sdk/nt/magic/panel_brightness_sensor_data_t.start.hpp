#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PANEL_BRIGHTNESS_SENSOR_DATA.AlsReadingValid", als_reading_valid, 0x0, 0x1, true, 0xa72cf87b14380a1f, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PANEL_BRIGHTNESS_SENSOR_DATA.ChromaticityCoordinateValid", chromaticity_coordinate_valid, 0x1, 0x1, true, 0x4c13f9009dc4a6d6, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PANEL_BRIGHTNESS_SENSOR_DATA.ColorTemperatureValid", color_temperature_valid, 0x2, 0x1, true, 0x4886050b0da3f886, 1, uint32_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PANEL_BRIGHTNESS_SENSOR_DATA.Value", value, 0x0, 0x20, true, 0xf35c99aef5668c36)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "_PANEL_BRIGHTNESS_SENSOR_DATA.AlsReading", als_reading, 0x20, 0x20, true, 0x39065a891b697a8d)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::chromaticity_coordinate_t), "_PANEL_BRIGHTNESS_SENSOR_DATA.ChromaticityCoordinate", chromaticity_coordinate, 0x40, 0x40, true, 0x48ac5cde56173613)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "_PANEL_BRIGHTNESS_SENSOR_DATA.ColorTemperature", color_temperature, 0x80, 0x20, true, 0x7364f6126352725)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif