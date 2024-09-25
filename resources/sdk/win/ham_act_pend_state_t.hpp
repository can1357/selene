#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _HAM_ACT_PEND_STATE]
    //  Windows 11
    //
    enum class ham_act_pend_state_t : int32_t
    {                                        
        first =             0x0,               // Windows 11
        resources =         0x0,               // Windows 11
        host_optimization = 0x1,               // Windows 11
        license =           0x2,               // Windows 11
        host_state =        0x3,               // Windows 11
        host_terminating =  0x4,               // Windows 11
        configure_host =    0x5,               // Windows 11
        count =             0x6,               // Windows 11
    };                                       
};
