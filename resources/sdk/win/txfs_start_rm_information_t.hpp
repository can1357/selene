#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/txfs_start_rm_information_t.start.hpp"
namespace win
{
    // [struct _TXFS_START_RM_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct txfs_start_rm_information_t                         
    {                                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                     
        _m00 uint32_t               flags;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint64_t               log_container_size;          //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .LogContainerSize
        _m02 uint32_t               log_container_count_min;     //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .LogContainerCountMin
        _m03 uint32_t               log_container_count_max;     //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .LogContainerCountMax
        _m04 uint32_t               log_growth_increment;        //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .LogGrowthIncrement
        _m05 uint32_t               log_auto_shrink_percentage;  //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .LogAutoShrinkPercentage
        _m06 uint32_t               tm_log_path_offset;          //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .TmLogPathOffset
        _m07 uint16_t               tm_log_path_length;          //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .TmLogPathLength
        _m08 uint16_t               logging_mode;                //{ +0x0026    +0x0026    +0x0026    +0x0026    +0x0026    } | .LoggingMode
        _m09 uint16_t               log_path_length;             //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .LogPathLength
        _m10 sdk::array<wchar_t, 1> log_path;                    //{ +0x002c    +0x002c    +0x002c    +0x002c    +0x002c    } | .LogPath
                                                               
        SDK_NONVOL_PROPERTIES( "_TXFS_START_RM_INFORMATION.$", 0x30, true, 0x2544cbd992fec23c );                           
        SDK_FIXED_SIZE( txfs_start_rm_information_t, 0x30 );                           
    };                                                         
};
#include "magic/txfs_start_rm_information_t.end.hpp"
SDK_VERIFY( struct win::txfs_start_rm_information_t, 0x30 );
