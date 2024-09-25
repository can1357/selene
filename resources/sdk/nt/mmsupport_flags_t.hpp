#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mmsupport_flags_t.start.hpp"
namespace nt
{
    // [struct _MMSUPPORT_FLAGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mmsupport_flags_t                   
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                     
        _m00 uint3_t  working_set_type;          //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .WorkingSetType
        _m01 uint1_t  maximum_working_set_hard;  //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .MaximumWorkingSetHard
        _m02 uint1_t  minimum_working_set_hard;  //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .MinimumWorkingSetHard
        _m03 uint1_t  session_master;            //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .SessionMaster
        _m04 uint2_t  trimmer_state;             //{ +0x0001@1  +0x0001@1  +0x0001@1  +0x0001@1  } | .TrimmerState
        _m05 uint4_t  page_stealers;             //{ +0x0001@4  +0x0001@4  +0x0001@4  +0x0001@4  } | .PageStealers
        _m06 uint16_t u1;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .u1
        _m07 uint8_t  memory_priority;           //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .MemoryPriority
        _m08 uint1_t  wsle_deleted;              //{ +0x0003@0  +0x0003@0  +0x0003@0  +0x0003@0  } | .WsleDeleted
        _m09 uint1_t  svm_enabled;               //{ +0x0003@3  +0x0003@1  +0x0003@1  +0x0003@1  } | .SvmEnabled
        _m10 uint1_t  force_age;                 //{ +0x0003@4  +0x0003@2  +0x0003@2  +0x0003@2  } | .ForceAge
        _m11 uint1_t  new_maximum;               //{ +0x0003@5  +0x0003@4  +0x0003@4  +0x0003@4  } | .NewMaximum
        _m12 uint2_t  commit_release_state;      //{ +0x0003@6  +0x0003@5  +0x0003@5  +0x0003@5  } | .CommitReleaseState
        _m13 uint8_t  u2;                        //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .u2
                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                     
        _m14 uint1_t  force_trim;                //{ +0x0003@3  +0x0003@3  +0x0003@3  } | .ForceTrim
                                               
        // Windows 10 v1607                         
        //                                     
        _m15 uint1_t  vm_exiting;                //{ +0x0003@1  } | .VmExiting
        _m16 uint1_t  expansion_failed;          //{ +0x0003@2  } | .ExpansionFailed
                                               
        SDK_MAGIC_PROPERTIES( "_MMSUPPORT_FLAGS.$", 0x4, true, 0xeb37dc5420254429 );                         
        SDK_FIXED_SIZE( mmsupport_flags_t, 0x4 );                         
    };                                         
};
#include "magic/mmsupport_flags_t.end.hpp"
SDK_VERIFY( struct nt::mmsupport_flags_t, 0x4 );
