#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_NET_BUFFER_LIST_POOL.Header", header, 0x0, 0x20, true, 0xe7d7c6b1b937b7f1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<uint64_t, class ndis::k_spin_lock_t>), "_NDIS_NET_BUFFER_LIST_POOL.ListLock", list_lock, 0x40, 0x40, true, 0x70467ceb49f0f50e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_NET_BUFFER_LIST_POOL.AllocatedList", allocated_list, 0x80, 0x80, true, 0xe42cd5a8687c2644)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_NET_BUFFER_LIST_POOL.ProtocolId", protocol_id, 0x100, 0x8, true, 0x6dbe7f4e2252d5e2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_NET_BUFFER_LIST_POOL.ContextSize", context_size, 0x110, 0x10, true, 0xdac7923c7f7ec6a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_NET_BUFFER_LIST_POOL.OwnerHandle", owner_handle, 0x140, 0x40, true, 0xbcd26202c33af30f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_NET_BUFFER_LIST_POOL.Allocator", allocator, 0x180, 0x40, true, 0x21b06e352a205fa8)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NET_BUFFER_LIST_POOL.Tag", tag, 0x1c0, 0x20, true, 0x9144c6d2f6ca702c)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NET_BUFFER_LIST_POOL.Flags", flags, 0x1e0, 0x20, true, 0x2e3396bb900ea02e)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<uint64_t, class ndis::k_spin_lock_manual_construct_t>), "_NDIS_NET_BUFFER_LIST_POOL.Lock", lock, 0x200, 0x40, true, 0x413bd9c6ba0cb13a)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_NET_BUFFER_LIST_POOL.GlobalNetBufferListPoolList", global_net_buffer_list_pool_list, 0x240, 0x80, true, 0xaa8b10706bc1e2c2)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NET_BUFFER_LIST_POOL.DataSize", data_size, 0x2c0, 0x20, true, 0x28a4376b2cb1bf39)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NET_BUFFER_LIST_POOL.MdlSize", mdl_size, 0x2e0, 0x20, true, 0x1888f6ad3a37fdea)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint32_t), "_NDIS_NET_BUFFER_LIST_POOL.ItemLength", item_length, 0x300, 0x20, true, 0x4da9e5a5c43de042, 0, uint16_t,uint32_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct ndis::npaged_lookaside_list_t, 1>), "_NDIS_NET_BUFFER_LIST_POOL.NetBufferListPoolList", net_buffer_list_pool_list, 0x400, 0x0, true, 0x6d259c7c1eb9a9a2)
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
#define _m13
#define _m14
#endif