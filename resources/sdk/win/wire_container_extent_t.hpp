#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wire_container_extent_t.start.hpp"
namespace win
{
    // [struct WireContainerExtent]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wire_container_extent_t            
    {                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                    
        _m00 uint32_t            rounded_size;  //{ +0x0000    +0x0000    +0x0000    } | .rounded_size
        _m01 uint32_t            id;            //{ +0x0004    +0x0004    +0x0004    } | .id
        _m02 uint32_t            version;       //{ +0x0008    +0x0008    +0x0008    } | .version
        _m03 uint32_t            size;          //{ +0x000c    +0x000c    +0x000c    } | .size
        _m04 sdk::array<uint8_t> data;          //{ +0x0010    +0x0010    +0x0010    } | .data
                                              
        SDK_MAGIC_PROPERTIES( "WireContainerExtent.$", 0x10, true, 0x50caac4713373d57 );             
        SDK_FIXED_SIZE( wire_container_extent_t, 0x10 );             
    };                                        
};
#include "magic/wire_container_extent_t.end.hpp"
SDK_VERIFY( struct win::wire_container_extent_t, 0x10 );
