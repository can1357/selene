#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "tagSWITCH_CONTEXT_ATTRIBUTE.ulContextUpdateCounter", ul_context_update_counter, 0x0, 0x40, true, 0x74c864f1220c7b35)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagSWITCH_CONTEXT_ATTRIBUTE.fAllowContextUpdate", f_allow_context_update, 0x40, 0x20, true, 0xfda5ff0708eb3af5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagSWITCH_CONTEXT_ATTRIBUTE.fEnableTrace", f_enable_trace, 0x60, 0x20, true, 0xb2ce88ad770a31e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "tagSWITCH_CONTEXT_ATTRIBUTE.EtwHandle", etw_handle, 0x80, 0x40, true, 0x3acf8663e35b0d4a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif