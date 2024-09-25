#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_key_context_t.start.hpp"
namespace win
{
    // [struct _CERT_KEY_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_key_context_t       
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint32_t cb_size;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint64_t h_crypt_prov;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hCryptProv
        _m02 uint64_t h_n_crypt_key;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hNCryptKey
        _m03 uint32_t dw_key_spec;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwKeySpec
                                    
        SDK_MAGIC_PROPERTIES( "_CERT_KEY_CONTEXT.$", 0x18, true, 0xd40d4cd57f0a9af5 );              
        SDK_FIXED_SIZE( cert_key_context_t, 0x18 );              
    };                              
};
#include "magic/cert_key_context_t.end.hpp"
SDK_VERIFY( struct win::cert_key_context_t, 0x18 );
