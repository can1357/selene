#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_RTL_HASH_ENTRY.BucketLink", bucket_link, 0x0, 0x40, true, 0x65ffdb702307d084)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_HASH_ENTRY.Key", key, 0x40, 0x40, true, 0x59cc96158f7471b6)
#else
#define _m00
#define _m01
#endif