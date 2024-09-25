#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_I2C_ADDRESS_TYPE]
    //  WDK 10
    //
    enum class i2c_address_type_t : int32_t
    {                                      
        eddc_segment_point = 0x60,           // WDK 10
        mccs =               0x6e,           // WDK 10
        max =                0x7f,           // WDK 10
        ddc =                0xa0,           // WDK 10
    };                                     
};
