#pragma once
#include <sdkgen/support_library.hpp>
#include "wire_local_that_part1_t.hpp"
#include "wire_local_that_part2_t.hpp"
#include "wire_winrt_async_call_response_block_part1_t.hpp"

#include "magic/wire_local_that_t.start.hpp"
namespace win
{
    // [struct WireLocalThat]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wire_local_that_t                                          
    {                                                                 
        using async_response_block_t = struct win::wire_winrt_async_call_response_block_part1_t;                     
                                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                            
        _m00 struct win::wire_local_that_part1_t part1;                 //{ +0x0000    +0x0000    +0x0000    } | .part1
        _m01 async_response_block_t              async_response_block;  //{ +0x0018    +0x0018    +0x0018    } | .asyncResponseBlock
                                                                      
        // Windows 10 v1607                                           
        //                                                            
        _m02 struct win::wire_local_that_part1_t c;                     //{ +0x0000    } | .c
        _m03 struct win::wire_local_that_part2_t d;                     //{ +0x0000    } | .d
                                                                      
        SDK_MAGIC_PROPERTIES( "WireLocalThat.$", 0x40, true, 0x391898960984c861 );                     
        SDK_DYNAMIC_SIZE( wire_local_that_t );                        
    };                                                                
};
#include "magic/wire_local_that_t.end.hpp"
