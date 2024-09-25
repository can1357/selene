#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct d3dk::mdt::monitor_source_mode_t), "_DMM_MONITOR_SOURCE_MODE_SERIALIZATION.Info", info, 0x0, 0x0, true, 0xf25187c0c4f816dd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum d3dk::mdt::monitor_timing_type_t), "_DMM_MONITOR_SOURCE_MODE_SERIALIZATION.TimingType", timing_type, 0x300, 0x20, true, 0x34ba1aec5e501c74)
#else
#define _m00
#define _m01
#endif