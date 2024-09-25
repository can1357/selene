#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/sd_enum_sds_input_t.start.hpp"
namespace win
{
    // [struct _SD_ENUM_SDS_INPUT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct sd_enum_sds_input_t                 
    {                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                     
        _m00 uint64_t starting_offset;           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .StartingOffset
        _m01 uint64_t max_sd_entries_to_return;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .MaxSDEntriesToReturn
                                               
        SDK_NONVOL_PROPERTIES( "_SD_ENUM_SDS_INPUT.$", 0x10, true, 0x181360dc60f73463 );                         
        SDK_FIXED_SIZE( sd_enum_sds_input_t, 0x10 );                         
    };                                         
};
#include "magic/sd_enum_sds_input_t.end.hpp"
SDK_VERIFY( struct win::sd_enum_sds_input_t, 0x10 );
