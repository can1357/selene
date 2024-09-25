#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _CHANGER_PRODUCT_DATA]
    // => WDK 10
    //
    struct changer_product_data_t
    {                            
                                 
        SDK_MAGIC_PROPERTIES( "_CHANGER_PRODUCT_DATA.$", 0x0, false, 0x5008cd51ff86278e );
        SDK_FIXED_SIZE( changer_product_data_t, 0x0 );
    };                           
};
SDK_VERIFY( struct nt::changer_product_data_t, 0x0 );
