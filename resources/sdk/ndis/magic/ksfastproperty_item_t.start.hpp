#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSFASTPROPERTY_ITEM.PropertyId", property_id, 0x0, 0x0, false, 0x4a7d6c2070e0fa88)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(struct nt::file_object_t*, struct ndis::ksidentifier_t*, uint32_t, void*, uint32_t, struct io::status_block_t*)>*), "KSFASTPROPERTY_ITEM.GetPropertyHandler", get_property_handler, 0x0, 0x0, false, 0x93e50d0104ebfc3d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "KSFASTPROPERTY_ITEM.GetSupported", get_supported, 0x0, 0x0, false, 0x7c910620c136c73e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(struct nt::file_object_t*, struct ndis::ksidentifier_t*, uint32_t, void*, uint32_t, struct io::status_block_t*)>*), "KSFASTPROPERTY_ITEM.SetPropertyHandler", set_property_handler, 0x0, 0x0, false, 0xa0cf90bca48272d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "KSFASTPROPERTY_ITEM.SetSupported", set_supported, 0x0, 0x0, false, 0xfefdac39cd5e60d4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif