#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/createhwcontextflags_t.start.hpp"
namespace d3d::ddi
{
    // [struct _D3DDDI_CREATEHWCONTEXTFLAGS]
    // => WDK 10 (NV)
    //
    struct createhwcontextflags_t
    {                            
        // WDK 10           
        //                  
        _m00 uint32_t value;       //{ +0x0000    } | .Value
                                 
        SDK_NONVOL_PROPERTIES( "_D3DDDI_CREATEHWCONTEXTFLAGS.$", 0x0, false, 0x125a21d81f314aee );      
        SDK_FIXED_SIZE( createhwcontextflags_t, 0x4 );      
    };                           
};
#include "magic/createhwcontextflags_t.end.hpp"
SDK_VERIFY( struct d3d::ddi::createhwcontextflags_t, 0x4 );
