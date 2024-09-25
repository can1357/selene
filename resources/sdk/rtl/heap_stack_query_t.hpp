#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/heap_stack_query_t.start.hpp"
namespace rtl
{
    // [struct _RTL_HEAP_STACK_QUERY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct heap_stack_query_t                                                      
    {                                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                         
        _m00 uint32_t                                        version;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 void*                                           process;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Process
        _m02 sdk::function<int32_t(void*, uint64_t, void*)>* write_routine;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .WriteRoutine
        _m03 void*                                           serialization_context;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .SerializationContext
                                                                                   
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                                         
        _m04 uint8_t                                         query_level;            //{ +0x0020    +0x0020    +0x0020    } | .QueryLevel
        _m05 uint8_t                                         flags;                  //{ +0x0021    +0x0021    +0x0021    } | .Flags
                                                                                   
        SDK_MAGIC_PROPERTIES( "_RTL_HEAP_STACK_QUERY.$", 0x28, true, 0x98f7255d373031f );                      
        SDK_DYNAMIC_SIZE( heap_stack_query_t );                                    
    };                                                                             
};
#include "magic/heap_stack_query_t.end.hpp"
