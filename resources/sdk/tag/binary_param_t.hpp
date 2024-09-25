#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/binary_param_t.start.hpp"
namespace tag
{
    // [struct tagBinaryParam]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct binary_param_t   
    {                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                  
        _m00 void*   buffer;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Buffer
        _m01 int16_t size;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Size
                            
        SDK_MAGIC_PROPERTIES( "tagBinaryParam.$", 0x10, true, 0x9693c565fc9284d );       
        SDK_FIXED_SIZE( binary_param_t, 0x10 );       
    };                      
};
#include "magic/binary_param_t.end.hpp"
SDK_VERIFY( struct tag::binary_param_t, 0x10 );
