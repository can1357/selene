#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::media_type_t), "_FORMAT_EX_PARAMETERS.MediaType", media_type, 0x0, 0x20, true, 0x65a259155b707fa3)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FORMAT_EX_PARAMETERS.StartCylinderNumber", start_cylinder_number, 0x20, 0x20, true, 0x901bfce660203d2c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FORMAT_EX_PARAMETERS.EndCylinderNumber", end_cylinder_number, 0x40, 0x20, true, 0xc70cdb302dd8260e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FORMAT_EX_PARAMETERS.StartHeadNumber", start_head_number, 0x60, 0x20, true, 0x8ac838ae8257f7a7)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FORMAT_EX_PARAMETERS.EndHeadNumber", end_head_number, 0x80, 0x20, true, 0x56fff22a53b87575)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_FORMAT_EX_PARAMETERS.FormatGapLength", format_gap_length, 0xa0, 0x10, true, 0x207c8a6c8b4ab25d)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_FORMAT_EX_PARAMETERS.SectorsPerTrack", sectors_per_track, 0xb0, 0x10, true, 0x198cbcd67b296bd)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 1>), "_FORMAT_EX_PARAMETERS.SectorNumber", sector_number, 0xc0, 0x10, true, 0xe679758cf7fd0e3f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif