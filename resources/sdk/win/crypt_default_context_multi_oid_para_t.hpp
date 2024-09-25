#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crypt_default_context_multi_oid_para_t.start.hpp"
namespace win
{
    // [struct _CRYPT_DEFAULT_CONTEXT_MULTI_OID_PARA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_default_context_multi_oid_para_t
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint32_t c_oid;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cOID
        _m01 char**   rgpsz_oid;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .rgpszOID
                                                 
        SDK_MAGIC_PROPERTIES( "_CRYPT_DEFAULT_CONTEXT_MULTI_OID_PARA.$", 0x10, true, 0x1595ff686eb5a586 );          
        SDK_FIXED_SIZE( crypt_default_context_multi_oid_para_t, 0x10 );          
    };                                           
};
#include "magic/crypt_default_context_multi_oid_para_t.end.hpp"
SDK_VERIFY( struct win::crypt_default_context_multi_oid_para_t, 0x10 );
