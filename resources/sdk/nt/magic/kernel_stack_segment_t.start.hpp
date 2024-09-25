#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KERNEL_STACK_SEGMENT.StackBase", stack_base, 0x0, 0x40, true, 0x8d91e2456d1456a9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KERNEL_STACK_SEGMENT.StackLimit", stack_limit, 0x40, 0x40, true, 0x5c4c2a8bbe39b5d2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KERNEL_STACK_SEGMENT.KernelStack", kernel_stack, 0x80, 0x40, true, 0xd7bdaa7e541d94c6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KERNEL_STACK_SEGMENT.InitialStack", initial_stack, 0xc0, 0x40, true, 0x95bb53bdbc3f0fa1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KERNEL_STACK_SEGMENT.KernelShadowStackBase", kernel_shadow_stack_base, 0x0, 0x0, false, 0x4c962c7588179d45)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::kernel_shadow_stack_limit_t), "_KERNEL_STACK_SEGMENT.KernelShadowStackLimit", kernel_shadow_stack_limit, 0x0, 0x0, false, 0xfd77da3c808c42aa)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KERNEL_STACK_SEGMENT.KernelShadowStack", kernel_shadow_stack, 0x0, 0x0, false, 0x7b7973b6d689d3e9)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KERNEL_STACK_SEGMENT.KernelShadowStackInitial", kernel_shadow_stack_initial, 0x0, 0x0, false, 0x58144823d316d289)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif