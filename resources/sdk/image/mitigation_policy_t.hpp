#pragma once
#include <sdkgen/support_library.hpp>

namespace image
{
    // [enum _IMAGE_MITIGATION_POLICY]
    //  WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class mitigation_policy_t : int32_t           
    {                                                  
        image_dep_policy =                     0x0,      // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        image_aslr_policy =                    0x1,      // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        image_dynamic_code_policy =            0x2,      // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        image_strict_handle_check_policy =     0x3,      // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        image_system_call_disable_policy =     0x4,      // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        image_mitigation_options_mask =        0x5,      // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        image_extension_point_disable_policy = 0x6,      // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        image_control_flow_guard_policy =      0x7,      // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        image_signature_policy =               0x8,      // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        image_font_disable_policy =            0x9,      // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        image_image_load_policy =              0xa,      // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        image_payload_restriction_policy =     0xb,      // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        image_child_process_policy =           0xc,      // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        image_sehop_policy =                   0xd,      // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        image_heap_policy =                    0xe,      // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        image_user_shadow_stack_policy =       0xf,      // Windows 11, Windows 10 v20H2
        //max_image_mitigation_policy =        0xf,      // WDK 10, Windows 10 v2004
        image_redirection_trust_policy =       0x10,     // Windows 11
        max_image_mitigation_policy =          0x10,     // Windows 10 v20H2
        //max_image_mitigation_policy =        0x11,     // Windows 11
    };                                                 
};
