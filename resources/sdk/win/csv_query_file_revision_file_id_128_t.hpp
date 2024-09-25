#pragma once
#include <sdkgen/support_library.hpp>
#include "file_id_128_t.hpp"

#include "magic/csv_query_file_revision_file_id_128_t.start.hpp"
namespace win
{
    // [struct _CSV_QUERY_FILE_REVISION_FILE_ID_128]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct csv_query_file_revision_file_id_128_t     
    {                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                           
        _m00 struct win::file_id_128_t file_id;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .FileId
        _m01 sdk::array<int64_t, 3>    file_revision;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .FileRevision
                                                     
        SDK_NONVOL_PROPERTIES( "_CSV_QUERY_FILE_REVISION_FILE_ID_128.$", 0x28, true, 0xd471f0ecfa9439e4 );              
        SDK_FIXED_SIZE( csv_query_file_revision_file_id_128_t, 0x28 );              
    };                                               
};
#include "magic/csv_query_file_revision_file_id_128_t.end.hpp"
SDK_VERIFY( struct win::csv_query_file_revision_file_id_128_t, 0x28 );
