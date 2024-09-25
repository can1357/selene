#pragma once
#include <sdkgen/support_library.hpp>
#include "../win/file_id_128_t.hpp"

#include "magic/csv_query_file_revision_ecp_context_file_id_128_t.start.hpp"
namespace nt
{
    // [struct _CSV_QUERY_FILE_REVISION_ECP_CONTEXT_FILE_ID_128]
    // => WDK 10 (NV)
    //
    struct csv_query_file_revision_ecp_context_file_id_128_t
    {                                                       
        // WDK 10                                    
        //                                           
        _m00 struct win::file_id_128_t file_id;               //{ +0x0000    } | .FileId
        _m01 sdk::array<int64_t, 3>    file_revision;         //{ +0x0010    } | .FileRevision
                                                            
        SDK_NONVOL_PROPERTIES( "_CSV_QUERY_FILE_REVISION_ECP_CONTEXT_FILE_ID_128.$", 0x0, false, 0x627e06da997bffaa );              
        SDK_FIXED_SIZE( csv_query_file_revision_ecp_context_file_id_128_t, 0x28 );              
    };                                                      
};
#include "magic/csv_query_file_revision_ecp_context_file_id_128_t.end.hpp"
SDK_VERIFY( struct nt::csv_query_file_revision_ecp_context_file_id_128_t, 0x28 );
