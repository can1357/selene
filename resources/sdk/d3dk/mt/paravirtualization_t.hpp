#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/paravirtualization_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_PARAVIRTUALIZATION]
    // => WDK 10 (NV)
    //
    struct paravirtualization_t       
    {                                 
        // WDK 10                     
        //                            
        _m00 uint8_t secure_container;  //{ +0x0000    } | .SecureContainer
                                      
        SDK_NONVOL_PROPERTIES( "_D3DKMT_PARAVIRTUALIZATION.$", 0x0, false, 0x978e0a2326885704 );                 
        SDK_FIXED_SIZE( paravirtualization_t, 0x1 );                 
    };                                
};
#include "magic/paravirtualization_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::paravirtualization_t, 0x1 );
