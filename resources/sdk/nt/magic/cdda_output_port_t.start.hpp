#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_CDDA_OUTPUT_PORT.ChannelSelection", channel_selection, 0x0, 0x4, true, 0xa0c7c30ff81b0aa6, 4, uint8_t)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDDA_OUTPUT_PORT.Volume", volume, 0x8, 0x8, true, 0x8025057127fde356)
#else
#define _m00
#define _m01
#endif