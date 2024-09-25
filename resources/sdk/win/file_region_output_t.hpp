#pragma once
#include <sdkgen/support_library.hpp>
#include "file_region_info_t.hpp"

#include "magic/file_region_output_t.start.hpp"
namespace win
{
    // [struct _FILE_REGION_OUTPUT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_region_output_t                                                     
    {                                                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                                          
        _m00 uint32_t                                      flags;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint32_t                                      total_region_entry_count;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .TotalRegionEntryCount
        _m02 uint32_t                                      region_entry_count;        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .RegionEntryCount
        _m03 sdk::array<struct win::file_region_info_t, 1> region;                    //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Region
                                                                                    
        SDK_NONVOL_PROPERTIES( "_FILE_REGION_OUTPUT.$", 0x28, true, 0x9953cdc306841ad0 );                         
        SDK_FIXED_SIZE( file_region_output_t, 0x28 );                               
    };                                                                              
};
#include "magic/file_region_output_t.end.hpp"
SDK_VERIFY( struct win::file_region_output_t, 0x28 );
