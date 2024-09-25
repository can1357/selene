#pragma once
#include <sdkgen/support_library.hpp>
#include "wire_local_this_part1_t.hpp"
#include "wire_array_of_touched_astas_t.hpp"

#include "magic/wire_local_this_part2_t.start.hpp"
namespace win
{
    // [struct WireLocalThisPart2]
    // => Windows 10 v1607
    //
    struct wire_local_this_part2_t                                   
    {                                                                
        // Windows 10 v1607                                          
        //                                                           
        _m00 struct win::wire_local_this_part1_t       part1;          //{ +0x0000    } | .part1
        _m01 struct win::wire_array_of_touched_astas_t touched_astas;  //{ +0x0040    } | .touchedAstas
                                                                     
        SDK_MAGIC_PROPERTIES( "WireLocalThisPart2.$", 0x0, false, 0x9328e127e4159db2 );              
        SDK_FIXED_SIZE( wire_local_this_part2_t, 0x58 );              
    };                                                               
};
#include "magic/wire_local_this_part2_t.end.hpp"
SDK_VERIFY( struct win::wire_local_this_part2_t, 0x58 );
