#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::offload_state_header_t), "_NEIGHBOR_OFFLOAD_STATE_CACHED.Header", header, 0x0, 0x40, true, 0x297e8ff2da2a66aa)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "_NEIGHBOR_OFFLOAD_STATE_CACHED.DlDestinationAddress", dl_destination_address, 0x40, 0x0, true, 0xfd881d71d9a7423e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NEIGHBOR_OFFLOAD_STATE_CACHED.HostReachabilityDelta", host_reachability_delta, 0x140, 0x20, true, 0xc352ddbb3da29ed4)
#else
#define _m00
#define _m01
#define _m02
#endif