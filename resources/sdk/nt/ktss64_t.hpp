#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ktss64_t.start.hpp"
namespace nt
{
    // [struct _KTSS64]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ktss64_t                              
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                       
        _m00 uint64_t                rsp0;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Rsp0
        _m01 uint64_t                rsp1;         //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Rsp1
        _m02 uint64_t                rsp2;         //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Rsp2
        _m03 sdk::array<uint64_t, 8> ist;          //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .Ist
        _m04 uint16_t                io_map_base;  //{ +0x0066    +0x0066    +0x0066    +0x0066    } | .IoMapBase
                                                 
        SDK_MAGIC_PROPERTIES( "_KTSS64.$", 0x68, true, 0x5d4f8b168a9d222a );            
        SDK_DYNAMIC_SIZE( ktss64_t );            
    };                                           
};
#include "magic/ktss64_t.end.hpp"
