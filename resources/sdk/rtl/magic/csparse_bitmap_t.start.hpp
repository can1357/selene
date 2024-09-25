#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t*), "_RTL_CSPARSE_BITMAP.CommitBitmap", commit_bitmap, 0x0, 0x40, true, 0xb2f245201b8afa06)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t*), "_RTL_CSPARSE_BITMAP.UserBitmap", user_bitmap, 0x40, 0x40, true, 0xf2186d3d68a09b03)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_CSPARSE_BITMAP.BitCount", bit_count, 0x80, 0x40, true, 0xcc388b0aaf910cd0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_CSPARSE_BITMAP.BitmapLock", bitmap_lock, 0xc0, 0x40, true, 0xca64f6fc8759c98f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_CSPARSE_BITMAP.DecommitPageIndex", decommit_page_index, 0x100, 0x40, true, 0x362096a14b1d1bb6)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_CSPARSE_BITMAP.RtlpCSparseBitmapWakeLock", rtlp_c_sparse_bitmap_wake_lock, 0x140, 0x40, true, 0x83527febff17ffcc)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RTL_CSPARSE_BITMAP.LockType", lock_type, 0x180, 0x8, true, 0xc54aaa7ff579fe95)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RTL_CSPARSE_BITMAP.AddressSpace", address_space, 0x188, 0x8, true, 0xf1684a5b504ebc3c)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RTL_CSPARSE_BITMAP.MemType", mem_type, 0x190, 0x8, true, 0x9d754ea12279b96f)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RTL_CSPARSE_BITMAP.AllocAlignment", alloc_alignment, 0x198, 0x8, true, 0x770770fb3754cfbc)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_CSPARSE_BITMAP.CommitDirectoryMaxSize", commit_directory_max_size, 0x1a0, 0x20, true, 0xab855abb556ada50)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 1>), "_RTL_CSPARSE_BITMAP.CommitDirectory", commit_directory, 0x1c0, 0x40, true, 0xcbcd45172291f99d)
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