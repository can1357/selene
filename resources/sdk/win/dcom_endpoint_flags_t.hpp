#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum DCOM_ENDPOINT_FLAGS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class dcom_endpoint_flags_t : int32_t
    {                                         
        f_use_internet_ports = 0x1,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                        
};
