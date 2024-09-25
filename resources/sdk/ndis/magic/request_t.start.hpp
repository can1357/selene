#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "_NDIS_REQUEST.MacReserved", mac_reserved, 0x0, 0x0, true, 0xf313cd25fc1b4092)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::request_type_t), "_NDIS_REQUEST.RequestType", request_type, 0x100, 0x20, true, 0x31d7218706d823ee)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 72>), "_NDIS_REQUEST.NdisReserved", ndis_reserved, 0x240, 0x40, true, 0xe123c3a515677288)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_NDIS_REQUEST.CallMgrReserved", call_mgr_reserved, 0x480, 0x80, true, 0x82e58cae4de1b5f0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_NDIS_REQUEST.ProtocolReserved", protocol_reserved, 0x480, 0x80, true, 0x81ec55496aca718c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_NDIS_REQUEST.MiniportReserved", miniport_reserved, 0x500, 0x80, true, 0x3947a5908d6ee5c5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif