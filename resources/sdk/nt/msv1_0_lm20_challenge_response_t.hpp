#pragma once
#include <sdkgen/support_library.hpp>
#include "msv1_0_protocol_message_type_t.hpp"

#include "magic/msv1_0_lm20_challenge_response_t.start.hpp"
namespace nt
{
    // [struct _MSV1_0_LM20_CHALLENGE_RESPONSE]
    // => WDK 10 (NV)
    //
    struct msv1_0_lm20_challenge_response_t                              
    {                                                                    
        // WDK 10                                                        
        //                                                               
        _m00 enum nt::msv1_0_protocol_message_type_t message_type;         //{ +0x0000    } | .MessageType
        _m01 sdk::array<uint8_t, 8>                  challenge_to_client;  //{ +0x0004    } | .ChallengeToClient
                                                                         
        SDK_NONVOL_PROPERTIES( "_MSV1_0_LM20_CHALLENGE_RESPONSE.$", 0x0, false, 0x6e6be2ec80bc2486 );                    
        SDK_FIXED_SIZE( msv1_0_lm20_challenge_response_t, 0xc );                    
    };                                                                   
};
#include "magic/msv1_0_lm20_challenge_response_t.end.hpp"
SDK_VERIFY( struct nt::msv1_0_lm20_challenge_response_t, 0xc );
