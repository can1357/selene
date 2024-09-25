#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::refcount_stack_block_t), "_NDIS_REFCOUNT_WITH_STACK.Block", block, 0x0, 0xc0, true, 0x60eab677b681024e)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_REFCOUNT_WITH_STACK.ReferenceAllocationFailed", reference_allocation_failed, 0x1c0, 0x1, true, 0x7b17c0b8303f7f21, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint15_t), "_NDIS_REFCOUNT_WITH_STACK.TotalReferences", total_references, 0x1c1, 0xf, true, 0x2cdf3ab5a6c059bd, 15, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_REFCOUNT_WITH_STACK.DereferenceAllocationFailed", dereference_allocation_failed, 0x1d0, 0x1, true, 0x30ed2f2e47fec9bc, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint15_t), "_NDIS_REFCOUNT_WITH_STACK.TotalDereferences", total_dereferences, 0x1d1, 0xf, true, 0x9f13e18960b54e31, 15, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif