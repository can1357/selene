#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/makeresident_flags_t.start.hpp"
namespace d3d::ddi
{
    // [struct D3DDDI_MAKERESIDENT_FLAGS]
    // => WDK 10 (NV)
    //
    struct makeresident_flags_t         
    {                                   
        // WDK 10                       
        //                              
        _m00 uint1_t  cant_trim_further;  //{ +0x0000@0  } | .CantTrimFurther
        _m01 uint1_t  must_succeed;       //{ +0x0000@1  } | .MustSucceed
        _m02 uint32_t value;              //{ +0x0000    } | .Value
                                        
        SDK_NONVOL_PROPERTIES( "D3DDDI_MAKERESIDENT_FLAGS.$", 0x0, false, 0xf58d335c7fa9460a );                  
        SDK_FIXED_SIZE( makeresident_flags_t, 0x4 );                  
    };                                  
};
#include "magic/makeresident_flags_t.end.hpp"
SDK_VERIFY( struct d3d::ddi::makeresident_flags_t, 0x4 );
