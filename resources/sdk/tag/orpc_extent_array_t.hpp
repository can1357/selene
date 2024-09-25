#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/orpc_extent_array_t.start.hpp"
namespace tag
{
    struct orpc_extent_t;

    // [struct tagORPC_EXTENT_ARRAY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct orpc_extent_array_t                  
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                      
        _m00 uint32_t                    size;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .size
        _m01 struct tag::orpc_extent_t** extent;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .extent
                                                
        SDK_MAGIC_PROPERTIES( "tagORPC_EXTENT_ARRAY.$", 0x10, true, 0x8366281051b0b663 );       
        SDK_FIXED_SIZE( orpc_extent_array_t, 0x10 );       
    };                                          
};
#include "magic/orpc_extent_array_t.end.hpp"
SDK_VERIFY( struct tag::orpc_extent_array_t, 0x10 );
