#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_NDIS_FILTERLIST_ITEM.FilterUniqueName", filter_unique_name, 0x0, 0x0, false, 0x9008afa1cac967d1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_FILTERLIST_ITEM.FilterIndex", filter_index, 0x0, 0x0, false, 0x538755c2823cf1e1)
#else
#define _m00
#define _m01
#endif