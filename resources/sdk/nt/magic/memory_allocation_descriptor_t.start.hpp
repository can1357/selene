#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_MEMORY_ALLOCATION_DESCRIPTOR.ListEntry", list_entry, 0x0, 0x80, true, 0x89981d64862de558)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::type_of_memory_t), "_MEMORY_ALLOCATION_DESCRIPTOR.MemoryType", memory_type, 0x80, 0x20, true, 0x52c1208d438c5296)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_ALLOCATION_DESCRIPTOR.BasePage", base_page, 0xc0, 0x40, true, 0x58717becc95defbb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_ALLOCATION_DESCRIPTOR.PageCount", page_count, 0x100, 0x40, true, 0x3de58da3a9c4aa6e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::balanced_node_t), "_MEMORY_ALLOCATION_DESCRIPTOR.Node", node, 0x0, 0x0, false, 0xd640edd67415100b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif