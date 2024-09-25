#pragma once
#include <sdkgen/support_library.hpp>
#include "image_mitigation_policy_t.hpp"

#include "magic/image_mitigation_binary_signature_policy_t.start.hpp"
namespace rtl
{
    // [struct _RTL_IMAGE_MITIGATION_BINARY_SIGNATURE_POLICY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct image_mitigation_binary_signature_policy_t                                    
    {                                                                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                       
        //                                                                               
        _m00 union rtl::image_mitigation_policy_t block_non_microsoft_signed_binaries;     //{ +0x0000    +0x0000    +0x0000    } | .BlockNonMicrosoftSignedBinaries
        _m01 union rtl::image_mitigation_policy_t enforce_signing_on_module_dependencies;  //{ +0x0008    +0x0008    +0x0008    } | .EnforceSigningOnModuleDependencies
                                                                                         
        SDK_MAGIC_PROPERTIES( "_RTL_IMAGE_MITIGATION_BINARY_SIGNATURE_POLICY.$", 0x10, true, 0x91ee602861868017 );                                       
        SDK_FIXED_SIZE( image_mitigation_binary_signature_policy_t, 0x10 );                                       
    };                                                                                   
};
#include "magic/image_mitigation_binary_signature_policy_t.end.hpp"
SDK_VERIFY( struct rtl::image_mitigation_binary_signature_policy_t, 0x10 );
