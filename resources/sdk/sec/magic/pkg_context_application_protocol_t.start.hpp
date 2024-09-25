#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sec_application_protocol_negotiation_status_t ), "_SecPkgContext_ApplicationProtocol.ProtoNegoStatus", proto_nego_status, 0x0, 0x20, true, 0x1c09d1fa5760cc58)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum sec::application_protocol_negotiation_ext_t), "_SecPkgContext_ApplicationProtocol.ProtoNegoExt", proto_nego_ext, 0x20, 0x20, true, 0xdb6986f81b10ca48)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SecPkgContext_ApplicationProtocol.ProtocolIdSize", protocol_id_size, 0x40, 0x8, true, 0x8e3e3f97b6a32adc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 255>), "_SecPkgContext_ApplicationProtocol.ProtocolId", protocol_id, 0x48, 0xf8, true, 0xe82c9afc1d13e466)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif