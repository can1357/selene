#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PKT_POOL.Tag", tag, 0x0, 0x20, true, 0x24af50da415fa44)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_PKT_POOL.PacketLength", packet_length, 0x20, 0x10, true, 0x5900209e4a310d8d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_PKT_POOL.PktsPerBlock", pkts_per_block, 0x30, 0x10, true, 0xb518aeee59dc49af)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_PKT_POOL.MaxBlocks", max_blocks, 0x40, 0x10, true, 0xc2bf3a824e902e3d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_PKT_POOL.StackSize", stack_size, 0x50, 0x10, true, 0xb193564c162416de)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_PKT_POOL.BlocksAllocated", blocks_allocated, 0x60, 0x20, true, 0x24c9ce663ef0bd3d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PKT_POOL.ProtocolId", protocol_id, 0x80, 0x20, true, 0xfde1a17976b0a548)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PKT_POOL.BlockSize", block_size, 0xa0, 0x20, true, 0x25f7e1797a329afa)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_PKT_POOL.Allocator", allocator, 0xc0, 0x40, true, 0x9a3265b00259dcd3)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_PKT_POOL.Lock", lock, 0x100, 0x40, true, 0xcf4028f245552c64)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_PKT_POOL.FreeBlocks", free_blocks, 0x140, 0x80, true, 0x1b119683082a701f)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_PKT_POOL.UsedBlocks", used_blocks, 0x1c0, 0x80, true, 0xfcfe5626ff4f2d9e)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_PKT_POOL.AgingBlocks", aging_blocks, 0x240, 0x80, true, 0x9baf0fdbadf05b12)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_PKT_POOL.GlobalPacketPoolList", global_packet_pool_list, 0x2c0, 0x80, true, 0x4af7f0933d944a67)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_NDIS_PKT_POOL.NextScavengeTick", next_scavenge_tick, 0x340, 0x40, true, 0xcecc52cf3d0a95c6)
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