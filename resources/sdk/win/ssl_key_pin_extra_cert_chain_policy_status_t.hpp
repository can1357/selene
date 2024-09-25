#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ssl_key_pin_extra_cert_chain_policy_status_t.start.hpp"
namespace win
{
    // [struct _SSL_KEY_PIN_EXTRA_CERT_CHAIN_POLICY_STATUS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ssl_key_pin_extra_cert_chain_policy_status_t
    {                                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                           
        _m00 uint32_t                 cb_size;           //{ +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 int32_t                  l_error;           //{ +0x0004    +0x0004    +0x0004    } | .lError
        _m02 sdk::array<wchar_t, 512> wsz_error_text;    //{ +0x0008    +0x0008    +0x0008    } | .wszErrorText
                                                       
        SDK_MAGIC_PROPERTIES( "_SSL_KEY_PIN_EXTRA_CERT_CHAIN_POLICY_STATUS.$", 0x408, true, 0x19bcd94c9598bcb6 );               
        SDK_FIXED_SIZE( ssl_key_pin_extra_cert_chain_policy_status_t, 0x408 );               
    };                                                 
};
#include "magic/ssl_key_pin_extra_cert_chain_policy_status_t.end.hpp"
SDK_VERIFY( struct win::ssl_key_pin_extra_cert_chain_policy_status_t, 0x408 );
