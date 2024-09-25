#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxIoStopProcessingForPowerAction]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class io_stop_processing_for_power_action_t : int32_t
    {                                                         
        hold =              0x1,                                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        purge_managed =     0x2,                                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        purge_non_managed = 0x3,                                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                        
};
