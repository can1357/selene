#pragma once
#include <sdkgen/support_library.hpp>
#include "file_storage_tier_t.hpp"

#include "magic/fsctl_query_storage_classes_output_t.start.hpp"
namespace win
{
    // [struct _FSCTL_QUERY_STORAGE_CLASSES_OUTPUT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct fsctl_query_storage_classes_output_t                                      
    {                                                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                                           
        _m00 uint32_t                                       version;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t                                       size;                      //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Size
        _m02 uint32_t                                       flags;                     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
        _m03 uint32_t                                       total_number_of_tiers;     //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .TotalNumberOfTiers
        _m04 uint32_t                                       number_of_tiers_returned;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .NumberOfTiersReturned
        _m05 sdk::array<struct win::file_storage_tier_t, 1> tiers;                     //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Tiers
                                                                                     
        SDK_NONVOL_PROPERTIES( "_FSCTL_QUERY_STORAGE_CLASSES_OUTPUT.$", 0x440, true, 0x48abad6d87129f14 );                         
        SDK_FIXED_SIZE( fsctl_query_storage_classes_output_t, 0x440 );                         
    };                                                                               
};
#include "magic/fsctl_query_storage_classes_output_t.end.hpp"
SDK_VERIFY( struct win::fsctl_query_storage_classes_output_t, 0x440 );
