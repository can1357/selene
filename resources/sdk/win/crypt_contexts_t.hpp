#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crypt_contexts_t.start.hpp"
namespace win
{
    // [struct _CRYPT_CONTEXTS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_contexts_t           
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                            
        _m00 uint32_t  c_contexts;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cContexts
        _m01 wchar_t** rgpsz_contexts;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .rgpszContexts
                                      
        SDK_MAGIC_PROPERTIES( "_CRYPT_CONTEXTS.$", 0x10, true, 0xae9253c9a0bfbb9 );               
        SDK_FIXED_SIZE( crypt_contexts_t, 0x10 );               
    };                                
};
#include "magic/crypt_contexts_t.end.hpp"
SDK_VERIFY( struct win::crypt_contexts_t, 0x10 );
