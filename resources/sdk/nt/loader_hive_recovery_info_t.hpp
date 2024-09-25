#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/loader_hive_recovery_info_t.start.hpp"
namespace nt
{
    // [struct _LOADER_HIVE_RECOVERY_INFO]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct loader_hive_recovery_info_t     
    {                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint1_t  recovered;             //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .Recovered
        _m01 uint1_t  legacy_recovery;       //{ +0x0000@1  +0x0000@1  +0x0000@1  } | .LegacyRecovery
        _m02 uint1_t  soft_reboot_conflict;  //{ +0x0000@2  +0x0000@2  +0x0000@2  } | .SoftRebootConflict
        _m03 uint3_t  most_recent_log;       //{ +0x0000@3  +0x0000@3  +0x0000@3  } | .MostRecentLog
        _m04 uint32_t log_next_sequence;     //{ +0x0008    +0x0008    +0x0008    } | .LogNextSequence
        _m05 uint32_t log_minimum_sequence;  //{ +0x000c    +0x000c    +0x000c    } | .LogMinimumSequence
        _m06 uint32_t log_current_offset;    //{ +0x0010    +0x0010    +0x0010    } | .LogCurrentOffset
                                           
        // Windows 11                      
        //                                 
        _m07 uint1_t  loaded_from_snapshot;  //{ +0x0000@6  } | .LoadedFromSnapshot
                                           
        SDK_MAGIC_PROPERTIES( "_LOADER_HIVE_RECOVERY_INFO.$", 0x14, true, 0xa3432864d5287763 );                     
        SDK_FIXED_SIZE( loader_hive_recovery_info_t, 0x14 );                     
    };                                     
};
#include "magic/loader_hive_recovery_info_t.end.hpp"
SDK_VERIFY( struct nt::loader_hive_recovery_info_t, 0x14 );
