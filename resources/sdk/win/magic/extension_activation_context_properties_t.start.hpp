#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_serializable_parent_t*), "ExtensionActivationContextProperties._parent", parent, 0x80, 0x40, true, 0xd13a6e305c03ddb6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "ExtensionActivationContextProperties._unSerialized", un_serialized, 0xc0, 0x20, true, 0xf7f4bc3bebc287f5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "ExtensionActivationContextProperties._added", added, 0xe0, 0x20, true, 0xe55523994a43aa68)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::extension_activation_context_properties_data_t), "ExtensionActivationContextProperties._extensionActivationContextPropertiesData", extension_activation_context_properties_data, 0x100, 0x40, true, 0x7bb34d31d13ef77a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif