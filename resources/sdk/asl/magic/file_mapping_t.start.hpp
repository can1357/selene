#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "AslFileMapping.FileMappingHandle", file_mapping_handle, 0x0, 0x40, true, 0x3499203f76740b2e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct asl::attribute_t, 33>), "AslFileMapping.FileAttributes", file_attributes, 0x40, 0x0, true, 0xecd6e57480776384)
#else
#define _m00
#define _m01
#endif