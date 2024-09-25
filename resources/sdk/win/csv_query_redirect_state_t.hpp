#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/csv_query_redirect_state_t.start.hpp"
namespace win
{
    // [struct _CSV_QUERY_REDIRECT_STATE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct csv_query_redirect_state_t 
    {                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t mds_node_id;      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .MdsNodeId
        _m01 uint32_t ds_node_id;       //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .DsNodeId
        _m02 uint8_t  file_redirected;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .FileRedirected
                                      
        SDK_NONVOL_PROPERTIES( "_CSV_QUERY_REDIRECT_STATE.$", 0xc, true, 0x24a4bae013fa5086 );                
        SDK_FIXED_SIZE( csv_query_redirect_state_t, 0xc );                
    };                                
};
#include "magic/csv_query_redirect_state_t.end.hpp"
SDK_VERIFY( struct win::csv_query_redirect_state_t, 0xc );
