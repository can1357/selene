#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_SIMPLE_REGION_FORMAT.FormatCode", format_code, 0x0, 0x8, true, 0xf5d3e975c1e7240c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_SIMPLE_REGION_FORMAT.Alignment", alignment, 0x8, 0x8, true, 0x7d222b13685c3d0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDR64_SIMPLE_REGION_FORMAT.RegionSize", region_size, 0x10, 0x10, true, 0xaf76059447679b05)
#else
#define _m00
#define _m01
#define _m02
#endif