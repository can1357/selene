#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/patchflags_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_PATCHFLAGS]
    // => WDK 10 (NV)
    //
    struct patchflags_t                  
    {                                    
        // WDK 10                        
        //                               
        _m00 uint1_t  paging;              //{ +0x0000@0  } | .Paging
        _m01 uint1_t  present;             //{ +0x0000@1  } | .Present
        _m02 uint1_t  redirected_present;  //{ +0x0000@2  } | .RedirectedPresent
        _m03 uint1_t  null_rendering;      //{ +0x0000@3  } | .NullRendering
        _m04 uint32_t value;               //{ +0x0000    } | .Value
                                         
        SDK_NONVOL_PROPERTIES( "_DXGK_PATCHFLAGS.$", 0x0, false, 0xd57bc3087a939bee );                   
        SDK_FIXED_SIZE( patchflags_t, 0x4 );                   
    };                                   
};
#include "magic/patchflags_t.end.hpp"
SDK_VERIFY( struct dxgk::patchflags_t, 0x4 );
