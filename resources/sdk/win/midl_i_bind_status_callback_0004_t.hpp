#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum __MIDL_IBindStatusCallback_0004]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class midl_i_bind_status_callback_0004_t : int32_t
    {                                                      
        none =         0x0,                                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        enable_utf8 =  0x10000000,                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disable_utf8 = 0x20000000,                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                     
};
