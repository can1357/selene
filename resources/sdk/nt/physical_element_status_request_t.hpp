#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/physical_element_status_request_t.start.hpp"
namespace nt
{
    // [struct _PHYSICAL_ELEMENT_STATUS_REQUEST]
    // => WDK 10 (NV)
    //
    struct physical_element_status_request_t
    {                                       
        // WDK 10                      
        //                             
        _m00 uint32_t version;                //{ +0x0000    } | .Version
        _m01 uint32_t size;                   //{ +0x0004    } | .Size
        _m02 uint32_t starting_element;       //{ +0x0008    } | .StartingElement
        _m03 uint8_t  filter;                 //{ +0x000c    } | .Filter
        _m04 uint8_t  report_type;            //{ +0x000d    } | .ReportType
                                            
        SDK_NONVOL_PROPERTIES( "_PHYSICAL_ELEMENT_STATUS_REQUEST.$", 0x0, false, 0xc4db50b6c2d0b6e6 );                 
        SDK_FIXED_SIZE( physical_element_status_request_t, 0x10 );                 
    };                                      
};
#include "magic/physical_element_status_request_t.end.hpp"
SDK_VERIFY( struct nt::physical_element_status_request_t, 0x10 );
