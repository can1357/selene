#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PERFINFO_PFMAPPED_SECTION_INFORMATION.RangeBase", range_base, 0x0, 0x40, true, 0xc312c6386d62f380)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PERFINFO_PFMAPPED_SECTION_INFORMATION.RangeEnd", range_end, 0x40, 0x40, true, 0xa9943ef46085daef)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_PFMAPPED_SECTION_INFORMATION.CreatingProcessId", creating_process_id, 0x80, 0x20, true, 0x453706fce3de151f)
#else
#define _m00
#define _m01
#define _m02
#endif