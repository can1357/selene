#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::system_trace_header_t), "_ETW_THREAD_EVENT_SUBPROCESSTAG.Header", header, 0x0, 0x0, true, 0x1172ba838359fdd0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_THREAD_EVENT_SUBPROCESSTAG.OldTag", old_tag, 0x100, 0x20, true, 0x1f4a53f2bad8e016)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_THREAD_EVENT_SUBPROCESSTAG.NewTag", new_tag, 0x120, 0x20, true, 0xc0cc8dbeb507ee17)
#else
#define _m00
#define _m01
#define _m02
#endif