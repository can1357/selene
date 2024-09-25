#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_iostatusblock_range_information_t.start.hpp"
namespace win
{
    // [struct _FILE_IOSTATUSBLOCK_RANGE_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_iostatusblock_range_information_t
    {                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                  
        _m00 uint8_t* io_status_block_range;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .IoStatusBlockRange
        _m01 uint32_t length;                      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Length
                                                 
        SDK_NONVOL_PROPERTIES( "_FILE_IOSTATUSBLOCK_RANGE_INFORMATION.$", 0x10, true, 0xe2da665ad9108775 );                      
        SDK_FIXED_SIZE( file_iostatusblock_range_information_t, 0x10 );                      
    };                                           
};
#include "magic/file_iostatusblock_range_information_t.end.hpp"
SDK_VERIFY( struct win::file_iostatusblock_range_information_t, 0x10 );
