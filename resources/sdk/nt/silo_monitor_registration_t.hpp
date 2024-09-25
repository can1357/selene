#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/silo_monitor_registration_t.start.hpp"
namespace nt
{
    struct ejob_t;

    // [struct _SILO_MONITOR_REGISTRATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct silo_monitor_registration_t                                          
    {                                                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                      
        _m00 uint8_t                                     version;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint8_t                                     monitor_host;            //{ +0x0001    +0x0001    +0x0001    +0x0001    +0x0001    } | .MonitorHost
        _m02 uint8_t                                     monitor_existing_silos;  //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .MonitorExistingSilos
        _m03 nt::unicode_view*                           driver_object_name;      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .DriverObjectName
        _m04 nt::unicode_view*                           component_name;          //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ComponentName
        _m05 sdk::function<int32_t(struct nt::ejob_t*)>* create_callback;         //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .CreateCallback
        _m06 sdk::function<void(struct nt::ejob_t*)>*    terminate_callback;      //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .TerminateCallback
                                                                                
        SDK_NONVOL_PROPERTIES( "_SILO_MONITOR_REGISTRATION.$", 0x20, true, 0xb9a06464126468fe );                       
        SDK_FIXED_SIZE( silo_monitor_registration_t, 0x20 );                       
    };                                                                          
};
#include "magic/silo_monitor_registration_t.end.hpp"
SDK_VERIFY( struct nt::silo_monitor_registration_t, 0x20 );
