#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_UMS_CREATE_THREAD_ATTRIBUTES.UmsVersion", ums_version, 0x0, 0x20, true, 0x7ffec0a6915e3236)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::ums_context_t*), "_UMS_CREATE_THREAD_ATTRIBUTES.RtlUmsContext", rtl_ums_context, 0x40, 0x40, true, 0xec9475ba4e6aaf30)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_UMS_CREATE_THREAD_ATTRIBUTES.UmsContext", ums_context, 0x40, 0x40, true, 0x44b56f316fde9d48)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::ums_completion_list_t*), "_UMS_CREATE_THREAD_ATTRIBUTES.RtlUmsCompletionList", rtl_ums_completion_list, 0x80, 0x40, true, 0x48237ca905e1a909)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_UMS_CREATE_THREAD_ATTRIBUTES.UmsCompletionList", ums_completion_list, 0x80, 0x40, true, 0x62e36174ae1264c2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif