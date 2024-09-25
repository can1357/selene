#pragma once
#include <sdkgen/support_library.hpp>
#include "wire_local_that_part1_t.hpp"
#include "wire_winrt_async_call_response_block_part1_t.hpp"

#include "magic/wire_local_that_part2_t.start.hpp"
namespace win
{
    // [struct WireLocalThatPart2]
    // => Windows 10 v1607
    //
    struct wire_local_that_part2_t                                    
    {                                                                 
        using async_response_block_t = struct win::wire_winrt_async_call_response_block_part1_t;                     
                                                                      
        // Windows 10 v1607                                           
        //                                                            
        _m00 struct win::wire_local_that_part1_t c;                     //{ +0x0000    } | .c
        _m01 async_response_block_t              async_response_block;  //{ +0x0018    } | .asyncResponseBlock
                                                                      
        SDK_MAGIC_PROPERTIES( "WireLocalThatPart2.$", 0x0, false, 0x8460e3432fe58b36 );                     
        SDK_FIXED_SIZE( wire_local_that_part2_t, 0x30 );                     
    };                                                                
};
#include "magic/wire_local_that_part2_t.end.hpp"
SDK_VERIFY( struct win::wire_local_that_part2_t, 0x30 );
