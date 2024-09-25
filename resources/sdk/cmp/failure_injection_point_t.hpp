#pragma once
#include <sdkgen/support_library.hpp>

namespace cmp
{
    // [enum _CMP_FAILURE_INJECTION_POINT]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class failure_injection_point_t : int32_t             
    {                                                          
        point_pool_allocation =                        0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //point_file_write =                           0x1,      // Windows 11
        point_view_mapping =                           0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        //point_file_read =                            0x2,      // Windows 11
        point_view_pinning =                           0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        //point_flush =                                0x3,      // Windows 11
        point_resource_charging =                      0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        point_file_write =                             0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        //point_flush_and_purge =                      0x4,      // Windows 11
        point_file_read =                              0x5,      // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        //point_force_large_bin =                      0x5,      // Windows 11
        point_cache_flush =                            0x6,      // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        //point_dont_fix_alignment =                   0x6,      // Windows 11
        //point_allocate_cell =                        0x7,      // Windows 11
        point_flush =                                  0x7,      // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        point_flush_and_purge =                        0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        //point_mark_dirty =                           0x8,      // Windows 11
        point_force_large_bin =                        0x9,      // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        //point_force_multi_level_map =                0x9,      // Windows 11
        //point_allocate_contiguous_log_entry =        0xa,      // Windows 11
        point_dont_fix_alignment =                     0xa,      // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        point_allocate_cell =                          0xb,      // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        //point_allocate_kcb =                         0xb,      // Windows 11
        //point_create_key_body =                      0xc,      // Windows 11
        point_mark_dirty =                             0xc,      // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        //point_allocate_kcb =                         0xd,      // Windows 10 v1607
        //point_force_free_kcb =                       0xd,      // Windows 11
        point_force_multi_level_map =                  0xd,      // Windows 10 v2004, Windows 10 v20H2
        //injection_point_count =                      0xe,      // Windows 10 v1607
        point_allocate_contiguous_log_entry =          0xe,      // Windows 10 v2004, Windows 10 v20H2
        //point_kcb_lock_upgrade =                     0xe,      // Windows 11
        point_allocate_kcb =                           0xf,      // Windows 10 v2004, Windows 10 v20H2
        //point_kcb_lock_upgrade_delay =               0xf,      // Windows 11
        point_create_key_body =                        0x10,     // Windows 10 v2004, Windows 10 v20H2
        //point_key_enum_resume_context_verification = 0x10,     // Windows 11
        point_force_free_kcb =                         0x11,     // Windows 10 v2004, Windows 10 v20H2
        //point_key_enum_force_retry =                 0x11,     // Windows 11
        //point_force_reorganization =                 0x12,     // Windows 11
        point_kcb_lock_upgrade =                       0x12,     // Windows 10 v2004, Windows 10 v20H2
        //point_force_lazy_cow_by_policy =             0x13,     // Windows 11
        point_kcb_lock_upgrade_delay =                 0x13,     // Windows 10 v2004, Windows 10 v20H2
        point_force_bugcheck_recovery_enabled =        0x14,     // Windows 11
        point_key_enum_resume_context_verification =   0x14,     // Windows 10 v2004, Windows 10 v20H2
        point_create_hive_cache_entry =                0x15,     // Windows 11
        point_key_enum_force_retry =                   0x15,     // Windows 10 v2004, Windows 10 v20H2
        point_claim_hive_cache_entry =                 0x16,     // Windows 11
        point_force_reorganization =                   0x16,     // Windows 10 v2004, Windows 10 v20H2
        point_force_lazy_cow_by_policy =               0x17,     // Windows 10 v2004, Windows 10 v20H2
        point_subscribe_pnp_notifications =            0x17,     // Windows 11
        injection_point_count =                        0x18,     // Windows 10 v2004, Windows 10 v20H2
        point_create_oplock_monitoring_thread =        0x18,     // Windows 11
        point_open_hive_file =                         0x19,     // Windows 11
        point_request_oplock_on_primary =              0x1a,     // Windows 11
        point_request_oplock_on_log1 =                 0x1b,     // Windows 11
        point_request_oplock_on_log2 =                 0x1c,     // Windows 11
        point_create_hive =                            0x1d,     // Windows 11
        //injection_point_count =                      0x1e,     // Windows 11
    };                                                         
};
