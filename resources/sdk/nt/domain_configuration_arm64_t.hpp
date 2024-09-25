#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/domain_configuration_arm64_t.start.hpp"
namespace nt
{
    // [struct _DOMAIN_CONFIGURATION_ARM64]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct domain_configuration_arm64_t    
    {                                      
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 int64_t  ttbr0;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Ttbr0
        _m01 int64_t  ttbr1;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Ttbr1
        _m02 uint32_t mair0;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Mair0
        _m03 uint32_t mair1;                 //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Mair1
        _m04 uint8_t  input_size0;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .InputSize0
        _m05 uint8_t  input_size1;           //{ +0x0019    +0x0019    +0x0019    +0x0019    } | .InputSize1
        _m06 uint8_t  coherent_table_walks;  //{ +0x001a    +0x001a    +0x001a    +0x001a    } | .CoherentTableWalks
        _m07 uint8_t  translation_enabled;   //{ +0x001b    +0x001b    +0x001b    +0x001b    } | .TranslationEnabled
                                           
        SDK_NONVOL_PROPERTIES( "_DOMAIN_CONFIGURATION_ARM64.$", 0x20, true, 0x9b0643ef63a5a79a );                     
        SDK_FIXED_SIZE( domain_configuration_arm64_t, 0x20 );                     
    };                                     
};
#include "magic/domain_configuration_arm64_t.end.hpp"
SDK_VERIFY( struct nt::domain_configuration_arm64_t, 0x20 );
