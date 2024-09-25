#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_ex_t), "_MI_SYSTEM_PTE_TYPE.Bitmap", bitmap, 0x0, 0x80, true, 0xc6fbe319b99506d4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpte_t*), "_MI_SYSTEM_PTE_TYPE.BasePte", base_pte, 0x80, 0x40, true, 0x4cd4a8b248643242)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_SYSTEM_PTE_TYPE.Flags", flags, 0xc0, 0x20, true, 0x3e187a6e9fcc8243)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum mi::system_va_type_t), "_MI_SYSTEM_PTE_TYPE.VaType", va_type, 0xe0, 0x20, true, 0x24eb06ab0213face)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_SYSTEM_PTE_TYPE.PteFailures", pte_failures, 0x140, 0x20, true, 0xd2fcef8b6194c8bd)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_SYSTEM_PTE_TYPE.SpinLock", spin_lock, 0x180, 0x40, true, 0x5c7bf104a572f1eb)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_MI_SYSTEM_PTE_TYPE.TotalSystemPtes", total_system_ptes, 0x1c0, 0x40, true, 0xde4bc81b0ad1e644)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_SYSTEM_PTE_TYPE.Hint", hint, 0x200, 0x40, true, 0x2a3137bb64556fa5)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_SYSTEM_PTE_TYPE.LowestBitEverAllocated", lowest_bit_ever_allocated, 0x240, 0x40, true, 0xd5e375260fdb6b7f)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile struct mi::cached_ptes_t*), "_MI_SYSTEM_PTE_TYPE.CachedPtes", cached_ptes, 0x280, 0x40, true, 0x78cb3e0dddfe6c7f)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_MI_SYSTEM_PTE_TYPE.TotalFreeSystemPtes", total_free_system_ptes, 0x2c0, 0x40, true, 0x71767da593bcb856)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_MI_SYSTEM_PTE_TYPE.FailureCount", failure_count, 0x100, 0x40, true, 0xed99b4aaefea356)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t*), "_MI_SYSTEM_PTE_TYPE.GlobalPushLock", global_push_lock, 0x180, 0x40, true, 0x7c5d2e7d5373ecde)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmsupport_instance_t*), "_MI_SYSTEM_PTE_TYPE.Vm", vm, 0x0, 0x0, false, 0xbd1eea6f7525e7b9)
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
#endif