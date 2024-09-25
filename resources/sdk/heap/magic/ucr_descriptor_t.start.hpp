#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_HEAP_UCR_DESCRIPTOR.ListEntry", list_entry, 0x0, 0x80, true, 0x625876c7aaed36a1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_HEAP_UCR_DESCRIPTOR.SegmentEntry", segment_entry, 0x80, 0x80, true, 0x82bfa3ec8b48af2a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HEAP_UCR_DESCRIPTOR.Address", address, 0x100, 0x40, true, 0x2f17c2b8b5018e9d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_UCR_DESCRIPTOR.Size", size, 0x140, 0x40, true, 0xef5b0bd6cb0497db)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif