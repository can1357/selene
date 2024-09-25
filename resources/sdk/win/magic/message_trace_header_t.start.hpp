#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MESSAGE_TRACE_HEADER.Marker", marker, 0x0, 0x20, true, 0xddb082a7ca3c61b8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MESSAGE_TRACE_HEADER.Size", size, 0x0, 0x10, true, 0xd37e84e21f22bb90)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MESSAGE_TRACE_HEADER.Version", version, 0x18, 0x8, true, 0x4c2b67ce5c90da03)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MESSAGE_TRACE_HEADER.Header", header, 0x20, 0x20, true, 0x39b9776d902e6696)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wmi::trace_message_packet_t), "_MESSAGE_TRACE_HEADER.Packet", packet, 0x20, 0x20, true, 0xebfb32cba087568e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif