#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_SWITCH_NET_BUFFER_LIST_CONTEXT_TYPE_INFO.Header", header, 0x0, 0x20, true, 0x7b527ea2f74bf5fe)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_NDIS_SWITCH_NET_BUFFER_LIST_CONTEXT_TYPE_INFO.ContextName", context_name, 0x40, 0x40, true, 0x881f0cec1ec87931)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t*), "_NDIS_SWITCH_NET_BUFFER_LIST_CONTEXT_TYPE_INFO.ExtensionId", extension_id, 0x80, 0x40, true, 0x5f427a55e819c300)
#else
#define _m00
#define _m01
#define _m02
#endif