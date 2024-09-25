#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_HIVE_WAIT_PACKET.WakeEvent", wake_event, 0x0, 0xc0, true, 0x8355592053e6d3c6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_HIVE_WAIT_PACKET.Status", status, 0xc0, 0x20, true, 0x5bdc8ce4267a8f14)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::hive_wait_packet_t*), "_HIVE_WAIT_PACKET.Next", next, 0x100, 0x40, true, 0xc147e5e87e72e5fc)
#else
#define _m00
#define _m01
#define _m02
#endif