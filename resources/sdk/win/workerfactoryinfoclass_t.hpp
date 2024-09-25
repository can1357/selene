#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _WORKERFACTORYINFOCLASS]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class workerfactoryinfoclass_t : int32_t     
    {                                                 
        worker_factory_timeout =              0x0,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        worker_factory_retry_timeout =        0x1,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        worker_factory_idle_timeout =         0x2,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        worker_factory_binding_count =        0x3,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        worker_factory_thread_minimum =       0x4,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        worker_factory_thread_maximum =       0x5,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        worker_factory_paused =               0x6,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        worker_factory_basic_information =    0x7,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        worker_factory_adjust_thread_goal =   0x8,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        worker_factory_callback_type =        0x9,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        worker_factory_stack_information =    0xa,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        worker_factory_thread_base_priority = 0xb,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        worker_factory_timeout_waiters =      0xc,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        worker_factory_flags =                0xd,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        worker_factory_thread_soft_maximum =  0xe,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //max_worker_factory_info_class =     0xf,      // Windows 10 v1607
        worker_factory_thread_cpu_sets =      0xf,      // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_worker_factory_info_class =       0x10,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                
};
