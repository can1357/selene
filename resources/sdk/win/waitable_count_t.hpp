#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/waitable_count_t.start.hpp"
namespace win
{
    // [class WaitableCount]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class waitable_count_t           
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                           
        _m00 volatile uint32_t count;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._count
                                     
        SDK_MAGIC_PROPERTIES( "WaitableCount.$", 0x4, true, 0xe33de2032ac2268f );      
        SDK_FIXED_SIZE( waitable_count_t, 0x4 );      
    };                               
};
#include "magic/waitable_count_t.end.hpp"
SDK_VERIFY( class win::waitable_count_t, 0x4 );
