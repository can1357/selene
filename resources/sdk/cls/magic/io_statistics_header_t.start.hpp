#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CLS_IO_STATISTICS_HEADER.ubMajorVersion", ub_major_version, 0x0, 0x8, true, 0x4d57640141a16dd3)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CLS_IO_STATISTICS_HEADER.ubMinorVersion", ub_minor_version, 0x8, 0x8, true, 0xd6f311d88942bcb5)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum clfs::iostats_class_t), "_CLS_IO_STATISTICS_HEADER.eStatsClass", e_stats_class, 0x20, 0x20, true, 0xef982a92c59b91b4)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CLS_IO_STATISTICS_HEADER.cbLength", cb_length, 0x40, 0x10, true, 0x2e1809ed6be73973)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLS_IO_STATISTICS_HEADER.coffData", coff_data, 0x60, 0x20, true, 0x53688b4de9a04fc6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif