#pragma once
#include <sdkgen/support_library.hpp>
#include "crypt_bit_blob_t.hpp"
#include "crl_dist_point_name_t.hpp"

#include "magic/crl_issuing_dist_point_t.start.hpp"
namespace win
{
    // [struct _CRL_ISSUING_DIST_POINT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crl_issuing_dist_point_t                                       
    {                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                
        _m00 struct win::crl_dist_point_name_t dist_point_name;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DistPointName
        _m01 int32_t                           f_only_contains_user_certs;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .fOnlyContainsUserCerts
        _m02 int32_t                           f_only_contains_ca_certs;    //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .fOnlyContainsCACerts
        _m03 struct win::crypt_bit_blob_t      only_some_reason_flags;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .OnlySomeReasonFlags
        _m04 int32_t                           f_indirect_crl;              //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .fIndirectCRL
                                                                          
        SDK_MAGIC_PROPERTIES( "_CRL_ISSUING_DIST_POINT.$", 0x40, true, 0xdaae89e24192dcb7 );                           
        SDK_FIXED_SIZE( crl_issuing_dist_point_t, 0x40 );                           
    };                                                                    
};
#include "magic/crl_issuing_dist_point_t.end.hpp"
SDK_VERIFY( struct win::crl_issuing_dist_point_t, 0x40 );
