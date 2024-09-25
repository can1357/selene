#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_KBUGCHECK_SECONDARY_DUMP_DATA_EX.InBuffer", in_buffer, 0x0, 0x40, true, 0x41c19a00e2f40dab)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KBUGCHECK_SECONDARY_DUMP_DATA_EX.InBufferLength", in_buffer_length, 0x40, 0x20, true, 0x5a784382508b13fd)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KBUGCHECK_SECONDARY_DUMP_DATA_EX.MaximumAllowed", maximum_allowed, 0x60, 0x20, true, 0xa3e1632143ab345a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_KBUGCHECK_SECONDARY_DUMP_DATA_EX.Guid", guid, 0x80, 0x80, true, 0xb0ff4f32b916ffb9)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_KBUGCHECK_SECONDARY_DUMP_DATA_EX.OutBuffer", out_buffer, 0x100, 0x40, true, 0xef4fbbe5c77c3b87)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KBUGCHECK_SECONDARY_DUMP_DATA_EX.OutBufferLength", out_buffer_length, 0x140, 0x20, true, 0x61680d3c18d89e13)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_KBUGCHECK_SECONDARY_DUMP_DATA_EX.Context", context, 0x180, 0x40, true, 0xd9134d9f3e84f073)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KBUGCHECK_SECONDARY_DUMP_DATA_EX.Flags", flags, 0x1c0, 0x20, true, 0xb4b277e65f3d86b5)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KBUGCHECK_SECONDARY_DUMP_DATA_EX.DumpType", dump_type, 0x1e0, 0x20, true, 0x1ff3cc3b4c0bb185)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KBUGCHECK_SECONDARY_DUMP_DATA_EX.BugCheckCode", bug_check_code, 0x200, 0x20, true, 0xb3ecbc9294ee3d4a)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_KBUGCHECK_SECONDARY_DUMP_DATA_EX.BugCheckParameter1", bug_check_parameter1, 0x240, 0x40, true, 0x67df4f06ac391749)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_KBUGCHECK_SECONDARY_DUMP_DATA_EX.BugCheckParameter2", bug_check_parameter2, 0x280, 0x40, true, 0xe1d152021de744e5)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_KBUGCHECK_SECONDARY_DUMP_DATA_EX.BugCheckParameter3", bug_check_parameter3, 0x2c0, 0x40, true, 0x1b6ace37bf661b3d)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_KBUGCHECK_SECONDARY_DUMP_DATA_EX.BugCheckParameter4", bug_check_parameter4, 0x300, 0x40, true, 0xf69495fb1f8ad303)
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
#endif