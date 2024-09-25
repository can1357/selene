#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/authenticode_extra_cert_chain_policy_status_t.start.hpp"
namespace win
{
    // [struct _AUTHENTICODE_EXTRA_CERT_CHAIN_POLICY_STATUS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct authenticode_extra_cert_chain_policy_status_t
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint32_t cb_size;                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 int32_t  f_commercial;                       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .fCommercial
                                                        
        SDK_MAGIC_PROPERTIES( "_AUTHENTICODE_EXTRA_CERT_CHAIN_POLICY_STATUS.$", 0x8, true, 0xb9611937425cd88a );             
        SDK_FIXED_SIZE( authenticode_extra_cert_chain_policy_status_t, 0x8 );             
    };                                                  
};
#include "magic/authenticode_extra_cert_chain_policy_status_t.end.hpp"
SDK_VERIFY( struct win::authenticode_extra_cert_chain_policy_status_t, 0x8 );
