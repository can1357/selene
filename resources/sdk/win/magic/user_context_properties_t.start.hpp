#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_serializable_parent_t*), "UserContextProperties._parent", parent, 0x0, 0x0, false, 0x9851e47bc58ba276)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "UserContextProperties._unSerialized", un_serialized, 0x0, 0x0, false, 0xe63ed2539d7459b4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "UserContextProperties._added", added, 0x0, 0x0, false, 0x1ff77397f1316323)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::user_context_properties_data_t), "UserContextProperties._userContextPropertiesData", user_context_properties_data, 0x0, 0x0, false, 0xb7f5d93a2109bc09)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif