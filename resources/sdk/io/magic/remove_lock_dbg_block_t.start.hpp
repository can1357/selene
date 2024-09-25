#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_IO_REMOVE_LOCK_DBG_BLOCK.Signature", signature, 0x0, 0x20, true, 0x8a4a88ea7918fa6d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_REMOVE_LOCK_DBG_BLOCK.HighWatermark", high_watermark, 0x20, 0x20, true, 0x64f8084ae88a98b4)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_IO_REMOVE_LOCK_DBG_BLOCK.MaxLockedTicks", max_locked_ticks, 0x40, 0x40, true, 0x2ee192d4893890c8)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_IO_REMOVE_LOCK_DBG_BLOCK.AllocateTag", allocate_tag, 0x80, 0x20, true, 0x5bc1eac0f74a290)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_IO_REMOVE_LOCK_DBG_BLOCK.LockList", lock_list, 0xc0, 0x80, true, 0xd26834d5c290ee65)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IO_REMOVE_LOCK_DBG_BLOCK.Spin", spin, 0x140, 0x40, true, 0x6fd9cd2df9c7865a)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_IO_REMOVE_LOCK_DBG_BLOCK.LowMemoryCount", low_memory_count, 0x180, 0x20, true, 0x3389c27aa7815b5f)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct io::remove_lock_tracking_block_t*), "_IO_REMOVE_LOCK_DBG_BLOCK.Blocks", blocks, 0x280, 0x40, true, 0x928ef944ca2022a9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif