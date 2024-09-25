#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ENABLE_TRACE_PARAMETERS.Version", version, 0x0, 0x20, true, 0x96036cc17775ec18)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ENABLE_TRACE_PARAMETERS.EnableProperty", enable_property, 0x20, 0x20, true, 0xf540541e92df7524)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ENABLE_TRACE_PARAMETERS.ControlFlags", control_flags, 0x40, 0x20, true, 0xadf0161559de038d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_ENABLE_TRACE_PARAMETERS.SourceId", source_id, 0x60, 0x80, true, 0x6456f7869262703)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::event_filter_descriptor_t*), "_ENABLE_TRACE_PARAMETERS.EnableFilterDesc", enable_filter_desc, 0x100, 0x40, true, 0xc3dca5c065987cdd)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ENABLE_TRACE_PARAMETERS.FilterDescCount", filter_desc_count, 0x140, 0x20, true, 0x14c24979a1c0645e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif