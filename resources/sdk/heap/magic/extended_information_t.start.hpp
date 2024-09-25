#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HEAP_EXTENDED_INFORMATION.Process", process, 0x0, 0x40, true, 0xa2707616edb47571)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_EXTENDED_INFORMATION.Heap", heap, 0x40, 0x40, true, 0xc3f242388f40480)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_EXTENDED_INFORMATION.Level", level, 0x80, 0x20, true, 0x171a604de6b14b07)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pheap_query_information_callback_routine_t ), "_HEAP_EXTENDED_INFORMATION.CallbackRoutine", callback_routine, 0xc0, 0x40, true, 0x1a84f485c2061f20)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HEAP_EXTENDED_INFORMATION.CallbackContext", callback_context, 0x100, 0x40, true, 0xf158af2946940e1d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::process_heap_information_t), "_HEAP_EXTENDED_INFORMATION.ProcessHeapInformation", process_heap_information, 0x140, 0x0, true, 0xc080bb17c8eac1ad)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::information_t), "_HEAP_EXTENDED_INFORMATION.HeapInformation", heap_information, 0x140, 0x80, true, 0xf0a083cdfbe5345a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif