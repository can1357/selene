#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::wnf_subscription_t*), "_MX_WNF_SUBSCRIPTION_CONTEXT.Handle", handle, 0x0, 0x40, true, 0xba46472b1fd9ed1f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wnf::state_name_t), "_MX_WNF_SUBSCRIPTION_CONTEXT.WnfStateName", wnf_state_name, 0x40, 0x40, true, 0x3334f30bbdc1b966)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pmx_wnf_callback_t ), "_MX_WNF_SUBSCRIPTION_CONTEXT.Callback", callback, 0x80, 0x40, true, 0x290d69f631e91abf)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MX_WNF_SUBSCRIPTION_CONTEXT.CallbackContext", callback_context, 0xc0, 0x40, true, 0x704c3faa669a1ec3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif