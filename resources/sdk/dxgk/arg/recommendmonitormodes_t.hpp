#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mdt { struct hmonitorsourcemodeset_t;          }
namespace dxgk      { struct monitorsourcemodeset_interface_t; }

#include "magic/recommendmonitormodes_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_RECOMMENDMONITORMODES]
    // => WDK 10 (NV)
    //
    struct recommendmonitormodes_t                                                          
    {                                                                                       
        using p_monitor_source_mode_set_interface_t = const struct dxgk::monitorsourcemodeset_interface_t*;                                    
                                                                                            
        // WDK 10                                                                           
        //                                                                                  
        _m00 uint32_t                                   video_present_target_id;              //{ +0x0000    } | .VideoPresentTargetId
        _m01 struct d3dk::mdt::hmonitorsourcemodeset_t* h_monitor_source_mode_set;            //{ +0x0008    } | .hMonitorSourceModeSet
        _m02 p_monitor_source_mode_set_interface_t      p_monitor_source_mode_set_interface;  //{ +0x0010    } | .pMonitorSourceModeSetInterface
                                                                                            
        SDK_NONVOL_PROPERTIES( "_DXGKARG_RECOMMENDMONITORMODES.$", 0x0, false, 0x67153a8992db4a1d );                                    
        SDK_FIXED_SIZE( recommendmonitormodes_t, 0x18 );                                    
    };                                                                                      
};
#include "magic/recommendmonitormodes_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::recommendmonitormodes_t, 0x18 );
