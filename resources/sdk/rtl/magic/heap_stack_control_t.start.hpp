#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_HEAP_STACK_CONTROL.Version", version, 0x0, 0x10, true, 0xdd840508b7be7781)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_HEAP_STACK_CONTROL.Flags", flags, 0x10, 0x10, true, 0x7e1262f9b8d72ec1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RTL_HEAP_STACK_CONTROL.Process", process, 0x40, 0x40, true, 0x2795fdbae93df023)
#else
#define _m00
#define _m01
#define _m02
#endif