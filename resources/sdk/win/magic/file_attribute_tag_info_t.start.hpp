#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_ATTRIBUTE_TAG_INFO.FileAttributes", file_attributes, 0x0, 0x20, true, 0x86edfa55d46298b6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_ATTRIBUTE_TAG_INFO.ReparseTag", reparse_tag, 0x20, 0x20, true, 0x653f24a6a3538452)
#else
#define _m00
#define _m01
#endif