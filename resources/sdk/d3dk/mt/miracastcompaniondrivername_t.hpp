#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/miracastcompaniondrivername_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_MIRACASTCOMPANIONDRIVERNAME]
    // => WDK 10 (NV)
    //
    struct miracastcompaniondrivername_t                             
    {                                                                
        // WDK 10                                                    
        //                                                           
        _m00 sdk::array<wchar_t, 260> miracast_companion_driver_name;  //{ +0x0000    } | .MiracastCompanionDriverName
                                                                     
        SDK_NONVOL_PROPERTIES( "_D3DKMT_MIRACASTCOMPANIONDRIVERNAME.$", 0x0, false, 0x5b2492490466bab4 );                               
        SDK_FIXED_SIZE( miracastcompaniondrivername_t, 0x208 );                               
    };                                                               
};
#include "magic/miracastcompaniondrivername_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::miracastcompaniondrivername_t, 0x208 );
