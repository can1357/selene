#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crypt_context_functions_t.start.hpp"
namespace win
{
    // [struct _CRYPT_CONTEXT_FUNCTIONS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_context_functions_t   
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                             
        _m00 uint32_t  c_functions;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cFunctions
        _m01 wchar_t** rgpsz_functions;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .rgpszFunctions
                                       
        SDK_MAGIC_PROPERTIES( "_CRYPT_CONTEXT_FUNCTIONS.$", 0x10, true, 0x8254a5b86c3c359 );                
        SDK_FIXED_SIZE( crypt_context_functions_t, 0x10 );                
    };                                 
};
#include "magic/crypt_context_functions_t.end.hpp"
SDK_VERIFY( struct win::crypt_context_functions_t, 0x10 );
