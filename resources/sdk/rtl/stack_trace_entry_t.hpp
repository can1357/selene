#pragma once
#include <sdkgen/support_library.hpp>
#include "std_list_entry_t.hpp"
#include "../nt/slist_entry_t.hpp"

#include "magic/stack_trace_entry_t.start.hpp"
namespace rtl
{
    // [struct _RTL_STACK_TRACE_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stack_trace_entry_t                        
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                            
        _m00 struct rtl::std_list_entry_t hash_chain;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .HashChain
        _m01 uint11_t                     trace_count;  //{ +0x0008@0  +0x0008@0  +0x0008@0  +0x0008@0  } | .TraceCount
        _m02 uint5_t                      block_depth;  //{ +0x0008@11 +0x0008@11 +0x0008@11 +0x0008@11 } | .BlockDepth
        _m03 uint16_t                     index_high;   //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .IndexHigh
        _m04 uint16_t                     index;        //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Index
        _m05 uint16_t                     depth;        //{ +0x000e    +0x000e    +0x000e    +0x000e    } | .Depth
        _m06 sdk::array<void*, 32>        back_trace;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .BackTrace
        _m07 struct nt::slist_entry_t     free_chain;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .FreeChain
                                                      
        SDK_MAGIC_PROPERTIES( "_RTL_STACK_TRACE_ENTRY.$", 0x110, true, 0x6dcdf08483d3ef1c );            
        SDK_FIXED_SIZE( stack_trace_entry_t, 0x110 );            
    };                                                
};
#include "magic/stack_trace_entry_t.end.hpp"
SDK_VERIFY( struct rtl::stack_trace_entry_t, 0x110 );
