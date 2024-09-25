#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_VOLUME_CONTROL.PortVolume", port_volume, 0x0, 0x20, true, 0x491be407df938961)
#else
#define _m00
#endif