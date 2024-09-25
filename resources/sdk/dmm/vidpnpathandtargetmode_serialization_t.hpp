#pragma once
#include <sdkgen/support_library.hpp>
#include "../d3dk/mdt/vidpn_target_mode_t.hpp"
#include "../d3dk/mdt/vidpn_present_path_t.hpp"

#include "magic/vidpnpathandtargetmode_serialization_t.start.hpp"
namespace dmm
{
    // [struct _DMM_VIDPNPATHANDTARGETMODE_SERIALIZATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct vidpnpathandtargetmode_serialization_t               
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                      
        _m00 struct d3dk::mdt::vidpn_present_path_t path_info;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PathInfo
        _m01 struct d3dk::mdt::vidpn_target_mode_t  target_mode;  //{ +0x0168    +0x0168    +0x0168    +0x0168    } | .TargetMode
                                                                
        SDK_MAGIC_PROPERTIES( "_DMM_VIDPNPATHANDTARGETMODE_SERIALIZATION.$", 0x1b0, true, 0xa9fbe499e26db51c );            
        SDK_DYNAMIC_SIZE( vidpnpathandtargetmode_serialization_t );            
    };                                                          
};
#include "magic/vidpnpathandtargetmode_serialization_t.end.hpp"
