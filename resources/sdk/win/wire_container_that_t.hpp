#pragma once
#include <sdkgen/support_library.hpp>
#include "wire_container_that_part1_t.hpp"
#include "wire_container_extent_array_t.hpp"

#include "magic/wire_container_that_t.start.hpp"
namespace win
{
    // [struct WireContainerThat]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wire_container_that_t                             
    {                                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                                   
        _m00 struct win::wire_container_that_part1_t   part1;  //{ +0x0000    +0x0000    +0x0000    } | .part1
        _m01 struct win::wire_container_extent_array_t ea;     //{ +0x00d0    +0x00d0    +0x00d0    } | .ea
                                                             
        SDK_MAGIC_PROPERTIES( "WireContainerThat.$", 0xe0, true, 0x4cccac04bb501c44 );      
        SDK_FIXED_SIZE( wire_container_that_t, 0xe0 );       
    };                                                       
};
#include "magic/wire_container_that_t.end.hpp"
SDK_VERIFY( struct win::wire_container_that_t, 0xe0 );
