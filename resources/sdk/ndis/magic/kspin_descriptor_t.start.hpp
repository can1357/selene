#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSPIN_DESCRIPTOR.InterfacesCount", interfaces_count, 0x0, 0x0, false, 0xf5db2353f00600c2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct ndis::ksidentifier_t*), "KSPIN_DESCRIPTOR.Interfaces", interfaces, 0x0, 0x0, false, 0xa0d667eaa3679150)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSPIN_DESCRIPTOR.MediumsCount", mediums_count, 0x0, 0x0, false, 0x77c1af5d917c3d0a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct ndis::ksidentifier_t*), "KSPIN_DESCRIPTOR.Mediums", mediums, 0x0, 0x0, false, 0x5edfcff2a000b7a5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSPIN_DESCRIPTOR.DataRangesCount", data_ranges_count, 0x0, 0x0, false, 0x683a4d39b9f6bd39)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union ndis::ksdataformat_t const**), "KSPIN_DESCRIPTOR.DataRanges", data_ranges, 0x0, 0x0, false, 0x1b7fb06a8f0f5009)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::kspin_dataflow_t), "KSPIN_DESCRIPTOR.DataFlow", data_flow, 0x0, 0x0, false, 0xbca1d21a53cd0625)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::kspin_communication_t), "KSPIN_DESCRIPTOR.Communication", communication, 0x0, 0x0, false, 0x59ab8586b696048)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t*), "KSPIN_DESCRIPTOR.Category", category, 0x0, 0x0, false, 0x3ba481a2e2ab362c)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t*), "KSPIN_DESCRIPTOR.Name", name, 0x0, 0x0, false, 0xf7a205e2d7e38dac)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSPIN_DESCRIPTOR.ConstrainedDataRangesCount", constrained_data_ranges_count, 0x0, 0x0, false, 0x2e83b80ad9c3384d)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union ndis::ksdataformat_t**), "KSPIN_DESCRIPTOR.ConstrainedDataRanges", constrained_data_ranges, 0x0, 0x0, false, 0xa12054c1225805b8)
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
#endif