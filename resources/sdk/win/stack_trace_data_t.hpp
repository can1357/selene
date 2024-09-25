#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stack_trace_data_t.start.hpp"
namespace win
{
    // [struct StackTraceData]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stack_trace_data_t                           
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                              
        _m00 const uint32_t             back_trace_hash;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BackTraceHash
        _m01 const uint16_t             frame_count;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .FrameCount
        _m02 sdk::array<void const*, 1> frames;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Frames
                                                        
        SDK_MAGIC_PROPERTIES( "StackTraceData.$", 0x10, true, 0xb32d1e53d04a29fd );                
        SDK_FIXED_SIZE( stack_trace_data_t, 0x10 );                
    };                                                  
};
#include "magic/stack_trace_data_t.end.hpp"
SDK_VERIFY( struct win::stack_trace_data_t, 0x10 );
