#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SD_GLOBAL_CHANGE_OUTPUT.Flags", flags, 0x0, 0x20, true, 0x8ce5e1a70d8ee06c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SD_GLOBAL_CHANGE_OUTPUT.ChangeType", change_type, 0x20, 0x20, true, 0xa83e4c1ef799e949)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::sd_change_machine_sid_output_t), "_SD_GLOBAL_CHANGE_OUTPUT.SdChange", sd_change, 0x40, 0xc0, true, 0xe706d0baaf57a42e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::sd_query_stats_output_t), "_SD_GLOBAL_CHANGE_OUTPUT.SdQueryStats", sd_query_stats, 0x40, 0x0, true, 0xf2ce7e72daadf701)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::sd_enum_sds_output_t), "_SD_GLOBAL_CHANGE_OUTPUT.SdEnumSds", sd_enum_sds, 0x40, 0x80, true, 0x3ed223891b8d62e6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif