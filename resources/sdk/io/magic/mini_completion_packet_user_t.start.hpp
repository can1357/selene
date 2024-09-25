#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_IO_MINI_COMPLETION_PACKET_USER.ListEntry", list_entry, 0x0, 0x80, true, 0x5a01c290d34048e3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_MINI_COMPLETION_PACKET_USER.PacketType", packet_type, 0x80, 0x20, true, 0x9115b26546395e31)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_IO_MINI_COMPLETION_PACKET_USER.KeyContext", key_context, 0xc0, 0x40, true, 0x9b5ea0e1d4768574)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_IO_MINI_COMPLETION_PACKET_USER.ApcContext", apc_context, 0x100, 0x40, true, 0x3c820ecda5b30540)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_IO_MINI_COMPLETION_PACKET_USER.IoStatus", io_status, 0x140, 0x20, true, 0xf8f9cad05eda333c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_IO_MINI_COMPLETION_PACKET_USER.IoStatusInformation", io_status_information, 0x180, 0x40, true, 0x879693c11e101c7d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct io::mini_completion_packet_user_t*, void*)>*), "_IO_MINI_COMPLETION_PACKET_USER.MiniPacketCallback", mini_packet_callback, 0x1c0, 0x40, true, 0x2fc501cd8a69c08c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_IO_MINI_COMPLETION_PACKET_USER.Context", context, 0x200, 0x40, true, 0x244c43f835c8f900)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_IO_MINI_COMPLETION_PACKET_USER.Allocated", allocated, 0x240, 0x8, true, 0x1b7ba415628ebe66)
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