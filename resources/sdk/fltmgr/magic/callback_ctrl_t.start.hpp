#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<nt::list_entry_t, 50>), "_CALLBACK_CTRL.OperationLists", operation_lists, 0x0, 0x0, true, 0x5782821a18ff3e58)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<enum fltmgr::callback_node_flags_t, 50>), "_CALLBACK_CTRL.OperationFlags", operation_flags, 0x1900, 0x40, true, 0xe659914d0dd2b62e)
#else
#define _m00
#define _m01
#endif