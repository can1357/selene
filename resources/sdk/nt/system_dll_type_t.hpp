#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _SYSTEM_DLL_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class system_dll_type_t : int32_t 
    {                                      
        native_system_dll =         0x0,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wow_x86_system_dll =        0x1,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wow_arm32_system_dll =      0x2,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wow_amd64_system_dll =      0x3,     // Windows 10 v2004, Windows 10 v20H2
        //wow_chpe_x86_system_dll = 0x3,     // Windows 11
        chpe_v2_system_dll =        0x4,     // Windows 11
        wow_chpe_x86_system_dll =   0x4,     // Windows 10 v2004, Windows 10 v20H2
        vsm_enclave_runtime_dll =   0x5,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_dll_total_types =    0x6,     // Windows 10 v2004, Windows 10 v20H2
        trusted_apps_runtime_dll =  0x6,     // Windows 11
        //system_dll_total_types =  0x7,     // Windows 11
    };                                     
};
