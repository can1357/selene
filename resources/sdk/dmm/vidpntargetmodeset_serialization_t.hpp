#pragma once
#include <sdkgen/support_library.hpp>
#include "../d3dk/mdt/vidpn_target_mode_t.hpp"

#include "magic/vidpntargetmodeset_serialization_t.start.hpp"
namespace dmm
{
    // [struct _DMM_VIDPNTARGETMODESET_SERIALIZATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct vidpntargetmodeset_serialization_t         
    {                                                 
        using mode_serialization_t = sdk::array<struct d3dk::mdt::vidpn_target_mode_t, 1>;                   
                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                            
        _m00 uint8_t               num_modes;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NumModes
        _m01 mode_serialization_t  mode_serialization;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ModeSerialization
                                                      
        SDK_MAGIC_PROPERTIES( "_DMM_VIDPNTARGETMODESET_SERIALIZATION.$", 0x50, true, 0x9c94da763f5564f7 );                   
        SDK_DYNAMIC_SIZE( vidpntargetmodeset_serialization_t );                   
    };                                                
};
#include "magic/vidpntargetmodeset_serialization_t.end.hpp"
