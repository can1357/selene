#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum _IRQ_DEVICE_POLICY_USHORT]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class irq_device_policy_ushort_t : int32_t     
    {                                                   
        machine_default =                        0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        all_close_processors =                   0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        one_close_processor =                    0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        all_processors_in_group =                0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        all_processors_in_machine =              0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        specified_processors =                   0x4,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        spread_messages_across_all_processors =  0x5,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        all_processors_in_group_when_steered =   0x6,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        all_processors_in_machine_when_steered = 0x6,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                  
};
