#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/arm_aarch32_secure_csr_t.start.hpp"
namespace whea
{
    // [struct _WHEA_ARM_AARCH32_SECURE_CSR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct arm_aarch32_secure_csr_t
    {                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                     
        _m00 uint32_t sctlr;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SCTLR
        _m01 uint32_t spsr_mon;      //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .SPSR_mon
                                   
        SDK_NONVOL_PROPERTIES( "_WHEA_ARM_AARCH32_SECURE_CSR.$", 0x8, true, 0x1df2754da8630e7b );         
        SDK_FIXED_SIZE( arm_aarch32_secure_csr_t, 0x8 );         
    };                             
};
#include "magic/arm_aarch32_secure_csr_t.end.hpp"
SDK_VERIFY( struct whea::arm_aarch32_secure_csr_t, 0x8 );
