#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum WhichSCMServiceProcess]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class which_scm_service_process_t : int32_t
    {                                               
        rpcss =       0x0,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dcom_launch = 0x1,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        neither =     0x2,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                              
};
