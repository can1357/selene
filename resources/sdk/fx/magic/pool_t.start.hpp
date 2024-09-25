#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_no_dynam_t), "FX_POOL.NonPagedLock", non_paged_lock, 0x0, 0x80, true, 0xf7fac5701a421ce7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FX_POOL.NonPagedHead", non_paged_head, 0x80, 0x80, true, 0xc3546d317ce225ab)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::paged_lock_no_dynam_t), "FX_POOL.PagedLock", paged_lock, 0x100, 0x0, true, 0x12fa0d88c3049d9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FX_POOL.PagedHead", paged_head, 0x300, 0x80, true, 0x6b54b1ed9c9d8fa8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FX_POOL.NonPagedBytes", non_paged_bytes, 0x380, 0x40, true, 0xb961d637cc902c4a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FX_POOL.PagedBytes", paged_bytes, 0x3c0, 0x40, true, 0x892bb9f04522b5f7)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FX_POOL.NonPagedAllocations", non_paged_allocations, 0x400, 0x20, true, 0xeb63c62fd811ddd2)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FX_POOL.PagedAllocations", paged_allocations, 0x420, 0x20, true, 0xda4dcf2828e4e8a2)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FX_POOL.PeakNonPagedBytes", peak_non_paged_bytes, 0x440, 0x40, true, 0x54bd16ece9b2c1a1)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FX_POOL.PeakPagedBytes", peak_paged_bytes, 0x480, 0x40, true, 0x3feaea09b47be231)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FX_POOL.PeakNonPagedAllocations", peak_non_paged_allocations, 0x4c0, 0x20, true, 0xb4aae86b83881032)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FX_POOL.PeakPagedAllocations", peak_paged_allocations, 0x4e0, 0x20, true, 0x1827313d17c114ae)
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
#endif