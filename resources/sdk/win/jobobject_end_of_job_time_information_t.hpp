#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/jobobject_end_of_job_time_information_t.start.hpp"
namespace win
{
    // [struct _JOBOBJECT_END_OF_JOB_TIME_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct jobobject_end_of_job_time_information_t
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m00 uint32_t end_of_job_time_action;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .EndOfJobTimeAction
                                                  
        SDK_MAGIC_PROPERTIES( "_JOBOBJECT_END_OF_JOB_TIME_INFORMATION.$", 0x4, true, 0xb1e7e6f7b3e6fda4 );                       
        SDK_FIXED_SIZE( jobobject_end_of_job_time_information_t, 0x4 );                       
    };                                            
};
#include "magic/jobobject_end_of_job_time_information_t.end.hpp"
SDK_VERIFY( struct win::jobobject_end_of_job_time_information_t, 0x4 );
