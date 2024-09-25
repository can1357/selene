#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PKTMON_EDGE_CONTEXT.EdgeHandle", edge_handle, 0x0, 0x40, true, 0x5b6d7427e5f2780a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pktmon_component_context_t*), "_PKTMON_EDGE_CONTEXT.CompContext", comp_context, 0x40, 0x40, true, 0x4b912a2c1587844f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::pktmon_packet_type_t), "_PKTMON_EDGE_CONTEXT.PacketType", packet_type, 0x80, 0x20, true, 0xbdf354645016acc2)
#else
#define _m00
#define _m01
#define _m02
#endif