#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t*), "KSPROPERTY_SET.Set", set, 0x0, 0x0, false, 0x593ebb2fa0a0f53)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSPROPERTY_SET.PropertiesCount", properties_count, 0x0, 0x0, false, 0x81b9cfbb9372b283)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct ndis::ksproperty_item_t*), "KSPROPERTY_SET.PropertyItem", property_item, 0x0, 0x0, false, 0xec6d76d62d698eac)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSPROPERTY_SET.FastIoCount", fast_io_count, 0x0, 0x0, false, 0x7827208257f983d0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct ndis::ksfastproperty_item_t*), "KSPROPERTY_SET.FastIoTable", fast_io_table, 0x0, 0x0, false, 0x3ace461df3205ec0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif