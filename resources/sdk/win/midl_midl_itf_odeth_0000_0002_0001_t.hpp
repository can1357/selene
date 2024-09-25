#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum __MIDL___MIDL_itf_odeth_0000_0002_0001]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class midl_midl_itf_odeth_0000_0002_0001_t : int32_t
    {                                                        
        dontrundown =      0x0,                                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        ok_to_rundown =    0x1,                                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        oid_pinned =       0x2,                                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        oid_psmsuspended = 0x4,                                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        oid_unassigned =   0x8,                                // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                       
};
