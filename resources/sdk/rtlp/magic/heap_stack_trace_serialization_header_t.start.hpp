#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTLP_HEAP_STACK_TRACE_SERIALIZATION_HEADER.Version", version, 0x0, 0x10, true, 0xa743ecd10aadaef2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTLP_HEAP_STACK_TRACE_SERIALIZATION_HEADER.PointerSize", pointer_size, 0x10, 0x10, true, 0x8f377abccefe186f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTLP_HEAP_STACK_TRACE_SERIALIZATION_HEADER.Heap", heap, 0x40, 0x40, true, 0xa654c4c0b8ba7113)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTLP_HEAP_STACK_TRACE_SERIALIZATION_HEADER.TotalCommit", total_commit, 0x80, 0x40, true, 0xf5b218065d544832)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTLP_HEAP_STACK_TRACE_SERIALIZATION_HEADER.TotalReserve", total_reserve, 0xc0, 0x40, true, 0x714f7f0466b0c118)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTLP_HEAP_STACK_TRACE_SERIALIZATION_HEADER.MappingCount", mapping_count, 0x0, 0x0, false, 0x1e4d5db6bf72e147)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif