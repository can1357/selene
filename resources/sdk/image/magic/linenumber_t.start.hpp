#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_LINENUMBER.Type.SymbolTableIndex", symbol_table_index, 0x0, 0x20, true, 0x773d08b0e5eb9843)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_LINENUMBER.Type.VirtualAddress", virtual_address, 0x0, 0x20, true, 0xb39db483ba2e8c52)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_type_t), "_IMAGE_LINENUMBER.Type", type, 0x0, 0x20, true, 0x14c89726b257c3cb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_LINENUMBER.Linenumber", linenumber, 0x20, 0x10, true, 0x8ce81aec7393f509)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif