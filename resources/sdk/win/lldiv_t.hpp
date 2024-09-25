#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/lldiv_t.start.hpp"
namespace win
{
    // [struct _lldiv_t]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct lldiv_t        
    {                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                
        _m00 int64_t quot;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .quot
        _m01 int64_t rem;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .rem
                          
        SDK_MAGIC_PROPERTIES( "_lldiv_t.$", 0x10, true, 0x15ed1ff90fd9bc11 );     
        SDK_FIXED_SIZE( lldiv_t, 0x10 );     
    };                    
};
#include "magic/lldiv_t.end.hpp"
SDK_VERIFY( struct win::lldiv_t, 0x10 );
