#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KERNEL_SHADOW_STACK_LIMIT.AllFields", all_fields, 0x0, 0x0, false, 0x673a196b74f96ba9)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_KERNEL_SHADOW_STACK_LIMIT.ShadowStackType", shadow_stack_type, 0x0, 0x0, false, 0x54af36b3876ca3ea, 3, uint64_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint52_t), "_KERNEL_SHADOW_STACK_LIMIT.ShadowStackLimitPfn", shadow_stack_limit_pfn, 0x0, 0x0, false, 0x448a01f5dccfa758, 52, uint64_t)
#else
#define _m00
#define _m01
#define _m02
#endif