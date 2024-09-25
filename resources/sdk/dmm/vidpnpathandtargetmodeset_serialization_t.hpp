#pragma once
#include <sdkgen/support_library.hpp>
#include "../d3dk/mdt/vidpn_present_path_t.hpp"
#include "vidpntargetmodeset_serialization_t.hpp"

#include "magic/vidpnpathandtargetmodeset_serialization_t.start.hpp"
namespace dmm
{
    // [struct _DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct vidpnpathandtargetmodeset_serialization_t                        
    {                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                                  
        _m00 struct d3dk::mdt::vidpn_present_path_t         path_info;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PathInfo
        _m01 struct dmm::vidpntargetmodeset_serialization_t target_mode_set;  //{ +0x0168    +0x0168    +0x0168    +0x0168    } | .TargetModeSet
                                                                            
        SDK_MAGIC_PROPERTIES( "_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION.$", 0x1b8, true, 0xaae9b24b275c5e0 );                
        SDK_DYNAMIC_SIZE( vidpnpathandtargetmodeset_serialization_t );                
    };                                                                      
};
#include "magic/vidpnpathandtargetmodeset_serialization_t.end.hpp"
