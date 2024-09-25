#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ARM64_NT_CONTEXT.ContextFlags", context_flags, 0x0, 0x20, true, 0xc839957467c714e6)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ARM64_NT_CONTEXT.Cpsr", cpsr, 0x20, 0x20, true, 0x7f73053ce79da5da)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ARM64_NT_CONTEXT.X0", x0, 0x40, 0x40, true, 0x7c3324e202f6e63b)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ARM64_NT_CONTEXT.X1", x1, 0x80, 0x40, true, 0x3e85cf54ec9a14df)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ARM64_NT_CONTEXT.X2", x2, 0xc0, 0x40, true, 0x7cf5171a79eab613)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ARM64_NT_CONTEXT.X3", x3, 0x100, 0x40, true, 0x26b242e01debcbaa)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ARM64_NT_CONTEXT.X4", x4, 0x140, 0x40, true, 0xf684901c0958d451)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ARM64_NT_CONTEXT.X5", x5, 0x180, 0x40, true, 0xb542f9ab0accb31)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ARM64_NT_CONTEXT.X6", x6, 0x1c0, 0x40, true, 0xd86ae1d0e9a1db6f)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ARM64_NT_CONTEXT.X7", x7, 0x200, 0x40, true, 0x2e0ef6fb01a8aa17)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ARM64_NT_CONTEXT.X8", x8, 0x240, 0x40, true, 0x903589d186ae7890)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ARM64_NT_CONTEXT.X9", x9, 0x280, 0x40, true, 0xbb2e7c64e1852991)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ARM64_NT_CONTEXT.X10", x10, 0x2c0, 0x40, true, 0x4e4146bffd2f83ef)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ARM64_NT_CONTEXT.X11", x11, 0x300, 0x40, true, 0x40534367765273fb)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ARM64_NT_CONTEXT.X12", x12, 0x340, 0x40, true, 0x152fc6a694926a07)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ARM64_NT_CONTEXT.X13", x13, 0x380, 0x40, true, 0x3c786827807c0350)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ARM64_NT_CONTEXT.X14", x14, 0x3c0, 0x40, true, 0x6c36064b4784caf5)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ARM64_NT_CONTEXT.X15", x15, 0x400, 0x40, true, 0x4e7a9131376c1095)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ARM64_NT_CONTEXT.X16", x16, 0x440, 0x40, true, 0xbcd52acb50a52ce6)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ARM64_NT_CONTEXT.X17", x17, 0x480, 0x40, true, 0x16d24cbb3df1970f)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ARM64_NT_CONTEXT.X18", x18, 0x4c0, 0x40, true, 0x4093c919bbb8688e)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ARM64_NT_CONTEXT.X19", x19, 0x500, 0x40, true, 0x40fc599b03bfef59)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ARM64_NT_CONTEXT.X20", x20, 0x540, 0x40, true, 0x9bb03182ebc035ec)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ARM64_NT_CONTEXT.X21", x21, 0x580, 0x40, true, 0x7cbc375f4a5c967c)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ARM64_NT_CONTEXT.X22", x22, 0x5c0, 0x40, true, 0x9d8ceee3860f0162)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ARM64_NT_CONTEXT.X23", x23, 0x600, 0x40, true, 0x14816e1b03455353)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ARM64_NT_CONTEXT.X24", x24, 0x640, 0x40, true, 0xe25a05830a322c7f)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ARM64_NT_CONTEXT.X25", x25, 0x680, 0x40, true, 0xa3fb7e59cc29506a)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ARM64_NT_CONTEXT.X26", x26, 0x6c0, 0x40, true, 0xc8aa0513b0d81a47)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ARM64_NT_CONTEXT.X27", x27, 0x700, 0x40, true, 0xda1776f11bcf3bce)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ARM64_NT_CONTEXT.X28", x28, 0x740, 0x40, true, 0x839b06bcdb3cbdfd)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ARM64_NT_CONTEXT.Fp", fp, 0x780, 0x40, true, 0x6e08eeeda9e4a87d)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ARM64_NT_CONTEXT.Lr", lr, 0x7c0, 0x40, true, 0xdda48f7a8df03dd5)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 31>), "_ARM64_NT_CONTEXT.X", x, 0x40, 0xc0, true, 0x3402ad3b61bc2ebf)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ARM64_NT_CONTEXT.Sp", sp, 0x800, 0x40, true, 0xb1e67adbf8acf451)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ARM64_NT_CONTEXT.Pc", pc, 0x840, 0x40, true, 0x7c97bc87412cfae2)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<union win::arm64_nt_neon128_t, 32>), "_ARM64_NT_CONTEXT.V", v, 0x880, 0x0, true, 0xc7b9c5f71c2d533f)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ARM64_NT_CONTEXT.Fpcr", fpcr, 0x1880, 0x20, true, 0x383dd95a495ecdbf)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ARM64_NT_CONTEXT.Fpsr", fpsr, 0x18a0, 0x20, true, 0xcc3ca7181f53a476)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 8>), "_ARM64_NT_CONTEXT.Bcr", bcr, 0x18c0, 0x0, true, 0x5ee41aec3612a114)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 8>), "_ARM64_NT_CONTEXT.Bvr", bvr, 0x19c0, 0x0, true, 0xdd59497488989f61)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 2>), "_ARM64_NT_CONTEXT.Wcr", wcr, 0x1bc0, 0x40, true, 0x9c112a7b8597623d)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 2>), "_ARM64_NT_CONTEXT.Wvr", wvr, 0x1c00, 0x80, true, 0x8a4dab73a379249b)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#define _m029
#define _m030
#define _m031
#define _m032
#define _m033
#define _m034
#define _m035
#define _m036
#define _m037
#define _m038
#define _m039
#define _m040
#define _m041
#define _m042
#endif