#pragma once
#include <sdkgen/support_library.hpp>
#include "kdescriptor_t.hpp"

#include "magic/kspecial_registers_t.start.hpp"
namespace nt
{
    // [struct _KSPECIAL_REGISTERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct kspecial_registers_t                                
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                     
        _m000 uint64_t                 cr0;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Cr0
        _m001 uint64_t                 cr2;                      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Cr2
        _m002 uint64_t                 cr3;                      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Cr3
        _m003 uint64_t                 cr4;                      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Cr4
        _m004 uint64_t                 kernel_dr0;               //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .KernelDr0
        _m005 uint64_t                 kernel_dr1;               //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .KernelDr1
        _m006 uint64_t                 kernel_dr2;               //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .KernelDr2
        _m007 uint64_t                 kernel_dr3;               //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .KernelDr3
        _m008 uint64_t                 kernel_dr6;               //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .KernelDr6
        _m009 uint64_t                 kernel_dr7;               //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .KernelDr7
        _m010 struct nt::kdescriptor_t gdtr;                     //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .Gdtr
        _m011 struct nt::kdescriptor_t idtr;                     //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .Idtr
        _m012 uint16_t                 tr;                       //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .Tr
        _m013 uint16_t                 ldtr;                     //{ +0x0072    +0x0072    +0x0072    +0x0072    } | .Ldtr
        _m014 uint32_t                 mx_csr;                   //{ +0x0074    +0x0074    +0x0074    +0x0074    } | .MxCsr
        _m015 uint64_t                 debug_control;            //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .DebugControl
        _m016 uint64_t                 last_branch_to_rip;       //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .LastBranchToRip
        _m017 uint64_t                 last_branch_from_rip;     //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .LastBranchFromRip
        _m018 uint64_t                 last_exception_to_rip;    //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .LastExceptionToRip
        _m019 uint64_t                 last_exception_from_rip;  //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .LastExceptionFromRip
        _m020 uint64_t                 cr8;                      //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .Cr8
        _m021 uint64_t                 msr_gs_base;              //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .MsrGsBase
        _m022 uint64_t                 msr_gs_swap;              //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .MsrGsSwap
        _m023 uint64_t                 msr_star;                 //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .MsrStar
        _m024 uint64_t                 msr_l_star;               //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .MsrLStar
        _m025 uint64_t                 msr_c_star;               //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .MsrCStar
        _m026 uint64_t                 msr_syscall_mask;         //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .MsrSyscallMask
        _m027 uint64_t                 xcr0;                     //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .Xcr0
                                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                     
        _m028 uint64_t                 msr_fs_base;              //{ +0x00e0    +0x00e0    +0x00e0    } | .MsrFsBase
        _m029 uint64_t                 special_padding0;         //{ +0x00e8    +0x00e8    +0x00e8    } | .SpecialPadding0
                                                               
        SDK_MAGIC_PROPERTIES( "_KSPECIAL_REGISTERS.$", 0xf0, true, 0xb3fabf087b94fd47 );                        
        SDK_DYNAMIC_SIZE( kspecial_registers_t );                        
    };                                                         
};
#include "magic/kspecial_registers_t.end.hpp"
