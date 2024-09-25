#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/error_packet_flags_t.start.hpp"
namespace whea
{
    // [union _WHEA_ERROR_PACKET_FLAGS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union error_packet_flags_t                      
    {                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                          
        _m00 uint1_t  previous_error;                 //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PreviousError
        _m01 uint1_t  hypervisor_error;               //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .HypervisorError
        _m02 uint1_t  simulated;                      //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .Simulated
        _m03 uint1_t  platform_pfa_control;           //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .PlatformPfaControl
        _m04 uint1_t  platform_directed_offline;      //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .PlatformDirectedOffline
        _m05 uint32_t as_ulong;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                                    
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                          
        _m06 uint1_t  critical_event;                 //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .CriticalEvent
        _m07 uint1_t  address_translation_required;   //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .AddressTranslationRequired
        _m08 uint1_t  address_translation_completed;  //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .AddressTranslationCompleted
                                                    
        // Windows 11                               
        //                                          
        _m09 uint1_t  recovery_optional;              //{ +0x0000@8  } | .RecoveryOptional
                                                    
        SDK_NONVOL_PROPERTIES( "_WHEA_ERROR_PACKET_FLAGS.$", 0x4, true, 0x35ac6ba0d8b82f65 );                              
        SDK_FIXED_SIZE( error_packet_flags_t, 0x4 );                              
    };                                              
};
#include "magic/error_packet_flags_t.end.hpp"
SDK_VERIFY( union whea::error_packet_flags_t, 0x4 );
