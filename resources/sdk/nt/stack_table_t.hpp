#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stack_table_t.start.hpp"
namespace nt
{
    struct object_ref_trace_t;

    // [struct _STACK_TABLE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stack_table_t                                                     
    {                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                                   
        _m00 uint16_t                                       num_stack_traces;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NumStackTraces
        _m01 uint16_t                                       trace_capacity;    //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .TraceCapacity
        _m02 sdk::array<struct nt::object_ref_trace_t*, 16> stack_trace;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .StackTrace
        _m03 sdk::array<uint16_t, 16381>                    stack_table_hash;  //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .StackTableHash
                                                                             
        SDK_MAGIC_PROPERTIES( "_STACK_TABLE.$", 0x8088, true, 0x8e726d6f2ed79f57 );                 
        SDK_FIXED_SIZE( stack_table_t, 0x8088 );                             
    };                                                                       
};
#include "magic/stack_table_t.end.hpp"
SDK_VERIFY( struct nt::stack_table_t, 0x8088 );
