#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_RW_LOCK_EX.SourceHandle", source_handle, 0x0, 0x0, false, 0x58b658b001ef2a3d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_RW_LOCK_EX.WriteLock", write_lock, 0x0, 0x0, false, 0xa6bdaecba1b35e2e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ethread_t*), "_NDIS_RW_LOCK_EX.Owner", owner, 0x0, 0x0, false, 0x403b0a0ef6003ddf)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pndis_per_processor_slot_t*), "_NDIS_RW_LOCK_EX.RefCountSlot", ref_count_slot, 0x0, 0x0, false, 0x26244819afd5be97)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t*, 1>), "_NDIS_RW_LOCK_EX.RefCount", ref_count, 0x0, 0x0, false, 0xc9c8a94009557fe9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif