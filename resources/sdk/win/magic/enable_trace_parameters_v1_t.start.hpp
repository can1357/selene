#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ENABLE_TRACE_PARAMETERS_V1.Version", version, 0x0, 0x20, true, 0x4cbfccdc8eee8fca)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ENABLE_TRACE_PARAMETERS_V1.EnableProperty", enable_property, 0x20, 0x20, true, 0x15c19483d43d879c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ENABLE_TRACE_PARAMETERS_V1.ControlFlags", control_flags, 0x40, 0x20, true, 0x3b85b85f5741e644)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_ENABLE_TRACE_PARAMETERS_V1.SourceId", source_id, 0x60, 0x80, true, 0x322106f1b47ba041)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::event_filter_descriptor_t*), "_ENABLE_TRACE_PARAMETERS_V1.EnableFilterDesc", enable_filter_desc, 0x100, 0x40, true, 0x28fc0cdc88c85970)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif