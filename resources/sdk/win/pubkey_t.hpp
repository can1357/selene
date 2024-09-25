#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pubkey_t.start.hpp"
namespace win
{
    // [struct _PUBKEY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pubkey_t          
    {                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                   
        _m00 uint32_t magic;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .magic
        _m01 uint32_t bitlen;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .bitlen
                             
        SDK_MAGIC_PROPERTIES( "_PUBKEY.$", 0x8, true, 0x41d985b8ec90d9b7 );       
        SDK_FIXED_SIZE( pubkey_t, 0x8 );       
    };                       
};
#include "magic/pubkey_t.end.hpp"
SDK_VERIFY( struct win::pubkey_t, 0x8 );
