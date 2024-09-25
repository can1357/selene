#pragma once
#include <sdkgen/support_library.hpp>

namespace ahc
{
    // [enum _AHC_INFO_CLASS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class info_class_t : int32_t                        
    {                                                        
        sdb_query_result =                     0x1,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sdb_sxs_override_manifest =            0x2,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sdb_runlevel_flags =                   0x4,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sdb_fusion_flags =                     0x8,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sdb_installer_flags =                  0x10,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fusion_flags =                         0x20,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        telemetry_flags =                      0x40,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        install_detect =                       0x80,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        rac_event_sent =                       0x100,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        is_system_file =                       0x200,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        monitoring_flags =                     0x400,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        exe_type =                             0x800,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dx_type =                              0x1000,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        exe_types_array =                      0x2000,         // Windows 11
        mask_all_exe_types_for_query_results = 0xffff0000,     // Windows 11
    };                                                       
};
