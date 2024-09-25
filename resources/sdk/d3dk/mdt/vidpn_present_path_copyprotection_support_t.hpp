#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/vidpn_present_path_copyprotection_support_t.start.hpp"
namespace d3dk::mdt
{
    // [struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct vidpn_present_path_copyprotection_support_t
    {                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                    
        _m00 uint1_t no_protection;                     //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .NoProtection
        _m01 uint1_t macro_vision_aps_trigger;          //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .MacroVisionApsTrigger
        _m02 uint1_t macro_vision_full;                 //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .MacroVisionFull
                                                      
        SDK_NONVOL_PROPERTIES( "_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT.$", 0x4, true, 0x490dc856125f0a0a );                         
        SDK_FIXED_SIZE( vidpn_present_path_copyprotection_support_t, 0x4 );                         
    };                                                
};
#include "magic/vidpn_present_path_copyprotection_support_t.end.hpp"
SDK_VERIFY( struct d3dk::mdt::vidpn_present_path_copyprotection_support_t, 0x4 );
