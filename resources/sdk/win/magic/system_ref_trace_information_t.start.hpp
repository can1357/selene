#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_REF_TRACE_INFORMATION.TraceEnable", trace_enable, 0x0, 0x8, true, 0x2f8efde3adc4ecae)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_REF_TRACE_INFORMATION.TracePermanent", trace_permanent, 0x8, 0x8, true, 0x858d38493cdb480a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_SYSTEM_REF_TRACE_INFORMATION.TraceProcessName", trace_process_name, 0x40, 0x80, true, 0x3cae796df3154763)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_SYSTEM_REF_TRACE_INFORMATION.TracePoolTags", trace_pool_tags, 0xc0, 0x80, true, 0xf2c13fca4a86c9e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif