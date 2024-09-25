#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/container_extent_array_t.start.hpp"
namespace win
{
    struct container_extent_t;

    // [struct CONTAINER_EXTENT_ARRAY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct container_extent_array_t                  
    {                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                           
        _m00 uint32_t                         size;    //{ +0x0000    +0x0000    +0x0000    } | .size
        _m01 struct win::container_extent_t** extent;  //{ +0x0008    +0x0008    +0x0008    } | .extent
                                                     
        SDK_MAGIC_PROPERTIES( "CONTAINER_EXTENT_ARRAY.$", 0x10, true, 0x7ad9227a893f56f6 );       
        SDK_FIXED_SIZE( container_extent_array_t, 0x10 );       
    };                                               
};
#include "magic/container_extent_array_t.end.hpp"
SDK_VERIFY( struct win::container_extent_array_t, 0x10 );
