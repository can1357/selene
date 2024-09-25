#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/msv1_0_ntlm3_response_t.start.hpp"
namespace nt
{
    // [struct _MSV1_0_NTLM3_RESPONSE]
    // => WDK 10 (NV)
    //
    struct msv1_0_ntlm3_response_t                         
    {                                                      
        // WDK 10                                          
        //                                                 
        _m00 sdk::array<uint8_t, 16> response;               //{ +0x0000    } | .Response
        _m01 uint8_t                 resp_type;              //{ +0x0010    } | .RespType
        _m02 uint8_t                 hi_resp_type;           //{ +0x0011    } | .HiRespType
        _m03 uint16_t                flags;                  //{ +0x0012    } | .Flags
        _m04 uint32_t                msg_word;               //{ +0x0014    } | .MsgWord
        _m05 uint64_t                time_stamp;             //{ +0x0018    } | .TimeStamp
        _m06 sdk::array<uint8_t, 8>  challenge_from_client;  //{ +0x0020    } | .ChallengeFromClient
        _m07 uint32_t                av_pairs_off;           //{ +0x0028    } | .AvPairsOff
        _m08 sdk::array<uint8_t, 1>  buffer;                 //{ +0x002c    } | .Buffer
                                                           
        SDK_NONVOL_PROPERTIES( "_MSV1_0_NTLM3_RESPONSE.$", 0x0, false, 0x99709314859fc325 );                      
        SDK_FIXED_SIZE( msv1_0_ntlm3_response_t, 0x30 );                      
    };                                                     
};
#include "magic/msv1_0_ntlm3_response_t.end.hpp"
SDK_VERIFY( struct nt::msv1_0_ntlm3_response_t, 0x30 );
