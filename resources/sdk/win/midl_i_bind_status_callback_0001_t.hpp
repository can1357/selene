#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum __MIDL_IBindStatusCallback_0001]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class midl_i_bind_status_callback_0001_t : int32_t
    {                                                      
        get =       0x0,                                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        post =      0x1,                                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        put =       0x2,                                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        custom =    0x3,                                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved1 = 0x4,                                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                     
};
