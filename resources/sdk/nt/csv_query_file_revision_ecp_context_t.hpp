#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/csv_query_file_revision_ecp_context_t.start.hpp"
namespace nt
{
    // [struct _CSV_QUERY_FILE_REVISION_ECP_CONTEXT]
    // => WDK 10 (NV)
    //
    struct csv_query_file_revision_ecp_context_t  
    {                                             
        // WDK 10                                 
        //                                        
        _m00 int64_t                file_id;        //{ +0x0000    } | .FileId
        _m01 sdk::array<int64_t, 3> file_revision;  //{ +0x0008    } | .FileRevision
                                                  
        SDK_NONVOL_PROPERTIES( "_CSV_QUERY_FILE_REVISION_ECP_CONTEXT.$", 0x0, false, 0x320cc0ce1180acc3 );              
        SDK_FIXED_SIZE( csv_query_file_revision_ecp_context_t, 0x20 );              
    };                                            
};
#include "magic/csv_query_file_revision_ecp_context_t.end.hpp"
SDK_VERIFY( struct nt::csv_query_file_revision_ecp_context_t, 0x20 );
