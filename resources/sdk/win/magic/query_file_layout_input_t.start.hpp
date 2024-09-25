#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_FILE_LAYOUT_INPUT.NumberOfPairs", number_of_pairs, 0x0, 0x20, true, 0x8b156b6e9a0921d0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_FILE_LAYOUT_INPUT.Flags", flags, 0x20, 0x20, true, 0x7d8f70d49454d050)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum win::query_file_layout_filter_type_t), "_QUERY_FILE_LAYOUT_INPUT.FilterType", filter_type, 0x40, 0x20, true, 0xb5e412188e7ea087)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::cluster_range_t, 1>), "_QUERY_FILE_LAYOUT_INPUT.Filter.ClusterRanges", cluster_ranges, 0x0, 0x80, true, 0x1ed6e60d06cda9ab)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::file_reference_range_t, 1>), "_QUERY_FILE_LAYOUT_INPUT.Filter.FileReferenceRanges", file_reference_ranges, 0x0, 0x80, true, 0x9338e51990d25aad)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<enum win::storage_reserve_id_t, 1>), "_QUERY_FILE_LAYOUT_INPUT.Filter.StorageReserveIds", storage_reserve_ids, 0x0, 0x20, true, 0x305756401520f1ce)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_filter_t), "_QUERY_FILE_LAYOUT_INPUT.Filter", filter, 0x80, 0x80, true, 0x3d1335f83a7f79e6)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_FILE_LAYOUT_INPUT.FilterEntryCount", filter_entry_count, 0x0, 0x20, true, 0xb4c378a321fcab55)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif