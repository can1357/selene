#pragma once
#include <sdkgen/support_library.hpp>
#include "../whea/event_log_entry_t.hpp"

#include "magic/pshed_inject_error_t.start.hpp"
namespace wheap
{
    // [struct _WHEAP_PSHED_INJECT_ERROR]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pshed_inject_error_t                                  
    {                                                            
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                       
        _m00 struct whea::event_log_entry_t whea_event_log_entry;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WheaEventLogEntry
        _m01 uint32_t                       error_type;            //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ErrorType
        _m02 uint64_t                       parameter1;            //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .Parameter1
        _m03 uint64_t                       parameter2;            //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .Parameter2
        _m04 uint64_t                       parameter3;            //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .Parameter3
        _m05 uint64_t                       parameter4;            //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .Parameter4
        _m06 int32_t                        injection_status;      //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .InjectionStatus
        _m07 uint8_t                        injection_attempted;   //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .InjectionAttempted
        _m08 uint8_t                        injection_by_plugin;   //{ +0x0049    +0x0049    +0x0049    +0x0049    } | .InjectionByPlugin
                                                                 
        SDK_NONVOL_PROPERTIES( "_WHEAP_PSHED_INJECT_ERROR.$", 0x4a, true, 0x51077fd4e3082e77 );                     
        SDK_FIXED_SIZE( pshed_inject_error_t, 0x4a );                     
    };                                                           
};
#include "magic/pshed_inject_error_t.end.hpp"
SDK_VERIFY( struct wheap::pshed_inject_error_t, 0x4a );
