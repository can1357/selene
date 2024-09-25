#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_FAKE_HEAP_ENTRY.Size", size, 0x0, 0x40, true, 0x45824c597a249b55)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_FAKE_HEAP_ENTRY.PreviousSize", previous_size, 0x40, 0x40, true, 0x6df8f8bac3b7ad9a)
#else
#define _m00
#define _m01
#endif