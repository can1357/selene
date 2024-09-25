#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/thunk_data64_t.start.hpp"
namespace image
{
    // [struct _IMAGE_THUNK_DATA64]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct thunk_data64_t              
    {                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint64_t forwarder_string;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ForwarderString
        _m01 uint64_t function;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Function
        _m02 uint64_t ordinal;           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Ordinal
        _m03 uint64_t address_of_data;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AddressOfData
                                       
        SDK_NONVOL_PROPERTIES( "_IMAGE_THUNK_DATA64.$", 0x8, true, 0x152ecb9350dff3aa );                 
        SDK_FIXED_SIZE( thunk_data64_t, 0x8 );                 
    };                                 
};
#include "magic/thunk_data64_t.end.hpp"
SDK_VERIFY( struct image::thunk_data64_t, 0x8 );
