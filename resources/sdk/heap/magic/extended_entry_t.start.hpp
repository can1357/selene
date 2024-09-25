#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP_EXTENDED_ENTRY.FunctionIndex", function_index, 0x40, 0x10, true, 0x64750abb015eb28d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP_EXTENDED_ENTRY.ContextValue", context_value, 0x50, 0x10, true, 0x670717825983108a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_EXTENDED_ENTRY.InterceptorValue", interceptor_value, 0x40, 0x20, true, 0xe36f8268a6a34439)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP_EXTENDED_ENTRY.UnusedBytesLength", unused_bytes_length, 0x60, 0x10, true, 0x9a86210d2158f2c8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_EXTENDED_ENTRY.EntryOffset", entry_offset, 0x70, 0x8, true, 0xcdaeabbf93c02d14)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_EXTENDED_ENTRY.ExtendedBlockSignature", extended_block_signature, 0x78, 0x8, true, 0xce251bc851b53918)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif