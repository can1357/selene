#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DMM_VIDPNTARGETMODESET_SERIALIZATION.NumModes", num_modes, 0x0, 0x8, true, 0xa859e597dd134e2b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct d3dk::mdt::vidpn_target_mode_t, 1>), "_DMM_VIDPNTARGETMODESET_SERIALIZATION.ModeSerialization", mode_serialization, 0x40, 0x40, true, 0xb1a698fc4eb7f89d)
#else
#define _m00
#define _m01
#endif