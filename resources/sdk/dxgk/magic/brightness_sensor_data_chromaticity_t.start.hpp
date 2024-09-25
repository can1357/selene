#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "_DXGK_BRIGHTNESS_SENSOR_DATA_CHROMATICITY.ChromaticityX", chromaticity_x, 0x0, 0x20, true, 0xbd6d9f1e13aac0dc)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "_DXGK_BRIGHTNESS_SENSOR_DATA_CHROMATICITY.ChromaticityY", chromaticity_y, 0x20, 0x20, true, 0x5880dba84e246583)
#else
#define _m00
#define _m01
#endif