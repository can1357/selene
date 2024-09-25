#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_DYNAMIC_FUNCTION_TABLE.ListEntry", list_entry, 0x0, 0x80, true, 0xf18a44f7c9115b24)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct image::runtime_function_entry_t*), "_DYNAMIC_FUNCTION_TABLE.FunctionTable", function_table, 0x80, 0x40, true, 0xc3a5fe9f933f759e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_DYNAMIC_FUNCTION_TABLE.TimeStamp", time_stamp, 0xc0, 0x40, true, 0xca45d28f79c1d01e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DYNAMIC_FUNCTION_TABLE.MinimumAddress", minimum_address, 0x100, 0x40, true, 0xca675e91646f25ab)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DYNAMIC_FUNCTION_TABLE.MaximumAddress", maximum_address, 0x140, 0x40, true, 0xf3861b2f20ef8363)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DYNAMIC_FUNCTION_TABLE.BaseAddress", base_address, 0x180, 0x40, true, 0x72d4fb42887457f7)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<struct image::runtime_function_entry_t*(uint64_t, void*)>*), "_DYNAMIC_FUNCTION_TABLE.Callback", callback, 0x1c0, 0x40, true, 0xc35aa3dbea9b7ee5)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_DYNAMIC_FUNCTION_TABLE.Context", context, 0x200, 0x40, true, 0xedf4150c2ff1ac4f)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_DYNAMIC_FUNCTION_TABLE.OutOfProcessCallbackDll", out_of_process_callback_dll, 0x240, 0x40, true, 0xa9e22b18c4baa85a)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::function_table_type_t), "_DYNAMIC_FUNCTION_TABLE.Type", type, 0x280, 0x20, true, 0x7a050e70262537e7)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DYNAMIC_FUNCTION_TABLE.EntryCount", entry_count, 0x2a0, 0x20, true, 0x21638413ec75a2b)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::balanced_node_t), "_DYNAMIC_FUNCTION_TABLE.TreeNode", tree_node, 0x2c0, 0xc0, true, 0xacab9920c79d1207)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::balanced_node_t), "_DYNAMIC_FUNCTION_TABLE.TreeNodeMin", tree_node_min, 0x0, 0x0, false, 0x493545c8e7d774f1)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::balanced_node_t), "_DYNAMIC_FUNCTION_TABLE.TreeNodeMax", tree_node_max, 0x0, 0x0, false, 0xca161b591a3fd59b)
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
#define _m11
#define _m12
#define _m13
#endif