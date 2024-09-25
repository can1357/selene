#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum win::link_tracking_information_type_t), "_LINK_TRACKING_INFORMATION.Type", type, 0x0, 0x20, true, 0x66a5e8fd0d836098)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_LINK_TRACKING_INFORMATION.VolumeId", volume_id, 0x20, 0x80, true, 0x6f79fe806296e6a3)
#else
#define _m00
#define _m01
#endif