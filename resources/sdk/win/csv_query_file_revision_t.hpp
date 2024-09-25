#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/csv_query_file_revision_t.start.hpp"
namespace win
{
    // [struct _CSV_QUERY_FILE_REVISION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct csv_query_file_revision_t              
    {                                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                        
        _m00 int64_t                file_id;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .FileId
        _m01 sdk::array<int64_t, 3> file_revision;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .FileRevision
                                                  
        SDK_NONVOL_PROPERTIES( "_CSV_QUERY_FILE_REVISION.$", 0x20, true, 0xc610a191a9a2d2e2 );              
        SDK_FIXED_SIZE( csv_query_file_revision_t, 0x20 );              
    };                                            
};
#include "magic/csv_query_file_revision_t.end.hpp"
SDK_VERIFY( struct win::csv_query_file_revision_t, 0x20 );
