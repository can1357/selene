#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ssl_f12_extra_cert_chain_policy_status_t.start.hpp"
namespace win
{
    // [struct _SSL_F12_EXTRA_CERT_CHAIN_POLICY_STATUS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ssl_f12_extra_cert_chain_policy_status_t     
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                              
        _m00 uint32_t                 cb_size;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t                 dw_error_level;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwErrorLevel
        _m02 uint32_t                 dw_error_category;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwErrorCategory
        _m03 uint32_t                 dw_reserved;        //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .dwReserved
        _m04 sdk::array<wchar_t, 256> wsz_error_text;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .wszErrorText
                                                        
        SDK_MAGIC_PROPERTIES( "_SSL_F12_EXTRA_CERT_CHAIN_POLICY_STATUS.$", 0x210, true, 0x92e20951df356106 );                  
        SDK_FIXED_SIZE( ssl_f12_extra_cert_chain_policy_status_t, 0x210 );                  
    };                                                  
};
#include "magic/ssl_f12_extra_cert_chain_policy_status_t.end.hpp"
SDK_VERIFY( struct win::ssl_f12_extra_cert_chain_policy_status_t, 0x210 );
