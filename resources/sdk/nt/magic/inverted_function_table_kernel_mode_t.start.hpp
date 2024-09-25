#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_INVERTED_FUNCTION_TABLE_KERNEL_MODE.CurrentSize", current_size, 0x0, 0x0, false, 0x4de6e794793efca4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_INVERTED_FUNCTION_TABLE_KERNEL_MODE.MaximumSize", maximum_size, 0x0, 0x0, false, 0x5a038086332940cd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_INVERTED_FUNCTION_TABLE_KERNEL_MODE.Epoch", epoch, 0x0, 0x0, false, 0xbfd1877e04a6d50e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_INVERTED_FUNCTION_TABLE_KERNEL_MODE.Overflow", overflow, 0x0, 0x0, false, 0x2537dc45c134be7a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::inverted_function_table_entry_t, 256>), "_INVERTED_FUNCTION_TABLE_KERNEL_MODE.TableEntry", table_entry, 0x0, 0x0, false, 0xd87e0e077a0054c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif