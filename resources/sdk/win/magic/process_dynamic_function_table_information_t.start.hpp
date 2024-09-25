#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::dynamic_function_table_t*), "_PROCESS_DYNAMIC_FUNCTION_TABLE_INFORMATION.DynamicFunctionTable", dynamic_function_table, 0x0, 0x40, true, 0x610c5e1c824b4e2a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCESS_DYNAMIC_FUNCTION_TABLE_INFORMATION.Remove", remove, 0x40, 0x8, true, 0x34c4f9c59c3dd880)
#else
#define _m00
#define _m01
#endif