#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_WWAN_SET_PROVISIONED_CONTEXT.Header", header, 0x0, 0x20, true, 0xdb3f12164b521c4e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wwan::set_context_t), "_NDIS_WWAN_SET_PROVISIONED_CONTEXT.ProvisionedContext", provisioned_context, 0x20, 0x60, true, 0x827af5de4774dddb)
#else
#define _m00
#define _m01
#endif