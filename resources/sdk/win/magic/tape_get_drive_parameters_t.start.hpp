#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_TAPE_GET_DRIVE_PARAMETERS.ECC", ecc, 0x0, 0x8, true, 0xb06773bf308f4a3)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_TAPE_GET_DRIVE_PARAMETERS.Compression", compression, 0x8, 0x8, true, 0x67d16bf3a2a70cbb)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_TAPE_GET_DRIVE_PARAMETERS.DataPadding", data_padding, 0x10, 0x8, true, 0x72adb290d1ec047e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_TAPE_GET_DRIVE_PARAMETERS.ReportSetmarks", report_setmarks, 0x18, 0x8, true, 0x16a26911c8796855)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TAPE_GET_DRIVE_PARAMETERS.DefaultBlockSize", default_block_size, 0x20, 0x20, true, 0x7f8749d2fbac7b9a)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TAPE_GET_DRIVE_PARAMETERS.MaximumBlockSize", maximum_block_size, 0x40, 0x20, true, 0x146a06aabc826434)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TAPE_GET_DRIVE_PARAMETERS.MinimumBlockSize", minimum_block_size, 0x60, 0x20, true, 0xef3b909ef72d1b27)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TAPE_GET_DRIVE_PARAMETERS.MaximumPartitionCount", maximum_partition_count, 0x80, 0x20, true, 0xc7e1e1a0a82ef8e5)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TAPE_GET_DRIVE_PARAMETERS.FeaturesLow", features_low, 0xa0, 0x20, true, 0x81b718c32f27835c)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TAPE_GET_DRIVE_PARAMETERS.FeaturesHigh", features_high, 0xc0, 0x20, true, 0xf7e8a6acaebb5164)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TAPE_GET_DRIVE_PARAMETERS.EOTWarningZoneSize", eot_warning_zone_size, 0xe0, 0x20, true, 0x1ca2126f262c1d0f)
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
#define _m09
#define _m10
#endif