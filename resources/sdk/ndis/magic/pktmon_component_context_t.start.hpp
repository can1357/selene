#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PKTMON_COMPONENT_CONTEXT.CompHandle", comp_handle, 0x0, 0x40, true, 0xa9321260395149dd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::pktmon_packet_type_t), "_PKTMON_COMPONENT_CONTEXT.PacketType", packet_type, 0x40, 0x20, true, 0x5a52638690785c62)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "_PKTMON_COMPONENT_CONTEXT.FlowEnabled", flow_enabled, 0x60, 0x1, true, 0xdd049c882837a244, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "_PKTMON_COMPONENT_CONTEXT.DropEnabled", drop_enabled, 0x61, 0x1, true, 0xf2326367f96603a8, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif