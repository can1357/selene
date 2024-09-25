#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/get_physical_element_status_t.start.hpp"
namespace stor::port
{
    // [struct _GET_PHYSICAL_ELEMENT_STATUS]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct get_physical_element_status_t              
    {                                                 
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                            
        _m00 uint8_t                operation_code;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint5_t                service_action;     //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .ServiceAction
        _m02 sdk::array<uint8_t, 4> starting_element;   //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .StartingElement
        _m03 sdk::array<uint8_t, 4> allocation_length;  //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .AllocationLength
        _m04 uint4_t                report_type;        //{ +0x000e@0  +0x000e@0  +0x000e@0  +0x000e@0  } | .ReportType
        _m05 uint2_t                filter;             //{ +0x000e@6  +0x000e@6  +0x000e@6  +0x000e@6  } | .Filter
        _m06 uint8_t                control;            //{ +0x000f    +0x000f    +0x000f    +0x000f    } | .Control
                                                      
        SDK_NONVOL_PROPERTIES( "_GET_PHYSICAL_ELEMENT_STATUS.$", 0x10, true, 0x3e488ef3c7612b03 );                  
        SDK_FIXED_SIZE( get_physical_element_status_t, 0x10 );                  
    };                                                
};
#include "magic/get_physical_element_status_t.end.hpp"
SDK_VERIFY( struct stor::port::get_physical_element_status_t, 0x10 );
