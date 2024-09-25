#pragma once
#include <sdkgen/support_library.hpp>
#include "../d3dk/mdt/vidpn_source_mode_t.hpp"
#include "vidpnpathandtargetmode_serialization_t.hpp"

#include "magic/vidpnpathsfromsource_serialization_t.start.hpp"
namespace dmm
{
    // [struct _DMM_VIDPNPATHSFROMSOURCE_SERIALIZATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct vidpnpathsfromsource_serialization_t                                       
    {                                                                                 
        using path_and_target_mode_serialization_t = sdk::array<struct dmm::vidpnpathandtargetmode_serialization_t, 1>;                                   
                                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                                                            
        _m00 struct d3dk::mdt::vidpn_source_mode_t source_mode;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SourceMode
        _m01 uint8_t                               num_paths_from_source;               //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .NumPathsFromSource
        _m02 path_and_target_mode_serialization_t  path_and_target_mode_serialization;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .PathAndTargetModeSerialization
                                                                                      
        SDK_MAGIC_PROPERTIES( "_DMM_VIDPNPATHSFROMSOURCE_SERIALIZATION.$", 0x1e0, true, 0x60f7048fff89b38b );                                   
        SDK_DYNAMIC_SIZE( vidpnpathsfromsource_serialization_t );                                   
    };                                                                                
};
#include "magic/vidpnpathsfromsource_serialization_t.end.hpp"
