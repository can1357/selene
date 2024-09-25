#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_job_memory_info_t.start.hpp"
namespace win
{
    // [struct _PROCESS_JOB_MEMORY_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct process_job_memory_info_t            
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                      
        _m00 uint64_t shared_commit_usage;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SharedCommitUsage
        _m01 uint64_t private_commit_usage;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PrivateCommitUsage
        _m02 uint64_t peak_private_commit_usage;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PeakPrivateCommitUsage
        _m03 uint64_t private_commit_limit;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .PrivateCommitLimit
        _m04 uint64_t total_commit_limit;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .TotalCommitLimit
                                                
        SDK_MAGIC_PROPERTIES( "_PROCESS_JOB_MEMORY_INFO.$", 0x28, true, 0xe170a31bdc802c9d );                          
        SDK_FIXED_SIZE( process_job_memory_info_t, 0x28 );                          
    };                                          
};
#include "magic/process_job_memory_info_t.end.hpp"
SDK_VERIFY( struct win::process_job_memory_info_t, 0x28 );
