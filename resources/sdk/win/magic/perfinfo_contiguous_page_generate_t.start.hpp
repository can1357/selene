#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_CONTIGUOUS_PAGE_GENERATE.ThreadId", thread_id, 0x0, 0x40, true, 0x38f34ba0f46e2f32)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_CONTIGUOUS_PAGE_GENERATE.NumberOfBytes", number_of_bytes, 0x40, 0x40, true, 0xb7c294bce2cbf29)
#else
#define _m00
#define _m01
#endif