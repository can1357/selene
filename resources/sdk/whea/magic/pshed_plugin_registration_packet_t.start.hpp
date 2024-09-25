#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_PSHED_PLUGIN_REGISTRATION_PACKET.Length", length, 0x0, 0x0, false, 0x9358b10863110933)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_PSHED_PLUGIN_REGISTRATION_PACKET.Version", version, 0x0, 0x0, false, 0xdb8af6cff91bdce6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WHEA_PSHED_PLUGIN_REGISTRATION_PACKET.Context", context, 0x0, 0x0, false, 0x21e82e5ac5a6547a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_PSHED_PLUGIN_REGISTRATION_PACKET.FunctionalAreaMask", functional_area_mask, 0x0, 0x0, false, 0x8f9b89001dcdddc1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct whea::pshed_plugin_callbacks_t), "_WHEA_PSHED_PLUGIN_REGISTRATION_PACKET.Callbacks", callbacks, 0x0, 0x0, false, 0x79129dd80e96245)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif