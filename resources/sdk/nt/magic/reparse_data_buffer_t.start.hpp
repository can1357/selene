#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REPARSE_DATA_BUFFER.ReparseTag", reparse_tag, 0x0, 0x20, true, 0x31322857de833653)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_REPARSE_DATA_BUFFER.ReparseDataLength", reparse_data_length, 0x20, 0x10, true, 0x665bac83ef09bba7)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_REPARSE_DATA_BUFFER.SymbolicLinkReparseBuffer.SubstituteNameOffset", substitute_name_offset, 0x0, 0x10, true, 0x8dac6d76796df061)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_REPARSE_DATA_BUFFER.SymbolicLinkReparseBuffer.SubstituteNameLength", substitute_name_length, 0x10, 0x10, true, 0xec0a6d9bb0a570a2)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_REPARSE_DATA_BUFFER.SymbolicLinkReparseBuffer.PrintNameOffset", print_name_offset, 0x20, 0x10, true, 0x6d70feb9168cf903)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_REPARSE_DATA_BUFFER.SymbolicLinkReparseBuffer.PrintNameLength", print_name_length, 0x30, 0x10, true, 0x95eb649bda105b1b)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REPARSE_DATA_BUFFER.SymbolicLinkReparseBuffer.Flags", flags, 0x40, 0x20, true, 0x92b746fa17bf1588)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_REPARSE_DATA_BUFFER.SymbolicLinkReparseBuffer.PathBuffer", path_buffer, 0x60, 0x10, true, 0x4a231808ff96b175)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_symbolic_link_reparse_buffer_t), "_REPARSE_DATA_BUFFER.SymbolicLinkReparseBuffer", symbolic_link_reparse_buffer, 0x40, 0x80, true, 0x262357a45017fc31)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_REPARSE_DATA_BUFFER.MountPointReparseBuffer.SubstituteNameOffset", substitute_name_offset, 0x0, 0x10, true, 0x60b4c603eab347ec)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_REPARSE_DATA_BUFFER.MountPointReparseBuffer.SubstituteNameLength", substitute_name_length, 0x10, 0x10, true, 0xcab352584c2a8518)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_REPARSE_DATA_BUFFER.MountPointReparseBuffer.PrintNameOffset", print_name_offset, 0x20, 0x10, true, 0x9bbf2bf336a70be1)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_REPARSE_DATA_BUFFER.MountPointReparseBuffer.PrintNameLength", print_name_length, 0x30, 0x10, true, 0x3aabe7ec0c72c614)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_REPARSE_DATA_BUFFER.MountPointReparseBuffer.PathBuffer", path_buffer, 0x40, 0x10, true, 0xbdd715dbf6b49624)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u5_mount_point_reparse_buffer_t), "_REPARSE_DATA_BUFFER.MountPointReparseBuffer", mount_point_reparse_buffer, 0x40, 0x50, true, 0x773ca420b7186920)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_REPARSE_DATA_BUFFER.GenericReparseBuffer.DataBuffer", data_buffer, 0x0, 0x8, true, 0x4d630990d35f2282)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u10_generic_reparse_buffer_t), "_REPARSE_DATA_BUFFER.GenericReparseBuffer", generic_reparse_buffer, 0x40, 0x8, true, 0xb732befdc859f541)
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
#endif