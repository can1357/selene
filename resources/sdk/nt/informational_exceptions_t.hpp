#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/informational_exceptions_t.start.hpp"
namespace nt
{
    // [struct _INFORMATIONAL_EXCEPTIONS]
    // => WDK 10 (NV)
    //
    struct informational_exceptions_t                       
    {                                                       
        // WDK 10                                           
        //                                                  
        _m00 uint8_t                asc;                      //{ +0x0000    } | .ASC
        _m01 uint8_t                ascq;                     //{ +0x0001    } | .ASCQ
        _m02 uint8_t                most_recent_temperature;  //{ +0x0002    } | .MostRecentTemperature
        _m03 sdk::array<uint8_t, 1> vendor_specific;          //{ +0x0003    } | .VendorSpecific
                                                            
        SDK_NONVOL_PROPERTIES( "_INFORMATIONAL_EXCEPTIONS.$", 0x0, false, 0x7b12415351e2af33 );                        
        SDK_FIXED_SIZE( informational_exceptions_t, 0x4 );                        
    };                                                      
};
#include "magic/informational_exceptions_t.end.hpp"
SDK_VERIFY( struct nt::informational_exceptions_t, 0x4 );
