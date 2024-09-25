#pragma once
#include <sdkgen/support_library.hpp>
#include "file_storage_tier_region_t.hpp"

#include "magic/fsctl_query_region_info_output_t.start.hpp"
namespace win
{
    // [struct _FSCTL_QUERY_REGION_INFO_OUTPUT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct fsctl_query_region_info_output_t        
    {                                              
        using regions_t = sdk::array<struct win::file_storage_tier_region_t, 1>;                           
                                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                         
        _m00 uint32_t   version;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t   size;                        //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Size
        _m02 uint32_t   flags;                       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
        _m03 uint64_t   alignment;                   //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Alignment
        _m04 uint32_t   total_number_of_regions;     //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .TotalNumberOfRegions
        _m05 uint32_t   number_of_regions_returned;  //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .NumberOfRegionsReturned
        _m06 regions_t  regions;                     //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .Regions
                                                   
        SDK_NONVOL_PROPERTIES( "_FSCTL_QUERY_REGION_INFO_OUTPUT.$", 0x40, true, 0x14eb0b41931682ef );                           
        SDK_FIXED_SIZE( fsctl_query_region_info_output_t, 0x40 );                           
    };                                             
};
#include "magic/fsctl_query_region_info_output_t.end.hpp"
SDK_VERIFY( struct win::fsctl_query_region_info_output_t, 0x40 );
