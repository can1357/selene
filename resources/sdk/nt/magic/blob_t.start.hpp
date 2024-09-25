#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_BLOB.ResourceList", resource_list, 0x0, 0x80, true, 0xf399bcbb2eea89a0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::slist_entry_t), "_BLOB.FreeListEntry", free_list_entry, 0x0, 0x80, true, 0xd55ec03958098f77)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_BLOB.ReferenceCache", reference_cache, 0x80, 0x1, true, 0xb6e05e1df4d776a7, 1, uint8_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_BLOB.Lookaside", lookaside, 0x81, 0x1, true, 0x433cdb959c8f2267, 1, uint8_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_BLOB.Initializing", initializing, 0x82, 0x1, true, 0x148d022f0de3abb6, 1, uint8_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_BLOB.Deleted", deleted, 0x83, 0x1, true, 0x95c62bd1a76ebf97, 1, uint8_t)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_BLOB.Flags", flags, 0x80, 0x8, true, 0x9ec502f359ec92dd)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_BLOB.ResourceId", resource_id, 0x88, 0x8, true, 0x55be217d2ff4b5)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_BLOB.CachedReferences", cached_references, 0x90, 0x10, true, 0xabf3ebd27b5cf2a)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_BLOB.ReferenceCount", reference_count, 0xc0, 0x40, true, 0x3dea9c88a968a5e9)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_BLOB.Lock", lock, 0x100, 0x40, true, 0xd745400efe476e90)
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
#endif