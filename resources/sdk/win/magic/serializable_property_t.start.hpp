#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_serializable_parent_t*), "SerializableProperty._parent", parent, 0x40, 0x40, true, 0xef4dd92b8794091a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "SerializableProperty._unSerialized", un_serialized, 0x80, 0x20, true, 0xabae643ea9246c6b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "SerializableProperty._added", added, 0xa0, 0x20, true, 0x9fcc1fd7d49b33fe)
#else
#define _m00
#define _m01
#define _m02
#endif