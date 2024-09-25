#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_NDK_CAPABILITIES.Header", header, 0x0, 0x20, true, 0xc1200399c3d21940)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NDK_CAPABILITIES.Flags", flags, 0x20, 0x20, true, 0xa71e6547e8aae39a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NDK_CAPABILITIES.MaxQpCount", max_qp_count, 0x40, 0x20, true, 0xdb187487ec3d839d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NDK_CAPABILITIES.MaxCqCount", max_cq_count, 0x60, 0x20, true, 0xa681652fa81876fb)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NDK_CAPABILITIES.MaxMrCount", max_mr_count, 0x80, 0x20, true, 0x74a2b5ec6036509b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NDK_CAPABILITIES.MaxPdCount", max_pd_count, 0xa0, 0x20, true, 0x1e32e8e8c617a853)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NDK_CAPABILITIES.MaxInboundReadLimit", max_inbound_read_limit, 0xc0, 0x20, true, 0x3d6b71ecda3feb68)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NDK_CAPABILITIES.MaxOutboundReadLimit", max_outbound_read_limit, 0xe0, 0x20, true, 0xdaa2ef8bc99b98c7)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NDK_CAPABILITIES.MaxMwCount", max_mw_count, 0x100, 0x20, true, 0x49376b0a1b8539a4)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NDK_CAPABILITIES.MaxSrqCount", max_srq_count, 0x120, 0x20, true, 0xeee339781a8c272)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_NDK_CAPABILITIES.MissingCounterMask", missing_counter_mask, 0x140, 0x40, true, 0xd6fda3d624919555)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ndk_adapter_info_t*), "_NDIS_NDK_CAPABILITIES.NdkInfo", ndk_info, 0x180, 0x40, true, 0xd6a7eed45e448482)
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
#endif