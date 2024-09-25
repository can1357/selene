#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crl_dist_points_info_t.start.hpp"
namespace win
{
    struct crl_dist_point_t;

    // [struct _CRL_DIST_POINTS_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crl_dist_points_info_t                        
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                               
        _m00 uint32_t                      c_dist_point;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cDistPoint
        _m01 struct win::crl_dist_point_t* rg_dist_point;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .rgDistPoint
                                                         
        SDK_MAGIC_PROPERTIES( "_CRL_DIST_POINTS_INFO.$", 0x10, true, 0x66a6eddba0fd0a12 );              
        SDK_FIXED_SIZE( crl_dist_points_info_t, 0x10 );              
    };                                                   
};
#include "magic/crl_dist_points_info_t.end.hpp"
SDK_VERIFY( struct win::crl_dist_points_info_t, 0x10 );
