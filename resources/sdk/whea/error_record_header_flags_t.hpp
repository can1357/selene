#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/error_record_header_flags_t.start.hpp"
namespace whea
{
    // [union _WHEA_ERROR_RECORD_HEADER_FLAGS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union error_record_header_flags_t      
    {                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint1_t  recovered;             //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Recovered
        _m01 uint1_t  previous_error;        //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .PreviousError
        _m02 uint1_t  simulated;             //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .Simulated
        _m03 uint32_t as_ulong;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                           
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m04 uint1_t  device_driver;         //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .DeviceDriver
        _m05 uint1_t  critical_event;        //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .CriticalEvent
        _m06 uint1_t  persist_pfn;           //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .PersistPfn
                                           
        // Windows 11                      
        //                                 
        _m07 uint1_t  sections_truncated;    //{ +0x0000@6  } | .SectionsTruncated
        _m08 uint1_t  recovery_in_progress;  //{ +0x0000@7  } | .RecoveryInProgress
        _m09 uint1_t  throttle;              //{ +0x0000@8  } | .Throttle
                                           
        SDK_NONVOL_PROPERTIES( "_WHEA_ERROR_RECORD_HEADER_FLAGS.$", 0x4, true, 0x631a86fb52fb8cb8 );                     
        SDK_FIXED_SIZE( error_record_header_flags_t, 0x4 );                     
    };                                     
};
#include "magic/error_record_header_flags_t.end.hpp"
SDK_VERIFY( union whea::error_record_header_flags_t, 0x4 );
