#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stack_trace_t.start.hpp"
namespace win
{
    // [struct StackTrace]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stack_trace_t                                
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                              
        _m00 const uint32_t             back_trace_hash;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .BackTraceHash
        _m01 const uint16_t             frame_count;      //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .FrameCount
        _m02 sdk::array<void const*, 1> frames;           //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Frames
                                                        
        SDK_MAGIC_PROPERTIES( "StackTrace.$", 0x40, true, 0xc93639b84647a984 );                
        SDK_FIXED_SIZE( stack_trace_t, 0x40 );                
    };                                                  
};
#include "magic/stack_trace_t.end.hpp"
SDK_VERIFY( struct win::stack_trace_t, 0x40 );
