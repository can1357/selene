#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/setpointerpositionflags_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_SETPOINTERPOSITIONFLAGS]
    // => WDK 10 (NV)
    //
    struct setpointerpositionflags_t
    {                               
        // WDK 10                
        //                       
        _m00 uint1_t  visible;        //{ +0x0000@0  } | .Visible
        _m01 uint1_t  procedural;     //{ +0x0000@1  } | .Procedural
        _m02 uint32_t value;          //{ +0x0000    } | .Value
                                    
        SDK_NONVOL_PROPERTIES( "_DXGK_SETPOINTERPOSITIONFLAGS.$", 0x0, false, 0x98ca23f0c65638a3 );           
        SDK_FIXED_SIZE( setpointerpositionflags_t, 0x4 );           
    };                              
};
#include "magic/setpointerpositionflags_t.end.hpp"
SDK_VERIFY( struct dxgk::setpointerpositionflags_t, 0x4 );
