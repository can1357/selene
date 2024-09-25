#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/switch_context_attribute_t.start.hpp"
namespace tag
{
    // [struct tagSWITCH_CONTEXT_ATTRIBUTE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct switch_context_attribute_t           
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                      
        _m00 uint64_t ul_context_update_counter;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ulContextUpdateCounter
        _m01 int32_t  f_allow_context_update;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .fAllowContextUpdate
        _m02 int32_t  f_enable_trace;             //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .fEnableTrace
        _m03 uint64_t etw_handle;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .EtwHandle
                                                
        SDK_MAGIC_PROPERTIES( "tagSWITCH_CONTEXT_ATTRIBUTE.$", 0x18, true, 0x495294e28e8f9af1 );                          
        SDK_FIXED_SIZE( switch_context_attribute_t, 0x18 );                          
    };                                          
};
#include "magic/switch_context_attribute_t.end.hpp"
SDK_VERIFY( struct tag::switch_context_attribute_t, 0x18 );
