#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_query_sparing_buffer_t.start.hpp"
namespace win
{
    // [struct _FILE_QUERY_SPARING_BUFFER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_query_sparing_buffer_t   
    {                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint32_t sparing_unit_bytes;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SparingUnitBytes
        _m01 uint8_t  software_sparing;    //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .SoftwareSparing
        _m02 uint32_t total_spare_blocks;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .TotalSpareBlocks
        _m03 uint32_t free_spare_blocks;   //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .FreeSpareBlocks
                                         
        SDK_NONVOL_PROPERTIES( "_FILE_QUERY_SPARING_BUFFER.$", 0x10, true, 0x8af8facb1abf79b0 );                   
        SDK_FIXED_SIZE( file_query_sparing_buffer_t, 0x10 );                   
    };                                   
};
#include "magic/file_query_sparing_buffer_t.end.hpp"
SDK_VERIFY( struct win::file_query_sparing_buffer_t, 0x10 );
