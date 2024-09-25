#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::offload_state_header_t), "_NEIGHBOR_OFFLOAD_STATE_DELEGATED.Header", header, 0x0, 0x40, true, 0x11351d617553ee9d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NEIGHBOR_OFFLOAD_STATE_DELEGATED.NicReachabilityDelta", nic_reachability_delta, 0x40, 0x20, true, 0x8b4b2893865394c5)
#else
#define _m00
#define _m01
#endif