#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_WWAN_SET_REGISTER_STATE.Header", header, 0x0, 0x20, true, 0x8a9fd6d0cfedf9d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wwan::set_register_state_t), "_NDIS_WWAN_SET_REGISTER_STATE.SetRegisterState", set_register_state, 0x20, 0xc0, true, 0x63c75dd1d97f1f93)
#else
#define _m00
#define _m01
#endif