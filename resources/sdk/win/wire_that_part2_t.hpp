#pragma once
#include <sdkgen/support_library.hpp>
#include "wire_that_part1_t.hpp"
#include "wire_extent_array_t.hpp"

#include "magic/wire_that_part2_t.start.hpp"
namespace win
{
    // [struct WireThatPart2]
    // => Windows 10 v1607
    //
    struct wire_that_part2_t                       
    {                                              
        // Windows 10 v1607                        
        //                                         
        _m00 struct win::wire_that_part1_t   part1;  //{ +0x0000    } | .part1
        _m01 struct win::wire_extent_array_t ea;     //{ +0x0008    } | .ea
                                                   
        SDK_MAGIC_PROPERTIES( "WireThatPart2.$", 0x0, false, 0x297b12f8cd0f608d );      
        SDK_FIXED_SIZE( wire_that_part2_t, 0x20 );      
    };                                             
};
#include "magic/wire_that_part2_t.end.hpp"
SDK_VERIFY( struct win::wire_that_part2_t, 0x20 );
