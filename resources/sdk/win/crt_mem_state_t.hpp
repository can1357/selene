#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crt_mem_state_t.start.hpp"
namespace win
{
    struct crt_mem_block_header_t;

    // [struct _CrtMemState]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crt_mem_state_t                                          
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                          
        _m00 struct win::crt_mem_block_header_t* p_block_header;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pBlockHeader
        _m01 sdk::array<uint64_t, 5>             l_counts;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .lCounts
        _m02 sdk::array<uint64_t, 5>             l_sizes;             //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .lSizes
        _m03 uint64_t                            l_high_water_count;  //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .lHighWaterCount
        _m04 uint64_t                            l_total_count;       //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .lTotalCount
                                                                    
        SDK_MAGIC_PROPERTIES( "_CrtMemState.$", 0x68, true, 0xa02a218d2ef22156 );                   
        SDK_FIXED_SIZE( crt_mem_state_t, 0x68 );                    
    };                                                              
};
#include "magic/crt_mem_state_t.end.hpp"
SDK_VERIFY( struct win::crt_mem_state_t, 0x68 );
