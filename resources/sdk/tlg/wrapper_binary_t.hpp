#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wrapper_binary_t.start.hpp"
namespace tlg
{
    // [struct _tlgWrapperBinary]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wrapper_binary_t         
    {                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                          
        _m00 const void const* ptr;   //{ +0x0000    +0x0000    +0x0000    } | .Ptr
        _m01 const uint16_t    size;  //{ +0x0008    +0x0008    +0x0008    } | .Size
                                    
        SDK_MAGIC_PROPERTIES( "_tlgWrapperBinary.$", 0x10, true, 0xea0bea858612e2b7 );     
        SDK_FIXED_SIZE( wrapper_binary_t, 0x10 );     
    };                              
};
#include "magic/wrapper_binary_t.end.hpp"
SDK_VERIFY( struct tlg::wrapper_binary_t, 0x10 );
