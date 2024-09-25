#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rsapubkey_t.start.hpp"
namespace win
{
    // [struct _RSAPUBKEY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rsapubkey_t       
    {                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                   
        _m00 uint32_t magic;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .magic
        _m01 uint32_t bitlen;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .bitlen
        _m02 uint32_t pubexp;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pubexp
                             
        SDK_MAGIC_PROPERTIES( "_RSAPUBKEY.$", 0xc, true, 0x9b47dffdf01c1ae6 );       
        SDK_FIXED_SIZE( rsapubkey_t, 0xc );       
    };                       
};
#include "magic/rsapubkey_t.end.hpp"
SDK_VERIFY( struct win::rsapubkey_t, 0xc );
