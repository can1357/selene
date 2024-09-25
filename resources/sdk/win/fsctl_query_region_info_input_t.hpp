#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/fsctl_query_region_info_input_t.start.hpp"
namespace win
{
    // [struct _FSCTL_QUERY_REGION_INFO_INPUT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct fsctl_query_region_info_input_t                       
    {                                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                       
        _m00 uint32_t                         version;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t                         size;                //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Size
        _m02 uint32_t                         flags;               //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
        _m03 uint32_t                         number_of_tier_ids;  //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .NumberOfTierIds
        _m04 sdk::array<struct nt::guid_t, 1> tier_ids;            //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .TierIds
                                                                 
        SDK_NONVOL_PROPERTIES( "_FSCTL_QUERY_REGION_INFO_INPUT.$", 0x20, true, 0xb4b95f99e04ffd19 );                   
        SDK_FIXED_SIZE( fsctl_query_region_info_input_t, 0x20 );                   
    };                                                           
};
#include "magic/fsctl_query_region_info_input_t.end.hpp"
SDK_VERIFY( struct win::fsctl_query_region_info_input_t, 0x20 );
