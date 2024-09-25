#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/gdisurfaceflags_t.start.hpp"
namespace d3dk::mdt
{
    // [struct _D3DKMDT_GDISURFACEFLAGS]
    // => WDK 10 (NV)
    //
    struct gdisurfaceflags_t
    {                       
        // WDK 10           
        //                  
        _m00 uint32_t value;  //{ +0x0000    } | .Value
                            
        SDK_NONVOL_PROPERTIES( "_D3DKMDT_GDISURFACEFLAGS.$", 0x0, false, 0xbaa8a974166db26 );      
        SDK_FIXED_SIZE( gdisurfaceflags_t, 0x4 );      
    };                      
};
#include "magic/gdisurfaceflags_t.end.hpp"
SDK_VERIFY( struct d3dk::mdt::gdisurfaceflags_t, 0x4 );
