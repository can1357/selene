#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NETSETUP_OBJECT_SOURCE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class netsetup_object_source_t : int32_t  
    {                                              
        source_unknown =                    0x0,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        source_part_of_os =                 0x1,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        created_by_other_os_component =     0x2,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        created_by_net_setup_internal =     0x3,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        created_by_os_migration =           0x4,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        created_by_nic_installation =       0x5,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        created_by_i_net_cfg =              0x6,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        source_hardcoded =                  0x7,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        source_offline_dism =               0x8,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        source_universal_inf_registration = 0x9,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                             
};
