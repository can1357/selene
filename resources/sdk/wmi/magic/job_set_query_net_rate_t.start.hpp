#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_JOB_SET_QUERY_NET_RATE.Flags", flags, 0x0, 0x20, true, 0xf5a1516def07bbf9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WMI_JOB_SET_QUERY_NET_RATE.MaxBandwidth", max_bandwidth, 0x40, 0x40, true, 0x9f10f90f4c9e9ac0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WMI_JOB_SET_QUERY_NET_RATE.DscpTag", dscp_tag, 0x80, 0x8, true, 0x301c4d67ca84d676)
#else
#define _m00
#define _m01
#define _m02
#endif