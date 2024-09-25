#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::system_trace_header_t), "_HEAP_SUBSEGMENT_ACTIVATED.Header", header, 0x0, 0x0, true, 0x9e035c04b9490d8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HEAP_SUBSEGMENT_ACTIVATED.HeapHandle", heap_handle, 0x100, 0x40, true, 0x75667a4ee0777d49)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HEAP_SUBSEGMENT_ACTIVATED.SubSegment", sub_segment, 0x140, 0x40, true, 0x88fcf91616470290)
#else
#define _m00
#define _m01
#define _m02
#endif