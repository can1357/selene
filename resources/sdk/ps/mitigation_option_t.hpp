#pragma once
#include <sdkgen/support_library.hpp>

namespace ps
{
    // [enum _PS_MITIGATION_OPTION]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class mitigation_option_t : int32_t          
    {                                                 
        nx =                                  0x0,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        sehop =                               0x1,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        force_relocate_images =               0x2,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        heap_terminate =                      0x3,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        bottom_up_aslr =                      0x4,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        high_entropy_aslr =                   0x5,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        strict_handle_checks =                0x6,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        win32k_system_call_disable =          0x7,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        extension_point_disable =             0x8,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        prohibit_dynamic_code =               0x9,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        control_flow_guard =                  0xa,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        block_non_microsoft_binaries =        0xb,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        font_disable =                        0xc,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        image_load_no_remote =                0xd,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        image_load_no_low_label =             0xe,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        image_load_prefer_system32 =          0xf,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        return_flow_guard =                   0x10,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        loader_integrity_continuity =         0x11,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        strict_control_flow_guard =           0x12,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        restrict_set_thread_context =         0x13,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        rop_stackpivot =                      0x14,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        rop_caller_check =                    0x15,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        rop_simexec =                         0x16,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        export_address_filter =               0x17,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        export_address_filter_plus =          0x18,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        restrict_child_process_creation =     0x19,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        import_address_filter =               0x1a,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        module_tampering_protection =         0x1b,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        restrict_indirect_branch_prediction = 0x1c,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        speculative_store_bypass_disable =    0x1d,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        allow_downgrade_dynamic_code_policy = 0x1e,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        cet_user_shadow_stacks =              0x1f,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        user_cet_set_context_ip_validation =  0x20,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        block_non_cet_binaries =              0x21,     // Windows 11, Windows 10 v20H2
        xtended_control_flow_guard =          0x22,     // Windows 11
        pointer_auth_user_ip =                0x23,     // Windows 11
        cet_dynamic_apis_out_of_proc_only =   0x24,     // Windows 11, Windows 10 v20H2
        redirection_trust =                   0x25,     // Windows 11
        restrict_core_sharing =               0x26,     // Windows 11
    };                                                
};
