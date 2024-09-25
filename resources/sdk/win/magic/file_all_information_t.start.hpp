#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::file_basic_information_t), "_FILE_ALL_INFORMATION.BasicInformation", basic_information, 0x0, 0x40, true, 0xa88a843c3735196a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::file_standard_information_t), "_FILE_ALL_INFORMATION.StandardInformation", standard_information, 0x140, 0xc0, true, 0x30d40880feb5d4cd)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::file_internal_information_t), "_FILE_ALL_INFORMATION.InternalInformation", internal_information, 0x200, 0x40, true, 0x4e4af036cd7adc43)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::file_ea_information_t), "_FILE_ALL_INFORMATION.EaInformation", ea_information, 0x240, 0x20, true, 0xa3cb4ec4a729f199)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::file_access_information_t), "_FILE_ALL_INFORMATION.AccessInformation", access_information, 0x260, 0x20, true, 0x56e70c5f1f41db00)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::file_position_information_t), "_FILE_ALL_INFORMATION.PositionInformation", position_information, 0x280, 0x40, true, 0xef04e57e46117fe1)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::file_mode_information_t), "_FILE_ALL_INFORMATION.ModeInformation", mode_information, 0x2c0, 0x20, true, 0x33b4a00ab4f0a554)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::file_alignment_information_t), "_FILE_ALL_INFORMATION.AlignmentInformation", alignment_information, 0x2e0, 0x20, true, 0xd3f90d196195198c)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::file_name_information_t), "_FILE_ALL_INFORMATION.NameInformation", name_information, 0x300, 0x40, true, 0x2b999454e3612735)
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