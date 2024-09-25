#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crypt_context_config_t.start.hpp"
namespace win
{
    // [struct _CRYPT_CONTEXT_CONFIG]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_context_config_t 
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint32_t dw_flags;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwFlags
        _m01 uint32_t dw_reserved;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwReserved
                                  
        SDK_MAGIC_PROPERTIES( "_CRYPT_CONTEXT_CONFIG.$", 0x8, true, 0x1faeaeaad27c8822 );            
        SDK_FIXED_SIZE( crypt_context_config_t, 0x8 );            
    };                            
};
#include "magic/crypt_context_config_t.end.hpp"
SDK_VERIFY( struct win::crypt_context_config_t, 0x8 );
