#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_ldap_store_opened_para_t.start.hpp"
namespace win
{
    // [struct _CERT_LDAP_STORE_OPENED_PARA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_ldap_store_opened_para_t           
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                         
        _m00 void*          pv_ldap_session_handle;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pvLdapSessionHandle
        _m01 const wchar_t* pwsz_ldap_url;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pwszLdapUrl
                                                   
        SDK_MAGIC_PROPERTIES( "_CERT_LDAP_STORE_OPENED_PARA.$", 0x10, true, 0x9e64ee4a09f187ae );                       
        SDK_FIXED_SIZE( cert_ldap_store_opened_para_t, 0x10 );                       
    };                                             
};
#include "magic/cert_ldap_store_opened_para_t.end.hpp"
SDK_VERIFY( struct win::cert_ldap_store_opened_para_t, 0x10 );
