#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct alpc::port_t*), "_ALPC_COMMUNICATION_INFO.ConnectionPort", connection_port, 0x0, 0x40, true, 0x91ae03ba959b44d6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct alpc::port_t*), "_ALPC_COMMUNICATION_INFO.ServerCommunicationPort", server_communication_port, 0x40, 0x40, true, 0x91d1e01d5f26594f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct alpc::port_t*), "_ALPC_COMMUNICATION_INFO.ClientCommunicationPort", client_communication_port, 0x80, 0x40, true, 0xcd5b71990d7dc621)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_ALPC_COMMUNICATION_INFO.CommunicationList", communication_list, 0xc0, 0x80, true, 0x539652c12c29bf58)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct alpc::handle_table_t), "_ALPC_COMMUNICATION_INFO.HandleTable", handle_table, 0x140, 0xc0, true, 0x5673567bda6ec64f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kalpc_message_t*), "_ALPC_COMMUNICATION_INFO.CloseMessage", close_message, 0x200, 0x40, true, 0xa0f1d0ab355880ea)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif