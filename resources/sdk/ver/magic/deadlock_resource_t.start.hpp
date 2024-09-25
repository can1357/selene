#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ver::deadlock_resource_type_t), "_VI_DEADLOCK_RESOURCE.Type", type, 0x0, 0x20, true, 0xcd6f59eed80cfb63)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_VI_DEADLOCK_RESOURCE.NodeCount", node_count, 0x20, 0x10, true, 0xf5f8877f78b09c7, 16, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_VI_DEADLOCK_RESOURCE.RecursionCount", recursion_count, 0x30, 0x10, true, 0xcae1fb4dbc8b04cc, 16, uint32_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_VI_DEADLOCK_RESOURCE.ResourceAddress", resource_address, 0x40, 0x40, true, 0x40cca240d13f71f6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ver::deadlock_thread_t*), "_VI_DEADLOCK_RESOURCE.ThreadOwner", thread_owner, 0x80, 0x40, true, 0xcac7c1f8d4aaadb9)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_VI_DEADLOCK_RESOURCE.ResourceList", resource_list, 0xc0, 0x80, true, 0x1eca336abf989ac1)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_VI_DEADLOCK_RESOURCE.HashChainList", hash_chain_list, 0x140, 0x80, true, 0xfab0fa9f0dc532a6)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_VI_DEADLOCK_RESOURCE.FreeListEntry", free_list_entry, 0x140, 0x80, true, 0xea8f84c0a4b7f68e)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 8>), "_VI_DEADLOCK_RESOURCE.StackTrace", stack_trace, 0x1c0, 0x0, true, 0xff5cd0fe4c7d10eb)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 8>), "_VI_DEADLOCK_RESOURCE.LastAcquireTrace", last_acquire_trace, 0x3c0, 0x0, true, 0x990db751515e8f44)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 8>), "_VI_DEADLOCK_RESOURCE.LastReleaseTrace", last_release_trace, 0x5c0, 0x0, true, 0xcfd845ab07a9defd)
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
#define _m10
#endif