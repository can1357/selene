#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::refcount_stack_block_t*), "_NDIS_REFCOUNT_STACK_BLOCK.Next", next, 0x0, 0x40, true, 0x276851183208ac98)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct ndis::refcount_stack_entry_t, 6>), "_NDIS_REFCOUNT_STACK_BLOCK.References", references, 0x40, 0xc0, true, 0xe01fabaf59992a8e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct ndis::refcount_stack_entry_t, 6>), "_NDIS_REFCOUNT_STACK_BLOCK.Dereferences", dereferences, 0x100, 0xc0, true, 0x2024d729109551f3)
#else
#define _m00
#define _m01
#define _m02
#endif