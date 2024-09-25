#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::slist_entry_t), "_RAID_DEFERRED_HEADER.Link", link, 0x0, 0x80, true, 0x129e528bf829716e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_RAID_DEFERRED_HEADER.Pool", pool, 0x80, 0x20, true, 0xb1415fb750ab57b9)
#else
#define _m00
#define _m01
#endif