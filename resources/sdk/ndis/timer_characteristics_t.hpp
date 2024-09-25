#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/timer_characteristics_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_TIMER_CHARACTERISTICS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct timer_characteristics_t                                             
    {                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                                     
        _m00 struct ndis::object_header_t                     header;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                                         allocation_tag;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .AllocationTag
        _m02 sdk::function<void(void*, void*, void*, void*)>* timer_function;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TimerFunction
        _m03 void*                                            function_context;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .FunctionContext
                                                                               
        SDK_MAGIC_PROPERTIES( "_NDIS_TIMER_CHARACTERISTICS.$", 0x18, true, 0xc7a1fca432d95f1c );                 
        SDK_FIXED_SIZE( timer_characteristics_t, 0x18 );                       
    };                                                                         
};
#include "magic/timer_characteristics_t.end.hpp"
SDK_VERIFY( struct ndis::timer_characteristics_t, 0x18 );
