#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_GFT_DELETE_TABLE_PARAMETERS.Header", header, 0x0, 0x20, true, 0x5b0e98631cb1b694)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_DELETE_TABLE_PARAMETERS.Flags", flags, 0x20, 0x20, true, 0xf16cc68087300bff)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_DELETE_TABLE_PARAMETERS.TableId", table_id, 0x40, 0x20, true, 0xb6eca000fe9e972f)
#else
#define _m00
#define _m01
#define _m02
#endif