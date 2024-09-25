#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_FLOPPY_DEVICE_DATA.Version", version, 0x0, 0x10, true, 0x587606889d17b79c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_FLOPPY_DEVICE_DATA.Revision", revision, 0x10, 0x10, true, 0xcc27579d3c19983e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char, 8>), "_CM_FLOPPY_DEVICE_DATA.Size", size, 0x20, 0x40, true, 0xa7c23eb88e81d32a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_FLOPPY_DEVICE_DATA.MaxDensity", max_density, 0x60, 0x20, true, 0x7025161a234db696)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_FLOPPY_DEVICE_DATA.MountDensity", mount_density, 0x80, 0x20, true, 0x1dea806d55ccaf62)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CM_FLOPPY_DEVICE_DATA.StepRateHeadUnloadTime", step_rate_head_unload_time, 0xa0, 0x8, true, 0xd126fbb9704aa570)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CM_FLOPPY_DEVICE_DATA.HeadLoadTime", head_load_time, 0xa8, 0x8, true, 0x88ce2df4cf649731)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CM_FLOPPY_DEVICE_DATA.MotorOffTime", motor_off_time, 0xb0, 0x8, true, 0x6c6e5316f79bc319)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CM_FLOPPY_DEVICE_DATA.SectorLengthCode", sector_length_code, 0xb8, 0x8, true, 0x23e924e5662b3112)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CM_FLOPPY_DEVICE_DATA.SectorPerTrack", sector_per_track, 0xc0, 0x8, true, 0x92d962dfb410bb8a)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CM_FLOPPY_DEVICE_DATA.ReadWriteGapLength", read_write_gap_length, 0xc8, 0x8, true, 0x331ec9f9e75f06de)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CM_FLOPPY_DEVICE_DATA.DataTransferLength", data_transfer_length, 0xd0, 0x8, true, 0xee49c329a144dd3b)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CM_FLOPPY_DEVICE_DATA.FormatGapLength", format_gap_length, 0xd8, 0x8, true, 0xe2ef6cb54f7da86)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CM_FLOPPY_DEVICE_DATA.FormatFillCharacter", format_fill_character, 0xe0, 0x8, true, 0xef0a0dc1be4ba42a)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CM_FLOPPY_DEVICE_DATA.HeadSettleTime", head_settle_time, 0xe8, 0x8, true, 0xef901ab24e59f1d8)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CM_FLOPPY_DEVICE_DATA.MotorSettleTime", motor_settle_time, 0xf0, 0x8, true, 0x9e37bccc0630ffb9)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CM_FLOPPY_DEVICE_DATA.MaximumTrackValue", maximum_track_value, 0xf8, 0x8, true, 0xb54513e7963ae7b1)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CM_FLOPPY_DEVICE_DATA.DataTransferRate", data_transfer_rate, 0x100, 0x8, true, 0xbf44c3c2471d5353)
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
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#endif