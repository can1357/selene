#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::system_trace_header_t), "_ETW_WNF_EVENT_SUBSCRIBE.Header", header, 0x0, 0x0, true, 0x73f3f5114f50691c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_ETW_WNF_EVENT_SUBSCRIBE.StateName", state_name, 0x100, 0x40, true, 0xe071f3f477592636)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_WNF_EVENT_SUBSCRIBE.Subscription", subscription, 0x140, 0x40, true, 0x2fb51acf253b8ab0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_WNF_EVENT_SUBSCRIBE.NameSub", name_sub, 0x180, 0x40, true, 0xd7a58580a30fa6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_WNF_EVENT_SUBSCRIBE.Callback", callback, 0x1c0, 0x40, true, 0x98c3166a7fa3f51c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_WNF_EVENT_SUBSCRIBE.RefCount", ref_count, 0x200, 0x20, true, 0xabc26569167a4241)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_WNF_EVENT_SUBSCRIBE.DeliveryFlags", delivery_flags, 0x220, 0x20, true, 0xf75c13cd71dfb1c2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif