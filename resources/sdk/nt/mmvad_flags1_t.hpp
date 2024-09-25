#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mmvad_flags1_t.start.hpp"
namespace nt
{
    // [struct _MMVAD_FLAGS1]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mmvad_flags1_t           
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint31_t commit_charge;  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .CommitCharge
        _m01 uint1_t  mem_commit;     //{ +0x0000@31 +0x0000@31 +0x0000@31 +0x0000@31 } | .MemCommit
                                    
        SDK_MAGIC_PROPERTIES( "_MMVAD_FLAGS1.$", 0x4, true, 0x569d7d3cfcff00d );              
        SDK_FIXED_SIZE( mmvad_flags1_t, 0x4 );              
    };                              
};
#include "magic/mmvad_flags1_t.end.hpp"
SDK_VERIFY( struct nt::mmvad_flags1_t, 0x4 );
