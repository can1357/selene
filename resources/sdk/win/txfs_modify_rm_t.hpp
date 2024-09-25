#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/txfs_modify_rm_t.start.hpp"
namespace win
{
    // [struct _TXFS_MODIFY_RM]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct txfs_modify_rm_t                      
    {                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                       
        _m00 uint32_t flags;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint32_t log_container_count_max;     //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .LogContainerCountMax
        _m02 uint32_t log_container_count_min;     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .LogContainerCountMin
        _m03 uint32_t log_container_count;         //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .LogContainerCount
        _m04 uint32_t log_growth_increment;        //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .LogGrowthIncrement
        _m05 uint32_t log_auto_shrink_percentage;  //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .LogAutoShrinkPercentage
        _m06 uint16_t logging_mode;                //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .LoggingMode
                                                 
        SDK_NONVOL_PROPERTIES( "_TXFS_MODIFY_RM.$", 0x28, true, 0xb11784cbff5b49d1 );                           
        SDK_FIXED_SIZE( txfs_modify_rm_t, 0x28 );                           
    };                                           
};
#include "magic/txfs_modify_rm_t.end.hpp"
SDK_VERIFY( struct win::txfs_modify_rm_t, 0x28 );
