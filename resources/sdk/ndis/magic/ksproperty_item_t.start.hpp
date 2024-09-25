#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSPROPERTY_ITEM.PropertyId", property_id, 0x0, 0x0, false, 0x36c3acfb8eef189b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::irp_t*, struct ndis::ksidentifier_t*, void*)>*), "KSPROPERTY_ITEM.GetPropertyHandler", get_property_handler, 0x0, 0x0, false, 0x397f544d5c069657)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "KSPROPERTY_ITEM.GetSupported", get_supported, 0x0, 0x0, false, 0x77354ab756d1f3fc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSPROPERTY_ITEM.MinProperty", min_property, 0x0, 0x0, false, 0x269c33c5d8e3112c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSPROPERTY_ITEM.MinData", min_data, 0x0, 0x0, false, 0xe02b70e97a4f238f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::irp_t*, struct ndis::ksidentifier_t*, void*)>*), "KSPROPERTY_ITEM.SetPropertyHandler", set_property_handler, 0x0, 0x0, false, 0x34661eccc84f9eb7)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "KSPROPERTY_ITEM.SetSupported", set_supported, 0x0, 0x0, false, 0x252a498ae2b84877)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct ndis::ksproperty_values_t*), "KSPROPERTY_ITEM.Values", values, 0x0, 0x0, false, 0x6c45cdfcbe492459)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSPROPERTY_ITEM.RelationsCount", relations_count, 0x0, 0x0, false, 0xc767f2c97b1ce55a)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct ndis::ksidentifier_t*), "KSPROPERTY_ITEM.Relations", relations, 0x0, 0x0, false, 0xa1e697bc85fd62eb)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::irp_t*, struct ndis::ksidentifier_t*, void*)>*), "KSPROPERTY_ITEM.SupportHandler", support_handler, 0x0, 0x0, false, 0xd435cdfdb2fc99c7)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSPROPERTY_ITEM.SerializedSize", serialized_size, 0x0, 0x0, false, 0x2dc7694d17b4759)
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