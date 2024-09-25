#pragma once
#include <sdkgen/support_library.hpp>

namespace ps
{
    // [enum _PS_ATTRIBUTE_NUM]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class attribute_num_t : int32_t           
    {                                              
        parent_process =                   0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        debug_object =                     0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        token =                            0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        client_id =                        0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        teb_address =                      0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        image_name =                       0x5,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        image_info =                       0x6,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        memory_reserve =                   0x7,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        priority_class =                   0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        error_mode =                       0x9,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        std_handle_info =                  0xa,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        handle_list =                      0xb,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        group_affinity =                   0xc,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        preferred_node =                   0xd,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ideal_processor =                  0xe,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ums_thread =                       0xf,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mitigation_options =               0x10,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        protection_level =                 0x11,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        secure_process =                   0x12,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_list =                         0x13,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        child_process_policy =             0x14,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        all_application_packages_policy =  0x15,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        win32k_filter =                    0x16,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        safe_open_prompt_origin_claim =    0x17,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bno_isolation =                    0x18,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //max =                            0x18,     // Windows 10 v1607
        desktop_app_policy =               0x19,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        chpe =                             0x1a,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //max =                            0x1b,     // Windows 10 v2004
        mitigation_audit_options =         0x1b,     // Windows 11, Windows 10 v20H2
        machine_type =                     0x1c,     // Windows 11
        max =                              0x1c,     // Windows 10 v20H2
        component_filter =                 0x1d,     // Windows 11
        enable_optional_x_state_features = 0x1e,     // Windows 11
        //max =                            0x1f,     // Windows 11
    };                                             
};
