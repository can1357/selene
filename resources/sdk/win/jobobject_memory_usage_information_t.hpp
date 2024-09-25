#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/jobobject_memory_usage_information_t.start.hpp"
namespace win
{
    // [struct _JOBOBJECT_MEMORY_USAGE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct jobobject_memory_usage_information_t
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint64_t job_memory;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .JobMemory
        _m01 uint64_t peak_job_memory_used;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PeakJobMemoryUsed
                                               
        SDK_MAGIC_PROPERTIES( "_JOBOBJECT_MEMORY_USAGE_INFORMATION.$", 0x10, true, 0x3294dd1c7f85ac4d );                     
        SDK_FIXED_SIZE( jobobject_memory_usage_information_t, 0x10 );                     
    };                                         
};
#include "magic/jobobject_memory_usage_information_t.end.hpp"
SDK_VERIFY( struct win::jobobject_memory_usage_information_t, 0x10 );
