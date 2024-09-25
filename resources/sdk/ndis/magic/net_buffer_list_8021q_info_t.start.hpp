#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_NDIS_NET_BUFFER_LIST_8021Q_INFO.TagHeader.UserPriority", user_priority, 0x0, 0x3, true, 0xf7b397443b87c700, 3, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_NET_BUFFER_LIST_8021Q_INFO.TagHeader.CanonicalFormatId", canonical_format_id, 0x3, 0x1, true, 0x71d69a97888d2de1, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint12_t), "_NDIS_NET_BUFFER_LIST_8021Q_INFO.TagHeader.VlanId", vlan_id, 0x4, 0xc, true, 0xa54b580ed54f69a5, 12, uint32_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_tag_header_t), "_NDIS_NET_BUFFER_LIST_8021Q_INFO.TagHeader", tag_header, 0x0, 0x20, true, 0x70d9f280a9490337)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_NDIS_NET_BUFFER_LIST_8021Q_INFO.WLanTagHeader.UserPriority", user_priority, 0x0, 0x3, true, 0xc91e6c1a6a74d5f2, 3, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_NET_BUFFER_LIST_8021Q_INFO.WLanTagHeader.CanonicalFormatId", canonical_format_id, 0x3, 0x1, true, 0x7a88b3dc12552adb, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint12_t), "_NDIS_NET_BUFFER_LIST_8021Q_INFO.WLanTagHeader.VlanId", vlan_id, 0x4, 0xc, true, 0xe6a8b2a94a4e8827, 12, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_NDIS_NET_BUFFER_LIST_8021Q_INFO.WLanTagHeader.WMMInfo", wmm_info, 0x10, 0x4, true, 0x96b2d92fd5cc2985, 4, uint32_t)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_w_lan_tag_header_t), "_NDIS_NET_BUFFER_LIST_8021Q_INFO.WLanTagHeader", w_lan_tag_header, 0x0, 0x20, true, 0xbf7a7ac1d7466e15)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_NET_BUFFER_LIST_8021Q_INFO.Value", value, 0x0, 0x40, true, 0x91cef71c46d1796a)
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
#endif