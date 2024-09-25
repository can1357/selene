#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rtl_srwlock_t.start.hpp"
namespace wil
{
    // [struct __WIL_RTL_SRWLOCK]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rtl_srwlock_t
    {                   
        // Windows 10 v2004, Windows 11, Windows 10 v20H2    
        //             
        _m00 void* ptr;   //{ +0x0000    +0x0000    +0x0000    } | .Ptr
                        
        SDK_MAGIC_PROPERTIES( "__WIL_RTL_SRWLOCK.$", 0x8, true, 0x24da681687939864 );    
        SDK_FIXED_SIZE( rtl_srwlock_t, 0x8 );    
    };                  
};
#include "magic/rtl_srwlock_t.end.hpp"
SDK_VERIFY( struct wil::rtl_srwlock_t, 0x8 );
