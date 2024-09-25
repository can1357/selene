#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_PORT_ATTRIBUTES.Flags", flags, 0x0, 0x20, true, 0xcd28a4d0d268367d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct sec::quality_of_service_t), "_ALPC_PORT_ATTRIBUTES.SecurityQos", security_qos, 0x20, 0x60, true, 0x4bf860be6f3ff6cf)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_ALPC_PORT_ATTRIBUTES.MaxMessageLength", max_message_length, 0x80, 0x40, true, 0x34a39cce302790c7)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_ALPC_PORT_ATTRIBUTES.MemoryBandwidth", memory_bandwidth, 0xc0, 0x40, true, 0x57ba9123807fad61)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_ALPC_PORT_ATTRIBUTES.MaxPoolUsage", max_pool_usage, 0x100, 0x40, true, 0xf1e8824ca93082d0)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_ALPC_PORT_ATTRIBUTES.MaxSectionSize", max_section_size, 0x140, 0x40, true, 0x4bbaed38621e6288)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_ALPC_PORT_ATTRIBUTES.MaxViewSize", max_view_size, 0x180, 0x40, true, 0xaa936ba8ec3345a3)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_ALPC_PORT_ATTRIBUTES.MaxTotalSectionSize", max_total_section_size, 0x1c0, 0x40, true, 0xbf6d1d2736b1ded0)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_PORT_ATTRIBUTES.DupObjectTypes", dup_object_types, 0x200, 0x20, true, 0xd44c68b46caa7841)
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
#endif