#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ssl_hpkp_header_extra_cert_chain_policy_para_t.start.hpp"
namespace win
{
    // [struct _SSL_HPKP_HEADER_EXTRA_CERT_CHAIN_POLICY_PARA]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ssl_hpkp_header_extra_cert_chain_policy_para_t
    {                                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                         
        _m00 uint32_t             cb_size;                 //{ +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t             dw_reserved;             //{ +0x0004    +0x0004    +0x0004    } | .dwReserved
        _m02 wchar_t*             pwsz_server_name;        //{ +0x0008    +0x0008    +0x0008    } | .pwszServerName
        _m03 sdk::array<char*, 2> rgpsz_hpkp_value;        //{ +0x0010    +0x0010    +0x0010    } | .rgpszHpkpValue
                                                         
        SDK_MAGIC_PROPERTIES( "_SSL_HPKP_HEADER_EXTRA_CERT_CHAIN_POLICY_PARA.$", 0x20, true, 0x951270cc500b1fac );                 
        SDK_FIXED_SIZE( ssl_hpkp_header_extra_cert_chain_policy_para_t, 0x20 );                 
    };                                                   
};
#include "magic/ssl_hpkp_header_extra_cert_chain_policy_para_t.end.hpp"
SDK_VERIFY( struct win::ssl_hpkp_header_extra_cert_chain_policy_para_t, 0x20 );
