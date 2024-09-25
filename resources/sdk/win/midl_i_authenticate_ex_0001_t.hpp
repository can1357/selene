#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum __MIDL_IAuthenticateEx_0001]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class midl_i_authenticate_ex_0001_t : int32_t
    {                                                 
        proxy = 0x1,                                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        basic = 0x2,                                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        http =  0x4,                                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                
};
