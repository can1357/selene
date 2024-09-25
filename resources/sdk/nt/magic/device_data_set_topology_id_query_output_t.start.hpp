#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DEVICE_DATA_SET_TOPOLOGY_ID_QUERY_OUTPUT.TopologyRangeBytes", topology_range_bytes, 0x0, 0x40, true, 0x2bc88409683f366b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_DEVICE_DATA_SET_TOPOLOGY_ID_QUERY_OUTPUT.TopologyId", topology_id, 0x40, 0x80, true, 0xe72c7d2a4708813b)
#else
#define _m00
#define _m01
#endif