#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagPOINTER_DEVICE_PROPERTY.logicalMin", logical_min, 0x0, 0x20, true, 0x75006c92abdccf88)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagPOINTER_DEVICE_PROPERTY.logicalMax", logical_max, 0x20, 0x20, true, 0x799cce0916106891)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagPOINTER_DEVICE_PROPERTY.physicalMin", physical_min, 0x40, 0x20, true, 0xe18d87ef88b9bd72)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagPOINTER_DEVICE_PROPERTY.physicalMax", physical_max, 0x60, 0x20, true, 0xb92342e9258fbf30)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagPOINTER_DEVICE_PROPERTY.unit", unit, 0x80, 0x20, true, 0xeeef0ee59e88c17f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagPOINTER_DEVICE_PROPERTY.unitExponent", unit_exponent, 0xa0, 0x20, true, 0x6355e0f4f5ad4ca1)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagPOINTER_DEVICE_PROPERTY.usagePageId", usage_page_id, 0xc0, 0x10, true, 0x60c4089b7d9c64c2)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagPOINTER_DEVICE_PROPERTY.usageId", usage_id, 0xd0, 0x10, true, 0xa60a78fd7ea9e8ef)
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