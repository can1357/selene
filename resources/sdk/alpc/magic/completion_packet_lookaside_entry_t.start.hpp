#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_ALPC_COMPLETION_PACKET_LOOKASIDE_ENTRY.ListEntry", list_entry, 0x0, 0x40, true, 0xd16f70f987cc5fd9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::mini_completion_packet_user_t*), "_ALPC_COMPLETION_PACKET_LOOKASIDE_ENTRY.Packet", packet, 0x40, 0x40, true, 0x4ad1df8f56bdfe78)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct alpc::completion_packet_lookaside_t*), "_ALPC_COMPLETION_PACKET_LOOKASIDE_ENTRY.Lookaside", lookaside, 0x80, 0x40, true, 0xeff1a1269618b6d0)
#else
#define _m00
#define _m01
#define _m02
#endif