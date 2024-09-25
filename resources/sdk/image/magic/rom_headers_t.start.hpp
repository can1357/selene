#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct image::file_header_t), "_IMAGE_ROM_HEADERS.FileHeader", file_header, 0x0, 0xa0, true, 0x9cb5efb2ad278d9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct image::rom_optional_header_t), "_IMAGE_ROM_HEADERS.OptionalHeader", optional_header, 0xa0, 0xc0, true, 0xfeb4c0dec892b511)
#else
#define _m00
#define _m01
#endif