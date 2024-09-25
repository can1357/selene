#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cross_cert_dist_points_info_t.start.hpp"
namespace win
{
    struct cert_alt_name_info_t;

    // [struct _CROSS_CERT_DIST_POINTS_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cross_cert_dist_points_info_t                          
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                        
        _m00 uint32_t                          dw_sync_delta_time;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwSyncDeltaTime
        _m01 uint32_t                          c_dist_point;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .cDistPoint
        _m02 struct win::cert_alt_name_info_t* rg_dist_point;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .rgDistPoint
                                                                  
        SDK_MAGIC_PROPERTIES( "_CROSS_CERT_DIST_POINTS_INFO.$", 0x10, true, 0xf012f5e04a7134a9 );                   
        SDK_FIXED_SIZE( cross_cert_dist_points_info_t, 0x10 );                   
    };                                                            
};
#include "magic/cross_cert_dist_points_info_t.end.hpp"
SDK_VERIFY( struct win::cross_cert_dist_points_info_t, 0x10 );
