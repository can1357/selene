#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "../nt/system_power_state_t.hpp"

#include "magic/miniport_syspower_notify_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_MINIPORT_SYSPOWER_NOTIFY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct miniport_syspower_notify_t                             
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                        
        _m00 struct ndis::object_header_t  header;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 enum nt::system_power_state_t target_system_state;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .TargetSystemState
        _m02 enum nt::system_power_state_t effective_system_state;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .EffectiveSystemState
                                                                  
        SDK_MAGIC_PROPERTIES( "_NDIS_MINIPORT_SYSPOWER_NOTIFY.$", 0xc, true, 0x77030043f0abeb41 );                       
        SDK_FIXED_SIZE( miniport_syspower_notify_t, 0xc );                       
    };                                                            
};
#include "magic/miniport_syspower_notify_t.end.hpp"
SDK_VERIFY( struct ndis::miniport_syspower_notify_t, 0xc );
