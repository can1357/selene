#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MEMORY_WORKING_SET_EX_INFORMATION.VirtualAddress", virtual_address, 0x0, 0x40, true, 0x175c4d1bfdef112a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::memory_working_set_ex_block_t), "_MEMORY_WORKING_SET_EX_INFORMATION.VirtualAttributes", virtual_attributes, 0x40, 0x40, true, 0x9673751488b31c70)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_WORKING_SET_EX_INFORMATION.Long", _long, 0x40, 0x40, true, 0x1ae07859a8df5425)
#else
#define _m00
#define _m01
#define _m02
#endif