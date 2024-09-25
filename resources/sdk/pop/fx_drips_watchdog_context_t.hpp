#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct device_node_t; }

#include "magic/fx_drips_watchdog_context_t.start.hpp"
namespace pop
{
    // [struct _POP_FX_DRIPS_WATCHDOG_CONTEXT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fx_drips_watchdog_context_t                     
    {                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                 
        _m00 nt::list_entry_t           link;                //{ +0x0000    +0x0000    +0x0000    } | .Link
        _m01 uint32_t                   component_index;     //{ +0x0010    +0x0010    +0x0010    } | .ComponentIndex
        _m02 struct nt::device_node_t** child_devices;       //{ +0x0018    +0x0018    +0x0018    } | .ChildDevices
        _m03 uint32_t                   child_device_count;  //{ +0x0020    +0x0020    +0x0020    } | .ChildDeviceCount
                                                           
        SDK_MAGIC_PROPERTIES( "_POP_FX_DRIPS_WATCHDOG_CONTEXT.$", 0x28, true, 0x9b2ddb80ba61ba8b );                   
        SDK_FIXED_SIZE( fx_drips_watchdog_context_t, 0x28 );                   
    };                                                     
};
#include "magic/fx_drips_watchdog_context_t.end.hpp"
SDK_VERIFY( struct pop::fx_drips_watchdog_context_t, 0x28 );
