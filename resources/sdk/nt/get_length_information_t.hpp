#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/get_length_information_t.start.hpp"
namespace nt
{
    // [struct _GET_LENGTH_INFORMATION]
    // => WDK 10 (NV)
    //
    struct get_length_information_t
    {                              
        // WDK 10           
        //                  
        _m00 int64_t length;         //{ +0x0000    } | .Length
                                   
        SDK_NONVOL_PROPERTIES( "_GET_LENGTH_INFORMATION.$", 0x0, false, 0xde2ad16b0183cb93 );       
        SDK_FIXED_SIZE( get_length_information_t, 0x8 );       
    };                             
};
#include "magic/get_length_information_t.end.hpp"
SDK_VERIFY( struct nt::get_length_information_t, 0x8 );
