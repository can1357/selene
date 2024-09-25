#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/main_statistics_t.start.hpp"
namespace ahc
{
    // [struct _AHC_MAIN_STATISTICS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct main_statistics_t          
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t lookup;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Lookup
        _m01 uint32_t remove;           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Remove
        _m02 uint32_t update;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Update
        _m03 uint32_t clear;            //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Clear
        _m04 uint32_t snap_statistics;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SnapStatistics
        _m05 uint32_t snap_cache;       //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .SnapCache
                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m06 uint32_t lookup_process;   //{ +0x0018    +0x0018    +0x0018    } | .LookupProcess
                                      
        SDK_MAGIC_PROPERTIES( "_AHC_MAIN_STATISTICS.$", 0x1c, true, 0x35faa0c839b67fe4 );                
        SDK_DYNAMIC_SIZE( main_statistics_t );                
    };                                
};
#include "magic/main_statistics_t.end.hpp"
