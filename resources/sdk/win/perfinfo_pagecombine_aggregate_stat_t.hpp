#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_pagecombine_aggregate_stat_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_PAGECOMBINE_AGGREGATE_STAT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_pagecombine_aggregate_stat_t          
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                
        _m00 uint6_t  stat_type;                            //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .StatType
        _m01 uint32_t combine_scan_count;                   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .CombineScanCount
        _m02 uint64_t pages_scanned;                        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PagesScanned
        _m03 uint64_t pages_combined;                       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PagesCombined
        _m04 int32_t  combined_blocks_in_use;               //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CombinedBlocksInUse
        _m05 int32_t  sum_combined_blocks_reference_count;  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .SumCombinedBlocksReferenceCount
                                                          
        SDK_MAGIC_PROPERTIES( "_PERFINFO_PAGECOMBINE_AGGREGATE_STAT.$", 0x20, true, 0xa995e336b8aaa3bf );                                    
        SDK_FIXED_SIZE( perfinfo_pagecombine_aggregate_stat_t, 0x20 );                                    
    };                                                    
};
#include "magic/perfinfo_pagecombine_aggregate_stat_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_pagecombine_aggregate_stat_t, 0x20 );
