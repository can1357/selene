#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dot11_supported_data_rates_value_v2_t.start.hpp"
namespace ndis
{
    // [struct _DOT11_SUPPORTED_DATA_RATES_VALUE_V2]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dot11_supported_data_rates_value_v2_t                       
    {                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                             
        _m00 sdk::array<uint8_t, 255> uc_supported_tx_data_rates_value;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ucSupportedTxDataRatesValue
        _m01 sdk::array<uint8_t, 255> uc_supported_rx_data_rates_value;  //{ +0x00ff    +0x00ff    +0x00ff    +0x00ff    } | .ucSupportedRxDataRatesValue
                                                                       
        SDK_MAGIC_PROPERTIES( "_DOT11_SUPPORTED_DATA_RATES_VALUE_V2.$", 0x1fe, true, 0x59040ddb1b27c8c5 );                                 
        SDK_FIXED_SIZE( dot11_supported_data_rates_value_v2_t, 0x1fe );                                 
    };                                                                 
};
#include "magic/dot11_supported_data_rates_value_v2_t.end.hpp"
SDK_VERIFY( struct ndis::dot11_supported_data_rates_value_v2_t, 0x1fe );
