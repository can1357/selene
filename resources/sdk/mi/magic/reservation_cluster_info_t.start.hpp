#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint10_t), "_MI_RESERVATION_CLUSTER_INFO.ClusterSize", cluster_size, 0x0, 0xa, true, 0x8f1c36d3245ed113, 10, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint22_t), "_MI_RESERVATION_CLUSTER_INFO.SequenceNumber", sequence_number, 0xa, 0x16, true, 0x34c691809950e08a, 22, uint32_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_MI_RESERVATION_CLUSTER_INFO.EntireInfo", entire_info, 0x0, 0x20, true, 0xc0e1f810b64af1ee)
#else
#define _m00
#define _m01
#define _m02
#endif