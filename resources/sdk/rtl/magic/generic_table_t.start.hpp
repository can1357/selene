#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct rtl::splay_links_t*), "_RTL_GENERIC_TABLE.TableRoot", table_root, 0x0, 0x40, true, 0xe3e2d86934655d8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_RTL_GENERIC_TABLE.InsertOrderList", insert_order_list, 0x40, 0x80, true, 0xed6a53e49576c305)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::list_entry_t*), "_RTL_GENERIC_TABLE.OrderedPointer", ordered_pointer, 0xc0, 0x40, true, 0x1e7fcf6acf5cf546)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_GENERIC_TABLE.WhichOrderedElement", which_ordered_element, 0x100, 0x20, true, 0xbdcc489778299510)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_GENERIC_TABLE.NumberGenericTableElements", number_generic_table_elements, 0x120, 0x20, true, 0x4dd62dbb30cc14ad)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(prtl_generic_compare_routine_t ), "_RTL_GENERIC_TABLE.CompareRoutine", compare_routine, 0x140, 0x40, true, 0xf232eb81a434c830)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(prtl_generic_allocate_routine_t ), "_RTL_GENERIC_TABLE.AllocateRoutine", allocate_routine, 0x180, 0x40, true, 0xca9e218992a93978)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(prtl_generic_free_routine_t ), "_RTL_GENERIC_TABLE.FreeRoutine", free_routine, 0x1c0, 0x40, true, 0x43cb0154b7de7ffc)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RTL_GENERIC_TABLE.TableContext", table_context, 0x200, 0x40, true, 0xd894a25e4a04dbb1)
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
#endif