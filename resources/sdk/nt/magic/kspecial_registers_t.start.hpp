#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSPECIAL_REGISTERS.Cr0", cr0, 0x0, 0x40, true, 0x2784e27e656677ff)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSPECIAL_REGISTERS.Cr2", cr2, 0x40, 0x40, true, 0xffe73c1e8a60d98a)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSPECIAL_REGISTERS.Cr3", cr3, 0x80, 0x40, true, 0x285ca3382009f432)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSPECIAL_REGISTERS.Cr4", cr4, 0xc0, 0x40, true, 0x1c557d0131240d34)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSPECIAL_REGISTERS.KernelDr0", kernel_dr0, 0x100, 0x40, true, 0x562bc3105ae17e9)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSPECIAL_REGISTERS.KernelDr1", kernel_dr1, 0x140, 0x40, true, 0xadd16c84bf24fb75)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSPECIAL_REGISTERS.KernelDr2", kernel_dr2, 0x180, 0x40, true, 0x300babba75846dcf)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSPECIAL_REGISTERS.KernelDr3", kernel_dr3, 0x1c0, 0x40, true, 0x8fa5c37304ac3a80)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSPECIAL_REGISTERS.KernelDr6", kernel_dr6, 0x200, 0x40, true, 0xe0ab84c6250877d4)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSPECIAL_REGISTERS.KernelDr7", kernel_dr7, 0x240, 0x40, true, 0xf4498bc1e828044)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdescriptor_t), "_KSPECIAL_REGISTERS.Gdtr", gdtr, 0x280, 0x80, true, 0xfa118762dbd16aa7)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdescriptor_t), "_KSPECIAL_REGISTERS.Idtr", idtr, 0x300, 0x80, true, 0xe0bc7daa415d5e4d)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_KSPECIAL_REGISTERS.Tr", tr, 0x380, 0x10, true, 0xf612f590d08bc990)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_KSPECIAL_REGISTERS.Ldtr", ldtr, 0x390, 0x10, true, 0x730b0647d8fa1797)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KSPECIAL_REGISTERS.MxCsr", mx_csr, 0x3a0, 0x20, true, 0xb123673f6d05063b)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSPECIAL_REGISTERS.DebugControl", debug_control, 0x3c0, 0x40, true, 0x8c62c826de93bbb4)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSPECIAL_REGISTERS.LastBranchToRip", last_branch_to_rip, 0x400, 0x40, true, 0x48c77f346e3b92ed)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSPECIAL_REGISTERS.LastBranchFromRip", last_branch_from_rip, 0x440, 0x40, true, 0x36358f8d30d2a1c)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSPECIAL_REGISTERS.LastExceptionToRip", last_exception_to_rip, 0x480, 0x40, true, 0x869ebc10b7099cb4)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSPECIAL_REGISTERS.LastExceptionFromRip", last_exception_from_rip, 0x4c0, 0x40, true, 0x95868b7be9bf7706)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSPECIAL_REGISTERS.Cr8", cr8, 0x500, 0x40, true, 0xcb51cccc263cc492)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSPECIAL_REGISTERS.MsrGsBase", msr_gs_base, 0x540, 0x40, true, 0xea059953dcb98e2b)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSPECIAL_REGISTERS.MsrGsSwap", msr_gs_swap, 0x580, 0x40, true, 0x8dc2098e0ee071a8)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSPECIAL_REGISTERS.MsrStar", msr_star, 0x5c0, 0x40, true, 0x9945e2b692b5b0fe)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSPECIAL_REGISTERS.MsrLStar", msr_l_star, 0x600, 0x40, true, 0xc673938860dca658)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSPECIAL_REGISTERS.MsrCStar", msr_c_star, 0x640, 0x40, true, 0x346b6b15fa30169d)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSPECIAL_REGISTERS.MsrSyscallMask", msr_syscall_mask, 0x680, 0x40, true, 0xdd125ae95096bd65)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSPECIAL_REGISTERS.Xcr0", xcr0, 0x6c0, 0x40, true, 0x931e42e449901ee0)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSPECIAL_REGISTERS.MsrFsBase", msr_fs_base, 0x700, 0x40, true, 0x81283bacdabb10be)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSPECIAL_REGISTERS.SpecialPadding0", special_padding0, 0x740, 0x40, true, 0x5131ad38d5404139)
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
#endif