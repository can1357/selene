#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/arm_aarch32_el1_csr_t.start.hpp"
namespace whea
{
    // [struct _WHEA_ARM_AARCH32_EL1_CSR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct arm_aarch32_el1_csr_t
    {                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                     
        _m00 uint32_t dfar;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .DFAR
        _m01 uint32_t dfsr;       //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .DFSR
        _m02 uint32_t ifar;       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .IFAR
        _m03 uint32_t isr;        //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .ISR
        _m04 uint32_t mair0;      //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .MAIR0
        _m05 uint32_t mair1;      //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .MAIR1
        _m06 uint32_t midr;       //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .MIDR
        _m07 uint32_t mpidr;      //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .MPIDR
        _m08 uint32_t nmrr;       //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .NMRR
        _m09 uint32_t prrr;       //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .PRRR
        _m10 uint32_t sctlr;      //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .SCTLR
        _m11 uint32_t spsr;       //{ +0x002c    +0x002c    +0x002c    +0x002c    +0x002c    } | .SPSR
        _m12 uint32_t spsr_abt;   //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .SPSR_abt
        _m13 uint32_t spsr_fiq;   //{ +0x0034    +0x0034    +0x0034    +0x0034    +0x0034    } | .SPSR_fiq
        _m14 uint32_t spsr_irq;   //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .SPSR_irq
        _m15 uint32_t spsr_svc;   //{ +0x003c    +0x003c    +0x003c    +0x003c    +0x003c    } | .SPSR_svc
        _m16 uint32_t spsr_und;   //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .SPSR_und
        _m17 uint32_t tpidrprw;   //{ +0x0044    +0x0044    +0x0044    +0x0044    +0x0044    } | .TPIDRPRW
        _m18 uint32_t tpidruro;   //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .TPIDRURO
        _m19 uint32_t tpidrurw;   //{ +0x004c    +0x004c    +0x004c    +0x004c    +0x004c    } | .TPIDRURW
        _m20 uint32_t ttbcr;      //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .TTBCR
        _m21 uint32_t ttbr0;      //{ +0x0054    +0x0054    +0x0054    +0x0054    +0x0054    } | .TTBR0
        _m22 uint32_t ttbr1;      //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .TTBR1
        _m23 uint32_t dacr;       //{ +0x005c    +0x005c    +0x005c    +0x005c    +0x005c    } | .DACR
                                
        SDK_NONVOL_PROPERTIES( "_WHEA_ARM_AARCH32_EL1_CSR.$", 0x60, true, 0x2cb01286f4cff60d );         
        SDK_FIXED_SIZE( arm_aarch32_el1_csr_t, 0x60 );         
    };                          
};
#include "magic/arm_aarch32_el1_csr_t.end.hpp"
SDK_VERIFY( struct whea::arm_aarch32_el1_csr_t, 0x60 );
