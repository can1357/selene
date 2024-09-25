#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/luid_t.hpp"

#include "magic/displayconfig_path_source_info_t.start.hpp"
namespace win
{
    // [struct DISPLAYCONFIG_PATH_SOURCE_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct displayconfig_path_source_info_t         
    {                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                          
        _m00 struct nt::luid_t adapter_id;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .adapterId
        _m01 uint32_t          id;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .id
        _m02 uint32_t          mode_info_idx;         //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .modeInfoIdx
        _m03 uint16_t          clone_group_id;        //{ +0x000c@0  +0x000c@0  +0x000c@0  +0x000c@0  +0x000c@0  } | .cloneGroupId
        _m04 uint16_t          source_mode_info_idx;  //{ +0x000c@16 +0x000c@16 +0x000c@16 +0x000c@16 +0x000c@16 } | .sourceModeInfoIdx
        _m05 uint32_t          status_flags;          //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .statusFlags
                                                    
        SDK_NONVOL_PROPERTIES( "DISPLAYCONFIG_PATH_SOURCE_INFO.$", 0x14, true, 0x9905811c99ef0e87 );                     
        SDK_FIXED_SIZE( displayconfig_path_source_info_t, 0x14 );                     
    };                                              
};
#include "magic/displayconfig_path_source_info_t.end.hpp"
SDK_VERIFY( struct win::displayconfig_path_source_info_t, 0x14 );
