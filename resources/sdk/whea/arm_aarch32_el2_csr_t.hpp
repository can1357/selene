#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/arm_aarch32_el2_csr_t.start.hpp"
namespace whea
{
    // [struct _WHEA_ARM_AARCH32_EL2_CSR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct arm_aarch32_el2_csr_t 
    {                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint32_t elr_hyp;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ELR_hyp
        _m01 uint32_t hamair0;     //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .HAMAIR0
        _m02 uint32_t hamair1;     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .HAMAIR1
        _m03 uint32_t hcr;         //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .HCR
        _m04 uint32_t hcr2;        //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .HCR2
        _m05 uint32_t hdfar;       //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .HDFAR
        _m06 uint32_t hifar;       //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .HIFAR
        _m07 uint32_t hpfar;       //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .HPFAR
        _m08 uint32_t hsr;         //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .HSR
        _m09 uint32_t htcr;        //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .HTCR
        _m10 uint32_t htpidr;      //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .HTPIDR
        _m11 uint32_t httbr;       //{ +0x002c    +0x002c    +0x002c    +0x002c    +0x002c    } | .HTTBR
        _m12 uint32_t spsr_hyp;    //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .SPSR_hyp
        _m13 uint32_t vtcr;        //{ +0x0034    +0x0034    +0x0034    +0x0034    +0x0034    } | .VTCR
        _m14 uint32_t vttbr;       //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .VTTBR
        _m15 uint32_t dacr32_el2;  //{ +0x003c    +0x003c    +0x003c    +0x003c    +0x003c    } | .DACR32_EL2
                                 
        SDK_NONVOL_PROPERTIES( "_WHEA_ARM_AARCH32_EL2_CSR.$", 0x40, true, 0x7b05954d6ab75eb9 );           
        SDK_FIXED_SIZE( arm_aarch32_el2_csr_t, 0x40 );           
    };                           
};
#include "magic/arm_aarch32_el2_csr_t.end.hpp"
SDK_VERIFY( struct whea::arm_aarch32_el2_csr_t, 0x40 );
