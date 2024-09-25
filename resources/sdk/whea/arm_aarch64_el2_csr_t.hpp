#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/arm_aarch64_el2_csr_t.start.hpp"
namespace whea
{
    // [struct _WHEA_ARM_AARCH64_EL2_CSR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct arm_aarch64_el2_csr_t
    {                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint64_t elr_el2;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ELR_EL2
        _m01 uint64_t esr_el2;    //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ESR_EL2
        _m02 uint64_t far_el2;    //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .FAR_EL2
        _m03 uint64_t hacr_el2;   //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .HACR_EL2
        _m04 uint64_t hcr_el2;    //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .HCR_EL2
        _m05 uint64_t hpfar_el2;  //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .HPFAR_EL2
        _m06 uint64_t mair_el2;   //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .MAIR_EL2
        _m07 uint64_t sctlr_el2;  //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .SCTLR_EL2
        _m08 uint64_t sp_el2;     //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .SP_EL2
        _m09 uint64_t spsr_el2;   //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .SPSR_EL2
        _m10 uint64_t tcr_el2;    //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .TCR_EL2
        _m11 uint64_t tpidr_el2;  //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .TPIDR_EL2
        _m12 uint64_t ttbr0_el2;  //{ +0x0060    +0x0060    +0x0060    +0x0060    +0x0060    } | .TTBR0_EL2
        _m13 uint64_t vtcr_el2;   //{ +0x0068    +0x0068    +0x0068    +0x0068    +0x0068    } | .VTCR_EL2
        _m14 uint64_t vttbr_el2;  //{ +0x0070    +0x0070    +0x0070    +0x0070    +0x0070    } | .VTTBR_EL2
                                
        SDK_NONVOL_PROPERTIES( "_WHEA_ARM_AARCH64_EL2_CSR.$", 0x78, true, 0x9f1de601146e6ded );          
        SDK_FIXED_SIZE( arm_aarch64_el2_csr_t, 0x78 );          
    };                          
};
#include "magic/arm_aarch64_el2_csr_t.end.hpp"
SDK_VERIFY( struct whea::arm_aarch64_el2_csr_t, 0x78 );
