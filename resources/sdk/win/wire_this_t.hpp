#pragma once
#include <sdkgen/support_library.hpp>
#include "wire_this_part1_t.hpp"
#include "wire_this_part2_t.hpp"
#include "wire_extent_array_t.hpp"

#include "magic/wire_this_t.start.hpp"
namespace win
{
    // [struct WireThis]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wire_this_t                             
    {                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                         
        _m00 struct win::wire_this_part1_t   part1;  //{ +0x0000    +0x0000    +0x0000    } | .part1
        _m01 struct win::wire_extent_array_t ea;     //{ +0x0020    +0x0020    +0x0020    } | .ea
                                                   
        // Windows 10 v1607                        
        //                                         
        _m02 struct win::wire_this_part1_t   c;      //{ +0x0000    } | .c
        _m03 struct win::wire_this_part2_t   d;      //{ +0x0000    } | .d
                                                   
        SDK_MAGIC_PROPERTIES( "WireThis.$", 0x30, true, 0x52c4ccf16bf10f31 );      
        SDK_DYNAMIC_SIZE( wire_this_t );           
    };                                             
};
#include "magic/wire_this_t.end.hpp"
