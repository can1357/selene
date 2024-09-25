#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_TCP_RECV_SEG_COALESCE_OFFLOAD.IPv4.Enabled", enabled, 0x0, 0x8, true, 0x52db473ce38a868d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_i_pv4_t), "_NDIS_TCP_RECV_SEG_COALESCE_OFFLOAD.IPv4", i_pv4, 0x0, 0x8, true, 0x9128c50934e11280)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_TCP_RECV_SEG_COALESCE_OFFLOAD.IPv6.Enabled", enabled, 0x0, 0x8, true, 0xb8e8e3503b345554)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_i_pv6_t), "_NDIS_TCP_RECV_SEG_COALESCE_OFFLOAD.IPv6", i_pv6, 0x8, 0x8, true, 0xbd6f4b134453e3bf)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif