#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/vpd_identification_page_t.start.hpp"
namespace stor::port
{
    // [struct _VPD_IDENTIFICATION_PAGE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct vpd_identification_page_t                   
    {                                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                             
        _m00 uint5_t             device_type;            //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .DeviceType
        _m01 uint3_t             device_type_qualifier;  //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .DeviceTypeQualifier
        _m02 uint8_t             page_code;              //{ +0x0001    +0x0001    +0x0001    +0x0001    +0x0001    } | .PageCode
        _m03 uint8_t             page_length;            //{ +0x0003    +0x0003    +0x0003    +0x0003    +0x0003    } | .PageLength
        _m04 sdk::array<uint8_t> descriptors;            //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Descriptors
                                                       
        SDK_NONVOL_PROPERTIES( "_VPD_IDENTIFICATION_PAGE.$", 0x4, true, 0xe9c3a83b996c8488 );                      
        SDK_FIXED_SIZE( vpd_identification_page_t, 0x4 );                      
    };                                                 
};
#include "magic/vpd_identification_page_t.end.hpp"
SDK_VERIFY( struct stor::port::vpd_identification_page_t, 0x4 );
