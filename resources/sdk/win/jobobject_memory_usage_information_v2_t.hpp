#pragma once
#include <sdkgen/support_library.hpp>
#include "jobobject_memory_usage_information_t.hpp"

#include "magic/jobobject_memory_usage_information_v2_t.start.hpp"
namespace win
{
    // [struct _JOBOBJECT_MEMORY_USAGE_INFORMATION_V2]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct jobobject_memory_usage_information_v2_t                              
    {                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                                      
        _m00 struct win::jobobject_memory_usage_information_t basic_info;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BasicInfo
        _m01 uint64_t                                         job_shared_memory;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .JobSharedMemory
                                                                                
        SDK_MAGIC_PROPERTIES( "_JOBOBJECT_MEMORY_USAGE_INFORMATION_V2.$", 0x28, true, 0x116f2c7eaa4198da );                  
        SDK_FIXED_SIZE( jobobject_memory_usage_information_v2_t, 0x28 );                  
    };                                                                          
};
#include "magic/jobobject_memory_usage_information_v2_t.end.hpp"
SDK_VERIFY( struct win::jobobject_memory_usage_information_v2_t, 0x28 );
