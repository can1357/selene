#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::midl_stub_message_t*)>*), "_XMIT_ROUTINE_QUINTUPLE.pfnTranslateToXmit", pfn_translate_to_xmit, 0x0, 0x40, true, 0xb091f1b218ac3a0f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::midl_stub_message_t*)>*), "_XMIT_ROUTINE_QUINTUPLE.pfnTranslateFromXmit", pfn_translate_from_xmit, 0x40, 0x40, true, 0xf8cffa7b23660a2f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::midl_stub_message_t*)>*), "_XMIT_ROUTINE_QUINTUPLE.pfnFreeXmit", pfn_free_xmit, 0x80, 0x40, true, 0xc65188a78e6a7895)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::midl_stub_message_t*)>*), "_XMIT_ROUTINE_QUINTUPLE.pfnFreeInst", pfn_free_inst, 0xc0, 0x40, true, 0xa56fb5686306935c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif