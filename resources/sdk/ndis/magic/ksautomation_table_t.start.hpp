#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSAUTOMATION_TABLE_.PropertySetsCount", property_sets_count, 0x0, 0x0, false, 0x3577959fd08c908a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSAUTOMATION_TABLE_.PropertyItemSize", property_item_size, 0x0, 0x0, false, 0x8c328dfd6cfb2f9f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct ndis::ksproperty_set_t*), "KSAUTOMATION_TABLE_.PropertySets", property_sets, 0x0, 0x0, false, 0x103cf9dd09b0892a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSAUTOMATION_TABLE_.MethodSetsCount", method_sets_count, 0x0, 0x0, false, 0xea792610ad573adb)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSAUTOMATION_TABLE_.MethodItemSize", method_item_size, 0x0, 0x0, false, 0x4bab5d54ca3332fe)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct ndis::ksmethod_set_t*), "KSAUTOMATION_TABLE_.MethodSets", method_sets, 0x0, 0x0, false, 0x6c3ed98c04efcf26)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSAUTOMATION_TABLE_.EventSetsCount", event_sets_count, 0x0, 0x0, false, 0x3035960595a1c4fb)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSAUTOMATION_TABLE_.EventItemSize", event_item_size, 0x0, 0x0, false, 0x1cc33cd794d7abd6)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct ndis::ksevent_set_t*), "KSAUTOMATION_TABLE_.EventSets", event_sets, 0x0, 0x0, false, 0x27775e211d4bd445)
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
#endif