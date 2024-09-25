#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/vpd_serial_number_page_t.start.hpp"
namespace nt
{
    // [struct _VPD_SERIAL_NUMBER_PAGE]
    // => WDK 10 (NV)
    //
    struct vpd_serial_number_page_t                    
    {                                                  
        // WDK 10                                      
        //                                             
        _m00 uint5_t             device_type;            //{ +0x0000@0  } | .DeviceType
        _m01 uint3_t             device_type_qualifier;  //{ +0x0000@5  } | .DeviceTypeQualifier
        _m02 uint8_t             page_code;              //{ +0x0001    } | .PageCode
        _m03 uint8_t             page_length;            //{ +0x0003    } | .PageLength
        _m04 sdk::array<uint8_t> serial_number;          //{ +0x0004    } | .SerialNumber
                                                       
        SDK_NONVOL_PROPERTIES( "_VPD_SERIAL_NUMBER_PAGE.$", 0x0, false, 0x4dd0a733c81cea2c );                      
        SDK_FIXED_SIZE( vpd_serial_number_page_t, 0x4 );                      
    };                                                 
};
#include "magic/vpd_serial_number_page_t.end.hpp"
SDK_VERIFY( struct nt::vpd_serial_number_page_t, 0x4 );
