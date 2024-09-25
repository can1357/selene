#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PORT_OUTPUT.ChannelSelection", channel_selection, 0x0, 0x8, true, 0x9f508df7ada5b3e1)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PORT_OUTPUT.Volume", volume, 0x8, 0x8, true, 0x39f080ad4526b4d9)
#else
#define _m00
#define _m01
#endif