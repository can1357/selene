#pragma once
#include <sdkgen/support_library.hpp>
#include "luid_t.hpp"
#include "msv1_0_protocol_message_type_t.hpp"

#include "magic/msv1_0_getchallenresp_request_v1_t.start.hpp"
namespace nt
{
    // [struct _MSV1_0_GETCHALLENRESP_REQUEST_V1]
    // => WDK 10 (NV)
    //
    struct msv1_0_getchallenresp_request_v1_t                            
    {                                                                    
        // WDK 10                                                        
        //                                                               
        _m00 enum nt::msv1_0_protocol_message_type_t message_type;         //{ +0x0000    } | .MessageType
        _m01 uint32_t                                parameter_control;    //{ +0x0004    } | .ParameterControl
        _m02 struct nt::luid_t                       logon_id;             //{ +0x0008    } | .LogonId
        _m03 nt::unicode_view                        password;             //{ +0x0010    } | .Password
        _m04 sdk::array<uint8_t, 8>                  challenge_to_client;  //{ +0x0020    } | .ChallengeToClient
                                                                         
        SDK_NONVOL_PROPERTIES( "_MSV1_0_GETCHALLENRESP_REQUEST_V1.$", 0x0, false, 0x8be2f3fcedb3b17a );                    
        SDK_FIXED_SIZE( msv1_0_getchallenresp_request_v1_t, 0x28 );                    
    };                                                                   
};
#include "magic/msv1_0_getchallenresp_request_v1_t.end.hpp"
SDK_VERIFY( struct nt::msv1_0_getchallenresp_request_v1_t, 0x28 );
