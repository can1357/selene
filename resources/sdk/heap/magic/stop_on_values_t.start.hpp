#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_STOP_ON_VALUES.AllocAddress", alloc_address, 0x0, 0x40, true, 0x309bb08c8f0ce4ae)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::stop_on_tag_t), "_HEAP_STOP_ON_VALUES.AllocTag", alloc_tag, 0x40, 0x20, true, 0xfe7ee4ee775454ff)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_STOP_ON_VALUES.ReAllocAddress", re_alloc_address, 0x80, 0x40, true, 0x8f5256904f316e98)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::stop_on_tag_t), "_HEAP_STOP_ON_VALUES.ReAllocTag", re_alloc_tag, 0xc0, 0x20, true, 0x89500583f7f2096e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_STOP_ON_VALUES.FreeAddress", free_address, 0x100, 0x40, true, 0xf10dd344e0bc8fd3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::stop_on_tag_t), "_HEAP_STOP_ON_VALUES.FreeTag", free_tag, 0x140, 0x20, true, 0xd44b61721049925d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif