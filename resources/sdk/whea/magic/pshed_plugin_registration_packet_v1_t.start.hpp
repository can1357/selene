#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_PSHED_PLUGIN_REGISTRATION_PACKET_V1.Length", length, 0x0, 0x20, true, 0xdce90bd2c38f3d0c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_PSHED_PLUGIN_REGISTRATION_PACKET_V1.Version", version, 0x20, 0x20, true, 0xf2a74e6e85143826)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_WHEA_PSHED_PLUGIN_REGISTRATION_PACKET_V1.Context", context, 0x40, 0x40, true, 0x97a2d3f844e27b48)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_PSHED_PLUGIN_REGISTRATION_PACKET_V1.FunctionalAreaMask", functional_area_mask, 0x80, 0x20, true, 0x5ecae750221759f0)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::pshed_plugin_callbacks_t), "_WHEA_PSHED_PLUGIN_REGISTRATION_PACKET_V1.Callbacks", callbacks, 0xc0, 0xc0, true, 0xbdc5998446ce836f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif