#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum PIDESCRIPTOR_STATE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class pidescriptor_state_t : int32_t
    {                                        
        not_validated =            0x0,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        validated_successfully =   0x1,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        validated_unsuccessfully = 0x2,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
