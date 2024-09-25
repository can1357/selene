#pragma once
#include <sdkgen/support_library.hpp>
#include "luid_t.hpp"
#include "token_type_t.hpp"
#include "token_mandatory_policy_t.hpp"
#include "../sec/impersonation_level_t.hpp"

#include "magic/token_access_information_t.start.hpp"
namespace nt
{
    struct token_privileges_t;
    struct sid_and_attributes_hash_t;

    // [struct _TOKEN_ACCESS_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct token_access_information_t                                   
    {                                                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                              
        _m00 struct nt::sid_and_attributes_hash_t* sid_hash;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SidHash
        _m01 struct nt::sid_and_attributes_hash_t* restricted_sid_hash;   //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .RestrictedSidHash
        _m02 struct nt::token_privileges_t*        privileges;            //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Privileges
        _m03 struct nt::luid_t                     authentication_id;     //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .AuthenticationId
        _m04 enum nt::token_type_t                 token_type;            //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .TokenType
        _m05 enum sec::impersonation_level_t       impersonation_level;   //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .ImpersonationLevel
        _m06 struct nt::token_mandatory_policy_t   mandatory_policy;      //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .MandatoryPolicy
        _m07 uint32_t                              flags;                 //{ +0x002c    +0x002c    +0x002c    +0x002c    +0x002c    } | .Flags
        _m08 uint32_t                              app_container_number;  //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .AppContainerNumber
        _m09 void*                                 package_sid;           //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .PackageSid
        _m10 struct nt::sid_and_attributes_hash_t* capabilities_hash;     //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .CapabilitiesHash
        _m11 void*                                 trust_level_sid;       //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .TrustLevelSid
        _m12 void*                                 security_attributes;   //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .SecurityAttributes
                                                                        
        SDK_NONVOL_PROPERTIES( "_TOKEN_ACCESS_INFORMATION.$", 0x58, true, 0xf3104ffa3e37e89d );                     
        SDK_FIXED_SIZE( token_access_information_t, 0x58 );                     
    };                                                                  
};
#include "magic/token_access_information_t.end.hpp"
SDK_VERIFY( struct nt::token_access_information_t, 0x58 );
