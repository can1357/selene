#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_IMAGE_SECTION_HEADER.Name", name, 0x0, 0x40, true, 0x77f9c7b632bb92df)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_SECTION_HEADER.Misc.PhysicalAddress", physical_address, 0x0, 0x20, true, 0x82d4a9ffd7f2d237)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_SECTION_HEADER.Misc.VirtualSize", virtual_size, 0x0, 0x20, true, 0x44c688db78331b98)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_misc_t), "_IMAGE_SECTION_HEADER.Misc", misc, 0x40, 0x20, true, 0xd8c29a5b1e7c7552)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_SECTION_HEADER.VirtualAddress", virtual_address, 0x60, 0x20, true, 0x9d89ad04179b17bf)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_SECTION_HEADER.SizeOfRawData", size_of_raw_data, 0x80, 0x20, true, 0x132dad1f07c2b045)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_SECTION_HEADER.PointerToRawData", pointer_to_raw_data, 0xa0, 0x20, true, 0xac4fc7f119e4defc)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_SECTION_HEADER.PointerToRelocations", pointer_to_relocations, 0xc0, 0x20, true, 0xae4a3de65ea9dbee)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_SECTION_HEADER.PointerToLinenumbers", pointer_to_linenumbers, 0xe0, 0x20, true, 0x6dd63891150f10b6)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_SECTION_HEADER.NumberOfRelocations", number_of_relocations, 0x100, 0x10, true, 0xf609c662aa4f9f8)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_SECTION_HEADER.NumberOfLinenumbers", number_of_linenumbers, 0x110, 0x10, true, 0x21b3c01e01a200ec)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_SECTION_HEADER.Characteristics", characteristics, 0x120, 0x20, true, 0xcef325a2eb29e69e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#endif