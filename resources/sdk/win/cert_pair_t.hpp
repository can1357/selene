#pragma once
#include <sdkgen/support_library.hpp>
#include "cryptoapi_blob_t.hpp"

#include "magic/cert_pair_t.start.hpp"
namespace win
{
    // [struct _CERT_PAIR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_pair_t                            
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                        
        _m00 struct win::cryptoapi_blob_t forward;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Forward
        _m01 struct win::cryptoapi_blob_t reverse;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Reverse
                                                  
        SDK_MAGIC_PROPERTIES( "_CERT_PAIR.$", 0x20, true, 0x3d9ab8c3bc250e2f );        
        SDK_FIXED_SIZE( cert_pair_t, 0x20 );        
    };                                            
};
#include "magic/cert_pair_t.end.hpp"
SDK_VERIFY( struct win::cert_pair_t, 0x20 );
