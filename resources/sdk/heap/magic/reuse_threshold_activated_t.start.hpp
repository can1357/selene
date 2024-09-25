#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::system_trace_header_t), "_HEAP_REUSE_THRESHOLD_ACTIVATED.Header", header, 0x0, 0x0, true, 0x31a357ccd33bc458)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HEAP_REUSE_THRESHOLD_ACTIVATED.HeapHandle", heap_handle, 0x100, 0x40, true, 0x9f446b204c2836e0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HEAP_REUSE_THRESHOLD_ACTIVATED.SubSegment", sub_segment, 0x140, 0x40, true, 0x4881bb40bbb73c5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_REUSE_THRESHOLD_ACTIVATED.BucketIndex", bucket_index, 0x180, 0x20, true, 0x6e2b4c41204c3018)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif