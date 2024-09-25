#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SD_GLOBAL_CHANGE_INPUT.Flags", flags, 0x0, 0x20, true, 0xde9feaffeeaccc8d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SD_GLOBAL_CHANGE_INPUT.ChangeType", change_type, 0x20, 0x20, true, 0x31e3df52364c8fc6)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::sd_change_machine_sid_input_t), "_SD_GLOBAL_CHANGE_INPUT.SdChange", sd_change, 0x40, 0x40, true, 0x4b6c42479aade588)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::sd_query_stats_input_t), "_SD_GLOBAL_CHANGE_INPUT.SdQueryStats", sd_query_stats, 0x40, 0x20, true, 0x36b1fd0ee970226e)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::sd_enum_sds_input_t), "_SD_GLOBAL_CHANGE_INPUT.SdEnumSds", sd_enum_sds, 0x40, 0x80, true, 0xda139c3bed8a79e7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif