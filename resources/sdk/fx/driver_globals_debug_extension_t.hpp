#pragma once
#include <sdkgen/support_library.hpp>
#include "../mx/lock_t.hpp"
#include "allocated_mdls_t.hpp"
#include "track_power_option_t.hpp"
#include "state_separation_detection_option_t.hpp"

#include "magic/driver_globals_debug_extension_t.start.hpp"
namespace fx
{
    struct object_debug_info_t;

    // [struct FxDriverGlobalsDebugExtension]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct driver_globals_debug_extension_t                                                
    {                                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                                                 
        _m00 struct fx::object_debug_info_t*              object_debug_info;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ObjectDebugInfo
        _m01 struct fx::allocated_mdls_t                  allocated_mdls;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AllocatedMdls
        _m02 uint64_t                                     allocated_mdls_lock;               //{ +0x0198    +0x0198    +0x0198    +0x0198    } | .AllocatedMdlsLock
        _m03 nt::list_entry_t                             allocated_tag_trackers_list_head;  //{ +0x01a0    +0x01a0    +0x01a0    +0x01a0    } | .AllocatedTagTrackersListHead
        _m04 class mx::lock_t                             allocated_tag_trackers_lock;       //{ +0x01b0    +0x01b0    +0x01b0    +0x01b0    } | .AllocatedTagTrackersLock
        _m05 enum fx::track_power_option_t                track_power;                       //{ +0x01c0    +0x01c0    +0x01c0    +0x01c0    } | .TrackPower
                                                                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                                                                 
        _m06 enum fx::state_separation_detection_option_t state_separation_detection;        //{ +0x01c4    +0x01c4    +0x01c4    } | .StateSeparationDetection
                                                                                           
        SDK_MAGIC_PROPERTIES( "FxDriverGlobalsDebugExtension.$", 0x1c8, true, 0x35c7cbfcd7b45594 );                                 
        SDK_FIXED_SIZE( driver_globals_debug_extension_t, 0x1c8 );                                 
    };                                                                                     
};
#include "magic/driver_globals_debug_extension_t.end.hpp"
SDK_VERIFY( struct fx::driver_globals_debug_extension_t, 0x1c8 );
