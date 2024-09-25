#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::teb_active_frame_context_t), "_TEB_ACTIVE_FRAME_CONTEXT_EX.BasicContext", basic_context, 0x0, 0x80, true, 0xd5fd46080c490498)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const char*), "_TEB_ACTIVE_FRAME_CONTEXT_EX.SourceLocation", source_location, 0x80, 0x40, true, 0xccbd487efa035ab0)
#else
#define _m00
#define _m01
#endif