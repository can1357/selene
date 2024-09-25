#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_UDP_SEGMENTATION_OFFLOAD.IPv4.Encapsulation", encapsulation, 0x0, 0x20, true, 0x323f56b13daf46a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_UDP_SEGMENTATION_OFFLOAD.IPv4.MaxOffLoadSize", max_off_load_size, 0x20, 0x20, true, 0x886a14905568ea3b)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_NDIS_UDP_SEGMENTATION_OFFLOAD.IPv4.MinSegmentCount", min_segment_count, 0x40, 0x6, true, 0xa3fa110ddbb3914f, 6, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_UDP_SEGMENTATION_OFFLOAD.IPv4.SubMssFinalSegmentSupported", sub_mss_final_segment_supported, 0x46, 0x1, true, 0xb985e1903e78c400, 1, uint32_t)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_i_pv4_t), "_NDIS_UDP_SEGMENTATION_OFFLOAD.IPv4", i_pv4, 0x0, 0x60, true, 0x6d3d4b90d8aaa9f8)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_UDP_SEGMENTATION_OFFLOAD.IPv6.Encapsulation", encapsulation, 0x0, 0x20, true, 0x9044879e75bf18e2)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_UDP_SEGMENTATION_OFFLOAD.IPv6.MaxOffLoadSize", max_off_load_size, 0x20, 0x20, true, 0x627a18457de42757)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_NDIS_UDP_SEGMENTATION_OFFLOAD.IPv6.MinSegmentCount", min_segment_count, 0x40, 0x6, true, 0x42090f623ebefd59, 6, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_UDP_SEGMENTATION_OFFLOAD.IPv6.SubMssFinalSegmentSupported", sub_mss_final_segment_supported, 0x46, 0x1, true, 0xddde82ddded42f67, 1, uint32_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_NDIS_UDP_SEGMENTATION_OFFLOAD.IPv6.IpExtensionHeadersSupported", ip_extension_headers_supported, 0x60, 0x2, true, 0x23bedd869de61287, 2, uint32_t)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_i_pv6_t), "_NDIS_UDP_SEGMENTATION_OFFLOAD.IPv6", i_pv6, 0x60, 0x80, true, 0x6f87a712071f7477)
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
#endif