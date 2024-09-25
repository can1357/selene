#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::refcount_tagged_entry_t*), "_NDIS_REFCOUNT_TAGGED.Tags", tags, 0x0, 0x40, true, 0x35d4c935a1f6ca75)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "_NDIS_REFCOUNT_TAGGED.RefMask", ref_mask, 0x40, 0x20, true, 0x68d910ac1e392fb7)
#else
#define _m00
#define _m01
#endif