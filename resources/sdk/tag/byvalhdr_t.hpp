#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/byvalhdr_t.start.hpp"
namespace tag
{
    // [struct tagBYVALHDR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct byvalhdr_t        
    {                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                   
        _m00 uint32_t count;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Count
        _m01 int32_t  frozen;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Frozen
                             
        SDK_MAGIC_PROPERTIES( "tagBYVALHDR.$", 0x8, true, 0xb30ef7faf3e9f359 );       
        SDK_FIXED_SIZE( byvalhdr_t, 0x8 );       
    };                       
};
#include "magic/byvalhdr_t.end.hpp"
SDK_VERIFY( struct tag::byvalhdr_t, 0x8 );
