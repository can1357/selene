#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_memory_usage_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_MEMORY_USAGE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_memory_usage_information_t   
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                     
        _m00 uint64_t total_physical_bytes;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TotalPhysicalBytes
        _m01 uint64_t available_bytes;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AvailableBytes
        _m02 int64_t  resident_available_bytes;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ResidentAvailableBytes
        _m03 uint64_t committed_bytes;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CommittedBytes
        _m04 uint64_t shared_committed_bytes;    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .SharedCommittedBytes
        _m05 uint64_t commit_limit_bytes;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .CommitLimitBytes
        _m06 uint64_t peak_commitment_bytes;     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .PeakCommitmentBytes
                                               
        SDK_MAGIC_PROPERTIES( "_SYSTEM_MEMORY_USAGE_INFORMATION.$", 0x38, true, 0xa60ee9d38e79f5e4 );                         
        SDK_FIXED_SIZE( system_memory_usage_information_t, 0x38 );                         
    };                                         
};
#include "magic/system_memory_usage_information_t.end.hpp"
SDK_VERIFY( struct win::system_memory_usage_information_t, 0x38 );
