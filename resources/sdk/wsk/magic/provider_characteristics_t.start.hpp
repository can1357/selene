#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WSK_PROVIDER_CHARACTERISTICS.HighestVersion", highest_version, 0x0, 0x10, true, 0x7baa5556ce1673fb)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WSK_PROVIDER_CHARACTERISTICS.LowestVersion", lowest_version, 0x10, 0x10, true, 0x7de0eec00d3c28a5)
#else
#define _m00
#define _m01
#endif