#pragma once
#include <sdkgen/support_library.hpp>
#include "sd_enum_sds_input_t.hpp"
#include "sd_query_stats_input_t.hpp"
#include "sd_change_machine_sid_input_t.hpp"

#include "magic/sd_global_change_input_t.start.hpp"
namespace win
{
    // [struct _SD_GLOBAL_CHANGE_INPUT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct sd_global_change_input_t                                   
    {                                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                            
        _m00 uint32_t                                  flags;           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint32_t                                  change_type;     //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .ChangeType
        _m02 struct win::sd_change_machine_sid_input_t sd_change;       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .SdChange
        _m03 struct win::sd_query_stats_input_t        sd_query_stats;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .SdQueryStats
        _m04 struct win::sd_enum_sds_input_t           sd_enum_sds;     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .SdEnumSds
                                                                      
        SDK_NONVOL_PROPERTIES( "_SD_GLOBAL_CHANGE_INPUT.$", 0x18, true, 0xb8990e3f85730ac5 );               
        SDK_FIXED_SIZE( sd_global_change_input_t, 0x18 );               
    };                                                                
};
#include "magic/sd_global_change_input_t.end.hpp"
SDK_VERIFY( struct win::sd_global_change_input_t, 0x18 );
