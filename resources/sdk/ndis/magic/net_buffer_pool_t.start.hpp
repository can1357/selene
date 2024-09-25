#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_NET_BUFFER_POOL.Header", header, 0x0, 0x20, true, 0x9f883de2f47dbb4c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<uint64_t, class ndis::k_spin_lock_t>), "_NDIS_NET_BUFFER_POOL.ListLock", list_lock, 0x40, 0x40, true, 0x2a533094b0c8d089)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_NET_BUFFER_POOL.AllocatedList", allocated_list, 0x80, 0x80, true, 0x7344628bf80c582d)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint32_t), "_NDIS_NET_BUFFER_POOL.ItemLength", item_length, 0x100, 0x20, true, 0xacedd40658374bd5, 0, uint16_t,uint32_t)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_NET_BUFFER_POOL.OwnerHandle", owner_handle, 0x140, 0x40, true, 0xa4a317d17d8ce462)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_NET_BUFFER_POOL.Allocator", allocator, 0x180, 0x40, true, 0x18c27f0a9b0404b1)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NET_BUFFER_POOL.Tag", tag, 0x1c0, 0x20, true, 0x5300184945f06ec6)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<uint64_t, class ndis::k_spin_lock_manual_construct_t>), "_NDIS_NET_BUFFER_POOL.Lock", lock, 0x200, 0x40, true, 0x51eacbe900f3294a)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_NET_BUFFER_POOL.GlobalNetBufferPoolList", global_net_buffer_pool_list, 0x240, 0x80, true, 0xe64d2480e859c0a9)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NET_BUFFER_POOL.Flags", flags, 0x2c0, 0x20, true, 0xe5250f70a71c7329)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NET_BUFFER_POOL.DataSize", data_size, 0x2e0, 0x20, true, 0x8ea45a07705e0453)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NET_BUFFER_POOL.MdlSize", mdl_size, 0x300, 0x20, true, 0x8b13e4ab6ae99009)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct ndis::npaged_lookaside_list_t, 1>), "_NDIS_NET_BUFFER_POOL.NetBufferPoolList", net_buffer_pool_list, 0x400, 0x0, true, 0xe1dd84c3c97706b0)
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
#define _m11
#define _m12
#endif