#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum __MIDL_IBindStatusCallback_0006]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class midl_i_bind_status_callback_0006_t : int32_t
    {                                                      
        bscf_firstdatanotification =        0x1,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bscf_intermediatedatanotification = 0x2,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bscf_lastdatanotification =         0x4,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bscf_datafullyavailable =           0x8,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bscf_availabledatasizeunknown =     0x10,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bscf_skipdraindataforfileurls =     0x20,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bscf_64bitlengthdownload =          0x40,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                     
};
