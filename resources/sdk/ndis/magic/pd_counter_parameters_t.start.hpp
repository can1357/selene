#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_PD_COUNTER_PARAMETERS.Header", header, 0x0, 0x20, true, 0x686dfa73dc8b6d7d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_COUNTER_PARAMETERS.Flags", flags, 0x20, 0x20, true, 0x7f62e379bd25f486)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "_NDIS_PD_COUNTER_PARAMETERS.CounterName", counter_name, 0x40, 0x40, true, 0x277a7e7f2769b745)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::pd_counter_type_t), "_NDIS_PD_COUNTER_PARAMETERS.Type", type, 0x80, 0x20, true, 0xea4c965b2955495a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif