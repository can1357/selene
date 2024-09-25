#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _TOKEN_INFORMATION_CLASS]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class token_information_class_t : int32_t         
    {                                                      
        token_user =                               0x1,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        token_groups =                             0x2,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        token_privileges =                         0x3,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        token_owner =                              0x4,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        token_primary_group =                      0x5,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        token_default_dacl =                       0x6,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        token_source =                             0x7,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        token_type =                               0x8,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        token_impersonation_level =                0x9,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        token_statistics =                         0xa,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        token_restricted_sids =                    0xb,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        token_session_id =                         0xc,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        token_groups_and_privileges =              0xd,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        token_session_reference =                  0xe,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        token_sand_box_inert =                     0xf,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        token_audit_policy =                       0x10,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        token_origin =                             0x11,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        token_elevation_type =                     0x12,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        token_linked_token =                       0x13,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        token_elevation =                          0x14,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        token_has_restrictions =                   0x15,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        token_access_information =                 0x16,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        token_virtualization_allowed =             0x17,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        token_virtualization_enabled =             0x18,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        token_integrity_level =                    0x19,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        token_ui_access =                          0x1a,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        token_mandatory_policy =                   0x1b,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        token_logon_sid =                          0x1c,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        token_is_app_container =                   0x1d,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        token_capabilities =                       0x1e,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        token_app_container_sid =                  0x1f,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        token_app_container_number =               0x20,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        token_user_claim_attributes =              0x21,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        token_device_claim_attributes =            0x22,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        token_restricted_user_claim_attributes =   0x23,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        token_restricted_device_claim_attributes = 0x24,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        token_device_groups =                      0x25,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        token_restricted_device_groups =           0x26,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        token_security_attributes =                0x27,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        token_is_restricted =                      0x28,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        token_process_trust_level =                0x29,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        token_private_name_space =                 0x2a,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        token_singleton_attributes =               0x2b,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //max_token_info_class =                   0x2c,     // Windows 10 v1607
        token_bno_isolation =                      0x2c,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        token_child_process_flags =                0x2d,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        token_is_less_privileged_app_container =   0x2e,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        token_is_sandboxed =                       0x2f,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //max_token_info_class =                   0x30,     // Windows 11
        token_originating_process_trust_level =    0x30,     // WDK 10, Windows 10 v2004, Windows 10 v20H2
        max_token_info_class =                     0x31,     // WDK 10, Windows 10 v2004, Windows 10 v20H2
    };                                                     
};
