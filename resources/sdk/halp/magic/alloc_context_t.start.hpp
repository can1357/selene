#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_HALP_ALLOC_CONTEXT.BufferList", buffer_list, 0x0, 0x80, true, 0x73edad2029804ea1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HALP_ALLOC_CONTEXT.Lock", lock, 0x80, 0x40, true, 0xd86b34d3124a0c0d)
#else
#define _m00
#define _m01
#endif