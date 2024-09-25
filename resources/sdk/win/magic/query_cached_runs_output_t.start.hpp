#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_CACHED_RUNS_OUTPUT.Version", version, 0x0, 0x0, false, 0x37d14d8e5ef990fe)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_CACHED_RUNS_OUTPUT.Length", length, 0x0, 0x0, false, 0x7e99231ca33deebe)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_CACHED_RUNS_OUTPUT.FirstEntryOffset", first_entry_offset, 0x0, 0x0, false, 0x4a55dd626d83c75a)
#else
#define _m00
#define _m01
#define _m02
#endif