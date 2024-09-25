#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_CC_LOGGED_STREAM_INFO.FileObjectKey", file_object_key, 0x0, 0x40, true, 0x2bb0b9c85c36b978)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_CC_LOGGED_STREAM_INFO.ReasonForFlush", reason_for_flush, 0x40, 0x20, true, 0xfcf4e6ef9b1e2798)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_CC_LOGGED_STREAM_INFO.PagesToWrite", pages_to_write, 0x60, 0x20, true, 0x6df92d8603e7b25f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_CC_LOGGED_STREAM_INFO.DirtyLoggedPages", dirty_logged_pages, 0x80, 0x40, true, 0xdb73a9e659f022e0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_CC_LOGGED_STREAM_INFO.DirtyLoggedPageThreshold", dirty_logged_page_threshold, 0xc0, 0x40, true, 0x2938608743c3bf0d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_PERFINFO_CC_LOGGED_STREAM_INFO.LargestLsnForLWS", largest_lsn_for_lws, 0x100, 0x40, true, 0xbc3dd31c88cd9ebc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif