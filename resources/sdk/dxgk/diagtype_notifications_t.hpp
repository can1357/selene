#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/diagtype_notifications_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_DIAGTYPE_NOTIFICATIONS]
    // => WDK 10 (NV)
    //
    struct diagtype_notifications_t               
    {                                             
        // WDK 10                                 
        //                                        
        _m00 uint1_t  panel_self_refresh_software;  //{ +0x0000@0  } | .PanelSelfRefreshSoftware
        _m01 uint1_t  panel_self_refresh_hardware;  //{ +0x0000@1  } | .PanelSelfRefreshHardware
        _m02 uint32_t value;                        //{ +0x0000    } | .Value
                                                  
        SDK_NONVOL_PROPERTIES( "_DXGK_DIAGTYPE_NOTIFICATIONS.$", 0x0, false, 0x717d698390ac4cb4 );                            
        SDK_FIXED_SIZE( diagtype_notifications_t, 0x4 );                            
    };                                            
};
#include "magic/diagtype_notifications_t.end.hpp"
SDK_VERIFY( struct dxgk::diagtype_notifications_t, 0x4 );
