#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/service_hwid_query_t.start.hpp"
namespace ahc
{
    // [struct _AHC_SERVICE_HWID_QUERY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct service_hwid_query_t            
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                 
        _m00 uint8_t          query_result;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryResult
        _m01 nt::unicode_view hw_id;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .HwId
                                           
        SDK_MAGIC_PROPERTIES( "_AHC_SERVICE_HWID_QUERY.$", 0x18, true, 0x55e9ed791ca54d7a );             
        SDK_FIXED_SIZE( service_hwid_query_t, 0x18 );             
    };                                     
};
#include "magic/service_hwid_query_t.end.hpp"
SDK_VERIFY( struct ahc::service_hwid_query_t, 0x18 );
