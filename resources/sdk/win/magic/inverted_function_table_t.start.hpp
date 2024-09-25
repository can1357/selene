#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_INVERTED_FUNCTION_TABLE.CurrentSize", current_size, 0x0, 0x20, true, 0x4e7d18e9e2e9c257)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_INVERTED_FUNCTION_TABLE.MaximumSize", maximum_size, 0x20, 0x20, true, 0x51a6fde49c6a0be0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_INVERTED_FUNCTION_TABLE.Epoch", epoch, 0x40, 0x20, true, 0xd4e2723c03a4a2a5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_INVERTED_FUNCTION_TABLE.Overflow", overflow, 0x60, 0x8, true, 0xaca843d31650b099)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::inverted_function_table_entry_t, 256>), "_INVERTED_FUNCTION_TABLE.TableEntry", table_entry, 0x80, 0x0, true, 0x99b030330235cbc2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif