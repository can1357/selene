#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::restart_attributes_t), "NDIS_RESTART_INFORMATION.Attributes", attributes, 0x0, 0x0, true, 0x9420aa0c6bdcd517)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::restart_general_attributes_t), "NDIS_RESTART_INFORMATION.General", general, 0x80, 0xc0, true, 0x3423b0f6db4ef07d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::receive_scale_capabilities_t), "NDIS_RESTART_INFORMATION.RssCaps", rss_caps, 0x380, 0xa0, true, 0xfb069219ce45da24)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::protocol_restart_parameters_t), "NDIS_RESTART_INFORMATION.ProtocolParameters", protocol_parameters, 0x440, 0xc0, true, 0xce33dd7f9eff400)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NDIS_RESTART_INFORMATION.MiniportMacOptionsToPreserve", miniport_mac_options_to_preserve, 0x600, 0x20, true, 0x8113178aed052c2f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif