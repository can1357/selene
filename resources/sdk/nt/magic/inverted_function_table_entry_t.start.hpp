#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct image::runtime_function_entry_t*), "_INVERTED_FUNCTION_TABLE_ENTRY.FunctionTable", function_table, 0x0, 0x40, true, 0x856477ae1605ea42)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::dynamic_function_table_t*), "_INVERTED_FUNCTION_TABLE_ENTRY.DynamicTable", dynamic_table, 0x0, 0x40, true, 0xd95d657945b4299)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_INVERTED_FUNCTION_TABLE_ENTRY.ImageBase", image_base, 0x40, 0x40, true, 0xe09e421fe51039b0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_INVERTED_FUNCTION_TABLE_ENTRY.SizeOfImage", size_of_image, 0x80, 0x20, true, 0xc1509fc3fc4e2193)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_INVERTED_FUNCTION_TABLE_ENTRY.SizeOfTable", size_of_table, 0xa0, 0x20, true, 0xda285a2bcd631684)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif