#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_bool_t.start.hpp"
namespace win
{
    // [class CBool]
    // => Windows 10 v1607
    //
    class c_bool_t         
    {                      
        // Windows 10 v1607      
        //                 
        _m00 int32_t value;  //{ +0x0000    } | .value
                           
        SDK_MAGIC_PROPERTIES( "CBool.$", 0x0, false, 0xe2293e0053bb587b );      
        SDK_FIXED_SIZE( c_bool_t, 0x4 );      
    };                     
};
#include "magic/c_bool_t.end.hpp"
SDK_VERIFY( class win::c_bool_t, 0x4 );
