#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DMM_VIDPNSET_SERIALIZATION.NumVidPns", num_vid_pns, 0x0, 0x8, true, 0xaa3cd7fe92e1c903)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "_DMM_VIDPNSET_SERIALIZATION.VidPnOffset", vid_pn_offset, 0x20, 0x20, true, 0xe1a114d49ec6d248)
#else
#define _m00
#define _m01
#endif