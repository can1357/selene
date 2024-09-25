#pragma once
#include <sdkgen/support_library.hpp>
#include "wire_container_this_part1_t.hpp"
#include "wire_container_extent_array_t.hpp"

#include "magic/wire_container_this_t.start.hpp"
namespace win
{
    // [struct WireContainerThis]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wire_container_this_t                             
    {                                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                                   
        _m00 struct win::wire_container_this_part1_t   part1;  //{ +0x0000    +0x0000    +0x0000    } | .part1
        _m01 struct win::wire_container_extent_array_t ea;     //{ +0x00e0    +0x00e0    +0x00e0    } | .ea
                                                             
        SDK_MAGIC_PROPERTIES( "WireContainerThis.$", 0xf0, true, 0xd14a98e362c22b2d );      
        SDK_FIXED_SIZE( wire_container_this_t, 0xf0 );       
    };                                                       
};
#include "magic/wire_container_this_t.end.hpp"
SDK_VERIFY( struct win::wire_container_this_t, 0xf0 );
