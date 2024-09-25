#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_STACK_CONTEXT_ENTRY.Address", address, 0x0, 0x40, true, 0x9c7cb35fa132c66e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_STACK_CONTEXT_ENTRY.Data", data, 0x40, 0x40, true, 0x6df28d54fe083fce)
#else
#define _m00
#define _m01
#endif