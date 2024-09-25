#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_TASK_IPSEC.Supported.AH_ESP_COMBINED", ah_esp_combined, 0x0, 0x20, true, 0x766f1a30e2c3bff9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_TASK_IPSEC.Supported.TRANSPORT_TUNNEL_COMBINED", transport_tunnel_combined, 0x20, 0x20, true, 0x42470e92d72471d0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_TASK_IPSEC.Supported.V4_OPTIONS", v4_options, 0x40, 0x20, true, 0x997c8dfbb662dc40)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_TASK_IPSEC.Supported.RESERVED", reserved, 0x60, 0x20, true, 0xc643474959558aa3)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_supported_t), "_NDIS_TASK_IPSEC.Supported", supported, 0x0, 0x80, true, 0xd4e220fa34e6ef00)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TASK_IPSEC.V4AH.MD5", md5, 0x0, 0x1, true, 0x8b6ce5940bd65cab, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TASK_IPSEC.V4AH.SHA_1", sha_1, 0x1, 0x1, true, 0xcfb9533fd965231, 1, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TASK_IPSEC.V4AH.Transport", transport, 0x2, 0x1, true, 0xd13f722560be23b4, 1, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TASK_IPSEC.V4AH.Tunnel", tunnel, 0x3, 0x1, true, 0x9e7721506ea3ee79, 1, uint32_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TASK_IPSEC.V4AH.Send", send, 0x4, 0x1, true, 0x722b04fc86d2db23, 1, uint32_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TASK_IPSEC.V4AH.Receive", receive, 0x5, 0x1, true, 0x195b465a2319a250, 1, uint32_t)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_v4ah_t), "_NDIS_TASK_IPSEC.V4AH", v4ah, 0x80, 0x20, true, 0xc15126bf5f45b894)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TASK_IPSEC.V4ESP.DES", des, 0x0, 0x1, true, 0xc3ce6d35d2465366, 1, uint32_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TASK_IPSEC.V4ESP.RESERVED", reserved, 0x1, 0x1, true, 0xa992ea6562f246f2, 1, uint32_t)
#define _m14 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TASK_IPSEC.V4ESP.TRIPLE_DES", triple_des, 0x2, 0x1, true, 0xd31e525f4cb4dfc8, 1, uint32_t)
#define _m15 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TASK_IPSEC.V4ESP.NULL_ESP", null_esp, 0x3, 0x1, true, 0x690f3159cb48a6ad, 1, uint32_t)
#define _m16 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TASK_IPSEC.V4ESP.Transport", transport, 0x4, 0x1, true, 0xf1269ac1fcd7acb0, 1, uint32_t)
#define _m17 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TASK_IPSEC.V4ESP.Tunnel", tunnel, 0x5, 0x1, true, 0xbb39c000cc86951, 1, uint32_t)
#define _m18 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TASK_IPSEC.V4ESP.Send", send, 0x6, 0x1, true, 0x19ea4d59e80400c3, 1, uint32_t)
#define _m19 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TASK_IPSEC.V4ESP.Receive", receive, 0x7, 0x1, true, 0xa7218a7ccea5ef8e, 1, uint32_t)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_v4esp_t), "_NDIS_TASK_IPSEC.V4ESP", v4esp, 0xa0, 0x20, true, 0x6704273572a00530)
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
#define _m18
#define _m19
#define _m20
#endif