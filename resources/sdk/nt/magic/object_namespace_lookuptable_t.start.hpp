#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<nt::list_entry_t, 37>), "_OBJECT_NAMESPACE_LOOKUPTABLE.HashBuckets", hash_buckets, 0x0, 0x80, true, 0x31cdd68eb551be2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_OBJECT_NAMESPACE_LOOKUPTABLE.Lock", lock, 0x1280, 0x40, true, 0xd6a585e705b72a0b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_NAMESPACE_LOOKUPTABLE.NumberOfPrivateSpaces", number_of_private_spaces, 0x12c0, 0x20, true, 0xa2fcec5632f1118c)
#else
#define _m00
#define _m01
#define _m02
#endif