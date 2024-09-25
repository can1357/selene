#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<uint64_t, class ndis::k_spin_lock_manual_construct_t>), "_NDIS_STACK_TRACE_TABLE.Lock", lock, 0x0, 0x40, true, 0xc80deef66705c4a6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_STACK_TRACE_TABLE.Allocated", allocated, 0x40, 0x8, true, 0x8faee67fbb15163d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_STACK_TRACE_TABLE.Collisions", collisions, 0x48, 0x8, true, 0x3fc1aaac82be7046)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_STACK_TRACE_TABLE.DroppedStacks", dropped_stacks, 0x50, 0x8, true, 0xe48947b260ad2f75)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_STACK_TRACE_TABLE.NumStackFrames", num_stack_frames, 0x58, 0x8, true, 0x5786f30c23c85d09)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::dynamic_hash_table_t), "_NDIS_STACK_TRACE_TABLE.HashTable", hash_table, 0x80, 0x40, true, 0xee50c448762c4ac6)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_STACK_TRACE_TABLE.AllocationFailures", allocation_failures, 0x1c0, 0x20, true, 0x4ba1941371a93347)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif