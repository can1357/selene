#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::cor_exception_flag_t), "IMAGE_COR_ILMETHOD_SECT_EH_CLAUSE_FAT.Flags", flags, 0x0, 0x20, true, 0xb975b40b132f54cd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "IMAGE_COR_ILMETHOD_SECT_EH_CLAUSE_FAT.TryOffset", try_offset, 0x20, 0x20, true, 0xcd128016a701e5a4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "IMAGE_COR_ILMETHOD_SECT_EH_CLAUSE_FAT.TryLength", try_length, 0x40, 0x20, true, 0x16d0b74c135b36f8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "IMAGE_COR_ILMETHOD_SECT_EH_CLAUSE_FAT.HandlerOffset", handler_offset, 0x60, 0x20, true, 0x8ac9057333f9dc80)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "IMAGE_COR_ILMETHOD_SECT_EH_CLAUSE_FAT.HandlerLength", handler_length, 0x80, 0x20, true, 0x97e68e712d1fc41b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "IMAGE_COR_ILMETHOD_SECT_EH_CLAUSE_FAT.ClassToken", class_token, 0xa0, 0x20, true, 0x9e9019f274a0fe5)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "IMAGE_COR_ILMETHOD_SECT_EH_CLAUSE_FAT.FilterOffset", filter_offset, 0xa0, 0x20, true, 0xdb11a578cbf4c802)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif