#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_TRUST_LIST_INFO.cbSize", cb_size, 0x0, 0x20, true, 0xf6be347e3745a329)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ctl_entry_t*), "_CERT_TRUST_LIST_INFO.pCtlEntry", p_ctl_entry, 0x40, 0x40, true, 0x7cdd20da145af6f4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::ctl_context_t*), "_CERT_TRUST_LIST_INFO.pCtlContext", p_ctl_context, 0x80, 0x40, true, 0xa09f8438acc629a9)
#else
#define _m00
#define _m01
#define _m02
#endif