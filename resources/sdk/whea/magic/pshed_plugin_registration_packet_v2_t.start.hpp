#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_PSHED_PLUGIN_REGISTRATION_PACKET_V2.Length", length, 0x0, 0x20, true, 0x1a6b90c11ddb3052)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_PSHED_PLUGIN_REGISTRATION_PACKET_V2.Version", version, 0x20, 0x20, true, 0x9d81bf7a2e11bb0e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_WHEA_PSHED_PLUGIN_REGISTRATION_PACKET_V2.Context", context, 0x40, 0x40, true, 0x4c308148a77b214a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_PSHED_PLUGIN_REGISTRATION_PACKET_V2.FunctionalAreaMask", functional_area_mask, 0x80, 0x20, true, 0x86f970ddf4c60cc1)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::pshed_plugin_callbacks_t), "_WHEA_PSHED_PLUGIN_REGISTRATION_PACKET_V2.Callbacks", callbacks, 0xc0, 0xc0, true, 0xb247f126516cba83)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_WHEA_PSHED_PLUGIN_REGISTRATION_PACKET_V2.PluginHandle", plugin_handle, 0x480, 0x40, true, 0x411999a9cd53b44e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif