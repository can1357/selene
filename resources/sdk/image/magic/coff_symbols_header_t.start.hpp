#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_COFF_SYMBOLS_HEADER.NumberOfSymbols", number_of_symbols, 0x0, 0x20, true, 0xee8491dc684c5e85)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_COFF_SYMBOLS_HEADER.LvaToFirstSymbol", lva_to_first_symbol, 0x20, 0x20, true, 0x4fd998ec994754e3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_COFF_SYMBOLS_HEADER.NumberOfLinenumbers", number_of_linenumbers, 0x40, 0x20, true, 0x12f9adacdd5b26ae)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_COFF_SYMBOLS_HEADER.LvaToFirstLinenumber", lva_to_first_linenumber, 0x60, 0x20, true, 0x982e827015c81e7b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_COFF_SYMBOLS_HEADER.RvaToFirstByteOfCode", rva_to_first_byte_of_code, 0x80, 0x20, true, 0x2cc1ba024ff1f807)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_COFF_SYMBOLS_HEADER.RvaToLastByteOfCode", rva_to_last_byte_of_code, 0xa0, 0x20, true, 0xd194b148dba77ba1)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_COFF_SYMBOLS_HEADER.RvaToFirstByteOfData", rva_to_first_byte_of_data, 0xc0, 0x20, true, 0x310338e662422fe3)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_COFF_SYMBOLS_HEADER.RvaToLastByteOfData", rva_to_last_byte_of_data, 0xe0, 0x20, true, 0x7e324b053913b839)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif