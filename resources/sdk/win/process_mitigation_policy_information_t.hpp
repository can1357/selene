#pragma once
#include <sdkgen/support_library.hpp>
#include "process_mitigation_policy_t.hpp"
#include "process_mitigation_aslr_policy_t.hpp"
#include "process_mitigation_image_load_policy_t.hpp"
#include "process_mitigation_dynamic_code_policy_t.hpp"
#include "process_mitigation_font_disable_policy_t.hpp"
#include "process_mitigation_child_process_policy_t.hpp"
#include "process_mitigation_binary_signature_policy_t.hpp"
#include "process_mitigation_redirection_trust_policy_t.hpp"
#include "process_mitigation_user_shadow_stack_policy_t.hpp"
#include "process_mitigation_control_flow_guard_policy_t.hpp"
#include "process_mitigation_system_call_filter_policy_t.hpp"
#include "process_mitigation_payload_restriction_policy_t.hpp"
#include "process_mitigation_strict_handle_check_policy_t.hpp"
#include "process_mitigation_system_call_disable_policy_t.hpp"
#include "process_mitigation_side_channel_isolation_policy_t.hpp"
#include "process_mitigation_extension_point_disable_policy_t.hpp"

#include "magic/process_mitigation_policy_information_t.start.hpp"
namespace win
{
    // [struct _PROCESS_MITIGATION_POLICY_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct process_mitigation_policy_information_t                                       
    {                                                                                    
        using strict_handle_check_policy_t =     struct win::process_mitigation_strict_handle_check_policy_t;                               
        using system_call_disable_policy_t =     struct win::process_mitigation_system_call_disable_policy_t;                               
        using extension_point_disable_policy_t = struct win::process_mitigation_extension_point_disable_policy_t;                               
        using dynamic_code_policy_t =            struct win::process_mitigation_dynamic_code_policy_t;                               
        using control_flow_guard_policy_t =      struct win::process_mitigation_control_flow_guard_policy_t;                               
        using signature_policy_t =               struct win::process_mitigation_binary_signature_policy_t;                               
        using font_disable_policy_t =            struct win::process_mitigation_font_disable_policy_t;                               
        using image_load_policy_t =              struct win::process_mitigation_image_load_policy_t;                               
        using system_call_filter_policy_t =      struct win::process_mitigation_system_call_filter_policy_t;                               
        using payload_restriction_policy_t =     struct win::process_mitigation_payload_restriction_policy_t;                               
        using child_process_policy_t =           struct win::process_mitigation_child_process_policy_t;                               
        using side_channel_isolation_policy_t =  struct win::process_mitigation_side_channel_isolation_policy_t;                               
        using user_shadow_stack_policy_t =       struct win::process_mitigation_user_shadow_stack_policy_t;                               
        using redirection_trust_policy_t =       struct win::process_mitigation_redirection_trust_policy_t;                               
                                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                               
        _m00 enum win::process_mitigation_policy_t        policy;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Policy
        _m01 struct win::process_mitigation_aslr_policy_t aslr_policy;                     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ASLRPolicy
        _m02 strict_handle_check_policy_t                 strict_handle_check_policy;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .StrictHandleCheckPolicy
        _m03 system_call_disable_policy_t                 system_call_disable_policy;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SystemCallDisablePolicy
        _m04 extension_point_disable_policy_t             extension_point_disable_policy;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ExtensionPointDisablePolicy
        _m05 dynamic_code_policy_t                        dynamic_code_policy;             //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .DynamicCodePolicy
        _m06 control_flow_guard_policy_t                  control_flow_guard_policy;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ControlFlowGuardPolicy
        _m07 signature_policy_t                           signature_policy;                //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SignaturePolicy
        _m08 font_disable_policy_t                        font_disable_policy;             //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .FontDisablePolicy
        _m09 image_load_policy_t                          image_load_policy;               //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ImageLoadPolicy
                                                                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                                               
        _m10 system_call_filter_policy_t                  system_call_filter_policy;       //{ +0x0004    +0x0004    +0x0004    } | .SystemCallFilterPolicy
        _m11 payload_restriction_policy_t                 payload_restriction_policy;      //{ +0x0004    +0x0004    +0x0004    } | .PayloadRestrictionPolicy
        _m12 child_process_policy_t                       child_process_policy;            //{ +0x0004    +0x0004    +0x0004    } | .ChildProcessPolicy
        _m13 side_channel_isolation_policy_t              side_channel_isolation_policy;   //{ +0x0004    +0x0004    +0x0004    } | .SideChannelIsolationPolicy
        _m14 user_shadow_stack_policy_t                   user_shadow_stack_policy;        //{ +0x0004    +0x0004    +0x0004    } | .UserShadowStackPolicy
                                                                                         
        // Windows 11                                                                    
        //                                                                               
        _m15 redirection_trust_policy_t                   redirection_trust_policy;        //{ +0x0004    } | .RedirectionTrustPolicy
                                                                                         
        SDK_MAGIC_PROPERTIES( "_PROCESS_MITIGATION_POLICY_INFORMATION.$", 0x8, true, 0xd3760b518c2057c9 );                               
        SDK_FIXED_SIZE( process_mitigation_policy_information_t, 0x8 );                               
    };                                                                                   
};
#include "magic/process_mitigation_policy_information_t.end.hpp"
SDK_VERIFY( struct win::process_mitigation_policy_information_t, 0x8 );
