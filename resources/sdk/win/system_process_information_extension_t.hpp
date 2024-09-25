#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/process_disk_counters_t.hpp"
#include "../nt/process_energy_values_t.hpp"

#include "magic/system_process_information_extension_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_PROCESS_INFORMATION_EXTENSION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_process_information_extension_t                             
    {                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                    
        _m00 struct nt::process_disk_counters_t disk_counters;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DiskCounters
        _m01 uint64_t                           context_switches;               //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ContextSwitches
        _m02 uint32_t                           flags;                          //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Flags
        _m03 uint1_t                            has_strong_id;                  //{ +0x0030@0  +0x0030@0  +0x0030@0  +0x0030@0  } | .HasStrongId
        _m04 uint4_t                            classification;                 //{ +0x0030@1  +0x0030@1  +0x0030@1  +0x0030@1  } | .Classification
        _m05 uint32_t                           user_sid_offset;                //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .UserSidOffset
        _m06 uint32_t                           package_full_name_offset;       //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .PackageFullNameOffset
        _m07 struct nt::process_energy_values_t energy_values;                  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .EnergyValues
        _m08 uint32_t                           app_id_offset;                  //{ +0x00d0    +0x0150    +0x0150    +0x0150    } | .AppIdOffset
        _m09 uint64_t                           shared_commit_charge;           //{ +0x00d8    +0x0158    +0x0158    +0x0158    } | .SharedCommitCharge
        _m10 uint32_t                           job_object_id;                  //{ +0x00e0    +0x0160    +0x0160    +0x0160    } | .JobObjectId
        _m11 uint32_t                           spare_ulong;                    //{ +0x00e4    +0x0164    +0x0164    +0x0164    } | .SpareUlong
                                                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                    
        _m12 uint1_t                            background_activity_moderated;  //{ +0x0030@5  +0x0030@5  +0x0030@5  } | .BackgroundActivityModerated
        _m13 uint64_t                           process_sequence_number;        //{ +0x0168    +0x0168    +0x0168    } | .ProcessSequenceNumber
                                                                              
        SDK_MAGIC_PROPERTIES( "_SYSTEM_PROCESS_INFORMATION_EXTENSION.$", 0x170, true, 0x7a0459354ac97248 );                              
        SDK_DYNAMIC_SIZE( system_process_information_extension_t );                              
    };                                                                        
};
#include "magic/system_process_information_extension_t.end.hpp"
