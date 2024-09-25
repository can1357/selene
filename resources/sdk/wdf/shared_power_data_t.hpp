#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct irp_t; }

#include "magic/shared_power_data_t.start.hpp"
namespace wdf
{
    // [struct SharedPowerData]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct shared_power_data_t                          
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                              
        _m00 struct nt::irp_t* m_wait_wake_irp;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_WaitWakeIrp
        _m01 uint8_t           m_wait_wake_owner;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_WaitWakeOwner
        _m02 uint8_t           m_extend_watch_dog_timer;  //{ +0x0009    +0x0009    +0x0009    +0x0009    } | .m_ExtendWatchDogTimer
                                                        
        SDK_MAGIC_PROPERTIES( "SharedPowerData.$", 0x10, true, 0x94cf9b5f0f9f2e30 );                         
        SDK_FIXED_SIZE( shared_power_data_t, 0x10 );                         
    };                                                  
};
#include "magic/shared_power_data_t.end.hpp"
SDK_VERIFY( struct wdf::shared_power_data_t, 0x10 );
