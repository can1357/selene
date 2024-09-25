#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTLP_HEAP_SERIALIZED_MAPPING.Allocation", allocation, 0x0, 0x40, true, 0x34816fb18ba6e3ea)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RTLP_HEAP_SERIALIZED_MAPPING.StackReference", stack_reference, 0x40, 0x40, true, 0x336968efecc9f888)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTLP_HEAP_SERIALIZED_MAPPING.Size", size, 0x80, 0x40, true, 0x7833bd08021b6d7)
#else
#define _m00
#define _m01
#define _m02
#endif