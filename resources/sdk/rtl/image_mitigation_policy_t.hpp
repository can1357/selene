#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/image_mitigation_policy_t.start.hpp"
namespace rtl
{
    // [union _RTL_IMAGE_MITIGATION_POLICY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union image_mitigation_policy_t                     
    {                                                   
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                              
        _m00 uint2_t  audit_state;                        //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .AuditState
        _m01 uint1_t  audit_flag;                         //{ +0x0000@2  +0x0000@2  +0x0000@2  } | .AuditFlag
        _m02 uint1_t  enable_additional_auditing_option;  //{ +0x0000@3  +0x0000@3  +0x0000@3  } | .EnableAdditionalAuditingOption
        _m03 uint2_t  policy_state;                       //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .PolicyState
        _m04 uint1_t  always_inherit;                     //{ +0x0000@2  +0x0000@2  +0x0000@2  } | .AlwaysInherit
        _m05 uint1_t  enable_additional_policy_option;    //{ +0x0000@3  +0x0000@3  +0x0000@3  } | .EnableAdditionalPolicyOption
        _m06 uint60_t audit_reserved;                     //{ +0x0000@4  +0x0000@4  +0x0000@4  } | .AuditReserved
                                                        
        SDK_MAGIC_PROPERTIES( "_RTL_IMAGE_MITIGATION_POLICY.$", 0x8, true, 0xf71647fced10fe74 );                                  
        SDK_FIXED_SIZE( image_mitigation_policy_t, 0x8 );                                  
    };                                                  
};
#include "magic/image_mitigation_policy_t.end.hpp"
SDK_VERIFY( union rtl::image_mitigation_policy_t, 0x8 );
