#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::system_trace_header_t), "_ETW_WNF_EVENT_NAME_SUB_RUNDOWN.Header", header, 0x0, 0x0, true, 0x373e20c334e19401)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_ETW_WNF_EVENT_NAME_SUB_RUNDOWN.StateName", state_name, 0x100, 0x40, true, 0xccd72ebce5209951)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_WNF_EVENT_NAME_SUB_RUNDOWN.NameSub", name_sub, 0x140, 0x40, true, 0xf15fe43305d2b660)
#else
#define _m00
#define _m01
#define _m02
#endif