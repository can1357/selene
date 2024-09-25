#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/upper_handle_bits_t.start.hpp"
namespace kuser
{
    // [union _UPPER_HANDLE_BITS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union upper_handle_bits_t   
    {                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint8_t  full_type;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .fullType
        _m01 uint8_t  unique;     //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .unique
        _m02 uint8_t  index;      //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .index
        _m03 uint16_t full;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .full
                                
        SDK_MAGIC_PROPERTIES( "_UPPER_HANDLE_BITS.$", 0x2, true, 0xc46ec3d07e846d31 );          
        SDK_FIXED_SIZE( upper_handle_bits_t, 0x2 );          
    };                          
};
#include "magic/upper_handle_bits_t.end.hpp"
SDK_VERIFY( union kuser::upper_handle_bits_t, 0x2 );
