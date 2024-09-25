#pragma once
#include <sdkgen/support_library.hpp>
#include "wire_that_part1_t.hpp"
#include "wire_that_part2_t.hpp"
#include "wire_extent_array_t.hpp"

#include "magic/wire_that_t.start.hpp"
namespace win
{
    // [struct WireThat]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wire_that_t                             
    {                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                         
        _m00 struct win::wire_that_part1_t   part1;  //{ +0x0000    +0x0000    +0x0000    } | .part1
        _m01 struct win::wire_extent_array_t ea;     //{ +0x0008    +0x0008    +0x0008    } | .ea
                                                   
        // Windows 10 v1607                        
        //                                         
        _m02 struct win::wire_that_part1_t   c;      //{ +0x0000    } | .c
        _m03 struct win::wire_that_part2_t   d;      //{ +0x0000    } | .d
                                                   
        SDK_MAGIC_PROPERTIES( "WireThat.$", 0x18, true, 0xe1c5609404a16734 );      
        SDK_DYNAMIC_SIZE( wire_that_t );           
    };                                             
};
#include "magic/wire_that_t.end.hpp"
