#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _KOBJECTS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class kobjects_t : int32_t             
    {                                           
        event_notification_object =     0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_synchronization_object =  0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mutant_object =                 0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_object =                0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        queue_object =                  0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        semaphore_object =              0x5,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_object =                 0x6,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        gate_object =                   0x7,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer_notification_object =     0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer_synchronization_object =  0x9,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        spare2_object =                 0xa,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        spare3_object =                 0xb,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        spare4_object =                 0xc,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        spare5_object =                 0xd,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        spare6_object =                 0xe,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        spare7_object =                 0xf,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        spare8_object =                 0x10,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        profile_callback_object =       0x11,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        apc_object =                    0x12,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dpc_object =                    0x13,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_queue_object =           0x14,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pri_queue_object =              0x15,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        interrupt_object =              0x16,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        profile_object =                0x17,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer2_notification_object =    0x18,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer2_synchronization_object = 0x19,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        threaded_dpc_object =           0x1a,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum_kernel_object =         0x1b,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
