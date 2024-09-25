#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTLP_HEAP_TAGGING_INFO.Version", version, 0x0, 0x10, true, 0xb03f20451e196093)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTLP_HEAP_TAGGING_INFO.Flags", flags, 0x10, 0x10, true, 0xfffcda37afecc7de)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RTLP_HEAP_TAGGING_INFO.Process", process, 0x40, 0x40, true, 0x37241661969131d3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTLP_HEAP_TAGGING_INFO.EntriesCount", entries_count, 0x80, 0x40, true, 0x822482106c105209)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct rtlp::tag_info_t, 1>), "_RTLP_HEAP_TAGGING_INFO.Entries", entries, 0xc0, 0xc0, true, 0xc3d24aca4f4177cc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif