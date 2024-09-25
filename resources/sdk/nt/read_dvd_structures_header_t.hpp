#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/read_dvd_structures_header_t.start.hpp"
namespace nt
{
    // [struct _READ_DVD_STRUCTURES_HEADER]
    // => WDK 10 (NV)
    //
    struct read_dvd_structures_header_t    
    {                                      
        // WDK 10                          
        //                                 
        _m00 sdk::array<uint8_t, 2> length;  //{ +0x0000    } | .Length
        _m01 sdk::array<uint8_t>    data;    //{ +0x0004    } | .Data
                                           
        SDK_NONVOL_PROPERTIES( "_READ_DVD_STRUCTURES_HEADER.$", 0x0, false, 0x20c538b1430eb24c );       
        SDK_FIXED_SIZE( read_dvd_structures_header_t, 0x4 );       
    };                                     
};
#include "magic/read_dvd_structures_header_t.end.hpp"
SDK_VERIFY( struct nt::read_dvd_structures_header_t, 0x4 );
