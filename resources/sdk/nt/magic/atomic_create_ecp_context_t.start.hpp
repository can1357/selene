#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_ATOMIC_CREATE_ECP_CONTEXT.Size", size, 0x0, 0x10, true, 0xc31c875d2ee49661)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_ATOMIC_CREATE_ECP_CONTEXT.InFlags", in_flags, 0x10, 0x10, true, 0xb9e437824de13874)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_ATOMIC_CREATE_ECP_CONTEXT.OutFlags", out_flags, 0x20, 0x10, true, 0xdf67236048304a34)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_ATOMIC_CREATE_ECP_CONTEXT.ReparseBufferLength", reparse_buffer_length, 0x30, 0x10, true, 0x43a9f0abc898ce7c)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::reparse_data_buffer_t*), "_ATOMIC_CREATE_ECP_CONTEXT.ReparseBuffer", reparse_buffer, 0x40, 0x40, true, 0x7536438e0451d87d)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_ATOMIC_CREATE_ECP_CONTEXT.FileSize", file_size, 0x80, 0x40, true, 0x5c821f7f56c6bf0f)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_ATOMIC_CREATE_ECP_CONTEXT.ValidDataLength", valid_data_length, 0xc0, 0x40, true, 0x9cf378a1ac031a7)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::file_timestamps_t*), "_ATOMIC_CREATE_ECP_CONTEXT.FileTimestamps", file_timestamps, 0x100, 0x40, true, 0xdc1e24784a40ed86)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ATOMIC_CREATE_ECP_CONTEXT.FileAttributes", file_attributes, 0x140, 0x20, true, 0xc24f7704757adb52)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ATOMIC_CREATE_ECP_CONTEXT.UsnSourceInfo", usn_source_info, 0x160, 0x20, true, 0xb210061fe3e28dad)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_ATOMIC_CREATE_ECP_CONTEXT.Usn", usn, 0x180, 0x40, true, 0x68725d5fc3db2656)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ATOMIC_CREATE_ECP_CONTEXT.SuppressFileAttributeInheritanceMask", suppress_file_attribute_inheritance_mask, 0x1c0, 0x20, true, 0x1f5d119a4edc18af)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ATOMIC_CREATE_ECP_CONTEXT.InOpFlags", in_op_flags, 0x1e0, 0x20, true, 0x216305c43aa6b2d2)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ATOMIC_CREATE_ECP_CONTEXT.OutOpFlags", out_op_flags, 0x200, 0x20, true, 0x662e0a71594a744d)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ATOMIC_CREATE_ECP_CONTEXT.InGenFlags", in_gen_flags, 0x220, 0x20, true, 0x1b224ed7e1ab093f)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ATOMIC_CREATE_ECP_CONTEXT.OutGenFlags", out_gen_flags, 0x240, 0x20, true, 0xf0d0f258547e9b99)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ATOMIC_CREATE_ECP_CONTEXT.CaseSensitiveFlagsMask", case_sensitive_flags_mask, 0x260, 0x20, true, 0x70242d5362a6d79e)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ATOMIC_CREATE_ECP_CONTEXT.InCaseSensitiveFlags", in_case_sensitive_flags, 0x280, 0x20, true, 0xcb6d985b7e6863f3)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ATOMIC_CREATE_ECP_CONTEXT.OutCaseSensitiveFlags", out_case_sensitive_flags, 0x2a0, 0x20, true, 0x30f889b84bac164e)
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
#endif