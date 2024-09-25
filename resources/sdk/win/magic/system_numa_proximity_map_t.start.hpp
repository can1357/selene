#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_NUMA_PROXIMITY_MAP.NodeProximityId", node_proximity_id, 0x0, 0x20, true, 0x4fd2be95f7320f60)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SYSTEM_NUMA_PROXIMITY_MAP.NodeNumber", node_number, 0x20, 0x10, true, 0xd1c9a0c72ac31c8e)
#else
#define _m00
#define _m01
#endif