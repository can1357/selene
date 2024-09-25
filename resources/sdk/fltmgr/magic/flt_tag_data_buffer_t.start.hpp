#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_TAG_DATA_BUFFER.FileTag", file_tag, 0x0, 0x20, true, 0x51d180061cb18617)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FLT_TAG_DATA_BUFFER.TagDataLength", tag_data_length, 0x20, 0x10, true, 0x57fb002d2528bc8c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FLT_TAG_DATA_BUFFER.UnparsedNameLength", unparsed_name_length, 0x30, 0x10, true, 0x422f3d7c8a1a3ec1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FLT_TAG_DATA_BUFFER.SymbolicLinkReparseBuffer.SubstituteNameOffset", substitute_name_offset, 0x0, 0x10, true, 0x3a54bdecaf1ca79f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FLT_TAG_DATA_BUFFER.SymbolicLinkReparseBuffer.SubstituteNameLength", substitute_name_length, 0x10, 0x10, true, 0x4d53736711ced43)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FLT_TAG_DATA_BUFFER.SymbolicLinkReparseBuffer.PrintNameOffset", print_name_offset, 0x20, 0x10, true, 0xbaab8ab385ef9911)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FLT_TAG_DATA_BUFFER.SymbolicLinkReparseBuffer.PrintNameLength", print_name_length, 0x30, 0x10, true, 0x8b9d2b2e466158d1)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_TAG_DATA_BUFFER.SymbolicLinkReparseBuffer.Flags", flags, 0x40, 0x20, true, 0xacda4a2316a7fba0)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_FLT_TAG_DATA_BUFFER.SymbolicLinkReparseBuffer.PathBuffer", path_buffer, 0x60, 0x10, true, 0x87af3690086e0e3e)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_symbolic_link_reparse_buffer_t), "_FLT_TAG_DATA_BUFFER.SymbolicLinkReparseBuffer", symbolic_link_reparse_buffer, 0x40, 0x80, true, 0x4eeae7ef24560bfc)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FLT_TAG_DATA_BUFFER.MountPointReparseBuffer.SubstituteNameOffset", substitute_name_offset, 0x0, 0x10, true, 0x6272afc686fa684d)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FLT_TAG_DATA_BUFFER.MountPointReparseBuffer.SubstituteNameLength", substitute_name_length, 0x10, 0x10, true, 0x9c6bc8300b884f5b)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FLT_TAG_DATA_BUFFER.MountPointReparseBuffer.PrintNameOffset", print_name_offset, 0x20, 0x10, true, 0xcf03290af93068ea)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FLT_TAG_DATA_BUFFER.MountPointReparseBuffer.PrintNameLength", print_name_length, 0x30, 0x10, true, 0x564b034676bb2e27)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_FLT_TAG_DATA_BUFFER.MountPointReparseBuffer.PathBuffer", path_buffer, 0x40, 0x10, true, 0xd9d84e8bd6fe9bfe)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_mount_point_reparse_buffer_t), "_FLT_TAG_DATA_BUFFER.MountPointReparseBuffer", mount_point_reparse_buffer, 0x40, 0x50, true, 0x39739905a4b7d6ae)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_FLT_TAG_DATA_BUFFER.GenericReparseBuffer.DataBuffer", data_buffer, 0x0, 0x8, true, 0xf84f629341b84867)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_generic_reparse_buffer_t), "_FLT_TAG_DATA_BUFFER.GenericReparseBuffer", generic_reparse_buffer, 0x40, 0x8, true, 0xc1a657d519e3e697)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_FLT_TAG_DATA_BUFFER.GenericGUIDReparseBuffer.TagGuid", tag_guid, 0x0, 0x80, true, 0xc48604ea13218162)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_FLT_TAG_DATA_BUFFER.GenericGUIDReparseBuffer.DataBuffer", data_buffer, 0x80, 0x8, true, 0x70c8b29a8e17de3f)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u12_generic_guid_reparse_buffer_t), "_FLT_TAG_DATA_BUFFER.GenericGUIDReparseBuffer", generic_guid_reparse_buffer, 0x40, 0xa0, true, 0x5caf26c411fa125f)
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
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#endif