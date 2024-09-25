#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/input_injection_value_t.start.hpp"
namespace tag
{
    // [struct tagINPUT_INJECTION_VALUE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct input_injection_value_t
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                  
        _m00 uint16_t page;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .page
        _m01 uint16_t usage;        //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .usage
        _m02 int32_t  value;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .value
        _m03 uint16_t index;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .index
                                  
        SDK_MAGIC_PROPERTIES( "tagINPUT_INJECTION_VALUE.$", 0xc, true, 0x5d0444c48fea30b4 );      
        SDK_FIXED_SIZE( input_injection_value_t, 0xc );      
    };                            
};
#include "magic/input_injection_value_t.end.hpp"
SDK_VERIFY( struct tag::input_injection_value_t, 0xc );
