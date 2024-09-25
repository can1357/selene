#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::system_trace_header_t), "_ETW_WNF_EVENT_CALLBACK.Header", header, 0x0, 0x0, true, 0x4b908f3bb240cae3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_ETW_WNF_EVENT_CALLBACK.StateName", state_name, 0x100, 0x40, true, 0xaaf56349b5184753)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_WNF_EVENT_CALLBACK.Subscription", subscription, 0x140, 0x40, true, 0x971159dd0d56fee7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_WNF_EVENT_CALLBACK.NameSub", name_sub, 0x180, 0x40, true, 0xc88ed0af5f9d43ed)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_WNF_EVENT_CALLBACK.Callback", callback, 0x1c0, 0x40, true, 0xf2f3aa9c05834fd4)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_WNF_EVENT_CALLBACK.ChangeStamp", change_stamp, 0x200, 0x20, true, 0x1b3533997f2076e4)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_WNF_EVENT_CALLBACK.DeliveryFlags", delivery_flags, 0x220, 0x20, true, 0x785d0eeb75475962)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_WNF_EVENT_CALLBACK.Return", _return, 0x240, 0x20, true, 0x8081ebcd094ba07c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif