#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_MSIX_CONFIG_PARAMETERS.Header", header, 0x0, 0x20, true, 0xfe0881ee21db55d3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::msix_table_config_t), "_NDIS_MSIX_CONFIG_PARAMETERS.ConfigOperation", config_operation, 0x20, 0x20, true, 0xc15db895b5c9b4bf)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MSIX_CONFIG_PARAMETERS.TableEntry", table_entry, 0x40, 0x20, true, 0x750cff1730ba6aa7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MSIX_CONFIG_PARAMETERS.MessageNumber", message_number, 0x60, 0x20, true, 0xe7843021ea2a4b5f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif