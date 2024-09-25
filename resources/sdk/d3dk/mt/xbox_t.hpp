#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/xbox_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_XBOX]
    // => WDK 10 (NV)
    //
    struct xbox_t            
    {                        
        // WDK 10            
        //                   
        _m00 int32_t is_xbox;  //{ +0x0000    } | .IsXBOX
                             
        SDK_NONVOL_PROPERTIES( "_D3DKMT_XBOX.$", 0x0, false, 0xd6c0008f808f1d5d );        
        SDK_FIXED_SIZE( xbox_t, 0x4 );        
    };                       
};
#include "magic/xbox_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::xbox_t, 0x4 );
