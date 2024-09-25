#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wpp_binary_t.start.hpp"
namespace tag
{
    // [struct tagWPP_BINARY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wpp_binary_t         
    {                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                      
        _m00 const void* buffer;  //{ +0x0000    +0x0000    +0x0000    } | .Buffer
        _m01 uint16_t    length;  //{ +0x0008    +0x0008    +0x0008    } | .Length
                                
        SDK_MAGIC_PROPERTIES( "tagWPP_BINARY.$", 0x10, true, 0x34d38887a3e470b4 );       
        SDK_FIXED_SIZE( wpp_binary_t, 0x10 );       
    };                          
};
#include "magic/wpp_binary_t.end.hpp"
SDK_VERIFY( struct tag::wpp_binary_t, 0x10 );
