#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stats_vector_t.start.hpp"
namespace rpc
{
    // [struct RPC_STATS_VECTOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stats_vector_t                  
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                 
        _m00 uint32_t                count;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Count
        _m01 sdk::array<uint32_t, 1> stats;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Stats
                                           
        SDK_MAGIC_PROPERTIES( "RPC_STATS_VECTOR.$", 0x8, true, 0xa9f919dbc3e6761b );      
        SDK_FIXED_SIZE( stats_vector_t, 0x8 );      
    };                                     
};
#include "magic/stats_vector_t.end.hpp"
SDK_VERIFY( struct rpc::stats_vector_t, 0x8 );
