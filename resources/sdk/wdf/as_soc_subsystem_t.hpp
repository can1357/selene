#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/as_soc_subsystem_t.start.hpp"
namespace wdf
{
    // [struct _AsSocSubsystem]
    // => Windows 11
    //
    struct as_soc_subsystem_t             
    {                                     
        // Windows 11                     
        //                                
        _m00 uint32_t subsystem_signature;  //{ +0x0000    } | .SubsystemSignature
        _m01 uint16_t platform_idle_state;  //{ +0x0004    } | .PlatformIdleState
        _m02 uint16_t subsystem_index;      //{ +0x0006    } | .SubsystemIndex
                                          
        SDK_MAGIC_PROPERTIES( "_AsSocSubsystem.$", 0x0, false, 0xcb5f4c0330ed6e5a );                    
        SDK_FIXED_SIZE( as_soc_subsystem_t, 0x10 );                    
    };                                    
};
#include "magic/as_soc_subsystem_t.end.hpp"
SDK_VERIFY( struct wdf::as_soc_subsystem_t, 0x10 );
