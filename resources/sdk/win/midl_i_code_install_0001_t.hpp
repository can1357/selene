#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum __MIDL_ICodeInstall_0001]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class midl_i_code_install_0001_t : int32_t   
    {                                                 
        disk_full =                            0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        access_denied =                        0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        newer_version_exists =                 0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        older_version_exists =                 0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        name_conflict =                        0x4,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        trust_verification_component_missing = 0x5,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        exe_self_registeration_timeout =       0x6,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unsafe_to_abort =                      0x7,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        need_reboot =                          0x8,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        need_reboot_ui_permission =            0x9,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                
};
