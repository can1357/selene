#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct d3dk::mdt::vidpn_source_mode_t), "_DMM_VIDPNPATHSFROMSOURCE_SERIALIZATION.SourceMode", source_mode, 0x0, 0x40, true, 0x49a81d52f5be321f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DMM_VIDPNPATHSFROMSOURCE_SERIALIZATION.NumPathsFromSource", num_paths_from_source, 0x140, 0x8, true, 0x2b3ada9a8b33e14a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct dmm::vidpnpathandtargetmode_serialization_t, 1>), "_DMM_VIDPNPATHSFROMSOURCE_SERIALIZATION.PathAndTargetModeSerialization", path_and_target_mode_serialization, 0x180, 0x80, true, 0x57114a2441f0a8ec)
#else
#define _m00
#define _m01
#define _m02
#endif