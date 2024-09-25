#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/kqos_grouping_sets_t.start.hpp"
namespace nt
{
    // [union _KQOS_GROUPING_SETS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union kqos_grouping_sets_t        
    {                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint64_t single_core_set;  //{ +0x0000    +0x0000    +0x0000    } | .SingleCoreSet
        _m01 uint64_t smt_set;          //{ +0x0008    +0x0008    +0x0008    } | .SmtSet
                                      
        SDK_MAGIC_PROPERTIES( "_KQOS_GROUPING_SETS.$", 0x10, true, 0x9f7db5d3cc65dd47 );                
        SDK_FIXED_SIZE( kqos_grouping_sets_t, 0x10 );                
    };                                
};
#include "magic/kqos_grouping_sets_t.end.hpp"
SDK_VERIFY( union nt::kqos_grouping_sets_t, 0x10 );
