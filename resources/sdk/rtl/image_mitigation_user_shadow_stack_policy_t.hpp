#pragma once
#include <sdkgen/support_library.hpp>
#include "image_mitigation_policy_t.hpp"

#include "magic/image_mitigation_user_shadow_stack_policy_t.start.hpp"
namespace rtl
{
    // [struct _RTL_IMAGE_MITIGATION_USER_SHADOW_STACK_POLICY]
    // => Windows 11, Windows 10 v20H2
    //
    struct image_mitigation_user_shadow_stack_policy_t                      
    {                                                                       
        // Windows 11, Windows 10 v20H2                                     
        //                                                                  
        _m00 union rtl::image_mitigation_policy_t user_shadow_stack;          //{ +0x0000    +0x0000    } | .UserShadowStack
        _m01 union rtl::image_mitigation_policy_t set_context_ip_validation;  //{ +0x0008    +0x0008    } | .SetContextIpValidation
        _m02 union rtl::image_mitigation_policy_t block_non_cet_binaries;     //{ +0x0010    +0x0010    } | .BlockNonCetBinaries
                                                                            
        SDK_MAGIC_PROPERTIES( "_RTL_IMAGE_MITIGATION_USER_SHADOW_STACK_POLICY.$", 0x18, true, 0xfcfe5362c3d67d2b );                          
        SDK_FIXED_SIZE( image_mitigation_user_shadow_stack_policy_t, 0x18 );                          
    };                                                                      
};
#include "magic/image_mitigation_user_shadow_stack_policy_t.end.hpp"
SDK_VERIFY( struct rtl::image_mitigation_user_shadow_stack_policy_t, 0x18 );
