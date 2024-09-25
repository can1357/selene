#pragma once
#include <sdkgen/support_library.hpp>

namespace pop
{
    // [enum _POP_PEP_NOTIFY_DEVICE_DSTATE_REASON]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class pep_notify_device_dstate_reason_t : int32_t
    {                                                     
        none =              0x0,                            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_transition = 0x1,                            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        dfx =               0x2,                            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =               0x3,                            // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                    
};
