#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KALPC_MESSAGE_ATTRIBUTES.ClientContext", client_context, 0x0, 0x40, true, 0xcd4b9434f1ffc000)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KALPC_MESSAGE_ATTRIBUTES.ServerContext", server_context, 0x40, 0x40, true, 0x77feef49b11bd4bd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KALPC_MESSAGE_ATTRIBUTES.PortContext", port_context, 0x80, 0x40, true, 0x2b54a41c93dcf3d7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KALPC_MESSAGE_ATTRIBUTES.CancelPortContext", cancel_port_context, 0xc0, 0x40, true, 0x38f7ca2a26b24d3c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kalpc_security_data_t*), "_KALPC_MESSAGE_ATTRIBUTES.SecurityData", security_data, 0x100, 0x40, true, 0x22ac6ab93757ff9f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kalpc_view_t*), "_KALPC_MESSAGE_ATTRIBUTES.View", view, 0x140, 0x40, true, 0xc59510d5d88b0e25)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kalpc_handle_data_t*), "_KALPC_MESSAGE_ATTRIBUTES.HandleData", handle_data, 0x180, 0x40, true, 0x7d0abf3df6fba1e1)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::kalpc_direct_event_t), "_KALPC_MESSAGE_ATTRIBUTES.DirectEvent", direct_event, 0x1c0, 0x40, true, 0xf6319ca23450dd4b)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kalpc_work_on_behalf_data_t), "_KALPC_MESSAGE_ATTRIBUTES.WorkOnBehalfData", work_on_behalf_data, 0x200, 0x40, true, 0xaf04f7d86c99fff7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif