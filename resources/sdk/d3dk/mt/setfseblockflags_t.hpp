#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/setfseblockflags_t.start.hpp"
namespace d3dk::mt
{
    // [union _D3DKMT_SETFSEBLOCKFLAGS]
    // => WDK 10 (NV)
    //
    union setfseblockflags_t
    {                       
        // WDK 10           
        //                  
        _m00 uint1_t  block;  //{ +0x0000@0  } | .Block
        _m01 uint32_t value;  //{ +0x0000    } | .Value
                            
        SDK_NONVOL_PROPERTIES( "_D3DKMT_SETFSEBLOCKFLAGS.$", 0x0, false, 0xda854813375380c6 );      
        SDK_FIXED_SIZE( setfseblockflags_t, 0x4 );      
    };                      
};
#include "magic/setfseblockflags_t.end.hpp"
SDK_VERIFY( union d3dk::mt::setfseblockflags_t, 0x4 );
