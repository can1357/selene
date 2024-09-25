#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cdvd_key_data_t.start.hpp"
namespace nt
{
    // [struct _CDVD_KEY_DATA]
    // => WDK 10 (NV)
    //
    struct cdvd_key_data_t              
    {                                   
        // WDK 10                       
        //                              
        _m00 sdk::array<uint8_t, 5> key;  //{ +0x0000    } | .Key
                                        
        SDK_NONVOL_PROPERTIES( "_CDVD_KEY_DATA.$", 0x0, false, 0xd1b6c23e89d14821 );    
        SDK_FIXED_SIZE( cdvd_key_data_t, 0x8 );    
    };                                  
};
#include "magic/cdvd_key_data_t.end.hpp"
SDK_VERIFY( struct nt::cdvd_key_data_t, 0x8 );
