#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_POOL_HEADER.PreviousSize", previous_size, 0x0, 0x8, true, 0x5c306789636b01b4, 8, uint16_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_POOL_HEADER.PoolIndex", pool_index, 0x8, 0x8, true, 0x917009216d30435, 8, uint16_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_POOL_HEADER.BlockSize", block_size, 0x10, 0x8, true, 0x94daaebc7015bb04, 8, uint16_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_POOL_HEADER.PoolType", pool_type, 0x18, 0x8, true, 0x71b9043a19212c0, 8, uint16_t)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POOL_HEADER.Ulong1", ulong1, 0x0, 0x20, true, 0x827cb23b285e69dd)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POOL_HEADER.PoolTag", pool_tag, 0x20, 0x20, true, 0xa19e9e7fabe9c608)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::eprocess_t*), "_POOL_HEADER.ProcessBilled", process_billed, 0x40, 0x40, true, 0xe909ae4dc5dcfc8f)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_POOL_HEADER.AllocatorBackTraceIndex", allocator_back_trace_index, 0x40, 0x10, true, 0x9d476ffd317f4755)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_POOL_HEADER.PoolTagHash", pool_tag_hash, 0x50, 0x10, true, 0x1ac60dd66bee3a4e)
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
#endif