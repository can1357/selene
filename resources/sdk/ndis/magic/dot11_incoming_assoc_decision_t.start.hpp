#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_DOT11_INCOMING_ASSOC_DECISION.Header", header, 0x0, 0x20, true, 0x6fbe16d5fcee473b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 6>), "_DOT11_INCOMING_ASSOC_DECISION.PeerMacAddr", peer_mac_addr, 0x20, 0x30, true, 0xb34f18a83f7a00e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DOT11_INCOMING_ASSOC_DECISION.bAccept", b_accept, 0x50, 0x8, true, 0x3253b217649aa723)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_DOT11_INCOMING_ASSOC_DECISION.usReasonCode", us_reason_code, 0x60, 0x10, true, 0x8fd8736b699c52d1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DOT11_INCOMING_ASSOC_DECISION.uAssocResponseIEsOffset", u_assoc_response_i_es_offset, 0x80, 0x20, true, 0x74608bde76dac190)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DOT11_INCOMING_ASSOC_DECISION.uAssocResponseIEsLength", u_assoc_response_i_es_length, 0xa0, 0x20, true, 0x8d093d1efebbfbe2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif