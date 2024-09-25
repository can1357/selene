#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::displayconfig_device_info_header_t), "_DISPLAYCONFIG_SDR_WHITE_LEVEL.header", header, 0x0, 0xa0, true, 0x3f9a693e7bbdaa88)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISPLAYCONFIG_SDR_WHITE_LEVEL.SDRWhiteLevel", sdr_white_level, 0xa0, 0x20, true, 0x62fca859449dc5c5)
#else
#define _m00
#define _m01
#endif