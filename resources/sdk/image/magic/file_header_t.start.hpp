#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_FILE_HEADER.Machine", machine, 0x0, 0x10, true, 0x2fb7a99f69e6182e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_FILE_HEADER.NumberOfSections", number_of_sections, 0x10, 0x10, true, 0xd826a790716637f6)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_FILE_HEADER.TimeDateStamp", time_date_stamp, 0x20, 0x20, true, 0xd085228867f2cecf)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_FILE_HEADER.PointerToSymbolTable", pointer_to_symbol_table, 0x40, 0x20, true, 0xa923d75e137ca7a)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_FILE_HEADER.NumberOfSymbols", number_of_symbols, 0x60, 0x20, true, 0xd0ee4a2fdc5fa7b)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_FILE_HEADER.SizeOfOptionalHeader", size_of_optional_header, 0x80, 0x10, true, 0x803075e5df60101e)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_FILE_HEADER.Characteristics", characteristics, 0x90, 0x10, true, 0xac6b8bbcc369eef2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif