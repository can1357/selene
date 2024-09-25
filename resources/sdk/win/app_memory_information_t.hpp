#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/app_memory_information_t.start.hpp"
namespace win
{
    // [struct _APP_MEMORY_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct app_memory_information_t             
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                      
        _m00 uint64_t available_commit;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AvailableCommit
        _m01 uint64_t private_commit_usage;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PrivateCommitUsage
        _m02 uint64_t peak_private_commit_usage;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PeakPrivateCommitUsage
        _m03 uint64_t total_commit_usage;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .TotalCommitUsage
                                                
        SDK_MAGIC_PROPERTIES( "_APP_MEMORY_INFORMATION.$", 0x20, true, 0x859787c33af50870 );                          
        SDK_FIXED_SIZE( app_memory_information_t, 0x20 );                          
    };                                          
};
#include "magic/app_memory_information_t.end.hpp"
SDK_VERIFY( struct win::app_memory_information_t, 0x20 );
