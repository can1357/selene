#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_WMI_PNP_RECORD_V4.ClassGuid", class_guid, 0x0, 0x80, true, 0x827fcc257927ba94)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_PNP_RECORD_V4.UpperFilterCount", upper_filter_count, 0x80, 0x20, true, 0x4a0efb25b7c68463)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_PNP_RECORD_V4.LowerFilterCount", lower_filter_count, 0xa0, 0x20, true, 0xd26d726da5ee218c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_WMI_PNP_RECORD_V4.Strings", strings, 0xc0, 0x10, true, 0x1d309a9afe9d2679)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif