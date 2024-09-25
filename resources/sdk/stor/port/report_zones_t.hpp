#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/report_zones_t.start.hpp"
namespace stor::port
{
    // [struct _REPORT_ZONES]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct report_zones_t                             
    {                                                 
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                            
        _m00 uint8_t                operation_code;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint5_t                service_action;     //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .ServiceAction
        _m02 sdk::array<uint8_t, 8> zone_start_lba;     //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .ZoneStartLBA
        _m03 sdk::array<uint8_t, 4> allocation_length;  //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .AllocationLength
        _m04 uint6_t                reporting_options;  //{ +0x000e@0  +0x000e@0  +0x000e@0  +0x000e@0  } | .ReportingOptions
        _m05 uint1_t                partial;            //{ +0x000e@7  +0x000e@7  +0x000e@7  +0x000e@7  } | .Partial
        _m06 uint8_t                control;            //{ +0x000f    +0x000f    +0x000f    +0x000f    } | .Control
                                                      
        SDK_NONVOL_PROPERTIES( "_REPORT_ZONES.$", 0x10, true, 0x5d42fc9fe9fd0c42 );                  
        SDK_FIXED_SIZE( report_zones_t, 0x10 );                  
    };                                                
};
#include "magic/report_zones_t.end.hpp"
SDK_VERIFY( struct stor::port::report_zones_t, 0x10 );
