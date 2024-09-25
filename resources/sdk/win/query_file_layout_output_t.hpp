#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/query_file_layout_output_t.start.hpp"
namespace win
{
    // [struct _QUERY_FILE_LAYOUT_OUTPUT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct query_file_layout_output_t   
    {                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint32_t file_entry_count;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .FileEntryCount
        _m01 uint32_t first_file_offset;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .FirstFileOffset
        _m02 uint32_t flags;              //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
                                        
        SDK_NONVOL_PROPERTIES( "_QUERY_FILE_LAYOUT_OUTPUT.$", 0x10, true, 0xc5e01658a30e07a2 );                  
        SDK_FIXED_SIZE( query_file_layout_output_t, 0x10 );                  
    };                                  
};
#include "magic/query_file_layout_output_t.end.hpp"
SDK_VERIFY( struct win::query_file_layout_output_t, 0x10 );
