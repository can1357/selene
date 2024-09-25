#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wudfmessage_header_t), "_WUDFMESSAGE_TRANSPORT_QUERY_ID.Header", header, 0x0, 0x8, true, 0xaac81892f244affa)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wudf_devnode_context_t*), "_WUDFMESSAGE_TRANSPORT_QUERY_ID.DevnodeContext", devnode_context, 0x40, 0x40, true, 0x7944df2f4edd7e88)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WUDFMESSAGE_TRANSPORT_QUERY_ID.Id", id, 0x80, 0x20, true, 0xaee851f7346ae613)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WUDFMESSAGE_TRANSPORT_QUERY_ID.BufferSize", buffer_size, 0xa0, 0x20, true, 0x91e26bbfeba5fda6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif