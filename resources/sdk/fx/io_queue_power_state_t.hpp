#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxIoQueuePowerState]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class io_queue_power_state_t : int32_t
    {                                          
        invalid =                     0x0,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        on =                          0x1,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        off =                         0x2,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        starting_transition =         0x3,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stopping =                    0x4,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stopping_notifying_driver =   0x5,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stopping_driver_notified =    0x6,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        purge =                       0x7,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        purge_notifying_driver =      0x8,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        purge_driver_notified =       0x9,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        restarting =                  0xa,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        restarting_notifying_driver = 0xb,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        restarting_driver_notified =  0xc,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        last =                        0xd,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
