#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mmpage_file_expansion_flags_t.start.hpp"
namespace nt
{
    // [struct _MMPAGE_FILE_EXPANSION_FLAGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mmpage_file_expansion_flags_t     
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                   
        _m00 uint8_t page_file_number;         //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PageFileNumber
        _m01 uint1_t ignore_current_commit;    //{ +0x0003@0  +0x0003@0  +0x0003@0  +0x0003@0  } | .IgnoreCurrentCommit
        _m02 uint1_t increase_minimum_size;    //{ +0x0003@1  +0x0003@1  +0x0003@1  +0x0003@1  } | .IncreaseMinimumSize
                                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                   
        _m03 uint1_t attempt_for_cant_extend;  //{ +0x0003@2  +0x0003@2  +0x0003@2  } | .AttemptForCantExtend
        _m04 uint1_t unused_segment_deletion;  //{ +0x0003@3  +0x0003@3  +0x0003@3  } | .UnusedSegmentDeletion
        _m05 uint1_t page_file_contract;       //{ +0x0003@4  +0x0003@4  +0x0003@4  } | .PageFileContract
        _m06 uint1_t no_wait;                  //{ +0x0003@5  +0x0003@5  +0x0003@5  } | .NoWait
                                             
        SDK_MAGIC_PROPERTIES( "_MMPAGE_FILE_EXPANSION_FLAGS.$", 0x4, true, 0x83e2d79ce833a54d );                        
        SDK_FIXED_SIZE( mmpage_file_expansion_flags_t, 0x4 );                        
    };                                       
};
#include "magic/mmpage_file_expansion_flags_t.end.hpp"
SDK_VERIFY( struct nt::mmpage_file_expansion_flags_t, 0x4 );
