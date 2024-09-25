#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SEC_APPLICATION_PROTOCOLS.ProtocolListsSize", protocol_lists_size, 0x0, 0x20, true, 0x1dfbf2bf64df0ee5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct sec::application_protocol_list_t, 1>), "_SEC_APPLICATION_PROTOCOLS.ProtocolLists", protocol_lists, 0x20, 0x40, true, 0x1aa3d3af95e67e6)
#else
#define _m00
#define _m01
#endif