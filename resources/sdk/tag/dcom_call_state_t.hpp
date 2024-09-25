#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagDCOM_CALL_STATE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class dcom_call_state_t : int32_t
    {                                     
        none =          0x0,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        call_complete = 0x1,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        call_canceled = 0x2,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                    
};
