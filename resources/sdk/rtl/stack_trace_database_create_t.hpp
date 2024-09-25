#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stack_trace_database_create_t.start.hpp"
namespace rtl
{
    // [struct _RTL_STACK_TRACE_DATABASE_CREATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stack_trace_database_create_t
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 void*    commit_base;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CommitBase
        _m01 uint64_t commit_size;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CommitSize
        _m02 uint64_t reserve_size;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ReserveSize
                                        
        SDK_MAGIC_PROPERTIES( "_RTL_STACK_TRACE_DATABASE_CREATE.$", 0x18, true, 0xa2a52c6550e7985 );             
        SDK_FIXED_SIZE( stack_trace_database_create_t, 0x18 );             
    };                                  
};
#include "magic/stack_trace_database_create_t.end.hpp"
SDK_VERIFY( struct rtl::stack_trace_database_create_t, 0x18 );
