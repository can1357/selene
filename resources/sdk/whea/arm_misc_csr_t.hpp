#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/arm_misc_csr_t.start.hpp"
namespace whea
{
    // [struct _WHEA_ARM_MISC_CSR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct arm_misc_csr_t          
    {                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint16_t mrs_encoding;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .MRSEncoding
        _m01 uint64_t value;         //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Value
                                   
        SDK_NONVOL_PROPERTIES( "_WHEA_ARM_MISC_CSR.$", 0xa, true, 0x2971c4c6b2ad5e53 );             
        SDK_FIXED_SIZE( arm_misc_csr_t, 0xa );             
    };                             
};
#include "magic/arm_misc_csr_t.end.hpp"
SDK_VERIFY( struct whea::arm_misc_csr_t, 0xa );
