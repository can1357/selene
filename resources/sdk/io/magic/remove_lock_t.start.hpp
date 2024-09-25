#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct io::remove_lock_common_block_t), "_IO_REMOVE_LOCK.Common", common, 0x0, 0x0, true, 0x7bf703b461a4aab6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct io::remove_lock_dbg_block_t), "_IO_REMOVE_LOCK.Dbg", dbg, 0x100, 0xc0, true, 0xe254b6f9f7818d1c)
#else
#define _m00
#define _m01
#endif