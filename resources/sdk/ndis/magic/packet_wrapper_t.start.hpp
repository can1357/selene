#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PACKET_WRAPPER.PvtFlags", pvt_flags, 0x0, 0x20, true, 0xc7c5919e89cd7775)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::stack_index_t), "_NDIS_PACKET_WRAPPER.StackIndex", stack_index, 0x40, 0x40, true, 0x11f0d80f81d56f7b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::packet_t), "_NDIS_PACKET_WRAPPER.Packet", packet, 0x80, 0x40, true, 0x205cb22cb84553e4)
#else
#define _m00
#define _m01
#define _m02
#endif