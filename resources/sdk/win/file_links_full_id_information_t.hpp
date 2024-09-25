#pragma once
#include <sdkgen/support_library.hpp>
#include "file_link_entry_full_id_information_t.hpp"

#include "magic/file_links_full_id_information_t.start.hpp"
namespace win
{
    // [struct _FILE_LINKS_FULL_ID_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_links_full_id_information_t
    {                                      
        using entry_t = struct win::file_link_entry_full_id_information_t;                 
                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint32_t bytes_needed;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .BytesNeeded
        _m01 uint32_t entries_returned;      //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .EntriesReturned
        _m02 entry_t  entry;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Entry
                                           
        SDK_NONVOL_PROPERTIES( "_FILE_LINKS_FULL_ID_INFORMATION.$", 0x24, true, 0xa419219bbb65f988 );                 
        SDK_FIXED_SIZE( file_links_full_id_information_t, 0x24 );                 
    };                                     
};
#include "magic/file_links_full_id_information_t.end.hpp"
SDK_VERIFY( struct win::file_links_full_id_information_t, 0x24 );
