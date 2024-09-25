#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/schannel_alg_t.start.hpp"
namespace win
{
    // [struct _SCHANNEL_ALG]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct schannel_alg_t         
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint32_t dw_use;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwUse
        _m01 uint32_t algid;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Algid
        _m02 uint32_t c_bits;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cBits
        _m03 uint32_t dw_flags;     //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .dwFlags
        _m04 uint32_t dw_reserved;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwReserved
                                  
        SDK_MAGIC_PROPERTIES( "_SCHANNEL_ALG.$", 0x14, true, 0xcde218af76b69b9c );            
        SDK_FIXED_SIZE( schannel_alg_t, 0x14 );            
    };                            
};
#include "magic/schannel_alg_t.end.hpp"
SDK_VERIFY( struct win::schannel_alg_t, 0x14 );
