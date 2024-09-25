#pragma once
#include <sdkgen/support_library.hpp>
#include "wire_local_this_part1_t.hpp"
#include "wire_local_this_part2_t.hpp"
#include "wire_array_of_touched_astas_t.hpp"

#include "magic/wire_local_this_t.start.hpp"
namespace win
{
    // [struct WireLocalThis]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wire_local_this_t                                         
    {                                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                           
        _m00 struct win::wire_local_this_part1_t       part1;          //{ +0x0000    +0x0000    +0x0000    } | .part1
        _m01 struct win::wire_array_of_touched_astas_t touched_astas;  //{ +0x0060    +0x0060    +0x0060    } | .touchedAstas
                                                                     
        // Windows 10 v1607                                          
        //                                                           
        _m02 struct win::wire_local_this_part1_t       c;              //{ +0x0000    } | .c
        _m03 struct win::wire_local_this_part2_t       d;              //{ +0x0000    } | .d
                                                                     
        SDK_MAGIC_PROPERTIES( "WireLocalThis.$", 0x70, true, 0x1d48bc7c418b1ec6 );              
        SDK_DYNAMIC_SIZE( wire_local_this_t );                       
    };                                                               
};
#include "magic/wire_local_this_t.end.hpp"
