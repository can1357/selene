#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_AMD_EXTENDED_REGISTERS.IPID", ipid, 0x0, 0x40, true, 0x10a0eb89f8eb20ef)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_AMD_EXTENDED_REGISTERS.SYND", synd, 0x40, 0x40, true, 0xd96debcf647bcf66)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_AMD_EXTENDED_REGISTERS.CONFIG", config, 0x80, 0x40, true, 0xd5a743a4a62d5d58)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_AMD_EXTENDED_REGISTERS.DESTAT", destat, 0xc0, 0x40, true, 0xb76e7f1b265d78c)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_AMD_EXTENDED_REGISTERS.DEADDR", deaddr, 0x100, 0x40, true, 0x6886495548d0d8ae)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_AMD_EXTENDED_REGISTERS.MISC1", misc1, 0x140, 0x40, true, 0x5fc4e05dd57d6c44)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_AMD_EXTENDED_REGISTERS.MISC2", misc2, 0x180, 0x40, true, 0x3315eee3a8e2cf2c)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_AMD_EXTENDED_REGISTERS.MISC3", misc3, 0x1c0, 0x40, true, 0xf6b098b2cf0550ae)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_AMD_EXTENDED_REGISTERS.MISC4", misc4, 0x200, 0x40, true, 0x48899b061b417c1)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_AMD_EXTENDED_REGISTERS.RasCap", ras_cap, 0x240, 0x40, true, 0xf1ec4769402f5fcb)
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
#endif