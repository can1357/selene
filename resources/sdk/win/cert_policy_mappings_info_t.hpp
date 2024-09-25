#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_policy_mappings_info_t.start.hpp"
namespace win
{
    struct cert_policy_mapping_t;

    // [struct _CERT_POLICY_MAPPINGS_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_policy_mappings_info_t                            
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                        
        _m00 uint32_t                           c_policy_mapping;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cPolicyMapping
        _m01 struct win::cert_policy_mapping_t* rg_policy_mapping;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .rgPolicyMapping
                                                                  
        SDK_MAGIC_PROPERTIES( "_CERT_POLICY_MAPPINGS_INFO.$", 0x10, true, 0x575faed8982fe338 );                  
        SDK_FIXED_SIZE( cert_policy_mappings_info_t, 0x10 );                  
    };                                                            
};
#include "magic/cert_policy_mappings_info_t.end.hpp"
SDK_VERIFY( struct win::cert_policy_mappings_info_t, 0x10 );
