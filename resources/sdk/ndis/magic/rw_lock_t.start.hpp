#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_RW_LOCK.SpinLock", spin_lock, 0x0, 0x40, true, 0xda40a77d99af8d25)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_RW_LOCK.Context", context, 0x40, 0x40, true, 0x69a6849f328e6e2d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<union ndis::rw_lock_refcount_t, 64>), "_NDIS_RW_LOCK.RefCount", ref_count, 0x80, 0x0, true, 0xaa66d3098fa62668)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 256>), "_NDIS_RW_LOCK.RefCountEx", ref_count_ex, 0x80, 0x0, true, 0xb9254c1c6ae5a819)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_RW_LOCK.RefCountLock", ref_count_lock, 0x80, 0x40, true, 0x8a33fb2d5ad8208)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_NDIS_RW_LOCK.SharedRefCount", shared_ref_count, 0xc0, 0x20, true, 0x83d137ff00c8d6be)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint8_t), "_NDIS_RW_LOCK.WriterWaiting", writer_waiting, 0xe0, 0x8, true, 0x7978892120da97bd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif