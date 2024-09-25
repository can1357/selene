#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/olestreamvtbl_t.start.hpp"
namespace win
{
    struct olestream_t;

    // [struct _OLESTREAMVTBL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct olestreamvtbl_t
    {                     
        using get_t = sdk::function<uint32_t(struct win::olestream_t*, void*, uint32_t)>*;    
        using put_t = sdk::function<uint32_t(struct win::olestream_t*, const void*, uint32_t)>*;    
                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2    
        //              
        _m00 get_t  get;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Get
        _m01 put_t  put;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Put
                          
        SDK_MAGIC_PROPERTIES( "_OLESTREAMVTBL.$", 0x10, true, 0x1cd041c2c1cad9f3 );    
        SDK_FIXED_SIZE( olestreamvtbl_t, 0x10 );    
    };                    
};
#include "magic/olestreamvtbl_t.end.hpp"
SDK_VERIFY( struct win::olestreamvtbl_t, 0x10 );
