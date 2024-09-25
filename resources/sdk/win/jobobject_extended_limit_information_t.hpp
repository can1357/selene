#pragma once
#include <sdkgen/support_library.hpp>
#include "../io/counters_t.hpp"
#include "jobobject_basic_limit_information_t.hpp"

#include "magic/jobobject_extended_limit_information_t.start.hpp"
namespace win
{
    // [struct _JOBOBJECT_EXTENDED_LIMIT_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct jobobject_extended_limit_information_t                                     
    {                                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                                            
        _m00 struct win::jobobject_basic_limit_information_t basic_limit_information;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BasicLimitInformation
        _m01 struct io::counters_t                           io_info;                   //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .IoInfo
        _m02 uint64_t                                        process_memory_limit;      //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .ProcessMemoryLimit
        _m03 uint64_t                                        job_memory_limit;          //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .JobMemoryLimit
        _m04 uint64_t                                        peak_process_memory_used;  //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .PeakProcessMemoryUsed
        _m05 uint64_t                                        peak_job_memory_used;      //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .PeakJobMemoryUsed
                                                                                      
        SDK_MAGIC_PROPERTIES( "_JOBOBJECT_EXTENDED_LIMIT_INFORMATION.$", 0x90, true, 0x418673af9054f12c );                         
        SDK_FIXED_SIZE( jobobject_extended_limit_information_t, 0x90 );                         
    };                                                                                
};
#include "magic/jobobject_extended_limit_information_t.end.hpp"
SDK_VERIFY( struct win::jobobject_extended_limit_information_t, 0x90 );
