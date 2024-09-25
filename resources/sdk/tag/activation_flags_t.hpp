#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagACTIVATION_FLAGS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class activation_flags_t : int32_t                   
    {                                                         
        none =                                   0x0,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disable_aaa =                            0x2,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        activate_32_bit_server =                 0x4,           // Windows 10 v1607
        activate_x86_server =                    0x4,           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        activate_64_bit_server =                 0x8,           // Windows 10 v1607
        activate_x64_server =                    0x8,           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        serverside_activation =                  0x10,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_failure_log =                         0x20,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        enable_cloaking =                        0x40,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reg_catalog_only =                       0x100,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sxs_catalog_only =                       0x200,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        winrt_local_server =                     0x400,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        winrt_per_user_ok =                      0x800,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        activate_psclsid_from_package =          0x1000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        appcontainer =                           0x2000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        is_sxs_class =                           0x4000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        background_mixed_activation =            0x8000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        background_pure_activation =             0x10000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        background_system_activation =           0x20000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        designmode_activation =                  0x40000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        activate_as_iu =                         0x80000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        activate_shared_aap_server =             0x100000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disable_remote_activation =              0x200000,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        designmode_v2_activation =               0x400000,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        activate_native_server =                 0x800000,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        activate_arm32_server =                  0x1000000,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        activate_packaged_implementation_class = 0x2000000,     // Windows 11
    };                                                        
};
