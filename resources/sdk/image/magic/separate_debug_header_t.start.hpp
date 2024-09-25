#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_SEPARATE_DEBUG_HEADER.Signature", signature, 0x0, 0x10, true, 0x739e91038a6ceae3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_SEPARATE_DEBUG_HEADER.Flags", flags, 0x10, 0x10, true, 0xcbf1cb0f6cabbeea)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_SEPARATE_DEBUG_HEADER.Machine", machine, 0x20, 0x10, true, 0x32fdae27a168e8a8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_SEPARATE_DEBUG_HEADER.Characteristics", characteristics, 0x30, 0x10, true, 0x3602cfd1b7f55c99)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_SEPARATE_DEBUG_HEADER.TimeDateStamp", time_date_stamp, 0x40, 0x20, true, 0xc1360371f796338c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_SEPARATE_DEBUG_HEADER.CheckSum", check_sum, 0x60, 0x20, true, 0x231c22991f1c4092)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_SEPARATE_DEBUG_HEADER.ImageBase", image_base, 0x80, 0x20, true, 0x90ea28789dc2075d)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_SEPARATE_DEBUG_HEADER.SizeOfImage", size_of_image, 0xa0, 0x20, true, 0x7a0735a74a80f00d)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_SEPARATE_DEBUG_HEADER.NumberOfSections", number_of_sections, 0xc0, 0x20, true, 0xaec4f88a9d0aefbb)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_SEPARATE_DEBUG_HEADER.ExportedNamesSize", exported_names_size, 0xe0, 0x20, true, 0xfa1ddd3d2bbf444e)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_SEPARATE_DEBUG_HEADER.DebugDirectorySize", debug_directory_size, 0x100, 0x20, true, 0xef615a9a3c83baa7)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_SEPARATE_DEBUG_HEADER.SectionAlignment", section_alignment, 0x120, 0x20, true, 0xcc3343db5df2407d)
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