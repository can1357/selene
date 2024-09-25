#pragma once
#include <sdkgen/support_library.hpp>
#include "msv1_0_protocol_message_type_t.hpp"

#include "magic/msv1_0_getchallenresp_response_t.start.hpp"
namespace nt
{
    // [struct _MSV1_0_GETCHALLENRESP_RESPONSE]
    // => WDK 10 (NV)
    //
    struct msv1_0_getchallenresp_response_t                                              
    {                                                                                    
        // WDK 10                                                                        
        //                                                                               
        _m00 enum nt::msv1_0_protocol_message_type_t message_type;                         //{ +0x0000    } | .MessageType
        _m01 nt::ascii_view                          case_sensitive_challenge_response;    //{ +0x0008    } | .CaseSensitiveChallengeResponse
        _m02 nt::ascii_view                          case_insensitive_challenge_response;  //{ +0x0018    } | .CaseInsensitiveChallengeResponse
        _m03 nt::unicode_view                        user_name;                            //{ +0x0028    } | .UserName
        _m04 nt::unicode_view                        logon_domain_name;                    //{ +0x0038    } | .LogonDomainName
        _m05 sdk::array<uint8_t, 16>                 user_session_key;                     //{ +0x0048    } | .UserSessionKey
        _m06 sdk::array<uint8_t, 8>                  lanman_session_key;                   //{ +0x0058    } | .LanmanSessionKey
                                                                                         
        SDK_NONVOL_PROPERTIES( "_MSV1_0_GETCHALLENRESP_RESPONSE.$", 0x0, false, 0x326c331b7c3e7ebb );                                    
        SDK_FIXED_SIZE( msv1_0_getchallenresp_response_t, 0x60 );                                    
    };                                                                                   
};
#include "magic/msv1_0_getchallenresp_response_t.end.hpp"
SDK_VERIFY( struct nt::msv1_0_getchallenresp_response_t, 0x60 );
