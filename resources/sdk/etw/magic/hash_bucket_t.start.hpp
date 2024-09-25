#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<nt::list_entry_t, 3>), "_ETW_HASH_BUCKET.ListHead", list_head, 0x0, 0x80, true, 0xf0a33674d6599c87)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_ETW_HASH_BUCKET.BucketLock", bucket_lock, 0x180, 0x40, true, 0xe0c915709d4f051e)
#else
#define _m00
#define _m01
#endif