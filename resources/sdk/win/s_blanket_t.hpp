#pragma once
#include <sdkgen/support_library.hpp>
#include "schannel_cred_t.hpp"
#include "../rpc/security_qos_v5_w_t.hpp"

#include "magic/s_blanket_t.start.hpp"
namespace win
{
    struct cert_context_t;

    // [struct SBlanket]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct s_blanket_t                                             
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                         
        _m00 sdk::variant<wchar_t*, const wchar_t*> p_principal;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._pPrincipal
        _m01 uint32_t                               l_authn_level;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._lAuthnLevel
        _m02 uint32_t                               l_authn_svc;     //{ +0x000c    +0x000c    +0x000c    +0x000c    } | ._lAuthnSvc
        _m03 void*                                  p_auth_id;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._pAuthId
        _m04 uint32_t                               l_authz_svc;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._lAuthzSvc
        _m05 struct rpc::security_qos_v5_w_t        s_qos;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | ._sQos
        _m06 uint32_t                               l_capabilities;  //{ +0x0058    +0x0058    +0x0058    +0x0058    } | ._lCapabilities
        _m07 struct win::schannel_cred_t            s_cred;          //{ +0x0060    +0x0060    +0x0060    +0x0060    } | ._sCred
        _m08 const struct win::cert_context_t*      p_cert;          //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | ._pCert
                                                                   
        SDK_MAGIC_PROPERTIES( "SBlanket.$", 0xb8, true, 0x9af804c6b6464b1d );               
        SDK_FIXED_SIZE( s_blanket_t, 0xb8 );                       
    };                                                             
};
#include "magic/s_blanket_t.end.hpp"
SDK_VERIFY( struct win::s_blanket_t, 0xb8 );
