#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cdvd_challenge_key_data_t.start.hpp"
namespace nt
{
    // [struct _CDVD_CHALLENGE_KEY_DATA]
    // => WDK 10 (NV)
    //
    struct cdvd_challenge_key_data_t                     
    {                                                    
        // WDK 10                                        
        //                                               
        _m00 sdk::array<uint8_t, 10> challenge_key_value;  //{ +0x0000    } | .ChallengeKeyValue
                                                         
        SDK_NONVOL_PROPERTIES( "_CDVD_CHALLENGE_KEY_DATA.$", 0x0, false, 0xd30c5842fbc01eda );                    
        SDK_FIXED_SIZE( cdvd_challenge_key_data_t, 0xc );                    
    };                                                   
};
#include "magic/cdvd_challenge_key_data_t.end.hpp"
SDK_VERIFY( struct nt::cdvd_challenge_key_data_t, 0xc );
