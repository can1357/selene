#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/transfervirtualflags_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_TRANSFERVIRTUALFLAGS]
    // => WDK 10 (NV)
    //
    struct transfervirtualflags_t   
    {                               
        // WDK 10                   
        //                          
        _m00 uint1_t  src64kb_pages;  //{ +0x0000@0  } | .Src64KBPages
        _m01 uint1_t  dst64kb_pages;  //{ +0x0000@1  } | .Dst64KBPages
        _m02 uint32_t flags;          //{ +0x0000    } | .Flags
                                    
        SDK_NONVOL_PROPERTIES( "_DXGK_TRANSFERVIRTUALFLAGS.$", 0x0, false, 0xa7275981288dc3a9 );              
        SDK_FIXED_SIZE( transfervirtualflags_t, 0x4 );              
    };                              
};
#include "magic/transfervirtualflags_t.end.hpp"
SDK_VERIFY( struct dxgk::transfervirtualflags_t, 0x4 );
