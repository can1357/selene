#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HEAP_EVENT_RANGE.HeapHandle", heap_handle, 0x0, 0x40, true, 0x5d54595b9d7a9781)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HEAP_EVENT_RANGE.Address", address, 0x40, 0x40, true, 0xb615b2d9df68719e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_EVENT_RANGE.Size", size, 0x80, 0x40, true, 0xffefd07816b093be)
#else
#define _m00
#define _m01
#define _m02
#endif