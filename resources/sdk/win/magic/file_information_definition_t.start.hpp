#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::file_information_class_t), "_FILE_INFORMATION_DEFINITION.Class", _class, 0x0, 0x0, false, 0xd128dde140503a2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_INFORMATION_DEFINITION.NextEntryOffset", next_entry_offset, 0x0, 0x0, false, 0x3a82ffa34c29533d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_INFORMATION_DEFINITION.FileNameLengthOffset", file_name_length_offset, 0x0, 0x0, false, 0xbbe1608c8a532946)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_INFORMATION_DEFINITION.FileNameOffset", file_name_offset, 0x0, 0x0, false, 0x1831030b6b503edc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif