#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NETSETUP_ENVIRONMENT_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class netsetup_environment_type_t : int32_t
    {                                               
        application_online =        0x0,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        cbs_online =                0x1,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        cbs_offline =               0x2,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        rpc_server =                0x3,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        miniport_pnp =              0x4,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        test =                      0x5,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        application_offline =       0x6,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        net_cfg_shim =              0x7,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        os_migration_offline =      0x8,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        os_migration_online =       0x9,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        notify_object_host =        0xa,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        transaction_monitor =       0xb,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_notify_object_replay = 0xc,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                              
};
