#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/trace_block_t.start.hpp"
namespace rtl
{
    struct trace_block_t;

    // [struct _RTL_TRACE_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct trace_block_t                             
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                           
        _m00 uint32_t                   magic;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Magic
        _m01 uint32_t                   count;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Count
        _m02 uint32_t                   size;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Size
        _m03 uint64_t                   user_count;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .UserCount
        _m04 uint64_t                   user_size;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .UserSize
        _m05 void*                      user_context;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .UserContext
        _m06 struct rtl::trace_block_t* next;          //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Next
        _m07 void**                     trace;         //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Trace
                                                     
        SDK_MAGIC_PROPERTIES( "_RTL_TRACE_BLOCK.$", 0x38, true, 0x237e0e36fa9f04ea );             
        SDK_FIXED_SIZE( trace_block_t, 0x38 );             
    };                                               
};
#include "magic/trace_block_t.end.hpp"
SDK_VERIFY( struct rtl::trace_block_t, 0x38 );
