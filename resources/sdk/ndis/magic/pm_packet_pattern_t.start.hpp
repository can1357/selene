#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PM_PACKET_PATTERN.Priority", priority, 0x0, 0x20, true, 0xdfa6f6e07db0217c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PM_PACKET_PATTERN.MaskSize", mask_size, 0x40, 0x20, true, 0x1321822048c56ae)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PM_PACKET_PATTERN.PatternOffset", pattern_offset, 0x60, 0x20, true, 0x143631f40667a2d3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PM_PACKET_PATTERN.PatternSize", pattern_size, 0x80, 0x20, true, 0xa330d149fdf54940)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PM_PACKET_PATTERN.PatternFlags", pattern_flags, 0xa0, 0x20, true, 0x9b45da61c7991036)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif