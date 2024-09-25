#pragma once
#include <sdkgen/support_library.hpp>
#include "mode_preference_t.hpp"
#include "video_signal_info_t.hpp"
#include "../../d3d/ddi/rational_t.hpp"
#include "wire_format_and_preference_t.hpp"

#include "magic/vidpn_target_mode_t.start.hpp"
namespace d3dk::mdt
{
    // [struct _D3DKMDT_VIDPN_TARGET_MODE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct vidpn_target_mode_t                                                        
    {                                                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                            
        _m00 uint32_t                                      id;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Id
        _m01 struct d3dk::mdt::video_signal_info_t         video_signal_info;           //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .VideoSignalInfo
        _m02 varint_t                                      preference;                  //{ +0x0040@0  +0x0040    +0x0040@0  +0x0040@0  +0x0040@0  } | .Preference
                                                                                      
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                            
        _m03 union d3dk::mdt::wire_format_and_preference_t wire_format_and_preference;  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .WireFormatAndPreference
                                                                                      
        // Windows 11                                                                 
        //                                                                            
        _m04 struct d3d::ddi::rational_t                   minimum_v_sync_freq;         //{ +0x0044    } | .MinimumVSyncFreq
                                                                                      
        SDK_NONVOL_PROPERTIES( "_D3DKMDT_VIDPN_TARGET_MODE.$", 0x48, true, 0x3be56b380daf114b );                           
        SDK_DYNAMIC_SIZE( vidpn_target_mode_t );                                      
    };                                                                                
};
#include "magic/vidpn_target_mode_t.end.hpp"
