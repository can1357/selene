#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_ATTRIBUTE_TAG_INFORMATION.FileAttributes", file_attributes, 0x0, 0x20, true, 0xc8b341be25c16be6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_ATTRIBUTE_TAG_INFORMATION.ReparseTag", reparse_tag, 0x20, 0x20, true, 0x616b80c93c7f4738)
#else
#define _m00
#define _m01
#endif