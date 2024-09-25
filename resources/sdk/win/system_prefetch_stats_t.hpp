#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_prefetch_stats_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_PREFETCH_STATS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_prefetch_stats_t               
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                       
        _m00 uint32_t demand_file_page_count;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DemandFilePageCount
        _m01 uint32_t demand_file_io_count;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .DemandFileIOCount
        _m02 uint32_t trickle_file_page_count;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TrickleFilePageCount
        _m03 uint32_t trickle_file_io_count;       //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .TrickleFileIOCount
        _m04 uint32_t demand_private_page_count;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DemandPrivatePageCount
        _m05 uint32_t demand_private_io_count;     //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .DemandPrivateIOCount
        _m06 uint32_t trickle_private_page_count;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .TricklePrivatePageCount
        _m07 uint32_t trickle_private_io_count;    //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .TricklePrivateIOCount
                                                 
        SDK_MAGIC_PROPERTIES( "_SYSTEM_PREFETCH_STATS.$", 0x20, true, 0x7da5f6732717a12a );                           
        SDK_FIXED_SIZE( system_prefetch_stats_t, 0x20 );                           
    };                                           
};
#include "magic/system_prefetch_stats_t.end.hpp"
SDK_VERIFY( struct win::system_prefetch_stats_t, 0x20 );
