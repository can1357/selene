#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_ELEVATION_FLAGS.Flags", flags, 0x0, 0x20, true, 0x6f4e2c9a6967d8d7)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RTL_ELEVATION_FLAGS.ElevationEnabled", elevation_enabled, 0x0, 0x1, true, 0x65c1a1e384a28cba, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RTL_ELEVATION_FLAGS.VirtualizationEnabled", virtualization_enabled, 0x1, 0x1, true, 0x459358b5b04191e4, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RTL_ELEVATION_FLAGS.InstallerDetectEnabled", installer_detect_enabled, 0x2, 0x1, true, 0xbdafade3391f0fc7, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif