#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/arm_aarch64_el1_csr_t.start.hpp"
namespace whea
{
    // [struct _WHEA_ARM_AARCH64_EL1_CSR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct arm_aarch64_el1_csr_t  
    {                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint64_t elr_el1;      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ELR_EL1
        _m01 uint64_t esr_el2;      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ESR_EL2
        _m02 uint64_t far_el1;      //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .FAR_EL1
        _m03 uint64_t isr_el1;      //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .ISR_EL1
        _m04 uint64_t mair_el1;     //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .MAIR_EL1
        _m05 uint64_t midr_el1;     //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .MIDR_EL1
        _m06 uint64_t mpidr_el1;    //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .MPIDR_EL1
        _m07 uint64_t sctlr_el1;    //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .SCTLR_EL1
        _m08 uint64_t sp_el0;       //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .SP_EL0
        _m09 uint64_t sp_el1;       //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .SP_EL1
        _m10 uint64_t spsr_el1;     //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .SPSR_EL1
        _m11 uint64_t tcr_el1;      //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .TCR_EL1
        _m12 uint64_t tpidr_el0;    //{ +0x0060    +0x0060    +0x0060    +0x0060    +0x0060    } | .TPIDR_EL0
        _m13 uint64_t tpidr_el1;    //{ +0x0068    +0x0068    +0x0068    +0x0068    +0x0068    } | .TPIDR_EL1
        _m14 uint64_t tpidrro_el0;  //{ +0x0070    +0x0070    +0x0070    +0x0070    +0x0070    } | .TPIDRRO_EL0
        _m15 uint64_t ttbr0_el1;    //{ +0x0078    +0x0078    +0x0078    +0x0078    +0x0078    } | .TTBR0_EL1
        _m16 uint64_t ttbr1_el1;    //{ +0x0080    +0x0080    +0x0080    +0x0080    +0x0080    } | .TTBR1_EL1
                                  
        SDK_NONVOL_PROPERTIES( "_WHEA_ARM_AARCH64_EL1_CSR.$", 0x88, true, 0x4e02517c044321b3 );            
        SDK_FIXED_SIZE( arm_aarch64_el1_csr_t, 0x88 );            
    };                            
};
#include "magic/arm_aarch64_el1_csr_t.end.hpp"
SDK_VERIFY( struct whea::arm_aarch64_el1_csr_t, 0x88 );
