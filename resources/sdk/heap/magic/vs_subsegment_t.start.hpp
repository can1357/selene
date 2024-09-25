#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_HEAP_VS_SUBSEGMENT.ListEntry", list_entry, 0x0, 0x80, true, 0xdaf9616ed6285c2f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_VS_SUBSEGMENT.CommitBitmap", commit_bitmap, 0x80, 0x40, true, 0x6db7c9e6fea9589f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct rtl::srwlock_t, uint64_t>), "_HEAP_VS_SUBSEGMENT.CommitLock", commit_lock, 0xc0, 0x40, true, 0xe1d22cdf27dcda8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP_VS_SUBSEGMENT.Size", size, 0x100, 0x10, true, 0x1fb4e93fbd5160f6)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_HEAP_VS_SUBSEGMENT.Signature", signature, 0x110, 0xf, true, 0x19b21f92cd99ea28, 0, uint16_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HEAP_VS_SUBSEGMENT.FullCommit", full_commit, 0x11f, 0x1, true, 0x2b94ff4407f5edb3, 1, uint16_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif