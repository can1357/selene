#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::config_knob_namespace_type_t), "_CONFIG_KNOB_NAMESPACE.NamespaceType", namespace_type, 0x0, 0x0, false, 0xa22dfe9b8a5a85b5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_CONFIG_KNOB_NAMESPACE.ObjectId", object_id, 0x0, 0x0, false, 0x2f173b7880f0b01d)
#else
#define _m00
#define _m01
#endif