#pragma once
#include <sdkgen/support_library.hpp>
#include "impersonation_level_t.hpp"

#include "magic/quality_of_service_t.start.hpp"
namespace sec
{
    // [struct _SECURITY_QUALITY_OF_SERVICE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct quality_of_service_t                                    
    {                                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                         
        _m00 uint32_t                        length;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
        _m01 enum sec::impersonation_level_t impersonation_level;    //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .ImpersonationLevel
        _m02 uint8_t                         context_tracking_mode;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ContextTrackingMode
        _m03 uint8_t                         effective_only;         //{ +0x0009    +0x0009    +0x0009    +0x0009    +0x0009    } | .EffectiveOnly
                                                                   
        SDK_NONVOL_PROPERTIES( "_SECURITY_QUALITY_OF_SERVICE.$", 0xc, true, 0x718ce6321e4a6423 );                      
        SDK_FIXED_SIZE( quality_of_service_t, 0xc );                      
    };                                                             
};
#include "magic/quality_of_service_t.end.hpp"
SDK_VERIFY( struct sec::quality_of_service_t, 0xc );
