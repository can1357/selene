#pragma once
#include <sdkgen/support_library.hpp>
#include "../monitorlinkinfo_t.hpp"

#include "magic/updatemonitorlinkinfo_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_UPDATEMONITORLINKINFO]
    // => WDK 10 (NV)
    //
    struct updatemonitorlinkinfo_t                                  
    {                                                               
        // WDK 10                                                   
        //                                                          
        _m00 uint32_t                       video_present_target_id;  //{ +0x0000    } | .VideoPresentTargetId
        _m01 struct dxgk::monitorlinkinfo_t monitor_link_info;        //{ +0x0004    } | .MonitorLinkInfo
                                                                    
        SDK_NONVOL_PROPERTIES( "_DXGKARG_UPDATEMONITORLINKINFO.$", 0x0, false, 0xfd8e2c97cbd3e465 );                        
        SDK_FIXED_SIZE( updatemonitorlinkinfo_t, 0x10 );                        
    };                                                              
};
#include "magic/updatemonitorlinkinfo_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::updatemonitorlinkinfo_t, 0x10 );
