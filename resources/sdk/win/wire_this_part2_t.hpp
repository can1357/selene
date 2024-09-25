#pragma once
#include <sdkgen/support_library.hpp>
#include "wire_this_part1_t.hpp"
#include "wire_extent_array_t.hpp"

#include "magic/wire_this_part2_t.start.hpp"
namespace win
{
    // [struct WireThisPart2]
    // => Windows 10 v1607
    //
    struct wire_this_part2_t                       
    {                                              
        // Windows 10 v1607                        
        //                                         
        _m00 struct win::wire_this_part1_t   part1;  //{ +0x0000    } | .part1
        _m01 struct win::wire_extent_array_t ea;     //{ +0x0020    } | .ea
                                                   
        SDK_MAGIC_PROPERTIES( "WireThisPart2.$", 0x0, false, 0x71ab4e02e44923a1 );      
        SDK_FIXED_SIZE( wire_this_part2_t, 0x38 );      
    };                                             
};
#include "magic/wire_this_part2_t.end.hpp"
SDK_VERIFY( struct win::wire_this_part2_t, 0x38 );
