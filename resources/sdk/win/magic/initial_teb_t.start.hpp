#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_INITIAL_TEB.OldInitialTeb.OldStackBase", old_stack_base, 0x0, 0x40, true, 0xe0f5fab03284c70b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_INITIAL_TEB.OldInitialTeb.OldStackLimit", old_stack_limit, 0x40, 0x40, true, 0x291662ca72cf54ba)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_old_initial_teb_t), "_INITIAL_TEB.OldInitialTeb", old_initial_teb, 0x0, 0x80, true, 0x9f530d762e2e0f88)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_INITIAL_TEB.StackBase", stack_base, 0x80, 0x40, true, 0xcdffd71132a45ef8)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_INITIAL_TEB.StackLimit", stack_limit, 0xc0, 0x40, true, 0xa4d21b0a4f4e67e8)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_INITIAL_TEB.StackAllocationBase", stack_allocation_base, 0x100, 0x40, true, 0x6cd5d2788e72c73a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif