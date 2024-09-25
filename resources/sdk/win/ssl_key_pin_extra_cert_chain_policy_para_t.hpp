#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ssl_key_pin_extra_cert_chain_policy_para_t.start.hpp"
namespace win
{
    // [struct _SSL_KEY_PIN_EXTRA_CERT_CHAIN_POLICY_PARA]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ssl_key_pin_extra_cert_chain_policy_para_t
    {                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                   
        _m00 uint32_t       cb_size;                   //{ +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t       dw_reserved;               //{ +0x0004    +0x0004    +0x0004    } | .dwReserved
        _m02 const wchar_t* pwsz_server_name;          //{ +0x0008    +0x0008    +0x0008    } | .pwszServerName
                                                     
        SDK_MAGIC_PROPERTIES( "_SSL_KEY_PIN_EXTRA_CERT_CHAIN_POLICY_PARA.$", 0x10, true, 0x1ac0d46f4ff58e31 );                 
        SDK_FIXED_SIZE( ssl_key_pin_extra_cert_chain_policy_para_t, 0x10 );                 
    };                                               
};
#include "magic/ssl_key_pin_extra_cert_chain_policy_para_t.end.hpp"
SDK_VERIFY( struct win::ssl_key_pin_extra_cert_chain_policy_para_t, 0x10 );
