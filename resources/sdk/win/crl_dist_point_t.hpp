#pragma once
#include <sdkgen/support_library.hpp>
#include "crypt_bit_blob_t.hpp"
#include "cert_alt_name_info_t.hpp"
#include "crl_dist_point_name_t.hpp"

#include "magic/crl_dist_point_t.start.hpp"
namespace win
{
    // [struct _CRL_DIST_POINT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crl_dist_point_t                                    
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                     
        _m00 struct win::crl_dist_point_name_t dist_point_name;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DistPointName
        _m01 struct win::crypt_bit_blob_t      reason_flags;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ReasonFlags
        _m02 struct win::cert_alt_name_info_t  crl_issuer;       //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .CRLIssuer
                                                               
        SDK_MAGIC_PROPERTIES( "_CRL_DIST_POINT.$", 0x40, true, 0x59639b3ff2c8302 );                
        SDK_FIXED_SIZE( crl_dist_point_t, 0x40 );                
    };                                                         
};
#include "magic/crl_dist_point_t.end.hpp"
SDK_VERIFY( struct win::crl_dist_point_t, 0x40 );
