#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wire_array_of_touched_astas_t.start.hpp"
namespace win
{
    // [struct WireArrayOfTouchedAstas]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wire_array_of_touched_astas_t        
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                      
        _m00 uint32_t                size;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .size
        _m01 uint32_t                ref;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ref
        _m02 uint32_t                array_size;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .array_size
        _m03 sdk::array<uint64_t, 1> asta_oxids;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .astaOxids
                                                
        SDK_MAGIC_PROPERTIES( "WireArrayOfTouchedAstas.$", 0x10, true, 0x1017678fd5a9205 );           
        SDK_DYNAMIC_SIZE( wire_array_of_touched_astas_t );           
    };                                          
};
#include "magic/wire_array_of_touched_astas_t.end.hpp"
