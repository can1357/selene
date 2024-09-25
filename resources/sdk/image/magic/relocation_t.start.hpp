#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_RELOCATION.VirtualAddress", virtual_address, 0x0, 0x20, true, 0x181c37d3240be648)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_RELOCATION.RelocCount", reloc_count, 0x0, 0x20, true, 0xd8490cf3f2005d89)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_RELOCATION.SymbolTableIndex", symbol_table_index, 0x20, 0x20, true, 0xe3f2339773df82a3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_RELOCATION.Type", type, 0x40, 0x10, true, 0xc9ba7d0e56db6c01)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif