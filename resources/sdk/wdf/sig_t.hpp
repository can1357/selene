#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum _SIG]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class sig_t : int32_t               
    {                                        
        sig_usbd_handle_info = 0x44425355,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
