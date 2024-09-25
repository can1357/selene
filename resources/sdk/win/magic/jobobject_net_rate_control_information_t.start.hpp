#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "JOBOBJECT_NET_RATE_CONTROL_INFORMATION.MaxBandwidth", max_bandwidth, 0x0, 0x40, true, 0xd9a35c1907b53639)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::job_object_net_rate_control_flags_t), "JOBOBJECT_NET_RATE_CONTROL_INFORMATION.ControlFlags", control_flags, 0x40, 0x20, true, 0xb5833d264a955f9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "JOBOBJECT_NET_RATE_CONTROL_INFORMATION.DscpTag", dscp_tag, 0x60, 0x8, true, 0x15e1b252d193f697)
#else
#define _m00
#define _m01
#define _m02
#endif