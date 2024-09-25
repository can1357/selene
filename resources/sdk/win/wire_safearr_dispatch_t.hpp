#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wire_safearr_dispatch_t.start.hpp"
namespace win
{
    struct i_dispatch_t;

    // [struct _wireSAFEARR_DISPATCH]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wire_safearr_dispatch_t                  
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                          
        _m00 uint32_t                   size;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 struct win::i_dispatch_t** ap_dispatch;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .apDispatch
                                                    
        SDK_MAGIC_PROPERTIES( "_wireSAFEARR_DISPATCH.$", 0x10, true, 0xef8955bd66b2f65b );            
        SDK_FIXED_SIZE( wire_safearr_dispatch_t, 0x10 );            
    };                                              
};
#include "magic/wire_safearr_dispatch_t.end.hpp"
SDK_VERIFY( struct win::wire_safearr_dispatch_t, 0x10 );
