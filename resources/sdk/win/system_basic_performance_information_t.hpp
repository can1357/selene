#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_basic_performance_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_BASIC_PERFORMANCE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_basic_performance_information_t
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint64_t available_pages;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AvailablePages
        _m01 uint64_t committed_pages;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CommittedPages
        _m02 uint64_t commit_limit;                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CommitLimit
        _m03 uint64_t peak_commitment;             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .PeakCommitment
                                                 
        SDK_MAGIC_PROPERTIES( "_SYSTEM_BASIC_PERFORMANCE_INFORMATION.$", 0x20, true, 0xee3d40435867d644 );                
        SDK_FIXED_SIZE( system_basic_performance_information_t, 0x20 );                
    };                                           
};
#include "magic/system_basic_performance_information_t.end.hpp"
SDK_VERIFY( struct win::system_basic_performance_information_t, 0x20 );
