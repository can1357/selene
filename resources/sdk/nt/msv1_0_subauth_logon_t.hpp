#pragma once
#include <sdkgen/support_library.hpp>
#include "msv1_0_logon_submit_type_t.hpp"

#include "magic/msv1_0_subauth_logon_t.start.hpp"
namespace nt
{
    // [struct _MSV1_0_SUBAUTH_LOGON]
    // => WDK 10 (NV)
    //
    struct msv1_0_subauth_logon_t                                     
    {                                                                 
        // WDK 10                                                     
        //                                                            
        _m00 enum nt::msv1_0_logon_submit_type_t message_type;          //{ +0x0000    } | .MessageType
        _m01 nt::unicode_view                    logon_domain_name;     //{ +0x0008    } | .LogonDomainName
        _m02 nt::unicode_view                    user_name;             //{ +0x0018    } | .UserName
        _m03 nt::unicode_view                    workstation;           //{ +0x0028    } | .Workstation
        _m04 sdk::array<uint8_t, 8>              challenge_to_client;   //{ +0x0038    } | .ChallengeToClient
        _m05 nt::ascii_view                      authentication_info1;  //{ +0x0040    } | .AuthenticationInfo1
        _m06 nt::ascii_view                      authentication_info2;  //{ +0x0050    } | .AuthenticationInfo2
        _m07 uint32_t                            parameter_control;     //{ +0x0060    } | .ParameterControl
        _m08 uint32_t                            sub_auth_package_id;   //{ +0x0064    } | .SubAuthPackageId
                                                                      
        SDK_NONVOL_PROPERTIES( "_MSV1_0_SUBAUTH_LOGON.$", 0x0, false, 0xf6169ecf16ae5f0e );                     
        SDK_FIXED_SIZE( msv1_0_subauth_logon_t, 0x68 );                     
    };                                                                
};
#include "magic/msv1_0_subauth_logon_t.end.hpp"
SDK_VERIFY( struct nt::msv1_0_subauth_logon_t, 0x68 );
