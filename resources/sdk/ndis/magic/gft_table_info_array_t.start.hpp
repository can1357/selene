#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_GFT_TABLE_INFO_ARRAY.Header", header, 0x0, 0x20, true, 0xf522af8730fafdc2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_TABLE_INFO_ARRAY.Flags", flags, 0x20, 0x20, true, 0xdc6eee7b6c895c83)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_TABLE_INFO_ARRAY.TableArrayOffset", table_array_offset, 0x40, 0x20, true, 0x6e2197775aac600e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_TABLE_INFO_ARRAY.TableArrayNumElements", table_array_num_elements, 0x60, 0x20, true, 0xd1b2592b1a99bae0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_TABLE_INFO_ARRAY.TableArrayElementSize", table_array_element_size, 0x80, 0x20, true, 0xa88b7d7e2abdc7fb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif