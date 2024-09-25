#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct lpcp::port_object_t*), "_LPCP_PORT_OBJECT.ConnectionPort", connection_port, 0x0, 0x40, true, 0x538b7c53a19b02da)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct lpcp::port_object_t*), "_LPCP_PORT_OBJECT.ConnectedPort", connected_port, 0x40, 0x40, true, 0xe11b02f1f45a951d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct lpcp::port_queue_t), "_LPCP_PORT_OBJECT.MsgQueue", msg_queue, 0x80, 0x0, true, 0x45b104d5fce417f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::client_id_t), "_LPCP_PORT_OBJECT.Creator", creator, 0x180, 0x80, true, 0xe817217645fd410e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_LPCP_PORT_OBJECT.ClientSectionBase", client_section_base, 0x200, 0x40, true, 0x356a446ee1bd44d3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_LPCP_PORT_OBJECT.ServerSectionBase", server_section_base, 0x240, 0x40, true, 0x46806dce0041a0b0)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_LPCP_PORT_OBJECT.PortContext", port_context, 0x280, 0x40, true, 0x9007d4dbff3c69cd)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ethread_t*), "_LPCP_PORT_OBJECT.ClientThread", client_thread, 0x2c0, 0x40, true, 0x6ec5228441228b26)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct sec::quality_of_service_t), "_LPCP_PORT_OBJECT.SecurityQos", security_qos, 0x300, 0x60, true, 0xc8646e193a8dc0d9)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct sec::client_context_t), "_LPCP_PORT_OBJECT.StaticSecurity", static_security, 0x380, 0x40, true, 0x70edff6e95122ff1)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_LPCP_PORT_OBJECT.LpcReplyChainHead", lpc_reply_chain_head, 0x5c0, 0x80, true, 0x5a2ca10bd4d683d3)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_LPCP_PORT_OBJECT.LpcDataInfoChainHead", lpc_data_info_chain_head, 0x640, 0x80, true, 0x58ba5454908e86af)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::eprocess_t*), "_LPCP_PORT_OBJECT.ServerProcess", server_process, 0x6c0, 0x40, true, 0x9fe5fb271aec51c9)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::eprocess_t*), "_LPCP_PORT_OBJECT.MappingProcess", mapping_process, 0x6c0, 0x40, true, 0x4e9b4ec29cb2baee)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_LPCP_PORT_OBJECT.MaxMessageLength", max_message_length, 0x700, 0x10, true, 0x4955850c755b4a40)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_LPCP_PORT_OBJECT.MaxConnectionInfoLength", max_connection_info_length, 0x710, 0x10, true, 0x80ac2b192768416a)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LPCP_PORT_OBJECT.Flags", flags, 0x720, 0x20, true, 0x6887637549eedfdb)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_LPCP_PORT_OBJECT.WaitEvent", wait_event, 0x740, 0xc0, true, 0xd9d68e4b96d17583)
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
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#endif