#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/openallocationflags_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_OPENALLOCATIONFLAGS]
    // => WDK 10 (NV)
    //
    struct openallocationflags_t
    {                           
        // WDK 10               
        //                      
        _m00 uint1_t  create;     //{ +0x0000@0  } | .Create
        _m01 uint1_t  read_only;  //{ +0x0000@1  } | .ReadOnly
        _m02 uint32_t value;      //{ +0x0000    } | .Value
                                
        SDK_NONVOL_PROPERTIES( "_DXGK_OPENALLOCATIONFLAGS.$", 0x0, false, 0xce35ff897d2b1629 );          
        SDK_FIXED_SIZE( openallocationflags_t, 0x4 );          
    };                          
};
#include "magic/openallocationflags_t.end.hpp"
SDK_VERIFY( struct dxgk::openallocationflags_t, 0x4 );
