#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_TAPE_SET_DRIVE_PARAMETERS.ECC", ecc, 0x0, 0x8, true, 0xb27c06cbe09043aa)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_TAPE_SET_DRIVE_PARAMETERS.Compression", compression, 0x8, 0x8, true, 0x297c51b801016f5)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_TAPE_SET_DRIVE_PARAMETERS.DataPadding", data_padding, 0x10, 0x8, true, 0xc3382f568a2b7a0f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_TAPE_SET_DRIVE_PARAMETERS.ReportSetmarks", report_setmarks, 0x18, 0x8, true, 0x39a6cf9ac05585ea)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TAPE_SET_DRIVE_PARAMETERS.EOTWarningZoneSize", eot_warning_zone_size, 0x20, 0x20, true, 0x9926174488c3b10d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif