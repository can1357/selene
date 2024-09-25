#pragma once
#include <sdkgen/support_library.hpp>

namespace cm
{
    // [enum _CM_LOAD_FAILURE_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    //
    enum class load_failure_type_t : int32_t             
    {                                                    
        none =                                   0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        cm_initialize_hive =                     0x1,      // Windows 10 v1607
        cmp_create_hive =                        0x1,      // Windows 10 v2004, Windows 10 v20H2
        hv_initialize_hive =                     0x2,      // Windows 10 v1607
        hvp_build_map =                          0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        hvp_build_map_for_loader_hive =          0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        hvp_init_map =                           0x5,      // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        hv_load_hive =                           0x6,      // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        hvp_map_hive_image =                     0x7,      // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        hvp_recover_data =                       0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        cmp_validate_hive_security_descriptors = 0x9,      // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        hvp_enlist_bin_in_map =                  0xa,      // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        cm_check_registry =                      0xb,      // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        cm_registry_io =                         0xc,      // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        cm_check_registry2 =                     0xd,      // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        cmp_check_key =                          0xe,      // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        cmp_check_value_list =                   0xf,      // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        hv_check_hive =                          0x10,     // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        hv_check_bin =                           0x11,     // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        hvp_get_log_entry_dirty_vector =         0x12,     // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        hvp_read_log_entry_header =              0x13,     // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        hvp_read_log_entry =                     0x14,     // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        cmp_mount_preloaded_hives =              0x15,     // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        cmp_load_hive_thread =                   0x16,     // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        cmp_check_leaf =                         0x17,     // Windows 10 v2004, Windows 10 v20H2
        hv_hive_start_file_backed =              0x18,     // Windows 10 v2004, Windows 10 v20H2
        hv_start_hive_memory_backed =            0x19,     // Windows 10 v2004, Windows 10 v20H2
        hvp_enlist_free_cells =                  0x1a,     // Windows 10 v2004, Windows 10 v20H2
        hvp_perform_log_file_recovery =          0x1b,     // Windows 10 v2004, Windows 10 v20H2
        cmp_init_hive_from_file =                0x1c,     // Windows 10 v2004, Windows 10 v20H2
        cmp_load_key_common =                    0x1d,     // Windows 10 v2004, Windows 10 v20H2
        cmp_link_hive_to_master =                0x1e,     // Windows 10 v2004, Windows 10 v20H2
        cm_load_key =                            0x1f,     // Windows 10 v2004, Windows 10 v20H2
        cm_load_app_key =                        0x20,     // Windows 10 v2004, Windows 10 v20H2
        cmp_resolve_hive_load_conflict =         0x21,     // Windows 10 v2004, Windows 10 v20H2
    };                                                   
};
