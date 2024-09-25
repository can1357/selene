#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_IDE_CHANNEL_RECORD.TargetId", target_id, 0x0, 0x20, true, 0xc7549fef635cd1cb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_IDE_CHANNEL_RECORD.DeviceType", device_type, 0x20, 0x20, true, 0x3325c695505e2e25)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_IDE_CHANNEL_RECORD.DeviceTimingMode", device_timing_mode, 0x40, 0x20, true, 0xb0234c576716bf6e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_IDE_CHANNEL_RECORD.LocationInformationLen", location_information_len, 0x60, 0x20, true, 0x8ef50ab070ba847)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_WMI_IDE_CHANNEL_RECORD.LocationInformation", location_information, 0x80, 0x10, true, 0xf3342994fc3efef7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif