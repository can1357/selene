#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_WWAN_SET_CONTEXT_STATE.Header", header, 0x0, 0x20, true, 0xad57cef86ab6a41c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wwan::set_context_state_t), "_NDIS_WWAN_SET_CONTEXT_STATE.SetContextState", set_context_state, 0x20, 0x40, true, 0x8381a7a27ecec548)
#else
#define _m00
#define _m01
#endif