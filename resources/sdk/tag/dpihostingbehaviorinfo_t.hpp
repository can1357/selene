#pragma once
#include <sdkgen/support_library.hpp>
#include "../kuser/dpi_hosting_behavior_t.hpp"

#include "magic/dpihostingbehaviorinfo_t.start.hpp"
namespace tag
{
    // [struct tagDPIHOSTINGBEHAVIORINFO]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dpihostingbehaviorinfo_t                                  
    {                                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                           
        _m00 enum kuser::dpi_hosting_behavior_t dpi_hosting_behavior;  //{ +0x0000    +0x0000    +0x0000    } | .dpiHostingBehavior
        _m01 uint32_t                           f_dirty;               //{ +0x0004    +0x0004    +0x0004    } | .fDirty
                                                                     
        SDK_MAGIC_PROPERTIES( "tagDPIHOSTINGBEHAVIORINFO.$", 0x8, true, 0xa315598089e38aa6 );                     
        SDK_FIXED_SIZE( dpihostingbehaviorinfo_t, 0x8 );                     
    };                                                               
};
#include "magic/dpihostingbehaviorinfo_t.end.hpp"
SDK_VERIFY( struct tag::dpihostingbehaviorinfo_t, 0x8 );
