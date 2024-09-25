#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MIDL_INTERFACE_METHOD_PROPERTIES.MethodCount", method_count, 0x0, 0x10, true, 0xf1cde2c91a105afb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::midl_method_property_map_t const**), "_MIDL_INTERFACE_METHOD_PROPERTIES.MethodProperties", method_properties, 0x40, 0x40, true, 0x3de07b1d04e0057d)
#else
#define _m00
#define _m01
#endif