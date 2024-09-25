#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_GFT_TABLE_PARAMETERS.Header", header, 0x0, 0x20, true, 0xcf126dd754be26f8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_TABLE_PARAMETERS.Flags", flags, 0x20, 0x20, true, 0x9dc787348d78958e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_TABLE_PARAMETERS.TableId", table_id, 0x40, 0x20, true, 0x835578c7751828db)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::gfp_table_type_t), "_NDIS_GFT_TABLE_PARAMETERS.TableType", table_type, 0x60, 0x20, true, 0xf0f23e8b371e5ec8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_TABLE_PARAMETERS.NextTableId", next_table_id, 0x80, 0x20, true, 0x2194688aafa743e0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif