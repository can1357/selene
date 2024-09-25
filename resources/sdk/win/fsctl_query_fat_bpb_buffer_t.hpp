#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fsctl_query_fat_bpb_buffer_t.start.hpp"
namespace win
{
    // [struct _FSCTL_QUERY_FAT_BPB_BUFFER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct fsctl_query_fat_bpb_buffer_t                             
    {                                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                          
        _m00 sdk::array<uint8_t, 36> first0x24_bytes_of_boot_sector;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .First0x24BytesOfBootSector
                                                                    
        SDK_NONVOL_PROPERTIES( "_FSCTL_QUERY_FAT_BPB_BUFFER.$", 0x24, true, 0x985282cfb27f386 );                               
        SDK_FIXED_SIZE( fsctl_query_fat_bpb_buffer_t, 0x24 );                               
    };                                                              
};
#include "magic/fsctl_query_fat_bpb_buffer_t.end.hpp"
SDK_VERIFY( struct win::fsctl_query_fat_bpb_buffer_t, 0x24 );
