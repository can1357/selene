#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/vidpn_present_path_scaling_support_t.start.hpp"
namespace d3dk::mdt
{
    // [struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct vidpn_present_path_scaling_support_t
    {                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                     
        _m00 uint1_t identity;                   //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Identity
        _m01 uint1_t centered;                   //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .Centered
        _m02 uint1_t stretched;                  //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .Stretched
        _m03 uint1_t aspect_ratio_centered_max;  //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .AspectRatioCenteredMax
        _m04 uint1_t custom;                     //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .Custom
                                               
        SDK_NONVOL_PROPERTIES( "_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT.$", 0x4, true, 0xec8f708c15fa0355 );                          
        SDK_FIXED_SIZE( vidpn_present_path_scaling_support_t, 0x4 );                          
    };                                         
};
#include "magic/vidpn_present_path_scaling_support_t.end.hpp"
SDK_VERIFY( struct d3dk::mdt::vidpn_present_path_scaling_support_t, 0x4 );
