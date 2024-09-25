#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "DOT11_HRDSSS_PHY_ATTRIBUTES.bShortPreambleOptionImplemented", b_short_preamble_option_implemented, 0x0, 0x8, true, 0xb456bdc5232ad953)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "DOT11_HRDSSS_PHY_ATTRIBUTES.bPBCCOptionImplemented", b_pbcc_option_implemented, 0x8, 0x8, true, 0x1c1b520c36211fd8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "DOT11_HRDSSS_PHY_ATTRIBUTES.bChannelAgilityPresent", b_channel_agility_present, 0x10, 0x8, true, 0x39bb5ba68cf5e060)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_HRDSSS_PHY_ATTRIBUTES.uHRCCAModeSupported", u_hrcca_mode_supported, 0x20, 0x20, true, 0xdfd11198ea799673)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif