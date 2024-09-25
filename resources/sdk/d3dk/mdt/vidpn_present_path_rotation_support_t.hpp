#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/vidpn_present_path_rotation_support_t.start.hpp"
namespace d3dk::mdt
{
    // [struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct vidpn_present_path_rotation_support_t
    {                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                     
        _m00 uint1_t identity;                    //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Identity
        _m01 uint1_t rotate90;                    //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .Rotate90
        _m02 uint1_t rotate180;                   //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .Rotate180
        _m03 uint1_t rotate270;                   //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .Rotate270
        _m04 uint1_t offset0;                     //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .Offset0
        _m05 uint1_t offset90;                    //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .Offset90
        _m06 uint1_t offset180;                   //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .Offset180
        _m07 uint1_t offset270;                   //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .Offset270
                                                
        SDK_NONVOL_PROPERTIES( "_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT.$", 0x4, true, 0xa26bc7ab12f7423e );          
        SDK_FIXED_SIZE( vidpn_present_path_rotation_support_t, 0x4 );          
    };                                          
};
#include "magic/vidpn_present_path_rotation_support_t.end.hpp"
SDK_VERIFY( struct d3dk::mdt::vidpn_present_path_rotation_support_t, 0x4 );
