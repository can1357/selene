#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_CC_FLUSH_CACHE.WorkItemKey", work_item_key, 0x0, 0x40, true, 0x8448c39559632b4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_CC_FLUSH_CACHE.FileObjectKey", file_object_key, 0x40, 0x40, true, 0xd5b8c7262f32467c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_CC_FLUSH_CACHE.Offset", offset, 0x80, 0x40, true, 0x5020886bfdb523db)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_CC_FLUSH_CACHE.Length", length, 0xc0, 0x20, true, 0xbd040b4f0a261dd5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_CC_FLUSH_CACHE.SharedCacheMapFlags", shared_cache_map_flags, 0xe0, 0x20, true, 0x6c3a19f69f3b4656)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_CC_FLUSH_CACHE.Flags", flags, 0x100, 0x20, true, 0xd58fcae95ba1e0da)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif