#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_SS_BUSY_REASON]
    //  Windows 10 v1607
    //
    enum class ss_busy_reason_t : int32_t
    {                                    
        oid =               0x21,          // Windows 10 v1607
        pause =             0x22,          // Windows 10 v1607
        restart =           0x23,          // Windows 10 v1607
        reset =             0x24,          // Windows 10 v1607
        device_pn_p_event = 0x25,          // Windows 10 v1607
        check_for_hang =    0x31,          // Windows 10 v1607
        direct_oid =        0x32,          // Windows 10 v1607
        cancel_direct_oid = 0x33,          // Windows 10 v1607
        send =              0x34,          // Windows 10 v1607
        cancel_send =       0x35,          // Windows 10 v1607
        receive_return =    0x36,          // Windows 10 v1607
        wait_wake =         0x41,          // Windows 10 v1607
    };                                   
};
