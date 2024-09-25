#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct mdl_t; }

#include "magic/async_read_context_t.start.hpp"
namespace cc
{
    // [struct _CC_ASYNC_READ_CONTEXT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct async_read_context_t                                
    {                                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                     
        _m00 sdk::function<uint8_t(void*)>* completion_routine;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .CompletionRoutine
        _m01 void*                          context;             //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Context
        _m02 struct nt::mdl_t*              mdl;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Mdl
        _m03 char                           requestor_mode;      //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .RequestorMode
        _m04 uint32_t                       nesting_level;       //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .NestingLevel
                                                               
        SDK_NONVOL_PROPERTIES( "_CC_ASYNC_READ_CONTEXT.$", 0x20, true, 0xf739f8f21215e15 );                   
        SDK_FIXED_SIZE( async_read_context_t, 0x20 );                   
    };                                                         
};
#include "magic/async_read_context_t.end.hpp"
SDK_VERIFY( struct cc::async_read_context_t, 0x20 );
