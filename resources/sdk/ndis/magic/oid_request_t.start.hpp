#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_OID_REQUEST.Header", header, 0x0, 0x20, true, 0x58b32779f6f95acc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::request_type_t), "_NDIS_OID_REQUEST.RequestType", request_type, 0x20, 0x20, true, 0x2626160a95198034)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_OID_REQUEST.PortNumber", port_number, 0x40, 0x20, true, 0x9ff40e734d39150c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_OID_REQUEST.Timeout", timeout, 0x60, 0x20, true, 0x23954d6e059f6763)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_OID_REQUEST.RequestId", request_id, 0x80, 0x40, true, 0x96b057da245cbe9e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_OID_REQUEST.RequestHandle", request_handle, 0xc0, 0x40, true, 0xaf1fee9743f0ac3)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 128>), "_NDIS_OID_REQUEST.NdisReserved", ndis_reserved, 0x240, 0x0, true, 0x7ddb574a8a5a9ab7)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_NDIS_OID_REQUEST.MiniportReserved", miniport_reserved, 0x640, 0x80, true, 0x1879c2c99dac3680)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_NDIS_OID_REQUEST.SourceReserved", source_reserved, 0x6c0, 0x80, true, 0xd066de7a91c9829a)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_OID_REQUEST.SupportedRevision", supported_revision, 0x740, 0x8, true, 0xcd7988066904969c)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_OID_REQUEST.SwitchId", switch_id, 0x760, 0x20, true, 0xf3db99234a31924b)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_OID_REQUEST.VPortId", v_port_id, 0x780, 0x20, true, 0x798da96e9073c91a)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_OID_REQUEST.Flags", flags, 0x7a0, 0x20, true, 0x5dcb011f8007e63e)
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
#endif