#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_EXTENDED_BASIC_INFORMATION64.Size", size, 0x0, 0x40, true, 0xcf10578c275433ef)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::process_basic_information64_t), "_PROCESS_EXTENDED_BASIC_INFORMATION64.BasicInfo", basic_info, 0x40, 0x80, true, 0xa0f4c17332c3d6b1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_EXTENDED_BASIC_INFORMATION64.Flags", flags, 0x1c0, 0x20, true, 0x7719e37e68605439)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_EXTENDED_BASIC_INFORMATION64.IsProtectedProcess", is_protected_process, 0x1c0, 0x1, true, 0x22d96e6aa5fa547c, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_EXTENDED_BASIC_INFORMATION64.IsWow64Process", is_wow64_process, 0x1c1, 0x1, true, 0x8847657aba35856b, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_EXTENDED_BASIC_INFORMATION64.IsProcessDeleting", is_process_deleting, 0x1c2, 0x1, true, 0x8d0952523b89653d, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_EXTENDED_BASIC_INFORMATION64.IsCrossSessionCreate", is_cross_session_create, 0x1c3, 0x1, true, 0xbf66be4306a7d64d, 1, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_EXTENDED_BASIC_INFORMATION64.IsFrozen", is_frozen, 0x1c4, 0x1, true, 0x795eedb2c5e2d173, 1, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_EXTENDED_BASIC_INFORMATION64.IsBackground", is_background, 0x1c5, 0x1, true, 0x85f8186317625453, 1, uint32_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_EXTENDED_BASIC_INFORMATION64.IsStronglyNamed", is_strongly_named, 0x1c6, 0x1, true, 0x9bbed168d4b41bf3, 1, uint32_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_EXTENDED_BASIC_INFORMATION64.IsSecureProcess", is_secure_process, 0x1c7, 0x1, true, 0x7f9a1b40d98f1bea, 1, uint32_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_EXTENDED_BASIC_INFORMATION64.IsPicoProcess", is_pico_process, 0x1c8, 0x1, true, 0xadc058edf8f50c02, 1, uint32_t)
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