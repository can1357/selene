#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum sec::application_protocol_negotiation_ext_t), "_SEC_APPLICATION_PROTOCOL_LIST.ProtoNegoExt", proto_nego_ext, 0x0, 0x20, true, 0x4dbdc46d5b556284)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SEC_APPLICATION_PROTOCOL_LIST.ProtocolListSize", protocol_list_size, 0x20, 0x10, true, 0xe7c6a6c1216e7787)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_SEC_APPLICATION_PROTOCOL_LIST.ProtocolList", protocol_list, 0x30, 0x8, true, 0xab933ae6da4cdb37)
#else
#define _m00
#define _m01
#define _m02
#endif