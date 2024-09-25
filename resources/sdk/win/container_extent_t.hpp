#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/container_extent_t.start.hpp"
namespace win
{
    // [struct CONTAINER_EXTENT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct container_extent_t               
    {                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                  
        _m00 uint32_t               id;       //{ +0x0000    +0x0000    +0x0000    } | .id
        _m01 uint32_t               version;  //{ +0x0004    +0x0004    +0x0004    } | .version
        _m02 uint32_t               size;     //{ +0x0008    +0x0008    +0x0008    } | .size
        _m03 sdk::array<uint8_t, 1> data;     //{ +0x000c    +0x000c    +0x000c    } | .data
                                            
        SDK_MAGIC_PROPERTIES( "CONTAINER_EXTENT.$", 0x10, true, 0xded96d48b7095e34 );        
        SDK_FIXED_SIZE( container_extent_t, 0x10 );        
    };                                      
};
#include "magic/container_extent_t.end.hpp"
SDK_VERIFY( struct win::container_extent_t, 0x10 );
