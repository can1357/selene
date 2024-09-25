#pragma once
#include <sdkgen/support_library.hpp>
#include "domain_configuration_x64_t.hpp"
#include "domain_configuration_arch_t.hpp"
#include "domain_configuration_arm64_t.hpp"

#include "magic/domain_configuration_t.start.hpp"
namespace nt
{
    // [struct _DOMAIN_CONFIGURATION]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct domain_configuration_t                          
    {                                                      
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                                 
        _m00 enum nt::domain_configuration_arch_t    type;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 struct nt::domain_configuration_arm64_t arm64;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Arm64
                                                           
        // Windows 11                                      
        //                                                 
        _m02 struct nt::domain_configuration_x64_t   x64;    //{ +0x0008    } | .X64
                                                           
        SDK_NONVOL_PROPERTIES( "_DOMAIN_CONFIGURATION.$", 0x28, true, 0x73dd6c76ef994388 );      
        SDK_FIXED_SIZE( domain_configuration_t, 0x28 );      
    };                                                     
};
#include "magic/domain_configuration_t.end.hpp"
SDK_VERIFY( struct nt::domain_configuration_t, 0x28 );
