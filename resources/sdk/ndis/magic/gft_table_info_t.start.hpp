#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_GFT_TABLE_INFO.Header", header, 0x0, 0x20, true, 0x6506151d020db69c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_TABLE_INFO.Flags", flags, 0x20, 0x20, true, 0x911e41e4803e847c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_TABLE_INFO.TableId", table_id, 0x40, 0x20, true, 0xb491ebefae683d08)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::gfp_table_type_t), "_NDIS_GFT_TABLE_INFO.TableType", table_type, 0x60, 0x20, true, 0x9382cadc2022aea3)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_TABLE_INFO.NextTableId", next_table_id, 0x80, 0x20, true, 0xb6c21f0cb792e246)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_TABLE_INFO.NumFlowEntries", num_flow_entries, 0xa0, 0x20, true, 0xfd1bf70f14419465)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif