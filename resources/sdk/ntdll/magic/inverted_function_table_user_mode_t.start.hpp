#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_INVERTED_FUNCTION_TABLE_USER_MODE.CurrentSize", current_size, 0x0, 0x0, false, 0x70b7520a7495fb6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_INVERTED_FUNCTION_TABLE_USER_MODE.MaximumSize", maximum_size, 0x0, 0x0, false, 0x2a48303cbff86666)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_INVERTED_FUNCTION_TABLE_USER_MODE.Epoch", epoch, 0x0, 0x0, false, 0x9f9f959910acfa3f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_INVERTED_FUNCTION_TABLE_USER_MODE.Overflow", overflow, 0x0, 0x0, false, 0xf85accfef048ef4b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::inverted_function_table_entry_t, 512>), "_INVERTED_FUNCTION_TABLE_USER_MODE.TableEntry", table_entry, 0x0, 0x0, false, 0x1fa31f4f9b3f1146)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif