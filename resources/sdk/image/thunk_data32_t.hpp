#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/thunk_data32_t.start.hpp"
namespace image
{
    // [struct _IMAGE_THUNK_DATA32]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct thunk_data32_t              
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint32_t forwarder_string;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ForwarderString
        _m01 uint32_t function;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Function
        _m02 uint32_t ordinal;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Ordinal
        _m03 uint32_t address_of_data;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AddressOfData
                                       
        SDK_MAGIC_PROPERTIES( "_IMAGE_THUNK_DATA32.$", 0x4, true, 0x15a226667f0f6a2c );                 
        SDK_FIXED_SIZE( thunk_data32_t, 0x4 );                 
    };                                 
};
#include "magic/thunk_data32_t.end.hpp"
SDK_VERIFY( struct image::thunk_data32_t, 0x4 );
