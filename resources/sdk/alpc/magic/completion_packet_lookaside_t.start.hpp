#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ALPC_COMPLETION_PACKET_LOOKASIDE.Lock", lock, 0x0, 0x40, true, 0x2f43f37b1149dd6e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_COMPLETION_PACKET_LOOKASIDE.Size", size, 0x40, 0x20, true, 0xd850cb31c7d9d736)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_COMPLETION_PACKET_LOOKASIDE.ActiveCount", active_count, 0x60, 0x20, true, 0x3d4ed179b736cb14)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_COMPLETION_PACKET_LOOKASIDE.PendingNullCount", pending_null_count, 0x80, 0x20, true, 0xaaa183f5f658451d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_COMPLETION_PACKET_LOOKASIDE.PendingCheckCompletionListCount", pending_check_completion_list_count, 0xa0, 0x20, true, 0x24ff7962d8892300)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_COMPLETION_PACKET_LOOKASIDE.PendingDelete", pending_delete, 0xc0, 0x20, true, 0xcf16c2c445b44e90)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_ALPC_COMPLETION_PACKET_LOOKASIDE.FreeListHead", free_list_head, 0x100, 0x40, true, 0x8bdd70a34c1309d9)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<void*, struct nt::kqueue_t*>), "_ALPC_COMPLETION_PACKET_LOOKASIDE.CompletionPort", completion_port, 0x140, 0x40, true, 0xe7dd97b432311e5c)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ALPC_COMPLETION_PACKET_LOOKASIDE.CompletionKey", completion_key, 0x180, 0x40, true, 0xe8cfa47a5234436c)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct alpc::completion_packet_lookaside_entry_t, 1>), "_ALPC_COMPLETION_PACKET_LOOKASIDE.Entry", entry, 0x1c0, 0xc0, true, 0x58e0845ecf2d453e)
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
#define _m09
#endif