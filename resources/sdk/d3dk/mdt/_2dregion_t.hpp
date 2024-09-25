#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/_2dregion_t.start.hpp"
namespace d3dk::mdt
{
    // [struct _D3DKMDT_2DREGION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct _2dregion_t   
    {                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2   
        //               
        _m00 uint32_t cx;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .cx
        _m01 uint32_t cy;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .cy
                         
        SDK_NONVOL_PROPERTIES( "_D3DKMDT_2DREGION.$", 0x8, true, 0x926cf6bc330c4de7 );   
        SDK_FIXED_SIZE( _2dregion_t, 0x8 );   
    };                   
};
#include "magic/_2dregion_t.end.hpp"
SDK_VERIFY( struct d3dk::mdt::_2dregion_t, 0x8 );
