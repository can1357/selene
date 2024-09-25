#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/armv8_aarch64_el3_csr_t.start.hpp"
namespace whea
{
    // [struct _WHEA_ARMV8_AARCH64_EL3_CSR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct armv8_aarch64_el3_csr_t
    {                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint64_t elr_el3;      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ELR_EL3
        _m01 uint64_t esr_el3;      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ESR_EL3
        _m02 uint64_t far_el3;      //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .FAR_EL3
        _m03 uint64_t mair_el3;     //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .MAIR_EL3
        _m04 uint64_t sctlr_el3;    //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .SCTLR_EL3
        _m05 uint64_t sp_el3;       //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .SP_EL3
        _m06 uint64_t spsr_el3;     //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .SPSR_EL3
        _m07 uint64_t tcr_el3;      //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .TCR_EL3
        _m08 uint64_t tpidr_el3;    //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .TPIDR_EL3
        _m09 uint64_t ttbr0_el3;    //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .TTBR0_EL3
                                  
        SDK_NONVOL_PROPERTIES( "_WHEA_ARMV8_AARCH64_EL3_CSR.$", 0x50, true, 0x5bc5e248ff1f9e5f );          
        SDK_FIXED_SIZE( armv8_aarch64_el3_csr_t, 0x50 );          
    };                            
};
#include "magic/armv8_aarch64_el3_csr_t.end.hpp"
SDK_VERIFY( struct whea::armv8_aarch64_el3_csr_t, 0x50 );
