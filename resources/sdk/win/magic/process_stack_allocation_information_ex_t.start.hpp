#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_STACK_ALLOCATION_INFORMATION_EX.PreferredNode", preferred_node, 0x0, 0x20, true, 0xa015ce20640bf65b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(process_stack_allocation_information_t ), "_PROCESS_STACK_ALLOCATION_INFORMATION_EX.AllocInfo", alloc_info, 0x80, 0xc0, true, 0x5d7aade27170c859)
#else
#define _m00
#define _m01
#endif