#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _CSV_CONTROL_OP]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class csv_control_op_t : int32_t                
    {                                                    
        start_redirect_file =                    0x2,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stop_redirect_file =                     0x3,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        query_redirect_state =                   0x4,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        query_file_revision =                    0x6,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        query_mds_path =                         0x8,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        query_file_revision_file_id128 =         0x9,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        query_volume_redirect_state =            0xa,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        enable_usn_range_modification_tracking = 0xd,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mark_handle_local_volume_mount =         0xe,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unmark_handle_local_volume_mount =       0xf,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        get_csv_fs_mds_path_v2 =                 0x12,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disable_caching =                        0x13,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        enable_caching =                         0x14,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        start_force_dfo =                        0x15,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stop_force_dfo =                         0x16,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        query_mds_path_no_pause =                0x17,     // Windows 11
        set_volume_id =                          0x18,     // Windows 11
        query_volume_id =                        0x19,     // Windows 11
    };                                                   
};
