#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/color_coeff_dynamic_ranges_t.start.hpp"
namespace d3dk::mdt
{
    // [struct _D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct color_coeff_dynamic_ranges_t
    {                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint32_t first_channel;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .FirstChannel
        _m01 uint32_t second_channel;    //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .SecondChannel
        _m02 uint32_t third_channel;     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ThirdChannel
        _m03 uint32_t fourth_channel;    //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .FourthChannel
                                       
        SDK_NONVOL_PROPERTIES( "_D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES.$", 0x10, true, 0x2c1c29bdd55b78b0 );               
        SDK_FIXED_SIZE( color_coeff_dynamic_ranges_t, 0x10 );               
    };                                 
};
#include "magic/color_coeff_dynamic_ranges_t.end.hpp"
SDK_VERIFY( struct d3dk::mdt::color_coeff_dynamic_ranges_t, 0x10 );
