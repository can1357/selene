#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cdvd_key_header_t.start.hpp"
namespace nt
{
    // [struct _CDVD_KEY_HEADER]
    // => WDK 10 (NV)
    //
    struct cdvd_key_header_t                    
    {                                           
        // WDK 10                               
        //                                      
        _m00 sdk::array<uint8_t, 2> data_length;  //{ +0x0000    } | .DataLength
        _m01 sdk::array<uint8_t>    data;         //{ +0x0004    } | .Data
                                                
        SDK_NONVOL_PROPERTIES( "_CDVD_KEY_HEADER.$", 0x0, false, 0x9a0bce1098906e56 );            
        SDK_FIXED_SIZE( cdvd_key_header_t, 0x4 );            
    };                                          
};
#include "magic/cdvd_key_header_t.end.hpp"
SDK_VERIFY( struct nt::cdvd_key_header_t, 0x4 );
