#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_ENUM_FILTERS.Header", header, 0x0, 0x20, true, 0x256488755308b9c8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_ENUM_FILTERS.Flags", flags, 0x20, 0x20, true, 0x421edaaa8b08a9c4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_ENUM_FILTERS.NumberOfFilters", number_of_filters, 0x40, 0x20, true, 0x1ff989b89cff4989)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_ENUM_FILTERS.OffsetFirstFilter", offset_first_filter, 0x60, 0x20, true, 0x98aab902a8abf3cc)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct ndis::filter_interface_t, 1>), "_NDIS_ENUM_FILTERS.Filter", filter, 0x80, 0x0, true, 0x997993437ab47148)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif