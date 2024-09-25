#pragma once
#include <sdkgen/support_library.hpp>
#include "image_mitigation_policy_t.hpp"

#include "magic/image_mitigation_redirection_trust_policy_t.start.hpp"
namespace rtl
{
    // [struct _RTL_IMAGE_MITIGATION_REDIRECTION_TRUST_POLICY]
    // => Windows 11
    //
    struct image_mitigation_redirection_trust_policy_t                         
    {                                                                          
        // Windows 11                                                          
        //                                                                     
        _m00 union rtl::image_mitigation_policy_t block_untrusted_redirections;  //{ +0x0000    } | .BlockUntrustedRedirections
                                                                               
        SDK_MAGIC_PROPERTIES( "_RTL_IMAGE_MITIGATION_REDIRECTION_TRUST_POLICY.$", 0x0, false, 0x342d784e892e2818 );                             
        SDK_FIXED_SIZE( image_mitigation_redirection_trust_policy_t, 0x8 );                             
    };                                                                         
};
#include "magic/image_mitigation_redirection_trust_policy_t.end.hpp"
SDK_VERIFY( struct rtl::image_mitigation_redirection_trust_policy_t, 0x8 );
