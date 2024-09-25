#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _PROCESS_MITIGATION_POLICY]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class process_mitigation_policy_t : int32_t     
    {                                                    
        process_dep_policy =                     0x0,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_aslr_policy =                    0x1,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_dynamic_code_policy =            0x2,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_strict_handle_check_policy =     0x3,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_system_call_disable_policy =     0x4,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_mitigation_options_mask =        0x5,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_extension_point_disable_policy = 0x6,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_control_flow_guard_policy =      0x7,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_signature_policy =               0x8,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_font_disable_policy =            0x9,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_image_load_policy =              0xa,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //max_process_mitigation_policy =        0xb,      // Windows 10 v1607
        process_system_call_filter_policy =      0xb,      // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_payload_restriction_policy =     0xc,      // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_child_process_policy =           0xd,      // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_side_channel_isolation_policy =  0xe,      // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_user_shadow_stack_policy =       0xf,      // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_process_mitigation_policy =          0x10,     // WDK 10, Windows 10 v2004, Windows 10 v20H2
        process_redirection_trust_policy =       0x10,     // Windows 11
        //max_process_mitigation_policy =        0x11,     // Windows 11
    };                                                   
};
