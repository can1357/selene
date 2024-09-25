#pragma once
#include <sdkgen/support_library.hpp>
#include "luid_t.hpp"
#include "msv1_0_protocol_message_type_t.hpp"

#include "magic/msv1_0_getchallenresp_request_t.start.hpp"
namespace nt
{
    // [struct _MSV1_0_GETCHALLENRESP_REQUEST]
    // => WDK 10 (NV)
    //
    struct msv1_0_getchallenresp_request_t                               
    {                                                                    
        // WDK 10                                                        
        //                                                               
        _m00 enum nt::msv1_0_protocol_message_type_t message_type;         //{ +0x0000    } | .MessageType
        _m01 uint32_t                                parameter_control;    //{ +0x0004    } | .ParameterControl
        _m02 struct nt::luid_t                       logon_id;             //{ +0x0008    } | .LogonId
        _m03 nt::unicode_view                        password;             //{ +0x0010    } | .Password
        _m04 sdk::array<uint8_t, 8>                  challenge_to_client;  //{ +0x0020    } | .ChallengeToClient
        _m05 nt::unicode_view                        user_name;            //{ +0x0028    } | .UserName
        _m06 nt::unicode_view                        logon_domain_name;    //{ +0x0038    } | .LogonDomainName
        _m07 nt::unicode_view                        server_name;          //{ +0x0048    } | .ServerName
                                                                         
        SDK_NONVOL_PROPERTIES( "_MSV1_0_GETCHALLENRESP_REQUEST.$", 0x0, false, 0xae3212ad454b91ea );                    
        SDK_FIXED_SIZE( msv1_0_getchallenresp_request_t, 0x58 );                    
    };                                                                   
};
#include "magic/msv1_0_getchallenresp_request_t.end.hpp"
SDK_VERIFY( struct nt::msv1_0_getchallenresp_request_t, 0x58 );
