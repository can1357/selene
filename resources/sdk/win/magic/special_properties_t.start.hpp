#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_serializable_parent_t*), "SpecialProperties._parent", parent, 0x80, 0x40, true, 0x9359546d1858a292)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "SpecialProperties._unSerialized", un_serialized, 0xc0, 0x20, true, 0xc58d326789134f34)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "SpecialProperties._added", added, 0xe0, 0x20, true, 0x52ca446c7960d761)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::special_properties_data_t), "SpecialProperties._data", data, 0x100, 0xc0, true, 0x16460e4cdacf9f0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif