#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_NDIS_PACKET_8021Q_INFO.TagHeader.UserPriority", user_priority, 0x0, 0x3, true, 0xba10ce6ba0d4067c, 3, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_PACKET_8021Q_INFO.TagHeader.CanonicalFormatId", canonical_format_id, 0x3, 0x1, true, 0xf502b155ad9a3d90, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint12_t), "_NDIS_PACKET_8021Q_INFO.TagHeader.VlanId", vlan_id, 0x4, 0xc, true, 0xc2f2b5f71ad0e52a, 12, uint32_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_tag_header_t), "_NDIS_PACKET_8021Q_INFO.TagHeader", tag_header, 0x0, 0x20, true, 0xa8df9585d6b554b2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_PACKET_8021Q_INFO.Value", value, 0x0, 0x40, true, 0x7cc64190ae4ab646)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif