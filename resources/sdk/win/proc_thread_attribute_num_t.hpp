#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _PROC_THREAD_ATTRIBUTE_NUM]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class proc_thread_attribute_num_t : int32_t
    {                                               
        parent_process =                   0x0,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        handle_list =                      0x2,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        group_affinity =                   0x3,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        preferred_node =                   0x4,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ideal_processor =                  0x5,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ums_thread =                       0x6,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mitigation_policy =                0x7,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        security_capabilities =            0x9,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        protection_level =                 0xb,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_list =                         0xd,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        child_process_policy =             0xe,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        all_application_packages_policy =  0xf,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        win32k_filter =                    0x10,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        safe_open_prompt_origin_claim =    0x11,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        desktop_app_policy =               0x12,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        pseudo_console =                   0x16,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        mitigation_audit_policy =          0x18,      // Windows 11, Windows 10 v20H2
        machine_type =                     0x19,      // Windows 11
        component_filter =                 0x1a,      // Windows 11
        enable_optional_x_state_features = 0x1b,      // Windows 11
    };                                              
};
