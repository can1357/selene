#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/address_range_t.start.hpp"
namespace verf
{
    // [struct _VF_ADDRESS_RANGE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct address_range_t  
    {                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                  
        _m00 uint8_t* start;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Start
        _m01 uint8_t* end;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .End
                            
        SDK_MAGIC_PROPERTIES( "_VF_ADDRESS_RANGE.$", 0x10, true, 0xcec45d1099ba529 );      
        SDK_FIXED_SIZE( address_range_t, 0x10 );      
    };                      
};
#include "magic/address_range_t.end.hpp"
SDK_VERIFY( struct verf::address_range_t, 0x10 );
