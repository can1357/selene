#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct rtl::balanced_links_t), "_RTL_AVL_TABLE.BalancedRoot", balanced_root, 0x0, 0x0, true, 0x24df89aebef40a71)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RTL_AVL_TABLE.OrderedPointer", ordered_pointer, 0x100, 0x40, true, 0x3a58b40977342bea)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_AVL_TABLE.WhichOrderedElement", which_ordered_element, 0x140, 0x20, true, 0x80cf13c5bd15e847)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_AVL_TABLE.NumberGenericTableElements", number_generic_table_elements, 0x160, 0x20, true, 0x34cd4bd22e4d20ec)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_AVL_TABLE.DepthOfTree", depth_of_tree, 0x180, 0x20, true, 0xa0a2ccac74e8c6e4)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct rtl::balanced_links_t*), "_RTL_AVL_TABLE.RestartKey", restart_key, 0x1c0, 0x40, true, 0x43af976716856ef8)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_AVL_TABLE.DeleteCount", delete_count, 0x200, 0x20, true, 0x16484dd591c24f68)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(prtl_avl_compare_routine_t ), "_RTL_AVL_TABLE.CompareRoutine", compare_routine, 0x240, 0x40, true, 0xa34081b5f5182a6a)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(prtl_avl_allocate_routine_t ), "_RTL_AVL_TABLE.AllocateRoutine", allocate_routine, 0x280, 0x40, true, 0x97afbf3777430e97)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(prtl_avl_free_routine_t ), "_RTL_AVL_TABLE.FreeRoutine", free_routine, 0x2c0, 0x40, true, 0x8f5a4a775dd2eb6a)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RTL_AVL_TABLE.TableContext", table_context, 0x300, 0x40, true, 0x335e3aa217e51545)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#endif