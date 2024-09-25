#pragma once
#include <sdkgen/support_library.hpp>
#include "image_mitigation_policy_t.hpp"

#include "magic/image_mitigation_control_flow_guard_policy_t.start.hpp"
namespace rtl
{
    // [struct _RTL_IMAGE_MITIGATION_CONTROL_FLOW_GUARD_POLICY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct image_mitigation_control_flow_guard_policy_t                     
    {                                                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                                  
        _m00 union rtl::image_mitigation_policy_t control_flow_guard;         //{ +0x0000    +0x0000    +0x0000    } | .ControlFlowGuard
        _m01 union rtl::image_mitigation_policy_t strict_control_flow_guard;  //{ +0x0008    +0x0008    +0x0008    } | .StrictControlFlowGuard
                                                                            
        SDK_MAGIC_PROPERTIES( "_RTL_IMAGE_MITIGATION_CONTROL_FLOW_GUARD_POLICY.$", 0x10, true, 0x36ff081bbd20a44d );                          
        SDK_FIXED_SIZE( image_mitigation_control_flow_guard_policy_t, 0x10 );                          
    };                                                                      
};
#include "magic/image_mitigation_control_flow_guard_policy_t.end.hpp"
SDK_VERIFY( struct rtl::image_mitigation_control_flow_guard_policy_t, 0x10 );
