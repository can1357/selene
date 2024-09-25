#pragma once
#include <sdkgen/support_library.hpp>
#include "sd_enum_sds_entry_t.hpp"

#include "magic/sd_enum_sds_output_t.start.hpp"
namespace win
{
    // [struct _SD_ENUM_SDS_OUTPUT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct sd_enum_sds_output_t                                                     
    {                                                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                                          
        _m00 uint64_t                                       next_offset;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NextOffset
        _m01 uint64_t                                       num_sd_entries_returned;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .NumSDEntriesReturned
        _m02 uint64_t                                       num_sd_bytes_returned;    //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .NumSDBytesReturned
        _m03 sdk::array<struct win::sd_enum_sds_entry_t, 1> sd_entry;                 //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .SDEntry
                                                                                    
        SDK_NONVOL_PROPERTIES( "_SD_ENUM_SDS_OUTPUT.$", 0x30, true, 0x1864225110ef7bb6 );                        
        SDK_FIXED_SIZE( sd_enum_sds_output_t, 0x30 );                               
    };                                                                              
};
#include "magic/sd_enum_sds_output_t.end.hpp"
SDK_VERIFY( struct win::sd_enum_sds_output_t, 0x30 );
