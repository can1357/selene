#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_POOL_HEADER.Header", header, 0x0, 0x20, true, 0x43e8bb27a1e70cf8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<uint64_t, class ndis::k_spin_lock_t>), "_NDIS_POOL_HEADER.ListLock", list_lock, 0x40, 0x40, true, 0x157e7180b956651)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_POOL_HEADER.AllocatedList", allocated_list, 0x80, 0x80, true, 0x170eb7e94d37088f)
#else
#define _m00
#define _m01
#define _m02
#endif