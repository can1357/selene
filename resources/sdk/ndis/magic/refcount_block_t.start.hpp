#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_REFCOUNT_BLOCK.Flags", flags, 0x0, 0x8, true, 0x72d5db8d9de25f54)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_REFCOUNT_BLOCK.Type", type, 0x8, 0x8, true, 0x2ef1ae9213816122)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_REFCOUNT_BLOCK.NumRefTags", num_ref_tags, 0x10, 0x8, true, 0xefe0bd99dcb2f3b3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_REFCOUNT_BLOCK.NumOverflowTaggedEntries", num_overflow_tagged_entries, 0x18, 0x8, true, 0xd2558fad8d58e15b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::refcount_tagged_t), "_NDIS_REFCOUNT_BLOCK.TaggedRefCounts", tagged_ref_counts, 0x40, 0x80, true, 0xedc692a565bee095)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct ndis::refcount_with_stack_t, 1>), "_NDIS_REFCOUNT_BLOCK.RefWithStack", ref_with_stack, 0x40, 0x0, true, 0xaa08eb2e00491fb6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif