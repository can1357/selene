#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/s_two_bits_t.start.hpp"
namespace win
{
    // [struct STwoBits]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct s_two_bits_t         
    {                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 void*    h_event;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._hEvent
        _m01 uint32_t dw_cookie;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._dwCookie
                                
        SDK_MAGIC_PROPERTIES( "STwoBits.$", 0x10, true, 0x6af5f32fcf9ea77c );          
        SDK_FIXED_SIZE( s_two_bits_t, 0x10 );          
    };                          
};
#include "magic/s_two_bits_t.end.hpp"
SDK_VERIFY( struct win::s_two_bits_t, 0x10 );
