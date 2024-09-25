#pragma once
#include <sdkgen/support_library.hpp>
#include "cert_alt_name_info_t.hpp"

#include "magic/crl_dist_point_name_t.start.hpp"
namespace win
{
    // [struct _CRL_DIST_POINT_NAME]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crl_dist_point_name_t                                        
    {                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                              
        _m00 uint32_t                         dw_dist_point_name_choice;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwDistPointNameChoice
        _m01 struct win::cert_alt_name_info_t full_name;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FullName
                                                                        
        SDK_MAGIC_PROPERTIES( "_CRL_DIST_POINT_NAME.$", 0x18, true, 0xd30192d98ea61311 );                          
        SDK_FIXED_SIZE( crl_dist_point_name_t, 0x18 );                          
    };                                                                  
};
#include "magic/crl_dist_point_name_t.end.hpp"
SDK_VERIFY( struct win::crl_dist_point_name_t, 0x18 );
