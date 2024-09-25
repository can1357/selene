#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_WMI_PNP_RECORD_V5.ClassGuid", class_guid, 0x0, 0x80, true, 0xc1f206fa22d55c53)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_PNP_RECORD_V5.UpperFilterCount", upper_filter_count, 0x80, 0x20, true, 0x6c969a4534a1ff60)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_PNP_RECORD_V5.LowerFilterCount", lower_filter_count, 0xa0, 0x20, true, 0x34b7e970c7ff3166)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_PNP_RECORD_V5.DevStatus", dev_status, 0xc0, 0x20, true, 0x6e5ca648bc700671)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_PNP_RECORD_V5.DevProblem", dev_problem, 0xe0, 0x20, true, 0x44ebd42c19001a64)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_WMI_PNP_RECORD_V5.Strings", strings, 0x100, 0x10, true, 0xfe98dac450559130)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif